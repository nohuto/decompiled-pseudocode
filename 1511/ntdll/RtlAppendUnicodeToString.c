/*
 * XREFs of RtlAppendUnicodeToString @ 0x180019AF0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpFindKnownDll @ 0x18000E074 (LdrpFindKnownDll.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003FC68 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     LdrpLoadWow64 @ 0x18004ED50 (LdrpLoadWow64.c)
 *     WerpGlobalFlagsForProcess @ 0x18005B83C (WerpGlobalFlagsForProcess.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800CAB30 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800CE478 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800CED88 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpMUIEtwOutput @ 0x1800D420C (LdrpMUIEtwOutput.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // bx
  void *v5; // r14

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    if ( *a1 + v4 <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, v4);
      *a1 += v4;
      if ( *a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
