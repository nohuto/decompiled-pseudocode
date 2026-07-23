/*
 * XREFs of FsRtlMdlWriteComplete @ 0x14061E068
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 */

char __fastcall FsRtlMdlWriteComplete(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r10
  __int64 (__fastcall *MdlWriteComplete)(struct _FILE_OBJECT *, __int64, __int64, PDEVICE_OBJECT); // r11

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch
    && FastIoDispatch->SizeOfFastIoDispatch > 0x98
    && (MdlWriteComplete = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, __int64, PDEVICE_OBJECT))FastIoDispatch->MdlWriteComplete) != 0LL )
  {
    return MdlWriteComplete(a1, a2, a3, RelatedDeviceObject);
  }
  else
  {
    return 0;
  }
}
