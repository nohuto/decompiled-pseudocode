/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x18008AA88
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x18008A560 (RtlDecompressBufferXpressHuff.c)
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
  _WORD *v17; // r10
  unsigned __int64 v18; // r10
  bool v19; // zf
  __int16 *v20; // rdi
  int v21; // r11d
  unsigned __int16 *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v28; // rcx
  _WORD *v29; // rax
  __int64 v30; // rcx
  _WORD *v31; // rax
  __int16 *v32; // r10
  _WORD *v33; // rax
  __int64 v34; // rcx
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
      v32 = &a1[v13 + 1552];
      v13 -= (unsigned __int16)(((unsigned __int16)(v10 - v14 - 1) >> 1) + 1);
      do
      {
        *v32-- = v14;
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
      v17 = &a1[v13 + 1552];
      do
      {
        --v13;
        *v17-- = v12 + 16 * v16;
        v16 = (unsigned __int16)a1[v16];
      }
      while ( v16 != 512 );
    }
    --v12;
    v10 = -(__int16)v13;
    --v11;
  }
  while ( v12 > 0xA );
  v18 = 1023LL;
  v19 = v14 == v10;
  if ( v14 < v10 )
  {
    v20 = a1 + 1551;
    v18 = 1023LL - (unsigned __int16)(((unsigned __int16)(v10 - v14 - 1) >> 1) + 1);
    do
    {
      *v20-- = v14;
      v14 += 2;
      v19 = v14 == v10;
    }
    while ( v14 < v10 );
  }
  if ( !v19 )
  {
    v21 = 0;
    v22 = a1 + 522;
    v23 = 10LL;
    while ( 1 )
    {
      v24 = *v22;
      while ( v24 != 512 )
      {
        v5 = v23 + 16 * v24;
        if ( v21 )
          return 3221226050LL;
        v25 = 10 - v23;
        if ( (v18 + 1) << (10 - (unsigned __int8)v23) > 0x400 )
          return 3221226050LL;
        v26 = v18 << v25;
        if ( v25 > 5 )
        {
          if ( v25 == 6 )
          {
            v35 = 16LL;
            v36 = &a1[v26 + 529];
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
          else if ( v25 == 7 )
          {
            v37 = 32LL;
            v38 = &a1[v26 + 529];
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
            v33 = &a1[v26 + 529];
            if ( v25 == 8 )
            {
              v34 = 64LL;
              do
              {
                *(v33 - 1) = v5;
                *v33 = v5;
                v33[1] = v5;
                v33[2] = v5;
                v33 += 4;
                --v34;
              }
              while ( v34 );
            }
            else
            {
              v39 = 128LL;
              do
              {
                *(v33 - 1) = v5;
                *v33 = v5;
                v33[1] = v5;
                v33[2] = v5;
                v33 += 4;
                --v39;
              }
              while ( v39 );
            }
          }
          goto LABEL_27;
        }
        if ( v25 == 5 )
        {
          v30 = 8LL;
          v31 = &a1[v26 + 529];
          do
          {
            *(v31 - 1) = v5;
            *v31 = v5;
            v31[1] = v5;
            v31[2] = v5;
            v31 += 4;
            --v30;
          }
          while ( v30 );
          goto LABEL_27;
        }
        if ( v25 )
        {
          if ( v25 != 1 )
          {
            if ( v25 != 2 )
            {
              if ( v25 != 3 )
              {
                v28 = 4LL;
                v29 = &a1[v26 + 529];
                do
                {
                  *(v29 - 1) = v5;
                  *v29 = v5;
                  v29[1] = v5;
                  v29[2] = v5;
                  v29 += 4;
                  --v28;
                }
                while ( v28 );
                goto LABEL_27;
              }
              a1[v26 + 535] = v5;
              a1[v26 + 534] = v5;
              a1[v26 + 533] = v5;
              a1[v26 + 532] = v5;
            }
            a1[v26 + 531] = v5;
            a1[v26 + 530] = v5;
          }
          a1[v26 + 529] = v5;
        }
        a1[v26 + 528] = v5;
LABEL_27:
        v24 = (unsigned __int16)a1[v24];
        if ( !v18 )
          v21 = 1;
        --v18;
      }
      v18 >>= 1;
      --v22;
      if ( !--v23 )
      {
        if ( v21 )
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
