/*
 * XREFs of ?UpdateRawKeyState@@YAXEH@Z @ 0x1C0048564
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateRawKeyState(unsigned __int8 a1, int a2)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  int v4; // edx

  v2 = a1 & 3;
  if ( a2 )
  {
    gafRawKeyState[(unsigned __int64)a1 >> 2] &= ~(1 << (2 * v2));
  }
  else
  {
    v3 = (unsigned __int64)a1 >> 2;
    v4 = (unsigned __int8)gafRawKeyState[v3];
    if ( !_bittest(&v4, 2 * v2) )
      gafRawKeyState[v3] = v4 ^ (1 << (2 * v2 + 1));
    gafRawKeyState[v3] |= 1 << (2 * v2);
  }
}
