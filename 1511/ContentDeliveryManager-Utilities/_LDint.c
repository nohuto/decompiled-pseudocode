/*
 * XREFs of _LDint @ 0x180027298
 * Callers:
 *     _LXp_addh @ 0x180025994 (_LXp_addh.c)
 *     _LXp_mulh @ 0x180025D74 (_LXp_mulh.c)
 *     _LXp_setw @ 0x180026090 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDint(__int64 a1, __int64 a2)
{
  return Dint(a1, a2);
}
