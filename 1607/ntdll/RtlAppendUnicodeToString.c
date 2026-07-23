/*
 * XREFs of RtlAppendUnicodeToString @ 0x180013C80
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180015290 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4A4 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpLoadWow64 @ 0x180075DE0 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D1C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D6488 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6DB8 (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800D9288 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800DC68C (LdrpMUIEtwOutput.c)
 *     QueryFeatureOverride @ 0x1800E2C74 (QueryFeatureOverride.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // bx
  wchar_t *v5; // r14

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    if ( Destination->Length + v4 <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, v4);
      Destination->Length += v4;
      if ( Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)v4 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
