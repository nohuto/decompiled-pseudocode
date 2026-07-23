/*
 * XREFs of EtwpFillPerfectHashTable @ 0x1406A9114
 * Callers:
 *     EtwpCreatePerfectHashFunction @ 0x1406A8F18 (EtwpCreatePerfectHashFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFillPerfectHashTable(
        _WORD *a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 v9; // rax
  unsigned __int16 v10; // bx
  __int64 v11; // r8
  unsigned __int16 v12; // r11
  __int64 v13; // rdi
  __int16 v14; // r9
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // dx
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // dx
  int v20; // ebp
  unsigned __int16 v21; // r9
  unsigned __int16 i; // dx
  __int64 v23; // r9
  unsigned __int16 v24; // r8
  unsigned __int16 v26; // [rsp+38h] [rbp+10h]

  v9 = a5;
  *a6 = 0;
  v10 = a4 + 1;
  v11 = 128LL;
  v26 = a4 + 1;
  v12 = a4 + 1;
  do
  {
    *(_WORD *)(v9 + 2) = -1;
    *(_BYTE *)v9 = -1;
    v9 += 4LL;
    --v11;
  }
  while ( v11 );
  if ( a2 )
  {
    v13 = a2;
    do
    {
      v14 = *a1;
      v15 = 0;
      v16 = a4 & __ROR2__(*a1, a3);
      while ( *(_WORD *)(a5 + 4LL * v16 + 2) != 0xFFFF )
      {
        v17 = v16;
        if ( *(_WORD *)(a5 + 4LL * v16 + 2) == v14 )
          break;
        v16 = *(unsigned __int8 *)(a5 + 4LL * v16);
        ++v15;
        if ( v16 == 255 )
        {
          v16 = v12++;
          *(_BYTE *)(a5 + 4 * v17) = v16;
        }
        if ( v15 > *a6 )
          *a6 = v15;
      }
      ++a1;
      *(_WORD *)(a5 + 4LL * v16 + 2) = v14;
      --v13;
    }
    while ( v13 );
    v10 = v26;
  }
  v18 = v12 - 1;
  v19 = 0;
  v20 = a4 + 1;
  while ( v18 > v20 && v19 < a4 )
  {
    if ( *(_BYTE *)(a5 + 4LL * v18) == 0xFF )
    {
      do
      {
        if ( *(_WORD *)(a5 + 4LL * v19 + 2) == 0xFFFF )
          break;
        ++v19;
      }
      while ( v19 < a4 );
      if ( v19 >= a4 )
        break;
      *(_WORD *)(a5 + 4LL * v19 + 2) = *(_WORD *)(a5 + 4LL * v18 + 2);
      v21 = 0;
      if ( v12 )
      {
        while ( *(unsigned __int8 *)(a5 + 4LL * v21) != v18 )
        {
          if ( ++v21 >= v12 )
            goto LABEL_25;
        }
        *(_BYTE *)(a5 + 4LL * v21) = v19;
      }
LABEL_25:
      *(_WORD *)(a5 + 4LL * v18 + 2) = -1;
      if ( v18 == v12 - 1 )
        --v12;
    }
    --v18;
    ++v19;
  }
  for ( i = v12 - 1; i > v20; ++v10 )
  {
    if ( v10 >= i )
      break;
    do
    {
      if ( *(_WORD *)(a5 + 4LL * v10 + 2) == 0xFFFF )
        break;
      ++v10;
    }
    while ( v10 < i );
    if ( v10 >= i )
      break;
    v23 = i;
    v24 = 0;
    *(_WORD *)(a5 + 4LL * v10 + 2) = *(_WORD *)(a5 + 4LL * i + 2);
    if ( v12 )
    {
      while ( *(unsigned __int8 *)(a5 + 4LL * v24) != i )
      {
        if ( ++v24 >= v12 )
          goto LABEL_39;
      }
      *(_BYTE *)(a5 + 4LL * v24) = v10;
    }
LABEL_39:
    --i;
    *(_BYTE *)(a5 + 4LL * v10) = *(_BYTE *)(a5 + 4 * v23);
    --v12;
  }
  return v12;
}
