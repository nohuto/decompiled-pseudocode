/*
 * XREFs of XpressDoHuffmanPass @ 0x14024DD24
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x14024BFB4 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x14024C654 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _OWORD *v7; // rdx
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _WORD *v12; // r14
  unsigned __int64 v13; // r11
  _WORD *v14; // r15
  __int16 v15; // r8
  _BYTE *v16; // r9
  int v17; // edi
  bool v18; // sf
  int v19; // edi
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int16 v22; // dx
  __int16 v23; // r8
  unsigned __int64 v24; // r11
  int v25; // esi
  unsigned __int8 *v26; // r10
  int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r11
  __int16 v30; // r8
  __int16 v31; // dx
  __int16 v32; // r8
  unsigned __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  unsigned __int8 v37; // si
  unsigned __int64 v38; // rcx
  __int16 v39; // dx
  __int16 v40; // r8
  _BYTE *result; // rax

  v7 = (_OWORD *)(a1 + 31264);
  v8 = a3;
  v9 = 2LL;
  v10 = (_OWORD *)a4;
  do
  {
    *v10 = *v7;
    v10[1] = v7[1];
    v10[2] = v7[2];
    v10[3] = v7[3];
    v10[4] = v7[4];
    v10[5] = v7[5];
    v10[6] = v7[6];
    v10 += 8;
    v11 = v7[7];
    v7 += 8;
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  v12 = (_WORD *)(a4 + 256);
  v13 = 16LL;
  v14 = (_WORD *)(a4 + 258);
  v15 = 0;
  v16 = (_BYTE *)(a4 + 260);
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = v17 < 0;
  v19 = 2 * v17 + 1;
  if ( !v18 )
  {
LABEL_5:
    v20 = *a2++;
    v21 = *(unsigned __int16 *)(a1 + 4 * v20);
    if ( v13 < v21 )
    {
      v22 = *(_WORD *)(a1 + 4 * v20 + 2) >> (v21 - v13);
      v23 = v15 << v13;
      v24 = v13 - *(unsigned __int16 *)(a1 + 4 * v20);
      *v12 = v23 | v22;
      v12 = v14;
      v15 = *(_WORD *)(a1 + 4 * v20 + 2);
      v14 = v16;
      v16 += 2;
      v13 = v24 + 16;
    }
    else
    {
      v13 -= v21;
      v15 = *(_WORD *)(a1 + 4 * v20 + 2) | (v15 << v21);
    }
    goto LABEL_8;
  }
  while ( (unsigned __int64)a2 < v8 )
  {
    _mm_lfence();
    v25 = *a2;
    v26 = a2 + 1;
    v27 = v25 + 256;
    v28 = *(unsigned __int16 *)(a1 + 4LL * (v25 + 256));
    if ( v13 < v28 )
    {
      v31 = *(_WORD *)(a1 + 4LL * v27 + 2) >> (v28 - v13);
      v32 = v15 << v13;
      v33 = v13 - *(unsigned __int16 *)(a1 + 4LL * v27);
      *v12 = v32 | v31;
      v12 = v14;
      v30 = *(_WORD *)(a1 + 4LL * v27 + 2);
      v14 = v16;
      v16 += 2;
      v29 = v33 + 16;
    }
    else
    {
      v29 = v13 - v28;
      v30 = *(_WORD *)(a1 + 4LL * v27 + 2) | (v15 << v28);
    }
    if ( v25 % 16 == 15 )
    {
      v34 = *v26++;
      *v16++ = v34;
      if ( v34 == 255 )
      {
        v35 = *(unsigned __int16 *)v26;
        *v16 = *v26;
        v36 = v26[1];
        v26 += 2;
        v16[1] = v36;
        v16 += 2;
        if ( !v35 )
        {
          *v16 = *v26;
          v16[1] = v26[1];
          v16[2] = v26[2];
          v16[3] = v26[3];
          v16 += 4;
          v26 += 4;
        }
      }
    }
    v37 = (unsigned __int8)v25 >> 4;
    if ( v29 < v37 )
    {
      *v12 = (v30 << v29) | (*(_WORD *)v26 >> (v37 - v29));
      v12 = v14;
      v15 = *(_WORD *)v26;
      v14 = v16;
      v16 += 2;
      v13 = 16LL - v37 + v29;
    }
    else
    {
      v13 = v29 - v37;
      v15 = *(_WORD *)v26 | (v30 << v37);
    }
    v8 = a3;
    a2 = v26 + 2;
LABEL_8:
    if ( v19 >= 0 )
    {
      v19 *= 2;
      goto LABEL_5;
    }
    v19 *= 2;
    if ( !v19 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v38 = *(unsigned __int16 *)(a1 + 1024);
    if ( v13 < v38 )
    {
      v39 = *(_WORD *)(a1 + 1026) >> (v38 - v13);
      v40 = v15 << v13;
      LOWORD(v13) = v13 - *(_WORD *)(a1 + 1024);
      *v12 = v40 | v39;
      v12 = v14;
      v15 = *(_WORD *)(a1 + 1026);
      v14 = v16;
      v16 += 2;
      LOBYTE(v13) = v13 + 16;
    }
    else
    {
      LOBYTE(v13) = v13 - v38;
      v15 = *(_WORD *)(a1 + 1026) | (v15 << v38);
    }
  }
  result = v16;
  *v12 = v15 << v13;
  *v14 = 0;
  return result;
}
