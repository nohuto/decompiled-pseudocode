/*
 * XREFs of IoPageRead @ 0x140085D50
 * Callers:
 *     MiIssueHardFaultIo @ 0x140085C00 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402191FC (MiPfIssueCoalescedSupport.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x140086080 (MmIsFileObjectAPagingFile.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopAllocateBackpocketIrp @ 0x1401F1960 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F1C40 (IopAllocateReserveIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  struct _FILE_OBJECT *v8; // rbp
  char v9; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v11; // r15
  int v12; // r14d
  ULONG_PTR Irp; // rdi
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // r8
  int v16; // edx
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 *v19; // r14
  volatile signed __int32 *v20; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v22; // rax
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // cl
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  v8 = FileObject;
  v9 = 1;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    if ( ((unsigned __int8)FileObject & 1) != 0 )
      v5 = 1;
    else
      v9 = 0;
    v8 = (struct _FILE_OBJECT *)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(v8);
  v11 = RelatedDeviceObject;
  if ( ((unsigned __int8)MemoryDescriptorList & 1) != 0 )
  {
    v12 = 1027;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else
  {
    v12 = 67;
  }
  if ( ((unsigned __int8)MemoryDescriptorList & 2) != 0 )
  {
    v9 |= 2u;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFDuLL);
  }
  Irp = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile(v8) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    ReserveIrp = IopAllocateReserveIrp(v28, (unsigned __int8)v11->StackSize, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (MemoryDescriptorList->MdlFlags & 0x40) == 0 || (v12 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v29) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(v11, (unsigned __int8)v11->StackSize, v29);
  }
  Irp = ReserveIrp;
  if ( !ReserveIrp )
    return -1073741670;
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile(v8) || (MemoryDescriptorList->MdlFlags & 0x40) != 0 && (v12 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  v14 = *(_QWORD *)(Irp + 184);
  *(_DWORD *)(Irp + 16) = v12;
  CurrentThread = KeGetCurrentThread();
  v16 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v16 = 0;
  if ( v16 < 2 )
  {
    if ( CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      v16 = 2;
    if ( v16 < 2 )
    {
      if ( (v9 & 1) == 0 || v5 == 1 || (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0 )
      {
        ++IoPagingReadLowPriorityCount;
      }
      else
      {
        ++IoPagingReadLowPriorityBumpedCount;
        v16 = 2;
      }
    }
  }
  if ( (v9 & 2) != 0 && v16 == 2 )
    v16 = 3;
  *(_QWORD *)(Irp + 8) = MemoryDescriptorList;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = IoStatusBlock;
  *(_QWORD *)(Irp + 80) = Event;
  *(_DWORD *)(Irp + 16) = v12 & 0xFFF1FFFF | ((v16 << 17) + 0x20000);
  *(_QWORD *)(Irp + 112) = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  *(_QWORD *)(Irp + 192) = v8;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_QWORD *)(v14 - 24) = v8;
  v17 = (__int64 *)(Irp + 32);
  *(_BYTE *)(v14 - 72) = 3;
  *(_DWORD *)(v14 - 64) = MemoryDescriptorList->ByteCount;
  *(LARGE_INTEGER *)(v14 - 48) = *StartingOffset;
  IoStatusBlock->Information = Irp;
  v18 = *(_QWORD *)(Irp + 152);
  v19 = (__int64 *)(v18 + 1632);
  v20 = (volatile signed __int32 *)(v18 + 1832);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v18 + 1832);
  }
  else if ( _interlockedbittestandset64(v20, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v18 + 1832);
  }
  v22 = *v19;
  *v17 = *v19;
  *(_QWORD *)(Irp + 40) = v19;
  if ( *(__int64 **)(v22 + 8) != v19 )
    __fastfail(3u);
  *(_QWORD *)(v22 + 8) = v17;
  *v19 = (__int64)v17;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v20, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
  __writecr8(CurrentIrql);
  v23 = KeGetCurrentThread();
  if ( BYTE1(v23[1].Teb) || LOBYTE(v23[1].Teb) == 1 )
  {
    v27 = KeGetCurrentThread();
    LODWORD(v27[1].Timer.TimerListEntry.Flink) += (MemoryDescriptorList->ByteCount + 4095) >> 12;
  }
  if ( pIofCallDriver )
    return pIofCallDriver(v11, Irp, retaddr);
  if ( (char)--*(_BYTE *)(Irp + 67) <= 0 )
    KeBugCheckEx(0x35u, Irp, 0LL, 0LL, 0LL);
  v24 = *(_QWORD *)(Irp + 184) - 72LL;
  *(_QWORD *)(Irp + 184) = v24;
  v25 = *(_BYTE *)v24;
  *(_QWORD *)(v24 + 40) = v11;
  if ( v25 == 22 && (unsigned __int8)(*(_BYTE *)(v24 + 1) - 2) <= 1u )
    return IopPoHandleIrp(Irp);
  else
    return ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))v11->DriverObject->MajorFunction[v25])(v11, Irp);
}
