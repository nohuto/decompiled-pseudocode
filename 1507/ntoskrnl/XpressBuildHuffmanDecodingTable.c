/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1400D83CC
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x1400D7E90 (RtlDecompressBufferXpressHuff.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x14024D378 (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, __int64 a2)
{
  _WORD *v2; // rdi
  __int16 v5; // r9
  __int64 i; // rcx
  unsigned __int64 j; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int16 v10; // dx
  unsigned __int16 *v11; // rbx
  unsigned __int64 v12; // r11
  __int64 v13; // rdi
  __int16 v14; // cx
  bool v15; // zf
  __int64 v16; // rdx
  unsigned __int64 v17; // r10
  bool v18; // zf
  __int16 *v19; // rdi
  int v20; // r11d
  unsigned __int16 *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  __int64 v27; // rcx
  _WORD *v28; // rax
  _WORD *v29; // r10
  _WORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  _WORD *v33; // rax
  __int16 *v34; // r10
  __int64 v35; // rcx
  _WORD *v36; // rax
  __int64 v37; // rcx
  _WORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _WORD *k; // rax
  _WORD *v42; // rdi
  __int64 m; // rcx

  v2 = a1 + 512;
  v5 = 0;
  for ( i = 16LL; i; --i )
    *v2++ = 512;
  for ( j = 0LL; j < 0x100; ++j )
  {
    v8 = *(_BYTE *)(j + a2) & 0xF;
    if ( (*(_BYTE *)(j + a2) & 0xF) != 0 )
    {
      a1[2 * j] = a1[v8 + 512];
      a1[v8 + 512] = 2 * j;
    }
    v9 = (unsigned __int64)*(unsigned __int8 *)(j + a2) >> 4;
    if ( v9 )
    {
      a1[2 * j + 1] = a1[v9 + 512];
      a1[v9 + 512] = 2 * j + 1;
    }
  }
  v10 = -1024;
  v11 = a1 + 527;
  v12 = 15LL;
  v13 = 1024LL;
  v14 = -1023;
  do
  {
    v15 = v14 == v10;
    if ( v14 < v10 )
    {
      v34 = &a1[v13 + 1552];
      v13 -= (unsigned __int16)(((unsigned __int16)(v10 - v14 - 1) >> 1) + 1);
      do
      {
        *v34-- = v14;
        v14 += 2;
        v15 = v14 == v10;
      }
      while ( v14 < v10 );
    }
    if ( v15 )
      return 3221226050LL;
    v14 = v10 + 1;
    v16 = *v11;
    if ( v16 != 512 )
    {
      v29 = &a1[v13 + 1552];
      do
      {
        --v13;
        *v29-- = v12 + 16 * v16;
        v16 = (unsigned __int16)a1[v16];
      }
      while ( v16 != 512 );
    }
    --v12;
    v10 = -(__int16)v13;
    --v11;
  }
  while ( v12 > 0xA );
  v17 = 1023LL;
  v18 = v14 == v10;
  if ( v14 < v10 )
  {
    v19 = a1 + 1551;
    v17 = 1023LL - (unsigned __int16)(((unsigned __int16)(v10 - v14 - 1) >> 1) + 1);
    do
    {
      *v19-- = v14;
      v14 += 2;
      v18 = v14 == v10;
    }
    while ( v14 < v10 );
  }
  if ( !v18 )
  {
    v20 = 0;
    v21 = a1 + 522;
    v22 = 10LL;
    while ( 1 )
    {
      v23 = *v21;
      while ( v23 != 512 )
      {
        v5 = v22 + 16 * v23;
        if ( v20 )
          return 3221226050LL;
        v24 = 10 - v22;
        if ( (v17 + 1) << (10 - (unsigned __int8)v22) > 0x400 )
          return 3221226050LL;
        v25 = v17 << v24;
        if ( v24 > 5 )
        {
          if ( v24 == 6 )
          {
            v35 = 16LL;
            v36 = &a1[v25 + 529];
            do
            {
              *(v36 - 1) = v5;
              *v36 = v5;
              v36[1] = v5;
              v36[2] = v5;
              v36 += 4;
              --v35;
            }
            while ( v35 );
          }
          else if ( v24 == 7 )
          {
            v37 = 32LL;
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
          }
          else
          {
            v30 = &a1[v25 + 529];
            if ( v24 == 8 )
            {
              v31 = 64LL;
              do
              {
                *(v30 - 1) = v5;
                *v30 = v5;
                v30[1] = v5;
                v30[2] = v5;
                v30 += 4;
                --v31;
              }
              while ( v31 );
            }
            else
            {
              v39 = 128LL;
              do
              {
                *(v30 - 1) = v5;
                *v30 = v5;
                v30[1] = v5;
                v30[2] = v5;
                v30 += 4;
                --v39;
              }
              while ( v39 );
            }
          }
          goto LABEL_32;
        }
        if ( v24 == 5 )
        {
          v32 = 8LL;
          v33 = &a1[v25 + 529];
          do
          {
            *(v33 - 1) = v5;
            *v33 = v5;
            v33[1] = v5;
            v33[2] = v5;
            v33 += 4;
            --v32;
          }
          while ( v32 );
          goto LABEL_32;
        }
        if ( v24 )
        {
          if ( v24 != 1 )
          {
            if ( v24 != 2 )
            {
              if ( v24 != 3 )
              {
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
                goto LABEL_32;
              }
              a1[v25 + 535] = v5;
              a1[v25 + 534] = v5;
              a1[v25 + 533] = v5;
              a1[v25 + 532] = v5;
            }
            a1[v25 + 531] = v5;
            a1[v25 + 530] = v5;
          }
          a1[v25 + 529] = v5;
        }
        a1[v25 + 528] = v5;
LABEL_32:
        v23 = (unsigned __int16)a1[v23];
        if ( !v17 )
          v20 = 1;
        --v17;
      }
      v17 >>= 1;
      --v21;
      if ( !--v22 )
      {
        if ( v20 )
          return 0LL;
        v40 = 2LL;
        for ( k = a1 + 514; *k == 512; ++k )
        {
          if ( (unsigned __int64)++v40 > 0xF )
          {
            if ( a1[513] == 512 )
              return 3221226050LL;
            v42 = a1 + 528;
            for ( m = 512LL; m; --m )
              *v42++ = v5;
            return 0LL;
          }
        }
        return 3221226050LL;
      }
    }
  }
  return 3221226050LL;
}
