/*
 * XREFs of _LDunscale @ 0x180058484
 * Callers:
 *     _LXp_addh @ 0x180057464 (_LXp_addh.c)
 *     _LXp_mulh @ 0x180057834 (_LXp_mulh.c)
 *     _LXp_setw @ 0x180057B58 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDunscale(_WORD *a1, unsigned __int16 *a2)
{
  return Dunscale(a1, a2);
}
