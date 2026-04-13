/*
 * XREFs of _Feraise @ 0x18006E8E8
 * Callers:
 *     _FXp_addh @ 0x18006C780 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18006CBE0 (_FXp_mulh.c)
 *     _Xp_addh @ 0x18006D42C (_Xp_addh.c)
 *     _Xp_mulh @ 0x18006D7F4 (_Xp_mulh.c)
 *     _LXp_addh @ 0x18006DE14 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18006E288 (_LXp_mulh.c)
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
