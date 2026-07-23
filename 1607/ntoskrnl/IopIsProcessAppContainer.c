/*
 * XREFs of IopIsProcessAppContainer @ 0x1400B06B4
 * Callers:
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IopFileObjectRevoked @ 0x1400CF590 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404CCAE8 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
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
