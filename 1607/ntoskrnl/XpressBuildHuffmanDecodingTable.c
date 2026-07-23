/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1400060A0
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x140005B80 (RtlDecompressBufferXpressHuff.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140217D9C (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, __int64 a2)
{
  _WORD *v3; // rdi
  __int64 v4; // rcx
  __int16 v5; // r9
  unsigned __int64 i; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int16 v10; // di
  unsigned __int16 *v11; // rbx
  __int16 v12; // cx
  __int64 v13; // r8
  unsigned __int64 j; // r11
  bool v15; // zf
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  bool v18; // zf
  __int16 *v19; // rdx
  int v20; // ebx
  unsigned __int16 *v21; // rsi
  __int64 v22; // rdi
  __int64 k; // r11
  int v24; // ecx
  unsigned __int64 v25; // rdx
  __int64 v27; // rcx
  _WORD *v28; // rax
  __int64 v29; // rcx
  _WORD *v30; // rax
  __int64 v31; // rcx
  _WORD *v32; // rax
  _WORD *v33; // rdi
  __int64 v34; // rcx
  _WORD *v35; // rax
  __int16 *v36; // rdx
  __int64 v37; // rcx
  _WORD *v38; // rax
  __int64 v39; // rcx
  _WORD *v40; // rax
  __int64 v41; // rax
  _WORD *m; // rcx
  _WORD *v43; // rdi
  __int64 n; // rcx

  v3 = a1 + 512;
  v4 = 16LL;
  v5 = 0;
  while ( v4 )
  {
    *v3++ = 512;
    --v4;
  }
  for ( i = 0LL; i < 0x100; ++i )
  {
    v8 = *(_BYTE *)(i + a2) & 0xF;
    if ( (*(_BYTE *)(i + a2) & 0xF) != 0 )
    {
      a1[2 * i] = a1[v8 + 512];
      a1[v8 + 512] = 2 * i;
    }
    v9 = (unsigned __int64)*(unsigned __int8 *)(i + a2) >> 4;
    if ( v9 )
    {
      a1[2 * i + 1] = a1[v9 + 512];
      a1[v9 + 512] = 2 * i + 1;
    }
  }
  v10 = -1024;
  v11 = a1 + 527;
  v12 = -1023;
  v13 = 1024LL;
  for ( j = 15LL; j > 0xA; --j )
  {
    v15 = v12 == v10;
    if ( v12 < v10 )
    {
      v36 = &a1[v13 + 1552];
      v13 -= (unsigned __int16)(((unsigned __int16)(v10 - v12 - 1) >> 1) + 1);
      do
      {
        *v36-- = v12;
        v12 += 2;
        v15 = v12 == v10;
      }
      while ( v12 < v10 );
    }
    if ( v15 )
      return 3221226050LL;
    v16 = *v11;
    v12 = v10 + 1;
    if ( v16 != 512 )
    {
      v33 = &a1[v13 + 1552];
      do
      {
        --v13;
        *v33-- = j + 16 * v16;
        v16 = (unsigned __int16)a1[v16];
      }
      while ( v16 != 512 );
    }
    v10 = -(__int16)v13;
    --v11;
  }
  v17 = 1023LL;
  v18 = v12 == v10;
  if ( v12 < v10 )
  {
    v19 = a1 + 1551;
    v17 = 1023LL - (unsigned __int16)(((unsigned __int16)(v10 - v12 - 1) >> 1) + 1);
    do
    {
      *v19-- = v12;
      v12 += 2;
      v18 = v12 == v10;
    }
    while ( v12 < v10 );
  }
  if ( v18 )
    return 3221226050LL;
  v20 = 0;
  v21 = a1 + 522;
  v22 = 10LL;
  do
  {
    for ( k = *v21; k != 512; --v17 )
    {
      v5 = v22 + 16 * k;
      if ( v20 )
        return 3221226050LL;
      v24 = 10 - v22;
      if ( (v17 + 1) << (10 - (unsigned __int8)v22) > 0x400 )
        return 3221226050LL;
      v25 = v17 << v24;
      switch ( v24 )
      {
        case 0:
          goto LABEL_26;
        case 1:
          goto LABEL_25;
        case 2:
          goto LABEL_24;
        case 3:
          a1[v25 + 535] = v5;
          a1[v25 + 534] = v5;
          a1[v25 + 533] = v5;
          a1[v25 + 532] = v5;
LABEL_24:
          a1[v25 + 531] = v5;
          a1[v25 + 530] = v5;
LABEL_25:
          a1[v25 + 529] = v5;
LABEL_26:
          a1[v25 + 528] = v5;
          break;
        case 4:
          v27 = 4LL;
          v28 = &a1[v25 + 529];
          do
          {
            *(v28 - 1) = v5;
            *v28 = v5;
            v28[1] = v5;
            v28[2] = v5;
            v28 += 4;
            --v27;
          }
          while ( v27 );
          break;
        case 5:
          v29 = 8LL;
          v30 = &a1[v25 + 529];
          do
          {
            *(v30 - 1) = v5;
            *v30 = v5;
            v30[1] = v5;
            v30[2] = v5;
            v30 += 4;
            --v29;
          }
          while ( v29 );
          break;
        case 6:
          v31 = 16LL;
          v32 = &a1[v25 + 529];
          do
          {
            *(v32 - 1) = v5;
            *v32 = v5;
            v32[1] = v5;
            v32[2] = v5;
            v32 += 4;
            --v31;
          }
          while ( v31 );
          break;
        case 7:
          v34 = 32LL;
          v35 = &a1[v25 + 529];
          do
          {
            *(v35 - 1) = v5;
            *v35 = v5;
            v35[1] = v5;
            v35[2] = v5;
            v35 += 4;
            --v34;
          }
          while ( v34 );
          break;
        case 8:
          v37 = 64LL;
          v38 = &a1[v25 + 529];
          do
          {
            *(v38 - 1) = v5;
            *v38 = v5;
            v38[1] = v5;
            v38[2] = v5;
            v38 += 4;
            --v37;
          }
          while ( v37 );
          break;
        case 9:
          v39 = 128LL;
          v40 = &a1[v25 + 529];
          do
          {
            *(v40 - 1) = v5;
            *v40 = v5;
            v40[1] = v5;
            v40[2] = v5;
            v40 += 4;
            --v39;
          }
          while ( v39 );
          break;
      }
      if ( !v17 )
        v20 = 1;
      k = (unsigned __int16)a1[k];
    }
    v17 >>= 1;
    --v21;
    --v22;
  }
  while ( v22 );
  if ( v20 )
    return 0LL;
  v41 = 2LL;
  for ( m = a1 + 514; *m == 512; ++m )
  {
    if ( (unsigned __int64)++v41 > 0xF )
    {
      if ( a1[513] == 512 )
        return 3221226050LL;
      v43 = a1 + 528;
      for ( n = 512LL; n; --n )
        *v43++ = v5;
      return 0LL;
    }
  }
  return 3221226050LL;
}
