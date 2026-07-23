/*
 * XREFs of XpressDoHuffmanPass @ 0x140138AF0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1401382C0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140217124 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int128 *v7; // rdx
  __int64 v10; // rax
  __int64 v11; // r11
  __int128 v12; // xmm0
  unsigned __int64 v13; // r9
  _WORD *v14; // r12
  __int16 v15; // r11
  _WORD *v16; // r13
  _BYTE *v17; // r14
  int v18; // r8d
  bool v19; // sf
  int v20; // r8d
  __int16 v21; // dx
  __int16 v22; // r11
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // ebx
  unsigned __int8 *v28; // r10
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // r9
  __int16 v33; // r11
  unsigned __int8 v34; // bl
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rcx
  __int16 v40; // dx
  __int16 v41; // r11

  v7 = (__int128 *)(a1 + 31264);
  v10 = a4;
  v11 = 2LL;
  do
  {
    v10 += 128LL;
    v12 = *v7;
    v7 += 8;
    *(_OWORD *)(v10 - 128) = v12;
    *(_OWORD *)(v10 - 112) = *(v7 - 7);
    *(_OWORD *)(v10 - 96) = *(v7 - 6);
    *(_OWORD *)(v10 - 80) = *(v7 - 5);
    *(_OWORD *)(v10 - 64) = *(v7 - 4);
    *(_OWORD *)(v10 - 48) = *(v7 - 3);
    *(_OWORD *)(v10 - 32) = *(v7 - 2);
    *(_OWORD *)(v10 - 16) = *(v7 - 1);
    --v11;
  }
  while ( v11 );
  v13 = 16LL;
  v14 = (_WORD *)(a4 + 256);
  v15 = 0;
  v16 = (_WORD *)(a4 + 258);
  v17 = (_BYTE *)(a4 + 260);
LABEL_4:
  v18 = *(_DWORD *)a2;
  a2 += 4;
  v19 = v18 < 0;
  v20 = 2 * v18 + 1;
  if ( !v19 )
  {
LABEL_9:
    v24 = *a2++;
    v25 = *(unsigned __int16 *)(a1 + 4 * v24);
    v26 = a1 + 4 * v24;
    if ( v13 < v25 )
    {
      v21 = *(_WORD *)(v26 + 2) >> (v25 - v13);
      v22 = v15 << v13;
      v23 = v13 - *(unsigned __int16 *)(a1 + 4 * v24);
      *v14 = v22 | v21;
      v14 = v16;
      v15 = *(_WORD *)(v26 + 2);
      v16 = v17;
      v17 += 2;
      v13 = v23 + 16;
    }
    else
    {
      v13 -= v25;
      v15 = *(_WORD *)(v26 + 2) | (v15 << v25);
    }
    goto LABEL_7;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v27 = *a2;
    v28 = a2 + 1;
    v29 = v27 + 256;
    v30 = *(unsigned __int16 *)(a1 + 4 * v29);
    v31 = a1 + 4 * v29;
    if ( v13 < v30 )
    {
      *v14 = (v15 << v13) | (*(_WORD *)(v31 + 2) >> (v30 - v13));
      v14 = v16;
      v33 = *(_WORD *)(v31 + 2);
      v16 = v17;
      v17 += 2;
      v32 = v13 - v30 + 16;
    }
    else
    {
      v32 = v13 - v30;
      v33 = *(_WORD *)(v31 + 2) | (v15 << v30);
    }
    if ( (v27 & 0xF) == 0xF )
    {
      v35 = *v28++;
      *v17++ = v35;
      if ( v35 == 255 )
      {
        v36 = *(unsigned __int16 *)v28;
        *v17 = *v28;
        v37 = v28[1];
        v28 += 2;
        v17[1] = v37;
        v17 += 2;
        if ( !v36 )
        {
          *v17 = *v28;
          v17[1] = v28[1];
          v17[2] = v28[2];
          v17[3] = v28[3];
          v17 += 4;
          v28 += 4;
        }
      }
    }
    v34 = (unsigned __int8)v27 >> 4;
    if ( v32 < v34 )
    {
      *v14 = (v33 << v32) | (*(_WORD *)v28 >> (v34 - v32));
      v14 = v16;
      v15 = *(_WORD *)v28;
      v16 = v17;
      v17 += 2;
      v13 = 16LL - v34 + v32;
    }
    else
    {
      v13 = v32 - v34;
      v15 = *(_WORD *)v28 | (v33 << v34);
    }
    a2 = v28 + 2;
LABEL_7:
    if ( v20 >= 0 )
    {
      v20 *= 2;
      goto LABEL_9;
    }
    v20 *= 2;
    if ( !v20 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v38 = *(unsigned __int16 *)(a1 + 1024);
    if ( v13 < v38 )
    {
      v40 = *(_WORD *)(a1 + 1026) >> (v38 - v13);
      v41 = v15 << v13;
      LOWORD(v13) = v13 - *(_WORD *)(a1 + 1024);
      *v14 = v41 | v40;
      v14 = v16;
      v15 = *(_WORD *)(a1 + 1026);
      v16 = v17;
      v17 += 2;
      LOBYTE(v13) = v13 + 16;
    }
    else
    {
      LOBYTE(v13) = v13 - v38;
      v15 = *(_WORD *)(a1 + 1026) | (v15 << v38);
    }
  }
  *v14 = v15 << v13;
  *v16 = 0;
  return v17;
}
