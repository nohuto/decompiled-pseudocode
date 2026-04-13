/*
 * XREFs of _LDscale @ 0x180057458
 * Callers:
 *     _Stoldx @ 0x1800550E0 (_Stoldx.c)
 *     _LXp_addh @ 0x180057464 (_LXp_addh.c)
 *     _LXp_mulh @ 0x180057834 (_LXp_mulh.c)
 *     _LXp_setw @ 0x180057B58 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(_WORD *a1, int a2)
{
  return Dscale(a1, a2);
}
