/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180010430
 * Callers:
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 *     RtlpWin32NtNameToNtPathName @ 0x1800102C0 (RtlpWin32NtNameToNtPathName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4A4 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpLoadWow64 @ 0x180075DE0 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D1C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D6488 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6DB8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned __int16 Length; // si
  unsigned __int64 v4; // rcx
  wchar_t *v5; // r14

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)(v4 + Length) <= Destination->MaximumLength )
  {
    v5 = &Destination->Buffer[v4 >> 1];
    memmove(v5, Source->Buffer, Length);
    Destination->Length += Length;
    if ( Destination->Length + 1 < Destination->MaximumLength )
      v5[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
