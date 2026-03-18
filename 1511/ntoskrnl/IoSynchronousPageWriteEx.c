/*
 * XREFs of IoSynchronousPageWriteEx @ 0x1400E0460
 * Callers:
 *     MiZeroPageWrite @ 0x1400E0134 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x1400E03A0 (IoSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1400E03C0 (MiIssueSynchronousFlush.c)
 *     MiZeroPageFileFirstPage @ 0x140538820 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     MmIsFileObjectAPagingFile @ 0x140103648 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401B6964 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401B6C44 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        struct _IO_STATUS_BLOCK *a6)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v12; // rdx
  IRP *Irp; // rbx
  __int64 v14; // rdx
  int IoPriorityThread; // r8d
  __int64 v16; // r10
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
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
    if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v20) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v21, v20, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v20) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v20, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  Irp->AllocationFlags |= 0x20u;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->PreviousMode == 1
      || (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0
      || KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink == (struct _LIST_ENTRY *)2 )
    {
      ++IoPagingWriteLowPriorityCount;
    }
    else
    {
      ++IoPagingWriteLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  Irp->UserIosb = a6;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  v17 = ((IoPriorityThread << 17) + 0x20000) | 0x43u;
  Irp->Flags = v17;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 4;
  *(_DWORD *)(v16 - 64) = a2->ByteCount;
  *(_QWORD *)(v16 - 48) = *a3;
  *(_BYTE *)(v16 - 70) |= a5;
  *(_QWORD *)(v16 - 24) = a1;
  IopQueueThreadIrp((__int64)Irp, v14, v17);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
