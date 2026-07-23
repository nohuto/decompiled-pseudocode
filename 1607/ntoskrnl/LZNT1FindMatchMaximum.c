/*
 * XREFs of LZNT1FindMatchMaximum @ 0x14068C3F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchMaximum(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v4; // rsi
  unsigned int v6; // edi
  unsigned __int64 v8; // r11
  unsigned int v9; // ecx
  _BYTE *v10; // rdx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 >= (unsigned __int64)a1 )
    return 0LL;
  v8 = v2 - (_QWORD)a1;
  do
  {
    v9 = 0;
    if ( v6 )
    {
      v10 = a1;
      do
      {
        if ( (unsigned __int64)&a1[v9] >= v4 )
          break;
        if ( *v10 != v10[v8] )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < v6 );
    }
    if ( v9 >= v3 )
    {
      v3 = v9;
      *(_QWORD *)(a2 + 24) = v2;
    }
    ++v2;
    ++v8;
  }
  while ( v2 < (unsigned __int64)a1 );
  if ( v3 < 3 )
    return 0LL;
  else
    return v3;
}
