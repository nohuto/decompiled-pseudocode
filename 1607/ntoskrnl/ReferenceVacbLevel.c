/*
 * XREFs of ReferenceVacbLevel @ 0x14006CA58
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x14006C6CC (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x14006C770 (CcSetVacbLargeOffset.c)
 * Callees:
 *     VacbLevelReference @ 0x14006CA78 (VacbLevelReference.c)
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
