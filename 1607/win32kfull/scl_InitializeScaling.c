/*
 * XREFs of scl_InitializeScaling @ 0x1C001B5AC
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C001B460 (fsg_InitInterpreterTrans.c)
 * Callees:
 *     scl_ComputeScaling @ 0x1C001B89C (scl_ComputeScaling.c)
 *     mth_max_abs @ 0x1C001B954 (mth_max_abs.c)
 *     mth_Non90DegreeTransformation @ 0x1C001B96C (mth_Non90DegreeTransformation.c)
 *     mth_PositiveSquare @ 0x1C001BA38 (mth_PositiveSquare.c)
 *     mth_FoldPointSizeResolution @ 0x1C001BA58 (mth_FoldPointSizeResolution.c)
 *     scl_Scale @ 0x1C001E4D8 (scl_Scale.c)
 *     mth_IntelMul @ 0x1C00C7178 (mth_IntelMul.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     mth_90degClosestRotationFactor @ 0x1C02DC9B8 (mth_90degClosestRotationFactor.c)
 *     mth_90degRotationFactorForEmboldening @ 0x1C02DCB3C (mth_90degRotationFactorForEmboldening.c)
 *     adjustTrans @ 0x1C02DCBA8 (adjustTrans.c)
 */

__int64 __fastcall scl_InitializeScaling(
        __int64 a1,
        int a2,
        unsigned int *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        int a8,
        unsigned __int16 a9,
        __int16 a10,
        int a11,
        _WORD *a12,
        _WORD *a13,
        int a14,
        _DWORD *a15)
{
  __int128 v16; // xmm0
  __int16 v17; // r13
  __int128 v19; // xmm1
  __int64 v20; // r15
  __int64 v22; // r8
  unsigned __int16 v23; // r12
  __int64 v24; // rax
  unsigned int v25; // r11d
  __int64 v26; // rax
  int v27; // r14d
  unsigned int v28; // esi
  unsigned int v29; // eax
  __int64 v30; // r9
  int v31; // eax
  int v32; // r8d
  int v33; // r9d
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // r8d
  __int128 v39; // xmm0
  int v40; // eax
  int v41; // r8d
  int v42; // edx
  bool v43; // zf
  bool v44; // al
  _WORD *v45; // r10
  __int128 v47; // xmm0
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // r11d
  __int64 v52; // r10
  int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // r11d
  __int64 v56; // r10
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // esi
  __int16 *v60; // r10
  _WORD *v61; // r11
  __int16 v62; // r15
  int v63; // ecx
  int v64; // r9d
  __int16 v65; // cx
  __int16 v66; // ax
  __int16 v67; // ax
  __int16 v68; // ax
  __int16 v69; // ax
  __int16 v70; // ax
  int v71; // ebx
  int v72; // esi
  int v73; // r14d
  __int64 v74; // r8
  int fixed; // eax
  int v76; // r10d
  unsigned int v77; // r10d
  unsigned int v78; // r10d
  unsigned int v79; // r10d
  int v80; // r11d
  unsigned int v81; // r10d
  int v82; // edx
  __int128 v83; // [rsp+30h] [rbp-51h] BYREF
  __int128 v84; // [rsp+40h] [rbp-41h]
  unsigned int v85; // [rsp+50h] [rbp-31h]
  _OWORD v86[2]; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v87; // [rsp+78h] [rbp-9h]
  unsigned int v88; // [rsp+D0h] [rbp+4Fh]
  __int64 v90; // [rsp+E0h] [rbp+5Fh]
  int v91; // [rsp+E8h] [rbp+67h] BYREF

  LOWORD(v91) = a4;
  v16 = *(_OWORD *)a3;
  v17 = a7;
  v19 = *((_OWORD *)a3 + 1);
  v20 = (int)a5;
  v88 = a3[8];
  v85 = v88;
  v83 = v16;
  v84 = v19;
  mth_FoldPointSizeResolution(a5, a6, a7, a3);
  v23 = a9;
  if ( ((_WORD)a8 || a9) && ((unsigned int)CompDiv(72LL, v17 * v20) + 0x8000) >> 16 > 0x32 )
    adjustTrans(a3);
  v24 = (int)a3[2];
  v25 = a3[8];
  if ( (_DWORD)v24 )
  {
    v49 = CompDiv(v25, v24 * (int)a3[6]);
    v50 = (int)a3[7];
    *a3 -= v49;
    a3[1] -= CompDiv(v51, v52 * v50);
  }
  v26 = (int)a3[5];
  if ( (_DWORD)v26 )
  {
    v53 = CompDiv(v25, v26 * (int)a3[6]);
    v54 = (int)a3[7];
    a3[3] -= v53;
    a3[4] -= CompDiv(v55, v56 * v54);
  }
  *((_QWORD *)a3 + 3) = 0LL;
  v27 = a14;
  v28 = a4 << 16;
  a3[8] = (int)(v25 + 2) >> 14;
  *(_DWORD *)(a1 + 472) = v27;
  if ( v27 )
  {
    *(_DWORD *)(a1 + 376) = v28;
    *(_DWORD *)(a1 + 380) = v28;
    *(_DWORD *)(a1 + 384) = mth_max_abs(*a3, a3[1], v22, 0LL);
    *(_DWORD *)(a1 + 388) = mth_max_abs(a3[3], a3[4], v57, v58);
  }
  else
  {
    v29 = mth_max_abs(*a3, a3[1], v22, 0LL);
    *(_DWORD *)(a1 + 376) = v29;
    v31 = mth_max_abs(a3[3], a3[4], v29, v30);
    *(_DWORD *)(a1 + 380) = v31;
    *(_DWORD *)(a1 + 384) = v32;
    *(_DWORD *)(a1 + 388) = v31;
    if ( a2 != v33 )
    {
      *(_DWORD *)(a1 + 376) = (v32 + 0x8000) & 0xFFFF0000;
      *(_DWORD *)(a1 + 380) = (v31 + 0x8000) & 0xFFFF0000;
    }
  }
  v34 = scl_ComputeScaling(a1 + 264, *(unsigned int *)(a1 + 376), v28);
  v35 = *(unsigned int *)(a1 + 380);
  *(_DWORD *)(a1 + 184) = v34;
  v36 = scl_ComputeScaling(a1 + 280, v35, v28);
  v37 = *(unsigned int *)(a1 + 376);
  v38 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 188) = v36;
  if ( (int)v37 < v38 )
  {
    v47 = *(_OWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 192) = v36;
    LODWORD(v90) = (_DWORD)v37 << 16;
    HIDWORD(v90) = (int)v37 >> 16;
    *(_OWORD *)(a1 + 296) = v47;
    v48 = CompDiv((unsigned int)v38, v90);
    v41 = *(_DWORD *)(a1 + 380);
    *(_DWORD *)(a1 + 312) = v48;
    *(_DWORD *)(a1 + 316) = 0x10000;
  }
  else
  {
    v39 = *(_OWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 184);
    *(_OWORD *)(a1 + 296) = v39;
    *(_DWORD *)(a1 + 312) = 0x10000;
    v40 = CompDiv(v37, (__int64)v38 << 16);
    v41 = *(_DWORD *)(a1 + 376);
    *(_DWORD *)(a1 + 316) = v40;
  }
  v42 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 28) = v41;
  v43 = *(_DWORD *)(a1 + 376) == v42;
  *a15 = (__int16)((unsigned int)(v42 + 0x8000) >> 16);
  *(_BYTE *)(a1 + 340) = v43;
  *(_WORD *)(a1 + 24) = (unsigned int)(v41 + 0x8000) >> 16;
  *(_WORD *)(a1 + 26) = (unsigned int)(v20 + 0x8000) >> 16;
  *(_BYTE *)(a1 + 320) = mth_PositiveSquare(a3);
  mth_Non90DegreeTransformation(&v83, &a5, &a14);
  v44 = a5 != 0;
  *(_BYTE *)(a1 + 321) = 0;
  *(_BYTE *)(a1 + 321) = v44;
  if ( a14 )
    *(_BYTE *)(a1 + 321) |= 2u;
  v45 = a13;
  *a12 = 0;
  *v45 = 0;
  if ( !(_WORD)a8 && !v23 )
  {
    *(_QWORD *)(a1 + 444) = 0LL;
    return 0LL;
  }
  v59 = (int)(CompDiv(72LL, v17 * v20) + 0x8000) >> 16;
  v62 = mth_90degRotationFactorForEmboldening(a3);
  if ( v62 == 8 )
    v62 = mth_90degClosestRotationFactor();
  if ( v27 )
  {
    v63 = (unsigned __int16)v59;
    LOWORD(v59) = v91;
    *v60 = (v23 * v63 - 10) / 1000;
  }
  v64 = ((unsigned __int16)v59 * v23 - 10) / 1000;
  v65 = v59 * a8;
  *(_WORD *)(a1 + 444) = v64;
  *(_WORD *)(a1 + 446) = (__int16)(v65 - 10) / 1000 + 1;
  if ( !v27 )
    *v60 = v64;
  switch ( v62 )
  {
    case 0:
      v67 = *v60 + 1;
      goto LABEL_48;
    case 1:
      v68 = -*v60;
      goto LABEL_41;
    case 2:
      v70 = -1 - *v60;
      goto LABEL_46;
    case 3:
      v66 = *v60;
      goto LABEL_44;
    case 4:
      v70 = *v60 + 1;
LABEL_46:
      *v61 = v70;
      goto LABEL_50;
    case 5:
      v68 = *v60;
LABEL_41:
      *v61 = v68;
      v69 = -1 - *v60;
LABEL_49:
      *v60 = v69;
      goto LABEL_50;
    case 6:
      v67 = -1 - *v60;
LABEL_48:
      *v61 = v67;
      v69 = -*v60;
      goto LABEL_49;
    case 7:
      v66 = -*v60;
LABEL_44:
      *v61 = v66;
      ++*v60;
      goto LABEL_50;
  }
  *v61 = 0;
  *v60 = 0;
