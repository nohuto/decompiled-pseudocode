/*
 * XREFs of MiIsVaRangeAvailable @ 0x140429460
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140013E98 (MiCheckForConflictingVadExistence.c)
 */

_BOOL8 __fastcall MiIsVaRangeAvailable(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r8

  if ( !a4 )
    a4 = 0x7FFFFFFDFFFFLL;
  v4 = a2 + a3 - 1;
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 1808)) && v4 <= a4 && v4 > a2 && !MiCheckForConflictingVadExistence();
}
