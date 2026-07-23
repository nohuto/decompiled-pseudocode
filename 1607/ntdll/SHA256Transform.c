/*
 * XREFs of SHA256Transform @ 0x180009748
 * Callers:
 *     SHA256Update @ 0x180009644 (SHA256Update.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall SHA256Transform(int *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // ebx
  int v8; // r11d
  __int64 v9; // rsi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  int v14; // r9d
  int v15; // edi
  int v16; // r8d
  int v17; // r15d
  __int64 v18; // rsi
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r14d
  int v24; // edi
  int v25; // r8d
  __int64 v26; // rsi
  int v27; // r8d
  int v28; // r11d
  int v29; // r13d
  int v30; // r8d
  __int64 v31; // rsi
  int v32; // r8d
  int v33; // ebx
  int v34; // r12d
  int v35; // r8d
  __int64 v36; // rsi
  int v37; // r8d
  __int64 v38; // rsi
  int v39; // r8d
  int v40; // r8d
  __int64 v41; // rsi
  int v42; // r8d
  int v43; // r8d
  int *v44; // rdi
  unsigned int v45; // edi
  unsigned int v46; // eax
  __int64 v47; // r9
  int v48; // r11d
  unsigned int v49; // r8d
  int v50; // edx
  __int64 v51; // rsi
  int v52; // edx
  int v53; // r15d
  __int64 v54; // r9
  unsigned int v55; // ecx
  int v56; // edx
  __int64 v57; // rsi
  unsigned int v58; // edx
  unsigned int v59; // r14d
  __int64 v60; // r9
  int v61; // edi
  int v62; // edx
  __int64 v63; // rsi
  int v64; // edx
  int v65; // ebx
  __int64 v66; // r9
  int v67; // r13d
  int v68; // edx
  __int64 v69; // rsi
  int v70; // edx
  int v71; // r11d
  __int64 v72; // r9
  int v73; // r12d
  unsigned int v74; // edx
  unsigned int v75; // ecx
  int v76; // edx
  __int64 v77; // rsi
  __int64 v78; // r9
  unsigned int v79; // edx
  unsigned int v80; // ecx
  int v81; // edx
  __int64 v82; // rsi
  unsigned int v83; // edx
  unsigned int v84; // ecx
  __int64 v85; // r9
  int v86; // edx
  unsigned int v87; // ecx
  int v88; // edx
  __int64 v89; // rsi
  int v90; // edx
  __int64 v91; // r9
  unsigned int v92; // ecx
  int v93; // edx
  int v94; // edx
  __int64 result; // rax
  int v96; // [rsp+0h] [rbp-80h]
  int v97; // [rsp+0h] [rbp-80h]
  unsigned int v98; // [rsp+8h] [rbp-78h]
  unsigned int v99; // [rsp+8h] [rbp-78h]
  unsigned int v100; // [rsp+10h] [rbp-70h]
  int v101; // [rsp+14h] [rbp-6Ch]
  int v102; // [rsp+18h] [rbp-68h]
  _DWORD v104[4]; // [rsp+30h] [rbp-50h]
  _BYTE v105[48]; // [rsp+40h] [rbp-40h] BYREF

  v3 = a2 - (_QWORD)v105;
  v4 = v105;
  v5 = 2LL;
  do
  {
    *(v4 - 2) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3)), 32);
    *(v4 - 1) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 8)), 32);
    *v4 = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 16)), 32);
    v6 = *(_QWORD *)((char *)v4 + v3 + 24);
    v4 += 4;
    *(v4 - 3) = __ROR8__(_byteswap_uint64(v6), 32);
    --v5;
  }
  while ( v5 );
  v7 = *a1;
  v8 = a1[1];
  v9 = 0LL;
  v10 = a1[2];
  v11 = a1[3];
  v12 = a1[4];
  v13 = a1[5];
  v14 = a1[7];
  v15 = a1[6];
  do
  {
    v16 = v14
        + v104[v9]
        + SHA256Magic[v9]
        + (v12 & v13 ^ v15 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v17 = v16 + v11;
    v18 = (unsigned int)(v9 + 1);
    v19 = v16 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v10 & (v7 ^ v8));
    v20 = v104[v18]
        + SHA256Magic[v18]
        + (v17 & v12 ^ v13 & ~v17)
        + (__ROR4__(v17, 6) ^ __ROR4__(v17, 11) ^ __ROR4__(v17, 25));
    v21 = (unsigned int)(v18 + 1);
    v22 = v15 + v20;
    v23 = v22 + v10;
    v24 = v22 + (__ROR4__(v19, 13) ^ __ROR4__(v19, 22) ^ __ROR4__(v19, 2)) + (v7 & v8 ^ v19 & (v7 ^ v8));
    v25 = v104[v21]
        + SHA256Magic[v21]
        + (v23 & v17 ^ v12 & ~v23)
        + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25));
    v26 = (unsigned int)(v21 + 1);
    v27 = v13 + v25;
    v28 = v27 + v8;
    v29 = v27 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v7 & v24 ^ v19 & (v7 ^ v24));
    v30 = v104[v26]
        + SHA256Magic[v26]
        + (v28 & v23 ^ v17 & ~v28)
        + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROR4__(v28, 25));
    v31 = (unsigned int)(v26 + 1);
    v32 = v12 + v30;
    v33 = v32 + v7;
    v34 = v32 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v29 & v24 ^ v19 & (v29 ^ v24));
    v35 = v17
        + v104[v31]
        + SHA256Magic[v31]
        + (v33 & v28 ^ v23 & ~v33)
        + (__ROR4__(v33, 6) ^ __ROR4__(v33, 11) ^ __ROR4__(v33, 25));
    v14 = v35 + v19;
    v36 = (unsigned int)(v31 + 1);
    v96 = v14;
    v11 = v35 + (__ROR4__(v34, 2) ^ __ROR4__(v34, 13) ^ __ROR4__(v34, 22)) + (v34 & v29 ^ v24 & (v34 ^ v29));
    v37 = v104[v36]
        + SHA256Magic[v36]
        + (v33 & v14 ^ v28 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v35 + v19, 25));
    v38 = (unsigned int)(v36 + 1);
    v39 = v23 + v37;
    v15 = v39 + v24;
    v10 = v39 + (__ROR4__(v11, 2) ^ __ROR4__(v11, 13) ^ __ROR4__(v11, 22)) + (v11 & v34 ^ v29 & (v11 ^ v34));
    v40 = v28
        + v104[v38]
        + SHA256Magic[v38]
        + (v15 & v14 ^ v33 & ~v15)
        + (__ROR4__(v15, 6) ^ __ROR4__(v15, 11) ^ __ROR4__(v15, 25));
    v13 = v40 + v29;
    v41 = (unsigned int)(v38 + 1);
    v8 = v40 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v11 ^ v34 & (v10 ^ v11));
    v42 = v104[v41]
        + SHA256Magic[v41]
        + (v13 & v15 ^ v14 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v9 = (unsigned int)(v41 + 1);
    v43 = v33 + v42;
    v12 = v43 + v34;
    v7 = v43 + (__ROR4__(v8, 2) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 22)) + (v8 & v10 ^ v11 & (v8 ^ v10));
  }
  while ( (unsigned int)v9 < 0x10 );
  v100 = v15;
  v44 = a1;
  v101 = v8;
  v102 = v7;
  if ( (unsigned int)v9 < 0x40 )
  {
    v45 = v100;
    LOBYTE(v46) = v9 + 1;
    v98 = v9 + 1;
    do
    {
      v47 = v9 & 0xF;
      v48 = v7 ^ v8;
      v49 = v104[v46 & 0xF];
      v104[v47] += v104[((_BYTE)v9 - 7) & 0xF]
                 + ((v49 >> 3) ^ __ROR4__(v49, 7) ^ __ROR4__(v49, 18))
                 + ((v104[((_BYTE)v9 - 2) & 0xF] >> 10) ^ __ROR4__(v104[((_BYTE)v9 - 2) & 0xF], 17) ^ __ROR4__(v104[((_BYTE)v9 - 2) & 0xF], 19));
      v50 = SHA256Magic[v9] + (v12 & v13 ^ v45 & ~v12) + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v51 = (unsigned int)(v9 + 1);
      v52 = v96 + v104[v47] + v50;
      v53 = v52 + v11;
      v54 = v51 & 0xF;
      v97 = v52 + (__ROR4__(v102, 13) ^ __ROR4__(v102, 22) ^ __ROR4__(v102, 2)) + (v102 & v101 ^ v10 & v48);
      v99 = v98 + 1;
      v55 = v104[((_BYTE)v51 - 2) & 0xF];
      v104[v54] += v104[((_BYTE)v51 - 7) & 0xF]
                 + ((v104[v99 & 0xF] >> 3) ^ __ROR4__(v104[v99 & 0xF], 7) ^ __ROR4__(v104[v99 & 0xF], 18))
                 + ((v55 >> 10) ^ __ROR4__(v55, 17) ^ __ROR4__(v55, 19));
      v56 = SHA256Magic[v51] + (v53 & v12 ^ v13 & ~v53) + (__ROR4__(v53, 6) ^ __ROR4__(v53, 11) ^ __ROR4__(v53, 25));
      v57 = (unsigned int)(v51 + 1);
      v58 = v45 + v104[v54] + v56;
      v59 = v58 + v10;
      v60 = v57 & 0xF;
      v61 = v58 + (__ROR4__(v97, 13) ^ __ROR4__(v97, 22) ^ __ROR4__(v97, 2)) + (v102 & v101 ^ v97 & v48);
      ++v99;
      v104[v60] += v104[((_BYTE)v57 - 7) & 0xF]
                 + ((v104[v99 & 0xF] >> 3) ^ __ROR4__(v104[v99 & 0xF], 7) ^ __ROR4__(v104[v99 & 0xF], 18))
                 + ((v104[((_BYTE)v57 - 2) & 0xF] >> 10) ^ __ROR4__(v104[((_BYTE)v57 - 2) & 0xF], 17) ^ __ROR4__(v104[((_BYTE)v57 - 2) & 0xF], 19));
      v62 = SHA256Magic[v57] + (v59 & v53 ^ v12 & ~v59) + (__ROR4__(v59, 6) ^ __ROR4__(v59, 11) ^ __ROR4__(v59, 25));
      v63 = (unsigned int)(v57 + 1);
      v64 = v13 + v104[v60] + v62;
      v65 = v64 + v101;
      v66 = v63 & 0xF;
      v67 = v64 + (__ROR4__(v61, 2) ^ __ROR4__(v61, 13) ^ __ROR4__(v61, 22)) + (v102 & v61 ^ v97 & (v102 ^ v61));
      ++v99;
      v104[v66] += v104[((_BYTE)v63 - 7) & 0xF]
                 + ((v104[v99 & 0xF] >> 3) ^ __ROR4__(v104[v99 & 0xF], 7) ^ __ROR4__(v104[v99 & 0xF], 18))
                 + ((v104[((_BYTE)v63 - 2) & 0xF] >> 10) ^ __ROR4__(v104[((_BYTE)v63 - 2) & 0xF], 17) ^ __ROR4__(v104[((_BYTE)v63 - 2) & 0xF], 19));
      v68 = v104[v66]
          + SHA256Magic[v63]
          + (v65 & v59 ^ v53 & ~v65)
          + (__ROR4__(v65, 6) ^ __ROR4__(v64 + v101, 11) ^ __ROR4__(v64 + v101, 25));
      v69 = (unsigned int)(v63 + 1);
      v70 = v12 + v68;
      v71 = v70 + v102;
      v72 = v69 & 0xF;
      v73 = v70 + (__ROR4__(v67, 2) ^ __ROR4__(v67, 13) ^ __ROR4__(v67, 22)) + (v67 & v61 ^ v97 & (v67 ^ v61));
      ++v99;
      v74 = v104[((_BYTE)v69 - 2) & 0xF];
      v75 = v104[v99 & 0xF];
      v104[v72] += v104[((_BYTE)v69 - 7) & 0xF]
                 + ((v75 >> 3) ^ __ROR4__(v75, 7) ^ __ROR4__(v75, 18))
                 + ((v74 >> 10) ^ __ROR4__(v74, 17) ^ __ROR4__(v74, 19));
      v76 = v53
          + v104[v72]
          + SHA256Magic[v69]
          + (v71 & v65 ^ v59 & ~v71)
          + (__ROR4__(v71, 6) ^ __ROR4__(v71, 11) ^ __ROR4__(v71, 25));
      v96 = v76 + v97;
      v77 = (unsigned int)(v69 + 1);
      v78 = v77 & 0xF;
      v11 = v76 + (__ROR4__(v73, 2) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 22)) + (v73 & v67 ^ v61 & (v73 ^ v67));
      ++v99;
      v79 = v104[((_BYTE)v77 - 2) & 0xF];
      v80 = v104[v99 & 0xF];
      v104[v78] += v104[((_BYTE)v77 - 7) & 0xF]
                 + ((v80 >> 3) ^ __ROR4__(v80, 7) ^ __ROR4__(v80, 18))
                 + ((v79 >> 10) ^ __ROR4__(v79, 17) ^ __ROR4__(v79, 19));
      v81 = v104[v78]
          + SHA256Magic[v77]
          + (v71 & v96 ^ v65 & ~v96)
          + (__ROR4__(v96, 6) ^ __ROR4__(v96, 11) ^ __ROR4__(v96, 25));
      v82 = (unsigned int)(v77 + 1);
      v83 = v59 + v81;
      v45 = v83 + v61;
      v10 = v83 + (__ROR4__(v11, 2) ^ __ROR4__(v11, 13) ^ __ROR4__(v11, 22)) + (v11 & v73 ^ v67 & (v11 ^ v73));
      ++v99;
      v84 = v104[((_BYTE)v82 - 2) & 0xF];
      v85 = v82 & 0xF;
      v86 = (v84 >> 10) ^ __ROR4__(v84, 17) ^ __ROR4__(v84, 19);
      v87 = v104[v99 & 0xF];
      v104[v85] += v104[((_BYTE)v82 - 7) & 0xF] + ((v87 >> 3) ^ __ROR4__(v87, 7) ^ __ROR4__(v87, 18)) + v86;
      v88 = SHA256Magic[v82] + (v45 & v96 ^ v71 & ~v45) + (__ROR4__(v45, 6) ^ __ROR4__(v45, 11) ^ __ROR4__(v45, 25));
      v89 = (unsigned int)(v82 + 1);
      v90 = v65 + v104[v85] + v88;
      v13 = v90 + v67;
      v91 = v89 & 0xF;
      v101 = v90 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v11 ^ v73 & (v10 ^ v11));
      ++v99;
      v92 = v104[((_BYTE)v89 - 2) & 0xF];
      v104[v91] += v104[((_BYTE)v89 - 7) & 0xF]
                 + ((v104[v99 & 0xF] >> 3) ^ __ROR4__(v104[v99 & 0xF], 7) ^ __ROR4__(v104[v99 & 0xF], 18))
                 + ((v92 >> 10) ^ __ROR4__(v92, 17) ^ __ROR4__(v92, 19));
      v93 = SHA256Magic[v89] + (v13 & v45 ^ v96 & ~v13) + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
      v9 = (unsigned int)(v89 + 1);
      v94 = v71 + v104[v91] + v93;
      v8 = v101;
      v12 = v94 + v73;
      v7 = v94 + (__ROR4__(v101, 2) ^ __ROR4__(v101, 13) ^ __ROR4__(v101, 22)) + (v101 & v10 ^ v11 & (v101 ^ v10));
      v46 = v99 + 1;
      v102 = v7;
      v98 = v46;
    }
    while ( v46 < 0x41 );
    v14 = v96;
    v100 = v45;
    v44 = a1;
  }
  result = v100;
  v44[6] += v100;
  *v44 += v7;
  v44[1] += v8;
  v44[2] += v10;
  v44[3] += v11;
  v44[4] += v12;
  v44[5] += v13;
  v44[7] += v14;
  return result;
}
