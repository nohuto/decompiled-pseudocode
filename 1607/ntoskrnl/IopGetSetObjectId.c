/*
 * XREFs of IopGetSetObjectId @ 0x1404B13DC
 * Callers:
 *     IopTrackLink @ 0x1404B0AB8 (IopTrackLink.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 */

NTSTATUS __fastcall IopGetSetObjectId(struct _FILE_OBJECT *Object, struct _IRP *a2, ULONG a3, ULONG a4)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r15
  PIRP v9; // rax
  IRP *v10; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Objecta; // [rsp+60h] [rbp-38h] BYREF

  KeInitializeEvent(&Objecta, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v9 = IoBuildDeviceIoControlRequest(a4, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Objecta, &IoStatusBlock);
  v10 = v9;
  if ( !v9 )
    return -1073741670;
  v9->Flags |= 4u;
  v9->UserBuffer = a2;
  v9->AssociatedIrp.MasterIrp = a2;
  v9->Tail.Overlay.OriginalFileObject = Object;
  CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = Object;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  if ( a4 == 589980 || a4 == 1310952 || a4 == 590016 )
    CurrentStackLocation[-1].Parameters.Read.Length = a3;
  else
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
  ObfReferenceObject(Object);
  result = IofCallDriver(RelatedDeviceObject, v10);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Objecta, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
