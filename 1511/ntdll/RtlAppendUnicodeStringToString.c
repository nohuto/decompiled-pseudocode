/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x18000E310
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpFindKnownDll @ 0x18000E074 (LdrpFindKnownDll.c)
 *     RtlpWin32NtNameToNtPathName @ 0x18000E1A4 (RtlpWin32NtNameToNtPathName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003FC68 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     LdrpLoadWow64 @ 0x18004ED50 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800CAB30 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800CE478 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800CED88 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // si
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *a2;
  if ( !*a2 )
    return 0LL;
  v4 = *a1;
  if ( (int)(v4 + v2) <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, *((const void **)a2 + 1), v2);
    *a1 += v2;
    if ( *a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
