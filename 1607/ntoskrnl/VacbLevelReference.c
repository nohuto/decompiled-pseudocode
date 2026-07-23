/*
 * XREFs of VacbLevelReference @ 0x14006CA78
 * Callers:
 *     CcCalculateVacbLevelLockCount @ 0x14006ACD0 (CcCalculateVacbLevelLockCount.c)
 *     CcAdjustVacbLevelLockCount @ 0x14006C6CC (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x14006C770 (CcSetVacbLargeOffset.c)
 *     ReferenceVacbLevel @ 0x14006CA58 (ReferenceVacbLevel.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
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
