/*
 * XREFs of _Xp_setn @ 0x18006DAE4
 * Callers:
 *     _Stodx @ 0x18006B754 (_Stodx.c)
 * Callees:
 *     _Xp_setw @ 0x18006DB04 (_Xp_setw.c)
 */

__int64 __fastcall Xp_setn(__int64 a1, __int64 a2)
{
  Xp_setw(a1, a2);
  return a1;
}
