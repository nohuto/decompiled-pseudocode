/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x14047FADC
 * Callers:
 *     HvSwapLogFiles @ 0x14047D3FC (HvSwapLogFiles.c)
 *     CmpAdjustRequestedFileSize @ 0x14047D770 (CmpAdjustRequestedFileSize.c)
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x14047F550 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14047F7CC (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpGenerateFlushControlData @ 0x14047F848 (CmpGenerateFlushControlData.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404D2C40 (HvTruncateAllLogFilesIfRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvGetEffectiveLogSizeCapForHive(unsigned int *a1)
{
  unsigned int v1; // r9d
  unsigned __int64 v2; // rdx
  int v3; // ecx
  unsigned __int64 v4; // r8
  unsigned int v5; // r9d

  if ( (a1[1340] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[350];
  v2 = a1[42];
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
