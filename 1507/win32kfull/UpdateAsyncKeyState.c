/*
 * XREFs of UpdateAsyncKeyState @ 0x1C00492B8
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *i; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  int v9; // ecx
  char v10; // r11
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax

  if ( a1 && (*(_DWORD *)(a1 + 332) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  if ( a3 )
  {
    gafAsyncKeyState[(unsigned __int64)(unsigned __int8)a2 >> 2] &= ~(1 << (2 * (a2 & 3)));
  }
  else
  {
    *((_BYTE *)&gafAsyncKeyStateRecentDown + ((unsigned __int64)(unsigned __int8)a2 >> 3)) |= 1 << (a2 & 7);
    v9 = a2 & 3;
    v10 = 2 * v9;
    v11 = gafAsyncKeyState[(unsigned __int64)(unsigned __int8)a2 >> 2];
    if ( !_bittest(&v11, 2 * v9) )
    {
      v12 = 2 * v9 + 1;
      if ( _bittest(&v11, v12) )
        v13 = v11 & ~(1 << v12);
      else
        v13 = v11 | (1 << v12);
      gafAsyncKeyState[(unsigned __int64)(unsigned __int8)a2 >> 2] = v13;
    }
    gafAsyncKeyState[(unsigned __int64)(unsigned __int8)a2 >> 2] |= 1 << v10;
  }
  if ( a2 < 0x20 )
    ++*(_DWORD *)(gpsi + 4252LL);
  for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
  {
    v7 = *(i - 34);
    *(_BYTE *)(((unsigned __int64)(unsigned __int8)a2 >> 3) + v7 + 152) |= 1 << (a2 & 7);
    if ( v7 != a1 )
      *(_DWORD *)(v7 + 332) |= 1u;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 4248LL);
  return result;
}
