/*
 * XREFs of IopIsProcessAppContainer @ 0x1400B2774
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopFileObjectRevoked @ 0x1400D16F0 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x1401C9AC0 (IoRevokeHandlesForProcess.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404EA8E4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
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
