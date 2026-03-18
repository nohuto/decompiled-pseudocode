/*
 * XREFs of FastExpAA_CX @ 0x1C0253320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // r13
  unsigned __int16 *v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int16 v12; // r15
  unsigned __int8 v13; // r9
  __int16 v14; // r12
  unsigned __int8 v15; // si
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 result; // rax
  unsigned int v19; // ecx
  unsigned __int8 v20; // r13
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // r11d
  _BYTE *v26; // r10
  _BYTE *v27; // rdx
  _BYTE *v28; // rdx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // r9d
  int v33; // r12d
  _BYTE *v34; // r10
  _BYTE *v35; // r10
  int v36; // esi
  int v37; // ebx
  int v38; // r15d
  _BYTE *v39; // r13
  int v40; // ecx
  int v41; // r9d
  int v42; // r8d
  int v43; // edx
  int v44; // ecx
  __int16 v45; // [rsp+0h] [rbp-58h]
  __int16 v46; // [rsp+3h] [rbp-55h]
  __int16 v47; // [rsp+6h] [rbp-52h]
  __int64 v48; // [rsp+10h] [rbp-48h]
  __int64 v49; // [rsp+10h] [rbp-48h]
  __int16 v50; // [rsp+18h] [rbp-40h]
  __int16 v51; // [rsp+1Ah] [rbp-3Eh]
  __int64 v52; // [rsp+28h] [rbp-30h]
  unsigned __int64 v53; // [rsp+48h] [rbp-10h]
  unsigned __int8 v54; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v55; // [rsp+A8h] [rbp+50h]
  _BYTE *v56; // [rsp+B0h] [rbp+58h]

  v5 = *(_QWORD *)(a1 + 96);
  v7 = *(unsigned __int16 **)(a1 + 88);
  v9 = a5;
  v53 = v5;
  v10 = -(__int64)a5;
  v11 = a2 + *(unsigned __int8 *)(a1 + 80) + 2LL * *(unsigned __int8 *)(a1 + 80);
  v12 = *(_WORD *)(v11 - 3);
  v13 = *(_BYTE *)(v11 - 1);
  v14 = *(_WORD *)v11;
  v15 = *(_BYTE *)(v11 + 2);
  v16 = v11 + 3;
  v17 = a4 - a3;
  v48 = v17;
  do
  {
    result = v17 / v9;
    if ( (unsigned __int64)v7 >= v5 )
      break;
    v19 = *v7;
    v20 = v13;
    ++v7;
    v45 = v12;
    v50 = v14;
    v12 = v14;
    v46 = v14;
    v14 = *(_WORD *)v16;
    if ( v19 > (unsigned int)result )
      v19 = v17 / v9;
    v13 = v15;
    v55 = v15;
    v15 = *(_BYTE *)(v16 + 2);
    v16 += 3LL;
    v51 = v14;
    v47 = v14;
    v54 = v15;
    v52 = v16;
    v21 = v19 - 1;
    if ( !v21 )
    {
      a3[2] = (v15 + 16 + 22 * v13 + v20 + 4 * (v20 + v15)) >> 5;
      a3[1] = (HIBYTE(v14) + 16 + 22 * HIBYTE(v46) + HIBYTE(v45) + 4 * (HIBYTE(v45) + HIBYTE(v14))) >> 5;
      result = (unsigned int)(((unsigned __int8)v14
                             + 16
                             + 22 * (unsigned __int8)v46
                             + (unsigned __int8)v45
                             + 4 * ((unsigned __int8)v45 + (unsigned __int8)v14)) >> 5);
      *a3 = result;
      goto LABEL_17;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v17 += v10;
      v41 = 3 * v13;
      a3[2] = (v41 + v20 + 2) >> 2;
      v42 = 3 * HIBYTE(v46);
      a3[1] = (v42 + HIBYTE(v45) + 2) >> 2;
      v43 = 3 * (unsigned __int8)v46;
      result = HIBYTE(v14);
      *a3 = (v43 + (unsigned __int8)v45 + 2) >> 2;
      a3 += v9;
      v44 = v41 + v15 + 2;
      v13 = v55;
      a3[2] = v44 >> 2;
      a3[1] = (HIBYTE(v14) + v42 + 2) >> 2;
      *a3 = (v43 + (unsigned __int8)v14 + 2) >> 2;
      goto LABEL_17;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v36 = 2 * HIBYTE(v46);
      v37 = 2 * (unsigned __int8)v46;
      v38 = 2 * v13;
      a3[2] = (v20 + v13 + 2 * (v20 + v38 + 2)) >> 3;
      a3[1] = (HIBYTE(v45) + HIBYTE(v46) + 2 * (v36 + HIBYTE(v45) + 2)) >> 3;
      *a3 = ((unsigned __int8)v45 + (unsigned __int8)v46 + 2 * (v37 + (unsigned __int8)v45 + 2)) >> 3;
      v56 = &a3[a5];
      v56[2] = (v20 + 14 * v13 + v54 + 8) >> 4;
      v56[1] = (HIBYTE(v45) + 14 * HIBYTE(v46) + HIBYTE(v14) + 8) >> 4;
      v17 = v48 - a5 - a5;
      *v56 = ((unsigned __int8)v45 + 14 * (unsigned __int8)v46 + (unsigned __int8)v14 + 8) >> 4;
      v39 = &v56[a5];
      result = v36 + (unsigned int)HIBYTE(v14);
      v39[2] = (v54 + 4 + v13 + 2 * (v38 + v54)) >> 3;
      a3 = v39;
      v39[1] = (HIBYTE(v14) + 4 + HIBYTE(v46) + 2 * (int)result) >> 3;
      v40 = v37 + (unsigned __int8)v14 + 2;
      v9 = a5;
      v30 = ((unsigned __int8)v14 + (unsigned __int8)v46 + 2 * v40) >> 3;
LABEL_11:
      v13 = v55;
LABEL_12:
      v10 = -(__int64)a5;
      v15 = v54;
      v12 = v50;
      v14 = v51;
      *a3 = v30;
LABEL_17:
      v16 = v52;
      goto LABEL_18;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      v31 = v13;
      v32 = 4 * HIBYTE(v46);
      v33 = 2 * (unsigned __int8)v46;
      a3[2] = (v20 + v31 + 2 * (v20 + 2 * v31 + 2)) >> 3;
      a3[1] = (HIBYTE(v45) + HIBYTE(v46) + 2 * (HIBYTE(v45) + 2 * HIBYTE(v46) + 2)) >> 3;
      *a3 = ((unsigned __int8)v45 + (unsigned __int8)v46 + 4 + 2 * ((unsigned __int8)v45 + v33)) >> 3;
      v34 = &a3[v9];
      v34[2] = (v20 + 4 * v31 + 8 + v15 + 2 * (v20 + 4 * v31)) >> 4;
      v34[1] = (HIBYTE(v45) + v32 + 8 + HIBYTE(v47) + 2 * (HIBYTE(v45) + v32)) >> 4;
      *v34 = ((unsigned __int8)v45
            + 4 * (unsigned __int8)v46
            + 8
            + (unsigned __int8)v47
            + 2 * ((unsigned __int8)v45 + 4 * (unsigned __int8)v46)) >> 4;
      v35 = &v34[a5];
      v35[2] = (v15 + 4 * v31 + 8 + v20 + 2 * (v15 + 4 * v31)) >> 4;
      v35[1] = (v32 + HIBYTE(v47) + 8 + HIBYTE(v45) + 2 * (v32 + HIBYTE(v47))) >> 4;
      *v35 = ((unsigned __int8)v47
            + 4 * (unsigned __int8)v46
            + 8
            + (unsigned __int8)v45
            + 2 * ((unsigned __int8)v47 + 4 * (unsigned __int8)v46)) >> 4;
      a3 = &v35[a5];
      v13 = v55;
      a3[2] = (v15 + 4 + v55 + 2 * (v15 + 2 * v55)) >> 3;
      result = v33 + (unsigned int)(unsigned __int8)v47;
      v9 = a5;
      a3[1] = (HIBYTE(v47) + 4 + HIBYTE(v46) + 2 * (HIBYTE(v47) + 2 * HIBYTE(v46))) >> 3;
      v17 = v10 + v17 - a5 - a5;
      v30 = ((unsigned __int8)v47 + 4 + (unsigned __int8)v46 + 2 * (int)result) >> 3;
      goto LABEL_12;
    }
    if ( v24 == 1 )
    {
      v49 = v10 + v17;
      v25 = 25 * HIBYTE(v46);
      a3[2] = (13 * v20 + 16 + 19 * v13) >> 5;
      a3[1] = (13 * HIBYTE(v45) + 16 + 19 * HIBYTE(v46)) >> 5;
      *a3 = (13 * (unsigned __int8)v45 + 16 + 19 * (unsigned __int8)v46) >> 5;
      v26 = &a3[v9];
      v26[2] = (v15 + 25 * v13 + 2 * (v20 + 2 * v20 + 8)) >> 5;
      v26[1] = (HIBYTE(v14) + 6 * HIBYTE(v45) + v25 + 16) >> 5;
      *v26 = ((unsigned __int8)v14 + 6 * (unsigned __int8)v45 + 25 * (unsigned __int8)v46 + 16) >> 5;
      v27 = &v26[a5];
      v27[2] = (v15 + v20 + 2 * (v15 + v20 + 13 * v13) + 16) >> 5;
      v27[1] = (HIBYTE(v14) + HIBYTE(v45) + 2 * (HIBYTE(v14) + HIBYTE(v45) + 13 * HIBYTE(v46) + 8)) >> 5;
      *v27 = ((unsigned __int8)v14
            + (unsigned __int8)v45
            + 2 * ((unsigned __int8)v14 + (unsigned __int8)v45 + 13 * (unsigned __int8)v46 + 8)) >> 5;
      v28 = &v27[a5];
      v9 = a5;
      v28[2] = (v20 + 25 * v13 + 2 * (v15 + 2 * (v15 + 4))) >> 5;
      v29 = v25 + 16;
      v17 = v49 - a5 - a5 - a5;
      v28[1] = (HIBYTE(v45) + 6 * HIBYTE(v14) + v29) >> 5;
      a3 = &v28[a5];
      *v28 = ((unsigned __int8)v45 + 6 * (unsigned __int8)v14 + 25 * (unsigned __int8)v46 + 16) >> 5;
      a3[2] = (13 * v15 + 19 * v13 + 16) >> 5;
      result = 13 * (unsigned int)(unsigned __int8)v14;
      a3[1] = (13 * HIBYTE(v14) + 19 * HIBYTE(v46) + 16) >> 5;
      v30 = (int)(result + 19 * (unsigned __int8)v46 + 16) >> 5;
      goto LABEL_11;
    }
LABEL_18:
    v5 = v53;
    v17 += v10;
    a3 += v9;
    v48 = v17;
  }
  while ( a3 != a4 );
  return result;
}
