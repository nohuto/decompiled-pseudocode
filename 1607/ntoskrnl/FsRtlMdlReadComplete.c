/*
 * XREFs of FsRtlMdlReadComplete @ 0x1401B81E4
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 */

char __fastcall FsRtlMdlReadComplete(struct _FILE_OBJECT *a1, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r9
  __int64 (__fastcall *MdlReadComplete)(struct _FILE_OBJECT *, __int64, PDEVICE_OBJECT); // r10

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch
    && FastIoDispatch->SizeOfFastIoDispatch > 0x88
    && (MdlReadComplete = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PDEVICE_OBJECT))FastIoDispatch->MdlReadComplete) != 0LL )
  {
    return MdlReadComplete(a1, a2, RelatedDeviceObject);
  }
  else
  {
    return 0;
  }
}
