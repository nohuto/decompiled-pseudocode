/*
 * XREFs of XpressDoHuffmanPass @ 0x180060E50
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x180060610 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180094374 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int128 *v6; // rdx
  _OWORD *v9; // rax
  __int64 v10; // r11
  __int128 v11; // xmm0
  _WORD *v12; // r12
  _WORD *v13; // r13
  unsigned __int16 v14; // ax
  _BYTE *v15; // r14
  unsigned __int64 v16; // r9
  int v17; // r11d
  bool v18; // sf
  int v19; // r11d
  __int64 v20; // rcx
  unsigned __int16 *v21; // r8
  unsigned __int64 v22; // rcx
  int v23; // ebx
  unsigned __int8 *v24; // r10
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // r9
  __int16 v29; // ax
  unsigned __int8 v30; // bl
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 v33; // cl
  unsigned __int64 v34; // rcx
  __int16 v35; // r8

  v6 = (__int128 *)(a1 + 31264);
  v9 = (_OWORD *)a4;
  v10 = 2LL;
  do
  {
    v11 = *v6;
    v6 += 8;
    *v9 = v11;
    v9[1] = *(v6 - 7);
    v9[2] = *(v6 - 6);
    v9[3] = *(v6 - 5);
    v9[4] = *(v6 - 4);
    v9[5] = *(v6 - 3);
    v9[6] = *(v6 - 2);
    v9 += 8;
    *(v9 - 1) = *(v6 - 1);
    --v10;
  }
  while ( v10 );
  v12 = (_WORD *)(a4 + 256);
  v13 = (_WORD *)(a4 + 258);
  v14 = 0;
  v15 = (_BYTE *)(a4 + 260);
  v16 = 16LL;
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = v17 < 0;
  v19 = 2 * v17 + 1;
  if ( !v18 )
  {
LABEL_7:
    v20 = *a2++;
    v21 = (unsigned __int16 *)(a1 + 4 * v20);
    v22 = *v21;
    if ( v16 >= v22 )
    {
      v16 -= *v21;
      v14 = v21[1] | (v14 << v22);
    }
    else
    {
      *v12 = (v14 << v16) | (v21[1] >> (v22 - v16));
      v12 = v13;
      v14 = v21[1];
      v13 = v15;
      v15 += 2;
      v16 = v16 - (unsigned int)v22 + 16;
    }
    goto LABEL_17;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v23 = *a2;
    v24 = a2 + 1;
    v25 = v23 + 256;
    v26 = *(unsigned __int16 *)(a1 + 4 * v25);
    v27 = a1 + 4 * v25;
    if ( v16 < v26 )
    {
      *v12 = (v14 << v16) | (*(_WORD *)(v27 + 2) >> (v26 - v16));
      v12 = v13;
      v29 = *(_WORD *)(v27 + 2);
      v13 = v15;
      v15 += 2;
      v28 = v16 - v26 + 16;
    }
    else
    {
      v28 = v16 - v26;
      v29 = *(_WORD *)(v27 + 2) | (v14 << v26);
    }
    if ( (v23 & 0xF) == 0xF )
    {
      v31 = *v24++;
      *v15++ = v31;
      if ( v31 == 255 )
      {
        v32 = *(unsigned __int16 *)v24;
        *v15 = *v24;
        v33 = v24[1];
        v24 += 2;
        v15[1] = v33;
        v15 += 2;
        if ( !v32 )
        {
          *v15 = *v24;
          v15[1] = v24[1];
          v15[2] = v24[2];
          v15[3] = v24[3];
          v15 += 4;
          v24 += 4;
        }
      }
    }
    v30 = (unsigned __int8)v23 >> 4;
    if ( v28 < v30 )
    {
      *v12 = (v29 << v28) | (*(_WORD *)v24 >> (v30 - v28));
      v12 = v13;
      v13 = v15;
      v15 += 2;
      v16 = 16LL - v30 + v28;
      v14 = *(_WORD *)v24;
    }
    else
    {
      v16 = v28 - v30;
      v14 = *(_WORD *)v24 | (v29 << v30);
    }
    a2 = v24 + 2;
LABEL_17:
    if ( v19 >= 0 )
    {
      v19 *= 2;
      goto LABEL_7;
    }
    v19 *= 2;
    if ( !v19 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v34 = *(unsigned __int16 *)(a1 + 1024);
    v35 = *(_WORD *)(a1 + 1024);
    if ( v16 >= v34 )
    {
      LOBYTE(v16) = v16 - v35;
      v14 = *(_WORD *)(a1 + 1026) | (v14 << v34);
    }
    else
    {
      *v12 = (v14 << v16) | (*(_WORD *)(a1 + 1026) >> (v34 - v16));
      v12 = v13;
      v14 = *(_WORD *)(a1 + 1026);
      v13 = v15;
      v15 += 2;
      LOBYTE(v16) = v16 - v35 + 16;
    }
  }
  *v12 = v14 << v16;
  *v13 = 0;
  return v15;
}
