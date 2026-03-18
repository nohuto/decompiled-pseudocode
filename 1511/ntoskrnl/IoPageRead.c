/*
 * XREFs of IoPageRead @ 0x140077720
 * Callers:
 *     MiIssueHardFaultIo @ 0x14003A3B8 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140116A74 (MiPfIssueCoalescedSupport.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     IopfCallDriver @ 0x140077C84 (IopfCallDriver.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MmIsFileObjectAPagingFile @ 0x140103648 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401B6964 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401B6C44 (IopAllocateReserveIrp.c)
 */

NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  struct _FILE_OBJECT *v6; // rdi
  char v7; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v9; // r15
  int v10; // r14d
  ULONG_PTR Irp; // rbp
  int v12; // r12d
  KIRQL v13; // al
  _QWORD *v14; // rcx
  KIRQL v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // rdx
  int BaseIoPriorityThread; // r8d
  __int64 v21; // r9
  ULONG_PTR v22; // rbx
  __int64 v23; // rax
  ULONG_PTR *v24; // rdi
  unsigned __int8 CurrentIrql; // r12
  KSPIN_LOCK *v26; // r14
  ULONG_PTR v27; // rax
  struct _KTHREAD *v28; // rax
  struct _KTHREAD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v35; // [rsp+60h] [rbp+8h]

  v35 = 0;
  v6 = FileObject;
  v7 = 1;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    if ( ((unsigned __int8)FileObject & 1) != 0 )
      v35 = 1;
    else
      v7 = 0;
    v6 = (struct _FILE_OBJECT *)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(v6);
  v9 = RelatedDeviceObject;
  if ( ((unsigned __int8)MemoryDescriptorList & 1) != 0 )
  {
    v10 = 1027;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else
  {
    v10 = 67;
  }
  if ( ((unsigned __int8)MemoryDescriptorList & 2) != 0 )
  {
    v7 |= 2u;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFDuLL);
  }
  Irp = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile(v6) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    ReserveIrp = IopAllocateReserveIrp(v31, (unsigned __int8)v9->StackSize, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (MemoryDescriptorList->MdlFlags & 0x40) == 0 || (v10 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v32) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(v9, (unsigned __int8)v9->StackSize, v32);
  }
  Irp = ReserveIrp;
  if ( !ReserveIrp )
    return -1073741670;
LABEL_10:
  v12 = 0;
  v13 = ExAcquireSpinLockShared(&dword_1402FF1E8);
  v14 = (_QWORD *)qword_1402FF1E0;
  v15 = v13;
  if ( qword_1402FF1E0 )
  {
    do
    {
      v16 = *(v14 - 26);
      if ( (unsigned __int64)v6 < v16 )
      {
        v14 = (_QWORD *)*v14;
      }
      else
      {
        if ( (unsigned __int64)v6 <= v16 )
        {
          v12 = 1;
          break;
        }
        v14 = (_QWORD *)v14[1];
      }
    }
    while ( v14 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FF1E8);
  __writecr8(v15);
  if ( v12 || (MemoryDescriptorList->MdlFlags & 0x40) != 0 && (v10 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_DWORD *)(Irp + 16) = v10;
  CurrentThread = KeGetCurrentThread();
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(CurrentThread, CurrentThread, v17);
  if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v19 == KeGetCurrentThread() && *(_DWORD *)(v19 + 1788) )
    BaseIoPriorityThread = 2;
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (v7 & 1) == 0 || v35 == 1 || (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      BaseIoPriorityThread = 2;
    }
  }
  if ( (v7 & 2) != 0 && BaseIoPriorityThread == 2 )
    BaseIoPriorityThread = 3;
  v22 = Irp + 32;
  *(_QWORD *)(Irp + 80) = Event;
  *(_QWORD *)(Irp + 8) = MemoryDescriptorList;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = IoStatusBlock;
  *(_DWORD *)(Irp + 16) = v10 & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  *(_QWORD *)(Irp + 112) = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  *(_QWORD *)(Irp + 192) = v6;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_QWORD *)(v21 - 24) = v6;
  *(_BYTE *)(v21 - 72) = 3;
  *(_DWORD *)(v21 - 64) = MemoryDescriptorList->ByteCount;
  *(LARGE_INTEGER *)(v21 - 48) = *StartingOffset;
  IoStatusBlock->Information = Irp;
  v23 = *(_QWORD *)(Irp + 152);
  v24 = (ULONG_PTR *)(v23 + 1632);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v26 = (KSPIN_LOCK *)(v23 + 1832);
  KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 1832));
  v27 = *v24;
  *(_QWORD *)(Irp + 32) = *v24;
  *(_QWORD *)(Irp + 40) = v24;
  if ( *(ULONG_PTR **)(v27 + 8) != v24 )
    __fastfail(3u);
  *(_QWORD *)(v27 + 8) = v22;
  *v24 = v22;
  KxReleaseSpinLock(v26);
  __writecr8(CurrentIrql);
  v28 = KeGetCurrentThread();
  if ( BYTE1(v28[1].Teb) || LOBYTE(v28[1].Teb) == 1 )
  {
    v30 = KeGetCurrentThread();
    LODWORD(v30[1].Timer.TimerListEntry.Flink) += (MemoryDescriptorList->ByteCount + 4095) >> 12;
  }
  if ( pIofCallDriver )
    return ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR, void *))pIofCallDriver)(v9, Irp, retaddr);
  else
    return IopfCallDriver(v9, Irp);
}
