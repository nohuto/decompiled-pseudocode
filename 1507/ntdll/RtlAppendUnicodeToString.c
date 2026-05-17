/*
 * XREFs of RtlAppendUnicodeToString @ 0x18001FA60
 * Callers:
 *     LdrpLoadWow64 @ 0x180003478 (LdrpLoadWow64.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001FB60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180054C04 (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800BDE90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800C5148 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800C5A58 (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800C83D8 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800CB9D0 (LdrpMUIEtwOutput.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, const void *a2)
{
  unsigned __int16 v4; // bp
  void *v5; // r14
  _WORD v7[20]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    return 0LL;
  if ( (int)RtlInitUnicodeStringEx(v7, a2) >= 0 )
  {
    v4 = v7[0];
    if ( *a1 + v7[0] <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, v7[0]);
      *a1 += v4;
      if ( *a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
