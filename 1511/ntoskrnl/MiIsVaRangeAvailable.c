/*
 * XREFs of MiIsVaRangeAvailable @ 0x1403F6328
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 */

_BOOL8 __fastcall MiIsVaRangeAvailable(__int64 a1, unsigned __int64 a2, __int64 a3, char *a4)
{
  unsigned __int64 v4; // r8

  if ( !a4 )
    a4 = (char *)MmHighestUserAddress - 0x10000;
  v4 = a2 + a3 - 1;
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 1792))
      && v4 <= (unsigned __int64)a4
      && v4 > a2
      && !MiCheckForConflictingVadExistence();
}
