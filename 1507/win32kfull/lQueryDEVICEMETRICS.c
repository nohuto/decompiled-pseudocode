/*
 * XREFs of lQueryDEVICEMETRICS @ 0x1C00A8210
 * Callers:
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 * Callees:
 *     bFDXform @ 0x1C00A8634 (bFDXform.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall lQueryDEVICEMETRICS(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // r8
  __int16 *v11; // rax
  int v12; // r14d
  int v13; // r15d
  int v14; // r11d
  int v15; // r12d
  int v16; // ecx
  int v17; // eax
  int v18; // r11d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // rcx
  int v25; // r9d
  int v26; // r8d
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  int v30; // eax
  int v31; // r11d
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r11d
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // r10d
  __int64 v42; // r8
  int v43; // eax
  int v44; // eax
  int v45; // edx
  char v46; // cl
  int v47; // r8d
  int v48; // ecx
  unsigned int v49; // edx
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  int v54; // edx
  int v55; // edx
  __int64 v56; // r8
  float v57; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v58[8]; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v59[8]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(v3 + 176);
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v7 + v6;
  if ( !(_DWORD)v6 )
    v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 80);
  if ( v9 < 0 )
    v9 = -v9;
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 192) + 16LL);
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 256);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 168);
  *(_DWORD *)(a3 + 24) = 16 * *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a3 + 28) = 16 * *(_DWORD *)(a1 + 148);
  v11 = *(__int16 **)(a1 + 8);
  v12 = v11[228];
  v13 = v11[229];
  v14 = v11[226];
  v15 = v11[227];
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 20) = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x40) != 0 )
  {
    *(_QWORD *)(a3 + 108) = 0LL;
  }
  else
  {
    *(_DWORD *)(a3 + 108) = *(__int16 *)(*(_QWORD *)(a1 + 8) + 328LL);
    *(_DWORD *)(a3 + 112) = *(__int16 *)(*(_QWORD *)(a1 + 8) + 330LL);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    if ( v8 && (*(_DWORD *)(a1 + 116) & 3) != 0 )
      v40 = (unsigned int)(__int16)__ROR2__(*(_WORD *)(v8 + 76), 8);
    else
      v40 = (unsigned int)-(__int16)__ROR2__(*(_WORD *)(v10 + v7 + 38), 8);
    *(_DWORD *)(a3 + 108) -= FixMul(v40, 22272LL, v10);
    *(_DWORD *)(a3 + 112) += FixMul(v41, 22272LL, v42);
  }
  *(_DWORD *)(a3 + 116) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 324LL);
  if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 96);
    v17 = v14 * v16;
    v18 = 1;
    v19 = ((v17 >> 15) + 1) >> 1;
    if ( !v19 )
    {
      v19 = -1;
      if ( v16 > 0 )
        v19 = 1;
    }
    *(_DWORD *)(a3 + 52) = v19;
    *(_DWORD *)(a3 + 48) = 0;
    v20 = (((v12 * v16) >> 15) + 1) >> 1;
    if ( !v20 )
    {
      v20 = -1;
      if ( v16 > 0 )
        v20 = 1;
    }
    *(_DWORD *)(a3 + 60) = v20;
    *(_DWORD *)(a3 + 56) = 0;
    *(_DWORD *)(a3 + 32) = 0;
    *(_DWORD *)(a3 + 40) = 0;
    *(_DWORD *)(a3 + 44) = -((((v13 * v16) >> 15) + 1) >> 1);
    v21 = v9 * *(_DWORD *)(a3 + 108);
    *(_DWORD *)(a3 + 36) = -((((v15 * v16) >> 15) + 1) >> 1);
    *(_DWORD *)(a3 + 108) = ((v21 >> 15) + 1) >> 1;
    *(_DWORD *)(a3 + 112) = (((v9 * *(_DWORD *)(a3 + 112)) >> 15) + 1) >> 1;
    *(_DWORD *)(a3 + 116) = (((v9 * *(_DWORD *)(a3 + 116)) >> 15) + 1) >> 1;
  }
  else
  {
    *(_DWORD *)(a3 + 20) = 0;
    v58[3] = -v13;
    v58[7] = -v15;
    v58[0] = 0;
    v58[1] = v12;
    v58[2] = 0;
    v58[4] = 0;
    v58[5] = v14;
    v58[6] = 0;
    bFDXform(a1 + 56, v59, v58);
    v25 = v59[4];
    v26 = (v59[0] >> 3) + 1;
    *(_DWORD *)(a3 + 60) = ((v59[1] >> 3) + 1) >> 1;
    *(_DWORD *)(a3 + 40) = ((v59[2] >> 3) + 1) >> 1;
    v27 = v26 >> 1;
    *(_DWORD *)(a3 + 44) = ((v59[3] >> 3) + 1) >> 1;
    v28 = ((v25 >> 3) + 1) >> 1;
    *(_DWORD *)(a3 + 52) = ((v59[5] >> 3) + 1) >> 1;
    v29 = (v59[6] >> 3) + 1;
    *(_DWORD *)(a3 + 56) = v27;
    *(_DWORD *)(a3 + 32) = v29 >> 1;
    v30 = (v59[7] >> 3) + 1;
    *(_DWORD *)(a3 + 48) = v28;
    *(_DWORD *)(a3 + 36) = v30 >> 1;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0 && (!v27 || !v28) )
    {
      v24 = *(unsigned int *)(a1 + 92);
      if ( !v27 )
      {
        v43 = 1;
        if ( (int)v24 > 0 )
          v43 = -1;
        *(_DWORD *)(a3 + 56) = v43;
      }
      if ( !v28 )
      {
        v44 = 1;
        if ( (int)v24 > 0 )
          v44 = -1;
        *(_DWORD *)(a3 + 48) = v44;
      }
    }
    v57 = 0.0;
    bFToL(v24, &v57, 0LL);
    v32 = v31 + (SLODWORD(v57) >> 3);
    v57 = 0.0;
    *(_DWORD *)(a3 + 108) = v32 >> 1;
    bFToL(v33, &v57, v34);
    v36 = v35 + (SLODWORD(v57) >> 3);
    v57 = 0.0;
    *(_DWORD *)(a3 + 112) = v36 >> 1;
    bFToL(v37, &v57, v38);
    *(_DWORD *)(a3 + 116) = (v18 + (SLODWORD(v57) >> 3)) >> 1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x21) != 0 )
  {
    v57 = (float)*(int *)(a1 + 80) * 0.000015258789;
    *(float *)(a3 + 76) = v57;
    v57 = (float)*(int *)(a1 + 96) * 0.000015258789;
    *(float *)(a3 + 88) = v57;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 116) & (unsigned __int8)v18) == 0 )
    {
      v57 = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a3 + 80) = v57;
      v57 = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
      *(float *)(a3 + 84) = v57;
    }
  }
  v22 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v22 + 300) & 2) != 0 )
  {
    v45 = *(_DWORD *)(a1 + 124);
    v46 = *(_BYTE *)(v22 + 397);
    v47 = *(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v45;
    if ( v47 < 0 )
      v47 = 0;
    v48 = v46 & 0xF0;
    if ( v48 == 16 )
    {
      v53 = (*(_DWORD *)(a1 + 48) + 18) / 32;
    }
    else
    {
      if ( v48 == 32 )
      {
        v50 = *(_DWORD *)(a1 + 48);
        if ( (v18 + (*(int *)(a1 + 128) >> 15)) >> 1 >= 14 )
        {
          v51 = v50 + 9;
          v52 = 954437177;
        }
        else
        {
          v51 = v50 + 12;
          v52 = 715827883;
        }
        v49 = (int)((unsigned __int64)(v51 * (__int64)v52) >> 32) >> 2;
      }
      else
      {
        v49 = (int)((unsigned __int64)(53876069772LL * v45) >> 32) >> 6;
      }
      v53 = (v49 >> 31) + v49;
    }
    v54 = 16 * (v53 - v47);
    if ( v54 < 0 )
      v54 = 0;
    *(_DWORD *)(a3 + 92) = v54;
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    v39 = (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 430LL);
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 116) & (unsigned __int8)v18) != 0 )
    {
      *(_DWORD *)(a3 + 100) = ((v9 * (int)v39) >> 12) + 16;
      *(_DWORD *)(a3 + 104) = ((v9 * *(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL)) >> 12) + 16;
    }
    else
    {
      v57 = 0.0;
      bFToL(v39, &v57, 0LL);
      v55 = LODWORD(v57) + 16;
      v57 = 0.0;
      *(_DWORD *)(a3 + 100) = v55;
      bFToL((unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL), &v57, v56);
      *(_DWORD *)(a3 + 104) = LODWORD(v57) + 16;
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 68) = v18;
    *(_DWORD *)(a3 + 72) = 20;
  }
  else
  {
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 164) - *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a3 + 72) = *(_DWORD *)(a1 + 172);
  }
  return 124LL;
}
