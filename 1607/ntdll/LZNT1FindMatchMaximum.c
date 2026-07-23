/*
 * XREFs of LZNT1FindMatchMaximum @ 0x180096510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchMaximum(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v7; // r11
  unsigned int v8; // ecx
  _BYTE *v9; // rdx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( *(_QWORD *)a2 >= (unsigned __int64)a1 )
    return 0LL;
  v7 = v2 - (_QWORD)a1;
  do
  {
    v8 = 0;
    if ( *(_DWORD *)(a2 + 16) )
    {
      v9 = a1;
      do
      {
        if ( (unsigned __int64)&a1[v8] >= *(_QWORD *)(a2 + 8) )
          break;
        if ( *v9 != v9[v7] )
          break;
        ++v8;
        ++v9;
      }
      while ( v8 < *(_DWORD *)(a2 + 16) );
    }
    if ( v8 >= v3 )
    {
      v3 = v8;
      *(_QWORD *)(a2 + 24) = v2;
    }
    ++v2;
    ++v7;
  }
  while ( v2 < (unsigned __int64)a1 );
  if ( v3 < 3 )
    return 0LL;
  else
    return v3;
}
