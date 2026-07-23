/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x140138DD0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1401382C0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140217124 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char *v2; // rbp
  char *v3; // rdi
  __int64 v4; // rsi
  _DWORD *v5; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v7; // r8
  _QWORD *v8; // r14
  _WORD *v9; // rcx
  __int64 v10; // rdx
  char *v11; // r8
  int v12; // eax
  __int64 v13; // r11
  unsigned __int16 *v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char *v17; // rcx
  __int64 v18; // rdx
  char *v19; // rdx
  char *v20; // rcx
  char *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // rdx
  __int64 v25; // r10
  __int64 *j; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // r10
  unsigned __int64 k; // r8
  __int64 v31; // r11
  _BYTE *v32; // r9
  unsigned __int64 v33; // rcx
  unsigned int *v34; // rdx
  __int64 v35; // r11
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax

  memset(a1 + 3331, 0, 0x202uLL);
  memset((char *)a1 + 27162, 0, 0x202uLL);
  v2 = (char *)(a1 + 256);
  v3 = (char *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v4 = 0LL;
  v5 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v7 = (unsigned int)*v5;
    if ( *v5 )
    {
      *(_QWORD *)v3 = v7;
      ++*((_WORD *)a1 + (unsigned __int8)v7 + 13325);
      ++*((_WORD *)a1 + (v7 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = i;
      v3 += 24;
    }
    ++v5;
  }
  memset(a1 + 3908, 0, 0x100uLL);
  v8 = a1 + 259;
  if ( v3 <= (char *)a1 + 2072 )
  {
    if ( v3 == v2 )
    {
      return 0LL;
    }
    else
    {
      v38 = a1[258];
      if ( (v38 & 1) != 0 )
        *((_BYTE *)a1 + (v38 >> 1) + 31264) = 16;
      else
        *((_BYTE *)a1 + (v38 >> 1) + 31264) = 1;
      *((_DWORD *)a1 + v38) = 1;
      return *(_QWORD *)v2;
    }
  }
  else
  {
    v9 = (_WORD *)a1 + 13325;
    v10 = 255LL;
    do
    {
      *v9 += *(v9 - 1);
      v9[257] += v9[256];
      ++v9;
      --v10;
    }
    while ( v10 );
    v11 = (char *)(a1 + 256);
    if ( v2 < v3 )
    {
      do
      {
        *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v11 + 13324) + 13838) = *((_WORD *)v11 + 8);
        v12 = *(_DWORD *)v11;
        v11 += 24;
        ++*((_WORD *)a1 + (unsigned __int8)v12 + 13324);
      }
      while ( v11 < v3 );
    }
    v13 = (v3 - (char *)a1 - 2048) / 24;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)a1 + 13838;
      do
      {
        v15 = *v14++;
        v16 = *((unsigned int *)a1 + v15 + 7304);
        v17 = (char *)a1 + 2 * (v16 >> 8);
        v18 = *((unsigned __int16 *)v17 + 13581);
        *((_WORD *)v17 + 13581) = v18 + 1;
        a1[3 * v18 + 258] = v15;
        a1[3 * v18 + 256] = v16;
        --v13;
      }
      while ( v13 );
    }
    while ( 1 )
    {
      *((_QWORD *)v3 + 1) = v2;
      v19 = (char *)(a1 + 262);
      *((_QWORD *)v3 + 2) = v8;
      v20 = v3;
      v21 = v3;
      *(_QWORD *)v3 = *(_QWORD *)v2 + *v8;
      while ( v19 != v3 || v21 != v20 )
      {
        v20 += 24;
        if ( v19 == v3 || v21 < v20 && *(_QWORD *)v21 < *(_QWORD *)v19 )
        {
          *((_QWORD *)v20 + 1) = v21;
          v22 = *(_QWORD *)v21;
          v21 += 24;
        }
        else
        {
          *((_QWORD *)v20 + 1) = v19;
          v22 = *(_QWORD *)v19;
          v19 += 24;
        }
        *(_QWORD *)v20 = v22;
        if ( v19 == v3 || v21 < v20 && *(_QWORD *)v21 < *(_QWORD *)v19 )
        {
          *((_QWORD *)v20 + 2) = v21;
          *(_QWORD *)v20 += *(_QWORD *)v21;
          v21 += 24;
        }
        else
        {
          *((_QWORD *)v20 + 2) = v19;
          *(_QWORD *)v20 += *(_QWORD *)v19;
          v19 += 24;
        }
      }
      v23 = 0LL;
      v24 = a1 + 3331;
      v25 = 0LL;
      for ( j = a1 + 3332; ; v23 = *j )
      {
        while ( *((_QWORD *)v20 + 1) )
        {
          ++v23;
          ++v25;
          *j = v23;
          j += 2;
          *v24 = *((_QWORD *)v20 + 1);
          v24 += 2;
          v20 = (char *)*((_QWORD *)v20 + 2);
        }
        v27 = *((_QWORD *)v20 + 2);
        *((_QWORD *)v20 + 1) = v23;
        *((_BYTE *)a1 + v27 + 28704) = v23;
        if ( !v25 )
          break;
        v20 = (char *)*(v24 - 2);
        j -= 2;
        --v25;
        v24 -= 2;
      }
      if ( a1[257] <= 0xFuLL )
        break;
      v39 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v40 = *v39 + 1;
          v39[1] = 0LL;
          *v39 = v40 >> 1;
          v39 += 3;
        }
        while ( v39 < (unsigned __int64 *)v3 );
      }
    }
    v28 = a1[257];
    v29 = 0LL;
    for ( k = *((_QWORD *)v3 - 2); k <= v28; v4 += v35 )
    {
      v31 = 0LL;
      v32 = a1 + 3908;
      v33 = 0LL;
      v34 = (unsigned int *)(a1 + 3652);
      do
      {
        if ( *((unsigned __int8 *)a1 + v33 * 2 + 28704) == k )
        {
          v37 = *v34;
          *v32 |= k;
          v31 += v37;
          WORD1(a1[v33]) = v29++;
          LOWORD(a1[v33]) = k;
        }
        if ( *((unsigned __int8 *)a1 + v33 * 2 + 28705) == k )
        {
          v31 += v34[1];
          *v32 |= 16 * (_BYTE)k;
          HIWORD(a1[v33]) = v29++;
          WORD2(a1[v33]) = k;
        }
        ++v32;
        ++v33;
        v34 += 2;
      }
      while ( v33 < 256 );
      v35 = k * v31;
      v29 *= 2LL;
      ++k;
    }
    return v4;
  }
}
