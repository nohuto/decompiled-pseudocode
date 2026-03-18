/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x140089020
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1400E3638 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PnpHandleProcessWalkWorker @ 0x14067D9E4 (PnpHandleProcessWalkWorker.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetBaseFileSystemDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  PVPB v3; // rdx

  Vpb = FileObject->Vpb;
  if ( !Vpb || (result = Vpb->DeviceObject) == 0LL )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      return FileObject->DeviceObject;
    v3 = FileObject->DeviceObject->Vpb;
    if ( !v3 )
      return FileObject->DeviceObject;
    result = v3->DeviceObject;
    if ( !result )
      return FileObject->DeviceObject;
  }
  return result;
}
