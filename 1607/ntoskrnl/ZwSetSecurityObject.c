/*
 * XREFs of ZwSetSecurityObject @ 0x14015CF00
 * Callers:
 *     BiZwSetSecurityObject @ 0x14012E080 (BiZwSetSecurityObject.c)
 *     CmpInitBackupHive @ 0x14054DB38 (CmpInitBackupHive.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140611A4C (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140611B60 (CmpDoReDoSetSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x140698F68 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation, SecurityDescriptor);
}
