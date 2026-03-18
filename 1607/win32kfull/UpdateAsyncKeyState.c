/*
 * XREFs of UpdateAsyncKeyState @ 0x1C00A3520
 * Callers:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // esi
  _QWORD *i; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  int v9; // ecx
  char v10; // r11
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax

  v3 = a2;
  v4 = a3;
  if ( a1 && (*(_DWORD *)(a1 + 340) & 1) != 0 )
    PostUpdateKeyStateEvent(a1, a2, a3);
  if ( v4 )
  {
    gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v3 >> 2] &= ~(1 << (2 * (v3 & 3)));
  }
  else
  {
    *((_BYTE *)&gafAsyncKeyStateRecentDown + ((unsigned __int64)(unsigned __int8)v3 >> 3)) |= 1 << (v3 & 7);
    v9 = v3 & 3;
    v10 = 2 * v9;
    v11 = gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v3 >> 2];
    if ( !_bittest(&v11, 2 * v9) )
    {
      v12 = 2 * v9 + 1;
      if ( _bittest(&v11, v12) )
        v13 = v11 & ~(1 << v12);
      else
        v13 = v11 | (1 << v12);
      gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v3 >> 2] = v13;
    }
    gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v3 >> 2] |= 1 << v10;
  }
  if ( v3 < 0x20 )
    ++*(_DWORD *)(gpsi + 5644LL);
  for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
  {
    v7 = *(i - 34);
    *(_BYTE *)(((unsigned __int64)(unsigned __int8)v3 >> 3) + v7 + 160) |= 1 << (v3 & 7);
    if ( v7 != a1 )
      *(_DWORD *)(v7 + 340) |= 1u;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 5640LL);
  return result;
}
