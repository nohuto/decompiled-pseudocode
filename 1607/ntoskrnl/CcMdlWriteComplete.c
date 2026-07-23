/*
 * XREFs of CcMdlWriteComplete @ 0x1404D1B94
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r10
  unsigned __int8 (__fastcall *MdlWriteComplete)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT); // r11

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlWriteComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlWriteComplete) == 0LL
    || !MdlWriteComplete(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, (__int64)MdlChain);
  }
}
