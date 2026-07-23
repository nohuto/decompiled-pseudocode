/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x180061130
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x180060610 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180094374 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  unsigned __int8 **v1; // r13
  unsigned __int8 *v3; // rsi
  unsigned __int8 *v4; // rdi
  _DWORD *v5; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  _WORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned __int16 *v14; // r11
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 *v23; // r8
  __int64 v24; // r10
  unsigned __int8 **j; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 k; // rsi
  __int64 v31; // r9
  unsigned int *v32; // r10
  _BYTE *v33; // r11
  unsigned __int64 m; // rdx
  __int64 v35; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax

  v1 = (unsigned __int8 **)(a1 + 3331);
  memset(a1 + 3331, 0, 0x202uLL);
  memset((char *)a1 + 27162, 0, 0x202uLL);
  v3 = (unsigned __int8 *)(a1 + 256);
  v4 = (unsigned __int8 *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v5 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v7 = (unsigned int)*v5;
    if ( *v5 )
    {
      *(_QWORD *)v4 = v7;
      ++*((_WORD *)a1 + (unsigned __int8)v7 + 13325);
      ++*((_WORD *)a1 + (v7 >> 8) + 13582);
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = i;
      v4 += 24;
    }
    ++v5;
  }
  memset(a1 + 3908, 0, 0x100uLL);
  v8 = a1 + 259;
  if ( v4 <= (unsigned __int8 *)a1 + 2072 )
  {
    if ( v4 == v3 )
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
      return *(_QWORD *)v3;
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
    v11 = (unsigned __int8 *)(a1 + 256);
    if ( v3 < v4 )
    {
      do
      {
        *((_WORD *)a1 + *((unsigned __int16 *)a1 + *v11 + 13324) + 13838) = *((_WORD *)v11 + 8);
        v12 = *v11;
        v11 += 24;
        ++*((_WORD *)a1 + v12 + 13324);
      }
      while ( v11 < v4 );
    }
    v13 = (v4 - (unsigned __int8 *)a1 - 2048) / 24;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)a1 + 13838;
      do
      {
        v15 = *v14++;
        v16 = *((unsigned int *)a1 + v15 + 7304);
        v17 = *((unsigned __int16 *)a1 + (v16 >> 8) + 13581);
        *((_WORD *)a1 + (v16 >> 8) + 13581) = v17 + 1;
        a1[3 * v17 + 258] = v15;
        a1[3 * v17 + 256] = v16;
        --v13;
      }
      while ( v13 );
    }
    while ( 1 )
    {
      *((_QWORD *)v4 + 1) = v3;
      v18 = (unsigned __int8 *)(a1 + 262);
      *((_QWORD *)v4 + 2) = v8;
      v19 = v4;
      v20 = v4;
      *(_QWORD *)v4 = *(_QWORD *)v3 + *v8;
      while ( v18 != v4 || v20 != v19 )
      {
        v19 += 24;
        if ( v18 == v4 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          *((_QWORD *)v19 + 1) = v20;
          v21 = *(_QWORD *)v20;
          v20 += 24;
        }
        else
        {
          *((_QWORD *)v19 + 1) = v18;
          v21 = *(_QWORD *)v18;
          v18 += 24;
        }
        *(_QWORD *)v19 = v21;
        if ( v18 == v4 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
        {
          *((_QWORD *)v19 + 2) = v20;
          *(_QWORD *)v19 += *(_QWORD *)v20;
          v20 += 24;
        }
        else
        {
          *((_QWORD *)v19 + 2) = v18;
          *(_QWORD *)v19 += *(_QWORD *)v18;
          v18 += 24;
        }
      }
      v22 = 0LL;
      v23 = a1 + 3332;
      v24 = 0LL;
      for ( j = v1; ; v19 = *j )
      {
        while ( *((_QWORD *)v19 + 1) )
        {
          ++v22;
          ++v24;
          *v23 = v22;
          v23 += 2;
          *j = (unsigned __int8 *)*((_QWORD *)v19 + 1);
          j += 2;
          v19 = (unsigned __int8 *)*((_QWORD *)v19 + 2);
        }
        v26 = *((_QWORD *)v19 + 2);
        *((_QWORD *)v19 + 1) = v22;
        *((_BYTE *)a1 + v26 + 28704) = v22;
        if ( !v24 )
          break;
        v23 -= 2;
        --v24;
        j -= 2;
        v22 = *v23;
      }
      if ( a1[257] <= 0xFuLL )
        break;
      v39 = a1 + 256;
      if ( v3 < v4 )
      {
        do
        {
          v40 = *v39 + 1;
          v39[1] = 0LL;
          *v39 = v40 >> 1;
          v39 += 3;
        }
        while ( v39 < (unsigned __int64 *)v4 );
      }
    }
    v27 = a1[257];
    v28 = 0LL;
    v29 = *((_QWORD *)v4 - 2);
    for ( k = 0LL; v29 <= v27; k += v35 )
    {
      v31 = 0LL;
      v32 = (unsigned int *)(a1 + 3652);
      v33 = a1 + 3908;
      for ( m = 0LL; m < 256; ++m )
      {
        if ( *((unsigned __int8 *)a1 + m * 2 + 28704) == v29 )
        {
          v37 = *v32;
          *v33 |= v29;
          v31 += v37;
          WORD1(a1[m]) = v28++;
          LOWORD(a1[m]) = v29;
        }
        if ( *((unsigned __int8 *)a1 + m * 2 + 28705) == v29 )
        {
          v31 += v32[1];
          *v33 |= 16 * (_BYTE)v29;
          HIWORD(a1[m]) = v28++;
          WORD2(a1[m]) = v29;
        }
        ++v33;
        v32 += 2;
      }
      v35 = v29 * v31;
      v28 *= 2LL;
      ++v29;
    }
    return k;
  }
}
