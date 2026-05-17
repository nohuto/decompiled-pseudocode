/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180010440
 * Callers:
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F010 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpFindKnownDll @ 0x1800101B0 (LdrpFindKnownDll.c)
 *     RtlpWin32NtNameToNtPathName @ 0x1800102D0 (RtlpWin32NtNameToNtPathName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4B4 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpLoadWow64 @ 0x180075DF0 (LdrpLoadWow64.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D2C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D63C8 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6CF8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
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
