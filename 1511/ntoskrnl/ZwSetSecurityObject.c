/*
 * XREFs of ZwSetSecurityObject @ 0x1401537E0
 * Callers:
 *     BiZwSetSecurityObject @ 0x14011BBC0 (BiZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     CmpInitBackupHive @ 0x140521568 (CmpInitBackupHive.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1405ED378 (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x14065B33C (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 *     VfZwSetSecurityObject @ 0x1406D45C0 (VfZwSetSecurityObject.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
