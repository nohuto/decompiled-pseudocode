/*
 * XREFs of UpdateAsyncKeyState @ 0x1C0083C5C
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  _QWORD *i; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // ecx
  char v11; // r11
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax

  v4 = a2;
  v5 = a3;
  if ( a1 && (*(_DWORD *)(a1 + 332) & 1) != 0 )
    PostUpdateKeyStateEvent(a1, a2, a3, a4);
  if ( v5 )
  {
    gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v4 >> 2] &= ~(1 << (2 * (v4 & 3)));
  }
  else
  {
    *((_BYTE *)&gafAsyncKeyStateRecentDown + ((unsigned __int64)(unsigned __int8)v4 >> 3)) |= 1 << (v4 & 7);
    v10 = v4 & 3;
    v11 = 2 * v10;
    v12 = (unsigned __int8)gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v4 >> 2];
    if ( !_bittest(&v12, 2 * v10) )
    {
      v13 = 2 * v10 + 1;
      if ( _bittest(&v12, v13) )
        v14 = v12 & ~(1 << v13);
      else
        v14 = v12 | (1 << v13);
      gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v4 >> 2] = v14;
    }
    gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v4 >> 2] |= 1 << v11;
  }
  if ( v4 < 0x20 )
    ++*(_DWORD *)(gpsi + 4252LL);
  for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
  {
    v8 = *(i - 34);
    *(_BYTE *)(((unsigned __int64)(unsigned __int8)v4 >> 3) + v8 + 152) |= 1 << (v4 & 7);
    if ( v8 != a1 )
      *(_DWORD *)(v8 + 332) |= 1u;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 4248LL);
  return result;
}
