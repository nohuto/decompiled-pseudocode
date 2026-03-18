/*
 * XREFs of CcMdlWriteComplete @ 0x14055090C
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 DriverObject; // r9
  __int64 v8; // r10
  unsigned __int8 (__fastcall *v9)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT); // r11

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DriverObject = (__int64)RelatedDeviceObject->DriverObject;
  v8 = *(_QWORD *)(DriverObject + 80);
  if ( !v8
    || *(_DWORD *)v8 <= 0x98u
    || (v9 = *(unsigned __int8 (__fastcall **)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT))(v8 + 152)) == 0LL
    || !v9(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, (__int64)MdlChain, DriverObject);
  }
}
