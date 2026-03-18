/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C00962D8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r11
  _BYTE *v6; // rbx
  int i; // r10d
  unsigned __int8 v8; // di
  __int64 v9; // rsi
  int v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // cl
  int v14; // eax
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v6 = (_BYTE *)a3;
  for ( i = 0; i < 256; i += 8 )
  {
    if ( *v6 )
    {
      v8 = i;
      v9 = 8LL;
      do
      {
        a3 = v8;
        a2 = (unsigned int)(1 << (v8 & 7));
        if ( ((unsigned __int8)a2 & *(_BYTE *)(((unsigned __int64)v8 >> 3) + v3)) != 0 )
        {
          a3 = (unsigned __int64)v8 >> 2;
          v10 = *(unsigned __int8 *)(a3 + a1 + 192);
          v11 = 2 * (v8 & 3);
          if ( ((unsigned __int8)(1 << v11) & *(_BYTE *)(a3 + v4)) != 0 )
            v12 = v10 | (1 << v11);
          else
            v12 = v10 & ~(1 << v11);
          *(_BYTE *)(a3 + a1 + 192) = v12;
          v13 = 2 * (v8 & 3) + 1;
          a2 = (unsigned int)(1 << v13);
          if ( ((unsigned __int8)a2 & *(_BYTE *)(a3 + v4)) != 0 )
            v14 = (unsigned __int8)v12 | (1 << v13);
          else
            v14 = (unsigned __int8)v12 & ~(1 << v13);
          *(_BYTE *)(a3 + a1 + 192) = v14;
        }
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    ++v6;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 5640LL);
  if ( v4 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(v4, a2, a3);
  return result;
}
