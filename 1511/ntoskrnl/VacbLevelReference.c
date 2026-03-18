/*
 * XREFs of VacbLevelReference @ 0x1400E0F58
 * Callers:
 *     CcCalculateVacbLevelLockCount @ 0x1400E06D4 (CcCalculateVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400E0BB8 (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x1400E0C5C (CcSetVacbLargeOffset.c)
 *     ReferenceVacbLevel @ 0x1400E0F38 (ReferenceVacbLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}
