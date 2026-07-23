/*
 * XREFs of SmKmSendUsageNotification @ 0x140698B10
 * Callers:
 *     SmKmFileInfoCleanup @ 0x140697EC4 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1406981EC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall SmKmSendUsageNotification(PIRP Irp, PFILE_OBJECT FileObject, int a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _IO_STACK_LOCATION *v8; // rcx
  NTSTATUS result; // eax
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Object, NotificationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 5659;
  CurrentStackLocation[-1].Parameters.Create.Options = 1;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].Parameters.SetLock.Lock = a3 == 0;
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  v8[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
  v8[-1].Context = &Object;
  v8[-1].Control = -32;
  result = IofCallDriver(RelatedDeviceObject, Irp);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return Irp->IoStatus.Status;
  }
  return result;
}
