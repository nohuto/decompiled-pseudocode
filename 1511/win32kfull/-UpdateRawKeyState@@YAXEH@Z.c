/*
 * XREFs of ?UpdateRawKeyState@@YAXEH@Z @ 0x1C00833A0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C0083434 (-VKTOMODIFIERS@@YAIE@Z.c)
 */

void __fastcall UpdateRawKeyState(unsigned __int8 a1, int a2)
{
  unsigned int v3; // r9d
  unsigned __int8 v4; // r11
  int v5; // eax
  unsigned __int64 v6; // rcx
  int v7; // edx

  v3 = VKTOMODIFIERS(a1);
  if ( a2 )
  {
    gafRawKeyState[(unsigned __int64)v4 >> 2] &= ~(1 << (2 * (v4 & 3)));
  }
  else
  {
    v5 = v4 & 3;
    v6 = (unsigned __int64)v4 >> 2;
    v7 = (unsigned __int8)gafRawKeyState[v6];
    if ( !_bittest(&v7, 2 * v5) )
      gafRawKeyState[v6] = v7 ^ (1 << (2 * v5 + 1));
    gafRawKeyState[v6] |= 1 << (2 * v5);
  }
  if ( a2 )
    gfsRawModifiersForHotKey &= ~v3;
  else
    gfsRawModifiersForHotKey |= v3;
}
