/*
 * XREFs of MiCanPageMove @ 0x1400712E0
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiReferenceInPageFile @ 0x140039C9C (MiReferenceInPageFile.c)
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // rcx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_QWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    if ( (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 )
      return 0;
    v2 = v1 >> 16;
    v3 = *(_QWORD *)v2;
    if ( v2 != *(_QWORD *)v2 + 120LL && (*(_DWORD *)(v3 + 56) & 0x20) != 0 && (*(_DWORD *)(v3 + 92) & 0x10000000) != 0 )
      return 0;
  }
  return result;
}
