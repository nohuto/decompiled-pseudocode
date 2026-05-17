/*
 * XREFs of __remainder_piby2 @ 0x18008BFC0
 * Callers:
 *     cos @ 0x180086AC0 (cos.c)
 *     sin @ 0x180086EE0 (sin.c)
 *     tan @ 0x180089390 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, int *a4)
{
  int v5; // r11d
  __int64 v6; // r10
  int v9; // edx
  int v10; // r11d
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  int v47; // r9d
  char v48; // cl
  int v49; // esi
  unsigned __int64 v50; // rdx
  _QWORD *v51; // r8
  __int64 v52; // r8
  _QWORD *v53; // rax
  unsigned __int64 v54; // r8
  int v55; // r11d
  __int64 v56; // rax
  double v57; // xmm8_8
  double v58; // xmm7_8
  double v59; // xmm7_8
  unsigned __int64 result; // rax
  double v61; // xmm5_8
  _QWORD v62[499]; // [rsp+20h] [rbp-E8h] BYREF

  v62[18] = 0LL;
  v5 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v6 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v9 = v5 / 10;
  v10 = v5 % 10;
  v11 = v9 + 18;
  v12 = v6 * qword_1801401F0[v11 - 1];
  v13 = v6 * qword_1801401F0[v11];
  v62[17] = v13 & 0x3FF;
  v14 = qword_1801401F0[v11 - 2];
  v15 = (v13 >> 10) + v12;
  v62[16] = v15 & 0x3FF;
  v16 = (v15 >> 10) + v6 * v14;
  v17 = (v16 >> 10) + v6 * qword_1801401F0[v11 - 3];
  v18 = qword_1801401F0[v11 - 4];
  v62[15] = v16 & 0x3FF;
  v62[14] = v17 & 0x3FF;
  v19 = (v17 >> 10) + v6 * v18;
  v20 = (v19 >> 10) + v6 * qword_1801401F0[v11 - 5];
  v21 = v19 & 0x3FF;
  v22 = qword_1801401F0[v11 - 6];
  v62[13] = v21;
  v62[12] = v20 & 0x3FF;
  v23 = (v20 >> 10) + v6 * v22;
  v24 = (v23 >> 10) + v6 * qword_1801401F0[v11 - 7];
  v62[11] = v23 & 0x3FF;
  v62[10] = v24 & 0x3FF;
  v25 = (v24 >> 10) + v6 * qword_1801401F0[v11 - 8];
  v26 = (v25 >> 10) + v6 * qword_1801401F0[v11 - 9];
  v27 = v25 & 0x3FF;
  v28 = qword_1801401F0[v11 - 10];
  v62[9] = v27;
  v62[8] = v26 & 0x3FF;
  v29 = (v26 >> 10) + v6 * v28;
  v30 = (v29 >> 10) + v6 * qword_1801401F0[v11 - 11];
  v31 = v29 & 0x3FF;
  v32 = qword_1801401F0[v11 - 12];
  v62[7] = v31;
  v62[6] = v30 & 0x3FF;
  v33 = (v30 >> 10) + v6 * v32;
  v34 = (v33 >> 10) + v6 * qword_1801401F0[v11 - 13];
  v35 = v33 & 0x3FF;
  v36 = qword_1801401F0[v11 - 14];
  v62[5] = v35;
  v62[4] = v34 & 0x3FF;
  v37 = (v34 >> 10) + v6 * v36;
  v38 = (v37 >> 10) + v6 * qword_1801401F0[v11 - 15];
  v39 = v37 & 0x3FF;
  v40 = qword_1801401F0[v11 - 16];
  v62[3] = v39;
  v62[2] = v38 & 0x3FF;
  v41 = (v38 >> 10) + v6 * v40;
  v42 = v6 * qword_1801401F0[v11 - 18];
  v62[1] = v41 & 0x3FF;
  v43 = (v41 >> 10) + v6 * qword_1801401F0[v11 - 17];
  v44 = (v43 >> 10) + v42;
  v45 = v43 & 0x3FF;
  v62[0] = v45;
  v46 = ((v45 | ((v44 & 0x3FF) << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 7;
  v47 = 1;
  v48 = 10 - v10;
  v49 = v46 & 1;
  if ( (v46 & 1) != 0 )
  {
    *a4 = ((unsigned __int8)((int)v46 >> 1) + 1) & 3;
    v50 = ~v45 & ((1LL << v48) - 1);
    if ( v50 < 0x20000000000000LL )
    {
      v51 = v62;
      do
      {
        ++v51;
        ++v47;
        v50 = (v50 << 10) | ~*v51 & 0x3FFLL;
      }
      while ( v50 < 0x20000000000000LL );
    }
    v52 = ~v62[v47];
  }
  else
  {
    *a4 = (int)v46 >> 1;
    v50 = v45 & ((1LL << v48) - 1);
    if ( v50 < 0x20000000000000LL )
    {
      v53 = v62;
      do
      {
        v50 = *++v53 | (v50 << 10);
        ++v47;
      }
      while ( v50 < 0x20000000000000LL );
    }
    v52 = v62[v47];
  }
  v54 = v52 << 54;
  v55 = v10 - 10 * v47 + 52;
  while ( v50 >= 0x20000000000000LL )
  {
    ++v55;
    v54 = (v54 >> 1) | (v50 << 63);
    v50 >>= 1;
  }
  v56 = v50 & 0xFFFFFFFFFFFFFLL | ((v55 + 1023LL) << 52);
  if ( v49 )
    v56 |= 0x8000000000000000uLL;
  v57 = *(double *)&v56;
  v58 = COERCE_DOUBLE(((v55 + 970LL) << 52) | (v54 >> 12)) - COERCE_DOUBLE((v55 + 970LL) << 52);
  if ( v49 )
    v59 = v58 * -2.0;
  else
    v59 = v58 * 2.0;
  result = v56 & 0xFFFFFFFFF8000000uLL;
  v61 = COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v57 * 1.570796326794897
      + (v57 - COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v57 - COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v59 * 1.570796326794897
      + v57 * 6.123233995736765e-17;
  *a2 = v61 + v57 * 1.570796326794897;
  *a3 = v57 * 1.570796326794897 - (v61 + v57 * 1.570796326794897) + v61;
  return result;
}
