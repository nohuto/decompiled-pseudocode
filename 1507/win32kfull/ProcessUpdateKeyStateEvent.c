/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C0042690
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v5; // rbx
  int i; // r10d
  unsigned __int8 v7; // di
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  int v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // cl
  int v14; // eax
  __int64 result; // rax

  v5 = a3;
  for ( i = 0; i < 256; i += 8 )
  {
    if ( *v5 )
    {
      v7 = i;
      v8 = 8LL;
      do
      {
        if ( ((unsigned __int8)(1 << (v7 & 7)) & a3[(unsigned __int64)v7 >> 3]) != 0 )
        {
          v9 = (unsigned __int64)v7 >> 2;
          v10 = *(unsigned __int8 *)(v9 + a1 + 184);
          v11 = 2 * (v7 & 3);
          if ( ((unsigned __int8)(1 << v11) & *(_BYTE *)(v9 + a2)) != 0 )
            v12 = v10 | (1 << v11);
          else
            v12 = v10 & ~(1 << v11);
          *(_BYTE *)(v9 + a1 + 184) = v12;
          v13 = 2 * (v7 & 3) + 1;
          if ( ((unsigned __int8)(1 << v13) & *(_BYTE *)(v9 + a2)) != 0 )
            v14 = (unsigned __int8)v12 | (1 << v13);
          else
            v14 = (unsigned __int8)v12 & ~(1 << v13);
          *(_BYTE *)(v9 + a1 + 184) = v14;
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    ++v5;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 4248LL);
  if ( a2 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(a2);
  return result;
}
