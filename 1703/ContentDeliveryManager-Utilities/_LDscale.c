/*
 * XREFs of _LDscale @ 0x18006DE0C
 * Callers:
 *     _Stoldx @ 0x18006BC08 (_Stoldx.c)
 *     _LXp_addh @ 0x18006DE14 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18006E288 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18006E598 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(_WORD *a1, int a2)
{
  return Dscale(a1, a2);
}