LABEL_50:
  if ( v27 )
    goto LABEL_60;
  if ( v17 != a6 )
  {
    v71 = DWORD1(v83);
    a8 = *(unsigned __int16 *)(a1 + 446) << 16;
    v91 = *(unsigned __int16 *)(a1 + 444) << 16;
    FixMul(DWORD1(v83), HIDWORD(v83), (unsigned __int16)v59);
    v72 = v84;
    v73 = v83;
    fixed = FixMul((unsigned int)v83, (unsigned int)v84, v74);
    if ( fixed - v76 >= 0 )
      v77 = fixed - v76;
    else
      v77 = v76 - fixed;
    if ( v77 )
    {
      a15 = (_DWORD *)((__int64)v73 << 16);
      LODWORD(v83) = CompDiv(v77, a15);
      a15 = (_DWORD *)__PAIR64__(v71 >> 16, v71 << 16);
      DWORD1(v83) = CompDiv(v78, __PAIR64__(v71 >> 16, v71 << 16));
      a15 = (_DWORD *)__PAIR64__(v80 >> 16, v80 << 16);
      HIDWORD(v83) = CompDiv(v79, __PAIR64__(v80 >> 16, v80 << 16));
      a15 = (_DWORD *)__PAIR64__(v72 >> 16, v72 << 16);
      LODWORD(v84) = CompDiv(v81, __PAIR64__(v72 >> 16, v72 << 16));
      v87 = v88;
      v86[0] = v83;
      DWORD1(v86[0]) = -DWORD1(v83);
      HIDWORD(v86[0]) = -HIDWORD(v83);
      v86[1] = v84;
      mth_IntelMul(1, (unsigned int)&a8, (unsigned int)&v91, (unsigned int)&v83, 0x10000, 0x10000);
      a8 = CompDiv((unsigned int)v17, (__int16)a6 * (__int64)a8);
      mth_IntelMul(1, (unsigned int)&a8, (unsigned int)&v91, (unsigned int)v86, 0x10000, 0x10000);
      *(_WORD *)(a1 + 446) = (abs32(a8) + 0x8000) >> 16;
      *(_WORD *)(a1 + 444) = (abs32(v91) + 0x8000) >> 16;
    }
    else
    {
      *(_DWORD *)(a1 + 444) = 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 321) & 1) != 0 )
  {
LABEL_60:
    v82 = *(_DWORD *)(a1 + 188);
    a8 = a10;
    scl_Scale(a1 + 280, v82, (unsigned int)&a8, a1 + 448, 1);
    *(_DWORD *)(a1 + 448) &= 0xFFFFFFC0;
  }
  else
  {
    *(_DWORD *)(a1 + 448) = -64 * a11;
  }
  return 0LL;
}
