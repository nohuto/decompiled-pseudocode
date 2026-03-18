/*
 * XREFs of CcMdlReadComplete @ 0x1404BC17C
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     CcMdlReadComplete2 @ 0x1404B0788 (CcMdlReadComplete2.c)
 */

void __stdcall CcMdlReadComplete(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v5; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r9
  unsigned __int8 (__fastcall *MdlReadComplete)(PFILE_OBJECT, PMDL, PDEVICE_OBJECT); // r10

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlReadComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlReadComplete) == 0LL
    || !MdlReadComplete(FileObject, MdlChain, RelatedDeviceObject) )
  {
    CcMdlReadComplete2(v5, MdlChain);
  }
}
