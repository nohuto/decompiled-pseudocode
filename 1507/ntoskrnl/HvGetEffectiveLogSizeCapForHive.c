/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x14044D690
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x14044CDD8 (CmpGenerateFlushControlData.c)
 *     CmpAdjustRequestedFileSize @ 0x1404AF748 (CmpAdjustRequestedFileSize.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1404EB69C (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvSwapLogFiles @ 0x1405560A0 (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14055BA64 (HvTruncateAllLogFilesIfRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvGetEffectiveLogSizeCapForHive(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned __int64 v2; // rdx
  int v3; // ecx
  unsigned __int64 v4; // r8
  unsigned int v5; // r9d

  v1 = *(_DWORD *)(a1 + 1400);
  v2 = *(unsigned int *)(a1 + 168);
  v3 = 0x2000;
  if ( v1 < 0x2000 )
    v3 = v1;
  v4 = (unsigned int)(8 * v3);
  v5 = v1 - v3;
  if ( v5 )
    v4 += (unsigned __int64)v5 >> 2;
  if ( v4 < v2 )
    LODWORD(v2) = v4;
  if ( (unsigned int)CmpLogFileSizeCap >= 0x80000 && CmpLogFileSizeCap < (unsigned int)v2 )
    LODWORD(v2) = CmpLogFileSizeCap;
  if ( (unsigned int)v2 < 0x8000 )
    LODWORD(v2) = 0x8000;
  return (unsigned int)v2;
}
