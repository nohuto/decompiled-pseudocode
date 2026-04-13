/*
 * XREFs of _LXp_setn @ 0x180057B30
 * Callers:
 *     _Stoldx @ 0x1800550E0 (_Stoldx.c)
 * Callees:
 *     _LXp_setw @ 0x180057B58 (_LXp_setw.c)
 */

__int64 __fastcall LXp_setn(__int64 a1, __int64 a2)
{
  LXp_setw(a1, a2);
  return a1;
}
