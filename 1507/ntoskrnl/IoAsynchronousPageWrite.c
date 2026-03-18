/*
 * XREFs of IoAsynchronousPageWrite @ 0x14012D4C8
 * Callers:
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiIssueAsynchronousFlush @ 0x14021E7FC (MiIssueAsynchronousFlush.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     MmIsFileObjectAPagingFile @ 0x140086080 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401F1960 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F1C40 (IopAllocateReserveIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14026FDE0 (StRtlIoStorInfoSetNvCachePriority.c)
 */

NTSTATUS __fastcall IoAsynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        void (__fastcall *a4)(void *, struct _IO_STATUS_BLOCK *, _QWORD),
        void *a5,
        int a6,
        int a7,
        char a8,
        struct _IO_STATUS_BLOCK *a9,
        IRP **a10)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v16; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v19; // rdx
  NTSTATUS result; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x5E34u);
    __addgsdword(0x5E38u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v16) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(RelatedDeviceObject, v16, 0LL, retaddr);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((__int64)a1) )
    {
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v22) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v23, v22, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v22) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v22, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  if ( a10 )
    *a10 = Irp;
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = ((a6 << 17) + 0x20000) | 3;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a9;
  Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)a4;
  Irp->Overlay.AsynchronousParameters.UserApcContext = a5;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a8;
  CurrentStackLocation[-1].FileObject = a1;
  IopQueueThreadIrp((__int64)Irp);
  if ( a7 )
  {
    LOBYTE(v19) = a7;
    StRtlIoStorInfoSetNvCachePriority(Irp, v19);
  }
  result = IofCallDriver(RelatedDeviceObject, Irp);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    a9->Status = result;
    a9->Information = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    a4(a5, a9, 0LL);
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
