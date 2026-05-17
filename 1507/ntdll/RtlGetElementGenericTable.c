/*
 * XREFs of RtlGetElementGenericTable @ 0x180074F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlGetElementGenericTable(__int64 a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  _QWORD *j; // r8
  int v6; // r9d
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int i; // r10d

  v2 = *(_DWORD *)(a1 + 36);
  v3 = a2 + 1;
  v4 = *(_DWORD *)(a1 + 32);
  j = *(_QWORD **)(a1 + 24);
  v6 = a2 + 1;
  if ( a2 + 1 > v2 || a2 == -1 )
    return 0LL;
  if ( v4 != v3 )
  {
    if ( v4 > v3 )
    {
      if ( v3 <= v4 >> 1 )
      {
        j = (_QWORD *)(a1 + 8);
        do
        {
          j = (_QWORD *)*j;
          --v6;
        }
        while ( v6 );
      }
      else
      {
        for ( i = v4 - v3; i; --i )
          j = (_QWORD *)j[1];
      }
    }
    else
    {
      v8 = v3 - v4;
      v9 = v2 - v3 + 1;
      if ( v3 - v4 > v9 )
      {
        for ( j = (_QWORD *)(a1 + 8); v9; --v9 )
          j = (_QWORD *)j[1];
      }
      else
      {
        for ( ; v8; --v8 )
          j = (_QWORD *)*j;
      }
    }
    *(_QWORD *)(a1 + 24) = j;
    *(_DWORD *)(a1 + 32) = v3;
  }
  return j + 2;
}
