/*
 * XREFs of KiIsTsaMitigationSupported @ 0x1401D9C04
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401D9B28 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401D8CB8 (KiIsHyperVCr3RspErrataPresent.c)
 */

__int64 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rcx
  unsigned int v5; // eax

  v2 = 0;
  if ( KiIsHyperVCr3RspErrataPresent(a1) )
    return 0LL;
  if ( (KeFeatureBits2 & 0x100000000000LL) != 0 )
    return 1LL;
  if ( HviIsAnyHypervisorPresent() )
    return 0LL;
  v4 = &KiVerwClearErrataVersions;
  v5 = 0;
  while ( *(_DWORD *)v4 != *(_DWORD *)(a1 + 1644) )
  {
    ++v5;
    v4 += 2;
    if ( v5 >= 0xF )
      return 1LL;
  }
  LOBYTE(v2) = *(_QWORD *)(a1 + 25336) >= v4[1];
  return v2;
}
