/*
 * XREFs of ExpandDIB_CX @ 0x140159610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ExpandDIB_CX(__int128 *a1, __int16 *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v9; // rdx
  __int16 v10; // r9
  char v11; // r10
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // r13d
  int v15; // edx
  int v16; // r15d
  int v17; // r9d
  __int128 v18; // xmm0
  unsigned int v19; // r10d
  __int16 v20; // ax
  int v21; // r11d
  int v22; // r12d
  int v23; // ecx
  int v24; // r14d
  __int64 v25; // rbx
  __int16 v26; // r8
  __int64 *v27; // r15
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int16 v31; // cx
  int v32; // r9d
  int v33; // ecx
  int v34; // edx
  int v35; // edx
  int v36; // r10d
  int v37; // r9d
  int v38; // r11d
  _BYTE *v39; // rdx
  __int64 v40; // [rsp+0h] [rbp-100h]
  _BYTE *v42; // [rsp+8h] [rbp-F8h]
  __int128 v43; // [rsp+10h] [rbp-F0h]
  __int128 v44; // [rsp+30h] [rbp-D0h]
  _BYTE v45[24]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a4;
  v43 = *a1;
  v44 = a1[2];
  result = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( !a2 )
    return result;
  v9 = (__int64)&a2[(int)v43 + 3] + (int)v43;
  *(_WORD *)(v9 - 6) = *(_WORD *)(v9 - 9);
  *(_BYTE *)(v9 - 4) = *(_BYTE *)(v9 - 7);
  *(_WORD *)(v9 - 3) = *(_WORD *)(v9 - 6);
  *(_BYTE *)(v9 - 1) = *(_BYTE *)(v9 - 4);
  *(_WORD *)v9 = *(_WORD *)(v9 - 3);
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 - 1);
  v10 = *a2;
  v11 = *((_BYTE *)a2 + 2);
  v12 = (__int64)&a2[BYTE8(v43) & 1] + (BYTE8(v43) & 1);
  v13 = v12 + 3;
  *(_WORD *)&v45[18] = *(_WORD *)v12;
  v45[20] = *(_BYTE *)(v12 + 2);
  *(_WORD *)&v45[15] = v10;
  v14 = WORD6(v43) >> 4;
  v45[17] = v11;
  v15 = BYTE12(v43) & 0xF;
  if ( !v15 && v14 )
  {
    v15 = 1;
    *(_WORD *)&v45[18] = v10;
    v16 = 1;
    v45[20] = v11;
    --v14;
    v13 = v12;
    v17 = 3;
    goto LABEL_4;
  }
  v16 = BYTE12(v43) & 0xF;
  v17 = 4 - v15;
  if ( v15 )
  {
    do
    {
LABEL_4:
      v18 = *(_OWORD *)&v45[3];
      v19 = *(unsigned __int16 *)&v45[19];
      --v15;
      v20 = *(_WORD *)v13;
      v21 = *(unsigned __int8 *)(v13 + 2);
      v13 += 3LL;
      *(_WORD *)&v45[16] = *(_WORD *)&v45[19];
      *(_WORD *)&v45[18] = v20;
      v45[20] = v21;
      *(_OWORD *)v45 = v18;
      if ( (BYTE8(v43) & 4) != 0 )
      {
        LOBYTE(v22) = v45[15];
        LOBYTE(v24) = v45[17];
        *(_WORD *)&v45[9] = *(_WORD *)&v45[15];
      }
      else
      {
        v22 = (6 * v45[15] - v45[18] - v45[12]) >> 2;
        if ( (v22 & 0xFF00) != 0 )
          LOBYTE(v22) = ~HIBYTE(v22);
        v45[9] = v22;
        v23 = (6 * (unsigned __int8)v19 - v45[19] - v45[13]) >> 2;
        if ( (v23 & 0xFF00) != 0 )
          LOBYTE(v23) = ~HIBYTE(v23);
        v45[10] = v23;
        v24 = (int)(6 * (v19 >> 8) - v21 - v45[14]) >> 2;
        if ( (v24 & 0xFF00) != 0 )
          LOBYTE(v24) = ~HIBYTE(v24);
      }
      v45[11] = v24;
    }
    while ( v15 );
    v6 = a4;
    goto LABEL_13;
  }
  LOBYTE(v24) = v45[11];
  LOBYTE(v22) = v45[9];
LABEL_13:
  v25 = (unsigned int)(3 - v16);
  v26 = *(_WORD *)&v45[2 * v17 + v17];
  *(_WORD *)&v45[21] = v26;
  v45[23] = v45[2 * v17 + 2 + v17];
  if ( v14 )
  {
    while ( 1 )
    {
      v39 = &v45[2 * v25 + (unsigned int)v25];
      v25 = (unsigned int)(v25 - 1);
      *(_WORD *)v39 = v26;
      v39[2] = v45[23];
      if ( !--v14 )
        break;
      v26 = *(_WORD *)&v45[21];
    }
    LOBYTE(v24) = v45[11];
    LOBYTE(v22) = v45[9];
  }
  v27 = (__int64 *)*((_QWORD *)&v44 + 1);
  v28 = *(_QWORD *)v45;
  v42 = (_BYTE *)(a5 + v6);
  do
  {
    v29 = *v27++;
    v40 = v29;
    if ( (v29 & 0x8000u) != 0LL )
    {
      v30 = *(unsigned __int16 *)&v45[19];
      v31 = *(_WORD *)v13;
      v32 = *(unsigned __int8 *)(v13 + 2);
      v13 += 3LL;
      *(_OWORD *)v45 = *(_OWORD *)&v45[3];
      *(_WORD *)&v45[16] = *(_WORD *)&v45[19];
      *(_WORD *)&v45[18] = v31;
      v45[20] = v32;
      if ( (BYTE8(v43) & 4) != 0 )
      {
        LOBYTE(v24) = v45[17];
        LOBYTE(v22) = v45[15];
        *(_WORD *)&v45[9] = *(_WORD *)&v45[15];
        v45[11] = v45[17];
      }
      else
      {
        v33 = (6 * v45[15] - v45[18] - v45[12]) >> 2;
        if ( (v33 & 0xFF00) != 0 )
          LOBYTE(v33) = ~HIBYTE(v33);
        LOBYTE(v22) = v33;
        v45[9] = v33;
        v34 = (6 * (unsigned __int8)v30 - v45[19] - v45[13]) >> 2;
        if ( (v34 & 0xFF00) != 0 )
          LOBYTE(v34) = ~HIBYTE(v34);
        v45[10] = v34;
        v35 = (int)(6 * (v30 >> 8) - v32 - v45[14]) >> 2;
        if ( (v35 & 0xFF00) != 0 )
          LOBYTE(v35) = ~HIBYTE(v35);
        LOBYTE(v24) = v35;
        v45[11] = v35;
      }
      v28 = *(_QWORD *)v45;
      LOWORD(v29) = v29 & 0x3FFF;
    }
    v36 = HIWORD(v40) * v45[10];
    v37 = HIWORD(v40) * (unsigned __int8)v24;
    v38 = HIWORD(v40) * (unsigned __int8)v22;
    if ( WORD2(v40) )
    {
      v37 += WORD2(v40) * v45[8];
      v36 += WORD2(v40) * HIBYTE(v28);
      v38 += WORD2(v40) * BYTE6(v28);
      if ( WORD1(v40) )
      {
        v37 += WORD1(v40) * BYTE5(v28);
        v36 += WORD1(v40) * BYTE4(v28);
        v38 += WORD1(v40) * BYTE3(v28);
        if ( (_WORD)v29 )
        {
          v37 += (unsigned __int16)v29 * BYTE2(v28);
          v36 += (unsigned __int16)v29 * BYTE1(v28);
          v38 += (unsigned __int16)v29 * v45[0];
        }
      }
    }
    a3[2] = (unsigned int)(v37 + 4096) >> 13;
    a3[1] = (unsigned int)(v36 + 4096) >> 13;
    *a3 = (unsigned int)(v38 + 4096) >> 13;
    result = a5;
    a3 += a5;
  }
  while ( a3 != v42 );
  return result;
}
