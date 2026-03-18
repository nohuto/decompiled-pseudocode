/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C0094168
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v5; // rbx
  int i; // r10d
  __int64 result; // rax
  unsigned __int8 v8; // di
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  int v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // cl
  int v15; // eax

  v5 = a3;
  for ( i = 0; i < 256; i += 8 )
  {
    if ( *v5 )
    {
      v8 = i;
      v9 = 8LL;
      do
      {
        if ( ((unsigned __int8)(1 << (v8 & 7)) & a3[(unsigned __int64)v8 >> 3]) != 0 )
        {
          v10 = (unsigned __int64)v8 >> 2;
          v11 = *(unsigned __int8 *)(v10 + a1 + 184);
          v12 = 2 * (v8 & 3);
          if ( ((unsigned __int8)(1 << v12) & *(_BYTE *)(v10 + a2)) != 0 )
            v13 = v11 | (1 << v12);
          else
            v13 = v11 & ~(1 << v12);
          *(_BYTE *)(v10 + a1 + 184) = v13;
          v14 = 2 * (v8 & 3) + 1;
          if ( ((unsigned __int8)(1 << v14) & *(_BYTE *)(v10 + a2)) != 0 )
            v15 = (unsigned __int8)v13 | (1 << v14);
          else
            v15 = (unsigned __int8)v13 & ~(1 << v14);
          *(_BYTE *)(v10 + a1 + 184) = v15;
        }
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    ++v5;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 4248LL);
  if ( a2 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(a2);
  return result;
}
