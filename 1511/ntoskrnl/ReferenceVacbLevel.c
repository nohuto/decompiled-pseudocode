/*
 * XREFs of ReferenceVacbLevel @ 0x1400E0F38
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1400E0BB8 (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x1400E0C5C (CcSetVacbLargeOffset.c)
 * Callees:
 *     VacbLevelReference @ 0x1400E0F58 (VacbLevelReference.c)
 */

_DWORD *__fastcall ReferenceVacbLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _DWORD *result; // rax
  int v6; // r9d

  result = (_DWORD *)VacbLevelReference(a1, a2, a3, a4);
  if ( a5 )
    result[1] += v6;
  else
    *result += v6;
  return result;
}
