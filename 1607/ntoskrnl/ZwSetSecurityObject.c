/*
 * XREFs of ZwSetSecurityObject @ 0x14015D470
 * Callers:
 *     BiZwSetSecurityObject @ 0x14012E5F0 (BiZwSetSecurityObject.c)
 *     CmpInitBackupHive @ 0x14054DED8 (CmpInitBackupHive.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140611B00 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140611C14 (CmpDoReDoSetSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x14069904C (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
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
