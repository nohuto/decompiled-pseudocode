/*
 * XREFs of SelectFont @ 0x1402FC490
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 */

__int64 __fastcall SelectFont(__int64 a1)
{
  return GreSelectFont(*(Gre::Base **)a1, *(_QWORD *)(a1 + 8));
}
