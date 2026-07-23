/*
 * XREFs of RtlCompareAltitudes @ 0x1800E1DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareAltitudes(PUNICODE_STRING Altitude1, PUNICODE_STRING Altitude2)
{
  unsigned __int16 Length; // r10
  unsigned __int16 v3; // r11
  unsigned __int16 *Buffer; // r14
  unsigned __int16 v5; // dx
  unsigned __int16 *v6; // rsi
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // r10
  unsigned __int16 i; // r9
  unsigned __int16 v11; // r8
  unsigned __int16 j; // ax
  unsigned __int16 v13; // r8
  unsigned __int16 k; // ax
  bool v15; // cf
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // ax
  __int16 v20; // di
  __int16 v21; // bx
  LONG v22; // r8d
  unsigned __int16 m; // r11
  unsigned __int16 n; // r10
  unsigned __int16 *v25; // r10
  unsigned __int16 *v26; // r9
  int v27; // eax

  Length = Altitude2->Length;
  v3 = Altitude1->Length;
  Buffer = Altitude2->Buffer;
  v5 = 0;
  v6 = Altitude1->Buffer;
  v7 = 0;
  v8 = v3 >> 1;
  v9 = Length >> 1;
  if ( v8 )
  {
    do
    {
      if ( v6[v7] == 46 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( Buffer[i] == 46 )
      break;
  }
  v11 = v7;
  for ( j = 0; j < v11; --v8 )
  {
    if ( *v6 != 48 )
      break;
    ++j;
    ++v6;
    --v7;
  }
  v13 = i;
  for ( k = 0; k < v13; --v9 )
  {
    if ( *Buffer != 48 )
      break;
    ++k;
    ++Buffer;
    --i;
  }
  if ( v7 != i )
  {
    v15 = i < v7;
    return v15 ? 1 : -1;
  }
  v17 = 0;
  if ( v7 )
  {
    do
    {
      v18 = v6[v17];
      v19 = Buffer[v17];
      v15 = v19 < v18;
      if ( v19 != v18 )
        return v15 ? 1 : -1;
    }
    while ( ++v17 < v7 );
  }
  v20 = v8 - v7 - 1;
  if ( v20 < 0 )
    v20 = 0;
  v21 = v9 - i - 1;
  if ( v21 < 0 )
    v21 = 0;
  v22 = -1;
  if ( v8 )
  {
    for ( m = v8 - 1; m > v7 && v6[m] == 48; --m )
      --v20;
  }
  if ( v9 )
  {
    for ( n = v9 - 1; n > i && Buffer[n] == 48; --n )
      --v21;
  }
  v25 = &v6[v7 + 1];
  v26 = &Buffer[i + 1];
  if ( v20 > 0 )
  {
    v27 = 0;
    while ( v27 < v21 )
    {
      if ( v25[v5] != v26[v5] )
        return v26[v5] < v25[v5] ? 1 : -1;
      v27 = ++v5;
      if ( v5 >= v20 )
        break;
    }
  }
  if ( v20 == v21 )
    return 0;
  if ( v20 > v21 )
    return 1;
  return v22;
}
