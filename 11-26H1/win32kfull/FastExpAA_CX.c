/*
 * XREFs of FastExpAA_CX @ 0x140131E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int16 v9; // di
  _BYTE *v10; // rbx
  __int64 v11; // r10
  __int16 v12; // r13
  int v13; // r11d
  _BYTE *result; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // r13d
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int v25; // r9d
  _BYTE *v26; // rdx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r9d
  int v33; // edx
  _BYTE *v34; // rdx
  int v35; // esi
  int v36; // ebp
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // r10d
  int v41; // r12d
  unsigned int v42; // ecx
  int v43; // r9d
  __int16 v44; // [rsp+0h] [rbp-88h]
  int v45; // [rsp+Ch] [rbp-7Ch]
  unsigned __int16 *v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+18h] [rbp-70h]
  unsigned __int64 v48; // [rsp+20h] [rbp-68h]
  __int16 v49; // [rsp+28h] [rbp-60h]
  unsigned __int8 v50; // [rsp+2Ch] [rbp-5Ch]
  unsigned __int8 v51; // [rsp+2Fh] [rbp-59h]
  unsigned __int8 v52; // [rsp+90h] [rbp+8h]
  unsigned __int8 v53; // [rsp+98h] [rbp+10h]
  __int16 v54; // [rsp+A0h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 96);
  v6 = *(unsigned __int16 **)(a1 + 88);
  v7 = *(unsigned __int8 *)(a1 + 80);
  v8 = a5;
  v48 = v5;
  v9 = *(_WORD *)(a2 + v7 + 2 * v7 - 3);
  LOBYTE(v10) = *(_BYTE *)(a2 + v7 + 2 * v7 - 1);
  v11 = a2 + v7 + 2 * v7 + 3;
  v12 = *(_WORD *)(a2 + v7 + 2 * v7);
  LOBYTE(v13) = *(_BYTE *)(a2 + v7 + 2 * v7 + 2);
  result = a4;
  while ( (unsigned __int64)v6 < v5 )
  {
    v15 = *v6;
    v49 = v9;
    v16 = (result - a3) / v8;
    ++v6;
    v9 = v12;
    v12 = *(_WORD *)v11;
    v46 = v6;
    if ( v15 <= (unsigned int)v16 )
      LODWORD(v16) = v15;
    v44 = v9;
    v17 = (unsigned __int8)v10;
    LODWORD(v10) = (unsigned __int8)v13;
    v13 = *(unsigned __int8 *)(v11 + 2);
    v11 += 3LL;
    v50 = HIBYTE(v9);
    v53 = (unsigned __int8)v10;
    v54 = v12;
    v51 = HIBYTE(v12);
    v52 = v13;
    v47 = v11;
    if ( (_DWORD)v16 == 1 )
    {
      a3[2] = (unsigned int)(v17 + 16 + v13 + 22 * (_DWORD)v10 + 4 * (v13 + v17)) >> 5;
      a3[1] = (HIBYTE(v49) + 16 + HIBYTE(v12) + 22 * HIBYTE(v9) + 4 * (HIBYTE(v12) + (unsigned int)HIBYTE(v49))) >> 5;
      v30 = (unsigned __int8)v49
          + 16
          + (unsigned __int8)v12
          + 22 * (unsigned __int8)v9
          + 4 * ((unsigned __int8)v12 + (unsigned __int8)v49);
LABEL_12:
      v31 = v30 >> 5;
LABEL_13:
      v6 = v46;
      v11 = v47;
      *a3 = v31;
      goto LABEL_14;
    }
    v18 = v16 - 2;
    if ( !v18 )
    {
      a3[2] = (unsigned int)(3 * (_DWORD)v10 + v17 + 2) >> 2;
      v32 = 3 * HIBYTE(v9);
      a3[1] = (v32 + (unsigned int)HIBYTE(v49) + 2) >> 2;
      v33 = 3 * (unsigned __int8)v9;
      *a3 = (v33 + (unsigned int)(unsigned __int8)v49 + 2) >> 2;
      a3 += v8;
      a3[2] = (unsigned int)(v13 + 3 * (_DWORD)v10 + 2) >> 2;
      a3[1] = (v32 + (unsigned int)HIBYTE(v12) + 2) >> 2;
      v31 = ((unsigned int)(unsigned __int8)v12 + v33 + 2) >> 2;
      goto LABEL_13;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v34 = &a3[a5];
      v35 = (unsigned __int8)v9;
      v36 = 2 * HIBYTE(v9);
      v37 = 2 * (unsigned __int8)v9;
      a3[2] = (unsigned int)(v17 + (_DWORD)v10 + 2 * (2 * (_DWORD)v10 + v17 + 2)) >> 3;
      a3[1] = (HIBYTE(v49) + v50 + 2 * (v36 + (unsigned int)HIBYTE(v49) + 2)) >> 3;
      *a3 = ((unsigned __int8)v49 + v35 + 2 * (v37 + (unsigned int)(unsigned __int8)v49 + 2)) >> 3;
      a3 = &v34[a5];
      v34[2] = ((unsigned int)(unsigned __int8)v13 + 14 * (_DWORD)v10 + v17 + 8) >> 4;
      v34[1] = (HIBYTE(v12) + 14 * v50 + (unsigned int)HIBYTE(v49) + 8) >> 4;
      *v34 = ((unsigned __int8)v12 + 14 * v35 + (unsigned int)(unsigned __int8)v49 + 8) >> 4;
      a3[2] = ((unsigned int)v10 + (unsigned __int8)v13 + 2 * (2 * (_DWORD)v10 + (unsigned __int8)v13 + 2)) >> 3;
      v38 = v36 + 2;
      v5 = v48;
      a3[1] = (v50 + HIBYTE(v12) + 2 * ((unsigned int)HIBYTE(v12) + v38)) >> 3;
      v39 = v37 + 2;
      v9 = v44;
      v31 = (v35 + (unsigned __int8)v12 + 2 * ((unsigned int)(unsigned __int8)v12 + v39)) >> 3;
      goto LABEL_13;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v40 = 4 * (_DWORD)v10;
      v41 = v17;
      v42 = v17 + (_DWORD)v10 + 2 * (v17 + 2 + 2 * (_DWORD)v10);
      v10 = &a3[v8];
      a3[2] = v42 >> 3;
      v43 = 4 * HIBYTE(v9);
      a3[1] = (HIBYTE(v49) + HIBYTE(v9) + 2 * (HIBYTE(v49) + 2 * (unsigned int)HIBYTE(v9) + 2)) >> 3;
      *a3 = ((unsigned __int8)v49
           + (unsigned __int8)v9
           + 2 * ((unsigned __int8)v49 + 2 * (unsigned int)(unsigned __int8)v9)
           + 4) >> 3;
      v10[2] = (unsigned int)(v41 + v40 + 8 + v13 + 2 * (v41 + v40)) >> 4;
      v10[1] = (HIBYTE(v49) + v43 + 8 + HIBYTE(v12) + 2 * ((unsigned int)HIBYTE(v49) + v43)) >> 4;
      *v10 = ((unsigned __int8)v49
            + 4 * (unsigned __int8)v9
            + 8
            + (unsigned __int8)v12
            + 2 * ((unsigned __int8)v49 + 4 * (unsigned int)(unsigned __int8)v9)) >> 4;
      v10[a5 + 2] = (unsigned int)(v13 + v40 + 8 + v41 + 2 * (v13 + v40)) >> 4;
      a3 += 2 * a5 + v8;
      v10[a5 + 1] = (HIBYTE(v12) + v43 + 8 + HIBYTE(v49) + 2 * ((unsigned int)HIBYTE(v12) + v43)) >> 4;
      v10[a5] = ((unsigned __int8)v12
               + 4 * (unsigned __int8)v9
               + 8
               + (unsigned __int8)v49
               + 2 * ((unsigned __int8)v12 + 4 * (unsigned int)(unsigned __int8)v9)) >> 4;
      LOBYTE(v10) = v53;
      a3[2] = (v53 + 4 + v13 + 2 * (v13 + 2 * (unsigned int)v53)) >> 3;
      a3[1] = (HIBYTE(v9) + HIBYTE(v12) + 2 * (HIBYTE(v12) + 2 * (unsigned int)HIBYTE(v9) + 2)) >> 3;
      v5 = v48;
      v31 = ((unsigned __int8)v9
           + (unsigned __int8)v12
           + 2 * (2 * (unsigned __int8)v9 + (unsigned int)(unsigned __int8)v12 + 2)) >> 3;
      goto LABEL_13;
    }
    if ( v20 == 1 )
    {
      v21 = v17;
      v22 = (int)v10;
      v23 = 19 * (_DWORD)v10;
      v13 = (unsigned __int8)v9;
      v24 = 25 * (_DWORD)v10;
      LODWORD(v10) = 25 * v50;
      v25 = 25 * v13;
      a3[2] = (unsigned int)(13 * v21 + 16 + v23) >> 5;
      a3[1] = (13 * HIBYTE(v49) + 16 + 19 * (unsigned int)v50) >> 5;
      v45 = 19 * v13;
      *a3 = (13 * (unsigned int)(unsigned __int8)v49 + 16 + 19 * v13) >> 5;
      a3[v8 + 2] = (v24 + (unsigned int)v52 + 2 * (v21 + 2 * v21 + 8)) >> 5;
      a3[v8 + 1] = (v51 + 6 * (unsigned int)HIBYTE(v49) + (_DWORD)v10 + 16) >> 5;
      a3[a5] = (25 * v13
              + (unsigned __int8)v54
              + 2 * ((unsigned __int8)v49 + 2 * ((unsigned int)(unsigned __int8)v49 + 4))) >> 5;
      a3[2 * a5 + 2] = (v21 + v52 + 2 * (v21 + (unsigned int)v52 + 13 * v22 + 8)) >> 5;
      a3[2 * a5 + 1] = (HIBYTE(v49) + v51 + 2 * (HIBYTE(v49) + v51 + 13 * (unsigned int)v50 + 8)) >> 5;
      a3[2 * a5] = ((unsigned __int8)v49
                  + (unsigned __int8)v54
                  + 2 * ((unsigned __int8)v49 + (unsigned int)(unsigned __int8)v54 + 13 * v13 + 8)) >> 5;
      v26 = &a3[2 * a5 + a5];
      LOBYTE(v13) = v52;
      v27 = v21 + 2 * (v52 + 2 * (v52 + 4));
      v12 = v54;
      v28 = v24 + v27;
      v9 = v44;
      v26[2] = v28 >> 5;
      v29 = (_DWORD)v10 + 16;
      LOBYTE(v10) = v53;
      v5 = v48;
      a3 += 4 * a5;
      v26[1] = (HIBYTE(v49) + 6 * (unsigned int)v51 + v29) >> 5;
      *v26 = (v25 + (unsigned __int8)v49 + 2 * ((unsigned __int8)v54 + 2 * ((unsigned int)(unsigned __int8)v54 + 4))) >> 5;
      a3[2] = (13 * (unsigned int)v52 + v23 + 16) >> 5;
      a3[1] = (13 * v51 + 19 * (unsigned int)v50 + 16) >> 5;
      v30 = 13 * (unsigned __int8)v54 + v45 + 16;
      goto LABEL_12;
    }
LABEL_14:
    v8 = a5;
    a3 += a5;
    result = a4;
    if ( a3 == a4 )
      return result;
  }
  return result;
}
