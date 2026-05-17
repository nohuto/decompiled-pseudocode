/*
 * XREFs of XpressDoHuffmanPass @ 0x18005BDC0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005B5A0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1800F1C00 (RtlCompressBufferXpressHuffMax.c)
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
  int v20; // ebx
  unsigned __int8 *v21; // r10
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // r9
  __int16 v26; // ax
  unsigned __int8 v27; // bl
  __int64 v28; // rcx
  unsigned __int16 *v29; // r8
  unsigned __int64 v30; // rcx
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
LABEL_16:
    v28 = *a2++;
    v29 = (unsigned __int16 *)(a1 + 4 * v28);
    v30 = *v29;
    if ( v16 < v30 )
    {
      *v12 = (v14 << v16) | (v29[1] >> (v30 - v16));
      v12 = v13;
      v14 = v29[1];
      v13 = v15;
      v15 += 2;
      v16 = v16 - (unsigned int)v30 + 16;
    }
    else
    {
      v16 -= v30;
      v14 = v29[1] | (v14 << v30);
    }
    goto LABEL_14;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v20 = *a2;
    v21 = a2 + 1;
    v22 = v20 + 256;
    v23 = *(unsigned __int16 *)(a1 + 4 * v22);
    v24 = a1 + 4 * v22;
    if ( v16 < v23 )
    {
      *v12 = (v14 << v16) | (*(_WORD *)(v24 + 2) >> (v23 - v16));
      v12 = v13;
      v26 = *(_WORD *)(v24 + 2);
      v13 = v15;
      v15 += 2;
      v25 = v16 - v23 + 16;
    }
    else
    {
      v25 = v16 - v23;
      v26 = *(_WORD *)(v24 + 2) | (v14 << v23);
    }
    if ( (v20 & 0xF) == 0xF )
    {
      v31 = *v21++;
      *v15++ = v31;
      if ( v31 == 255 )
      {
        v32 = *(unsigned __int16 *)v21;
        *v15 = *v21;
        v33 = v21[1];
        v21 += 2;
        v15[1] = v33;
        v15 += 2;
        if ( !v32 )
        {
          *v15 = *v21;
          v15[1] = v21[1];
          v15[2] = v21[2];
          v15[3] = v21[3];
          v15 += 4;
          v21 += 4;
        }
      }
    }
    v27 = (unsigned __int8)v20 >> 4;
    if ( v25 < v27 )
    {
      *v12 = (v26 << v25) | (*(_WORD *)v21 >> (v27 - v25));
      v12 = v13;
      v13 = v15;
      v15 += 2;
      v16 = 16LL - v27 + v25;
      v14 = *(_WORD *)v21;
    }
    else
    {
      v16 = v25 - v27;
      v14 = *(_WORD *)v21 | (v26 << v27);
    }
    a2 = v21 + 2;
LABEL_14:
    if ( v19 >= 0 )
    {
      v19 *= 2;
      goto LABEL_16;
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
