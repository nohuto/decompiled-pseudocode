/*
 * XREFs of RtlpComputeCrcInternal @ 0x1800852A8
 * Callers:
 *     RtlCrc32 @ 0x180085290 (RtlCrc32.c)
 *     RtlCrc64 @ 0x1800EBCF0 (RtlCrc64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r11
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  char v71; // cl
  unsigned __int64 i; // rdx
  char v74; // al

  v5 = 0LL;
  v6 = a4[4];
  v7 = a2;
  v8 = a1;
  v9 = a3 ^ v6;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    if ( v10 > a2 )
      v10 = a2;
    for ( i = 0LL; i < v10; v9 = (v9 >> 8) ^ *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v9 ^ v74)) )
    {
      v74 = *(_BYTE *)(i + a1);
      ++i;
    }
    v7 -= v10;
    v8 = v10 + a1;
  }
  v11 = v7 - (v7 & 0x1F);
  if ( v11 >= 0x40 )
  {
    v7 &= 0x1Fu;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    if ( v8 < v11 + v8 - 32 )
    {
      v15 = a4[2];
      v16 = v11 + v8 - 32;
      do
      {
        _mm_prefetch((const char *)(v8 + 256), 2);
        v17 = v9 ^ *(_QWORD *)v8;
        v18 = v12 ^ *(_QWORD *)(v8 + 8);
        v19 = v13 ^ *(_QWORD *)(v8 + 16);
        v20 = v14 ^ *(_QWORD *)(v8 + 24);
        v21 = (unsigned __int8)v17;
        v17 >>= 8;
        v22 = *(_QWORD *)(v15 + 8 * v21 + 14336);
        v23 = (unsigned __int8)v18;
        v18 >>= 8;
        v24 = *(_QWORD *)(v15 + 8 * v23 + 14336);
        v25 = (unsigned __int8)v19;
        v19 >>= 8;
        v26 = *(_QWORD *)(v15 + 8 * v25 + 14336);
        v27 = (unsigned __int8)v20;
        v20 >>= 8;
        v28 = *(_QWORD *)(v15 + 8 * v27 + 14336);
        v29 = (unsigned __int8)v17;
        v17 >>= 8;
        v30 = *(_QWORD *)(v15 + 8 * v29 + 12288) ^ v22;
        v31 = (unsigned __int8)v18;
        v18 >>= 8;
        v32 = *(_QWORD *)(v15 + 8 * v31 + 12288) ^ v24;
        v33 = (unsigned __int8)v19;
        v19 >>= 8;
        v34 = *(_QWORD *)(v15 + 8 * v33 + 12288) ^ v26;
        v35 = (unsigned __int8)v20;
        v20 >>= 8;
        v36 = *(_QWORD *)(v15 + 8 * v35 + 12288) ^ v28;
        v37 = (unsigned __int8)v17;
        v17 >>= 8;
        v38 = *(_QWORD *)(v15 + 8 * v37 + 10240) ^ v30;
        v39 = (unsigned __int8)v18;
        v18 >>= 8;
        v40 = *(_QWORD *)(v15 + 8 * v39 + 10240) ^ v32;
        v41 = (unsigned __int8)v19;
        v19 >>= 8;
        v42 = *(_QWORD *)(v15 + 8 * v41 + 10240) ^ v34;
        v43 = (unsigned __int8)v20;
        v20 >>= 8;
        v44 = *(_QWORD *)(v15 + 8 * v43 + 10240) ^ v36;
        v45 = (unsigned __int8)v20;
        v20 >>= 8;
        v8 += 32LL;
        v9 = *(_QWORD *)(v15 + 8LL * BYTE3(v17) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE4(v17)) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v17) + 4096) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v17) + 6144) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v17 + 0x2000) ^ v38;
        v12 = *(_QWORD *)(v15 + 8LL * BYTE3(v18) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE4(v18)) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v18) + 4096) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v18) + 6144) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v18 + 0x2000) ^ v40;
        v13 = *(_QWORD *)(v15 + 8LL * BYTE3(v19) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE4(v19)) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v19) + 4096) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v19) + 6144) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v19 + 0x2000) ^ v42;
        v14 = *(_QWORD *)(v15 + 8LL * BYTE2(v20) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE3(v20)) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v20) + 4096) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v20 + 6144) ^ *(_QWORD *)(v15 + 8 * v45 + 0x2000) ^ v44;
      }
      while ( v8 < v16 );
      v6 = a4[4];
      v5 = 0LL;
    }
    v46 = a4[1];
    v47 = ((v9 ^ *(_QWORD *)v8) >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)(v9 ^ *(_BYTE *)v8));
    v48 = (v47 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v47);
    v49 = (v48 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v48);
    v50 = (v49 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v49);
    v51 = (v50 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v50);
    v52 = (v51 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v51);
    v53 = (v52 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v52);
    v54 = v12 ^ *(_QWORD *)(v8 + 8) ^ (v53 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v53);
    v55 = (v54 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v54);
    v56 = (v55 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v55);
    v57 = (v56 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v56);
    v58 = (v57 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v57);
    v59 = (v58 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v58);
    v60 = (v59 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v59);
    v61 = (v60 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v60);
    v62 = v13 ^ *(_QWORD *)(v8 + 16) ^ (v61 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v61);
    v63 = (v62 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v62);
    v64 = (v63 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v63);
    v65 = (v64 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v64);
    v66 = (v65 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v65);
    v67 = (v66 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v66);
    v68 = (v67 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v67);
    v69 = (v68 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v68);
    v70 = 8LL;
    v9 = v14 ^ *(_QWORD *)(v8 + 24) ^ (v69 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v69);
    do
    {
      v9 = (v9 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v9);
      --v70;
    }
    while ( v70 );
    v8 += 32LL;
  }
  if ( v7 )
  {
    do
    {
      v71 = *(_BYTE *)(v8 + v5++);
      v9 = (v9 >> 8) ^ *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v9 ^ v71));
    }
    while ( v5 < v7 );
  }
  return v9 ^ v6;
}
