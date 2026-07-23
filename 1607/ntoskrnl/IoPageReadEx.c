/*
 * XREFs of IoPageReadEx @ 0x1400E7D80
 * Callers:
 *     MiIssueHardFaultIo @ 0x140023324 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x14002348C (MiPageRead.c)
 *     IoPageRead @ 0x14010F340 (IoPageRead.c)
 *     MiPfIssueCoalescedSupport @ 0x140125790 (MiPfIssueCoalescedSupport.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopSetDiskIoAttributionExtension @ 0x14008DD68 (IopSetDiskIoAttributionExtension.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     IopfCallDriver @ 0x1400E9AD0 (IopfCallDriver.c)
 *     PsGetBaseIoPriorityThread @ 0x1400E9DA0 (PsGetBaseIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400E9DD0 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14010DFD0 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401C4320 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401C4600 (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IoPageReadEx(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  char v9; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v11; // r15
  int v12; // edi
  __int64 Irp; // rbx
  int v14; // r15d
  KIRQL v15; // al
  _QWORD *v16; // rcx
  KIRQL v17; // r12
  unsigned __int64 v18; // rdx
  int BaseIoPriorityThread; // edx
  struct _KTHREAD *v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v26; // r14
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v29; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 ReserveIrp; // rax
  PDEVICE_OBJECT v34; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (a6 & 2) == 0;
  if ( (a6 & 8) != 0 )
    v9 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  v11 = RelatedDeviceObject;
  v34 = RelatedDeviceObject;
  v12 = 67;
  if ( (a6 & 4) != 0 )
    v12 = 1027;
  Irp = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_6;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    ReserveIrp = IopAllocateReserveIrp(v31, (unsigned __int8)v11->StackSize, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (*(_WORD *)(a2 + 10) & 0x40) == 0 || (v12 & 0x40) == 0 )
      return 3221225626LL;
    LOBYTE(v32) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(v11, (unsigned __int8)v11->StackSize, v32);
  }
  Irp = ReserveIrp;
  if ( !ReserveIrp )
    return 3221225626LL;
LABEL_6:
  v14 = 0;
  v15 = ExAcquireSpinLockShared(&dword_140327678);
  v16 = (_QWORD *)qword_140327670;
  v17 = v15;
  if ( qword_140327670 )
  {
    do
    {
      v18 = *(v16 - 26);
      if ( (unsigned __int64)a1 < v18 )
      {
        v16 = (_QWORD *)*v16;
      }
      else
      {
        if ( (unsigned __int64)a1 <= v18 )
        {
          v14 = 1;
          break;
        }
        v16 = (_QWORD *)v16[1];
      }
    }
    while ( v16 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140327678);
  __writecr8(v17);
  if ( v14 || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_DWORD *)(Irp + 16) = v12;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread());
  if ( BaseIoPriorityThread < 2 && v20 == KeGetCurrentThread() && v20[1].Timer.DueTime.LowPart )
    BaseIoPriorityThread = 2;
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (v9 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      BaseIoPriorityThread = 2;
    }
  }
  if ( (v9 & 2) != 0 && BaseIoPriorityThread == 2 )
    BaseIoPriorityThread = 3;
  *(_QWORD *)(Irp + 80) = a4;
  *(_QWORD *)(Irp + 8) = a2;
  *(_BYTE *)(Irp + 64) = 0;
  *(_DWORD *)(Irp + 16) = v12 & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = a1;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v21 - 72) = 3;
  *(_QWORD *)(v21 - 24) = a1;
  *(_DWORD *)(v21 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v21 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24));
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  *(_QWORD *)(a5 + 8) = Irp;
  v22 = (_QWORD *)(Irp + 32);
  v23 = *(_QWORD *)(Irp + 152);
  v24 = (__int64 *)(v23 + 1640);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v26 = (KSPIN_LOCK *)(v23 + 1840);
  KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 1840));
  v27 = *v24;
  if ( *(__int64 **)(*v24 + 8) != v24 )
    __fastfail(3u);
  *v22 = v27;
  *(_QWORD *)(Irp + 40) = v24;
  *(_QWORD *)(v27 + 8) = v22;
  *v24 = (__int64)v22;
  KxReleaseSpinLock(v26);
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
  {
    v29 = KeGetCurrentThread();
    HIDWORD(v29[1].Timer.Header.WaitListHead.Blink) += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  if ( pIofCallDriver )
    return pIofCallDriver(v34, Irp, retaddr);
  else
    return IopfCallDriver(v34, Irp);
}
