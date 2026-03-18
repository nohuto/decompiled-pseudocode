/*
 * XREFs of IoSynchronousPageWriteEx @ 0x140112630
 * Callers:
 *     MiZeroPageWrite @ 0x140112300 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x140112570 (IoSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x140112590 (MiIssueSynchronousFlush.c)
 *     MiZeroPageFileFirstPage @ 0x1405B5120 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     MmIsFileObjectAPagingFile @ 0x140086080 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401F1960 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F1C40 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        char a5,
        struct _IO_STATUS_BLOCK *a6)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v12; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  struct _KTHREAD *CurrentThread; // r8
  int v16; // edx
  struct _KTHREAD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x5E34u);
    __addgsdword(0x5E38u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(RelatedDeviceObject, v12, 0LL, retaddr);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((__int64)a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v20, v19, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v19, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
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
      v18 = KeGetCurrentThread();
      if ( (v18->MiscFlags & 0x400) != 0
        || v18->PreviousMode == 1
        || (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0
        || KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink == (struct _LIST_ENTRY *)2 )
      {
        ++IoPagingWriteLowPriorityCount;
      }
      else
      {
        ++IoPagingWriteLowPriorityBumpedCount;
        v16 = 2;
      }
    }
  }
  Irp->UserIosb = a6;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->Flags = ((v16 << 17) + 0x20000) | 0x43;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a5;
  CurrentStackLocation[-1].FileObject = a1;
  IopQueueThreadIrp((__int64)Irp);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
