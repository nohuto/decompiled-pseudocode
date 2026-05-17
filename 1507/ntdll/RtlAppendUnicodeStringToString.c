/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180040100
 * Callers:
 *     LdrpLoadWow64 @ 0x180003478 (LdrpLoadWow64.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     RtlpWin32NtNameToNtPathName @ 0x18003FD34 (RtlpWin32NtNameToNtPathName.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180054C04 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800BDE90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800C5148 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800C5A58 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
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
