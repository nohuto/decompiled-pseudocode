/*
 * XREFs of BmfdQueryAdvanceWidths @ 0x1C000B76C
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C000B6D0 (BmfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     BmfdOpenFontContext @ 0x1C0018290 (BmfdOpenFontContext.c)
 *     bReconnectBmfdFont @ 0x1C0018740 (bReconnectBmfdFont.c)
 */

__int64 __fastcall BmfdQueryAdvanceWidths(__int64 a1, unsigned int a2, unsigned int *a3, _WORD *a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int16 v11; // r9
  __int64 v12; // rsi
  __int16 v13; // r11
  unsigned int v14; // edx
  __int64 v15; // r9
  __int64 i; // r8
  __int64 v17; // rax
  unsigned int j; // r8d
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r9
  __int64 k; // r8
  __int64 v24; // rax
  unsigned int m; // r10d
  __int64 v26; // rax

  if ( !(unsigned int)bReconnectBmfdFont(*(_QWORD *)(a1 + 24)) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = BmfdOpenFontContext(a1);
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(v9 + 24);
  v11 = 16 * *(_WORD *)(v9 + 36);
  v12 = *(_QWORD *)v10 + *(int *)(v10 + 52);
  v13 = (*(_DWORD *)(v9 + 32) & 0x2000) != 0 ? 16 : 0;
  if ( a2 > 1 )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(v10 + 36) == 512 )
  {
    if ( v11 == 16 )
    {
      v14 = a5;
      if ( a5 > 3 )
      {
        v15 = ((a5 - 4) >> 2) + 1;
        do
        {
          for ( i = 0LL; i < 4; ++i )
            a4[i] = v13 + 16 * *(_WORD *)(v12 + 4LL * a3[i]);
          a3 += 4;
          a4 += 4;
          v14 -= 4;
          --v15;
        }
        while ( v15 );
      }
      for ( ; v14; --v14 )
      {
        v17 = *a3++;
        *a4++ = v13 + 16 * *(_WORD *)(v12 + 4 * v17);
      }
    }
    else
    {
      for ( j = a5; j; --j )
      {
        v20 = *a3++;
        *a4++ = v13 + v11 * *(_WORD *)(v12 + 4 * v20);
      }
    }
  }
  else if ( v11 == 16 )
  {
    v21 = a5;
    if ( a5 > 3 )
    {
      v22 = ((a5 - 4) >> 2) + 1;
      do
      {
        for ( k = 0LL; k < 4; ++k )
          a4[k] = v13 + 16 * *(_WORD *)(v12 + 6LL * a3[k]);
        a3 += 4;
        a4 += 4;
        v21 -= 4;
        --v22;
      }
      while ( v22 );
    }
    for ( ; v21; --v21 )
    {
      v24 = *a3++;
      *a4++ = v13 + 16 * *(_WORD *)(v12 + 6 * v24);
    }
  }
  else
  {
    for ( m = a5; m; --m )
    {
      v26 = *a3++;
      *a4++ = v13 + v11 * *(_WORD *)(v12 + 6 * v26);
    }
  }
  return 1LL;
}
