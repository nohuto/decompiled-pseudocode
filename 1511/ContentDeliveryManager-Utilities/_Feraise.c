/*
 * XREFs of _Feraise @ 0x1800270A0
 * Callers:
 *     _FXp_addh @ 0x180024F8C (_FXp_addh.c)
 *     _FXp_mulh @ 0x180025410 (_FXp_mulh.c)
 *     _LXp_addh @ 0x180025994 (_LXp_addh.c)
 *     _LXp_mulh @ 0x180025D74 (_LXp_mulh.c)
 *     _Xp_addh @ 0x18002658C (_Xp_addh.c)
 *     _Xp_mulh @ 0x180026A24 (_Xp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}
