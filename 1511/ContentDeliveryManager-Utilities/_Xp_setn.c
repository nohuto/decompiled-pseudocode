/*
 * XREFs of _Xp_setn @ 0x180026D18
 * Callers:
 *     _Stodx @ 0x180024350 (_Stodx.c)
 * Callees:
 *     _Xp_setw @ 0x180026D40 (_Xp_setw.c)
 */

__int64 __fastcall Xp_setn(__int64 a1, __int64 a2)
{
  Xp_setw(a1, a2);
  return a1;
}
