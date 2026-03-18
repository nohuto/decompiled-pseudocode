/*
 * XREFs of KiIsKvaShadowNeededForBranchConfusion @ 0x140208B84
 * Callers:
 *     KiDetectKvaLeakage @ 0x1404026D0 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x140208AA4 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x140208AD8 (KiIsBranchConfusionMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForBranchConfusion(_BYTE *a1)
{
  __int64 v2; // rcx
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)v4, 0LL);
  return (v4[0] & 0x8000) != 0
      && (unsigned int)KiIsBranchConfusionMitigationDesired((__int64)a1, v4)
      && KiIsBranchConfusionMitigationSupported(v2, v4);
}
