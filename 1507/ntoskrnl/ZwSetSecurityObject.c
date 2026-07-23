/*
 * XREFs of ZwSetSecurityObject @ 0x140182150
 * Callers:
 *     BiZwSetSecurityObject @ 0x14014FE4C (BiZwSetSecurityObject.c)
 *     CmpInitBackupHive @ 0x1405985E0 (CmpInitBackupHive.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1406656B8 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1406657CC (CmpDoReDoSetSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x1406DDB90 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 *     VfZwSetSecurityObject @ 0x140758188 (VfZwSetSecurityObject.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
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
