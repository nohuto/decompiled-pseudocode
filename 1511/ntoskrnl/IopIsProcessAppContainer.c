/*
 * XREFs of IopIsProcessAppContainer @ 0x1400EFD88
 * Callers:
 *     IopFileObjectRevoked @ 0x14008E37C (IopFileObjectRevoked.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404BE42C (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 */

bool __fastcall IopIsProcessAppContainer(struct _KPROCESS *a1)
{
  PACCESS_TOKEN v1; // rbx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(TokenInformation) = 0;
  v1 = PsReferencePrimaryToken(a1);
  SeQueryInformationToken(v1, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  return (_DWORD)TokenInformation != 0;
}
