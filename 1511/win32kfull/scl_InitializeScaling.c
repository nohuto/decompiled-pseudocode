/*
 * XREFs of scl_InitializeScaling @ 0x1C00A2E10
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C00A2CC4 (fsg_InitInterpreterTrans.c)
 * Callees:
 *     scl_ComputeScaling @ 0x1C00A323C (scl_ComputeScaling.c)
 *     mth_max_abs @ 0x1C00A32F4 (mth_max_abs.c)
 *     mth_PositiveSquare @ 0x1C00A330C (mth_PositiveSquare.c)
 *     mth_IntelMul @ 0x1C00ADF24 (mth_IntelMul.c)
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     scl_Scale @ 0x1C00B3094 (scl_Scale.c)
 *     mth_Non90DegreeTransformation @ 0x1C00B314C (mth_Non90DegreeTransformation.c)
 *     mth_FoldPointSizeResolution @ 0x1C00B3218 (mth_FoldPointSizeResolution.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     mth_90degClosestRotationFactor @ 0x1C02D98BC (mth_90degClosestRotationFactor.c)
 *     adjustTrans @ 0x1C02DC8C0 (adjustTrans.c)
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
  __int64 v17; // r14
  __int128 v19; // xmm1
  unsigned __int16 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // r11d
  __int64 v25; // rax
  int v26; // r15d
  unsigned int v27; // esi
  int v28; // eax
  int v29; // r8d
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // r8d
  __int128 v35; // xmm0
  int v36; // eax
  int v37; // r8d
  int v38; // edx
  bool v39; // zf
  bool v40; // al
  _WORD *v41; // r10
  __int128 v43; // xmm0
  int v44; // eax
  __int16 v45; // r12
  int v46; // esi
  __int16 *v47; // r10
  _WORD *v48; // r11
  int v49; // eax
  int v50; // esi
  __int16 v51; // r9
  int v52; // ebx
  int v53; // ecx
  __int16 v54; // ax
  __int16 v55; // ax
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // r11d
  __int64 v59; // r10
  int v60; // eax
  __int64 v61; // rdx
  unsigned int v62; // r11d
  __int64 v63; // r10
  int v64; // edx
  unsigned int v65; // edx
  __int16 v66; // ax
  __int16 v67; // ax
  __int16 v68; // ax
  int v69; // ebx
  int v70; // esi
  int v71; // r14d
  int fixed; // eax
  int v73; // r10d
  unsigned int v74; // r10d
  unsigned int v75; // r10d
  unsigned int v76; // r10d
  int v77; // r11d
  unsigned int v78; // r10d
  int v79; // eax
  int v80; // eax
  int v81; // edx
  __int128 v82; // [rsp+30h] [rbp-50h] BYREF
  __int128 v83; // [rsp+40h] [rbp-40h]
  unsigned int v84; // [rsp+50h] [rbp-30h]
  _OWORD v85[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v86; // [rsp+78h] [rbp-8h]
  unsigned int v87; // [rsp+C0h] [rbp+40h]
  __int64 v88; // [rsp+D0h] [rbp+50h]
  int v89; // [rsp+D8h] [rbp+58h] BYREF

  LOWORD(v89) = a4;
  v16 = *(_OWORD *)a3;
  v17 = (int)a5;
  v19 = *((_OWORD *)a3 + 1);
  v87 = a3[8];
  v84 = v87;
  v82 = v16;
  v83 = v19;
  mth_FoldPointSizeResolution(a5, a6, a7, a3);
  v22 = a9;
  if ( ((_WORD)a8 || a9) && ((unsigned int)CompDiv(72LL, (__int16)a7 * v17) + 0x8000) >> 16 > 0x32 )
    adjustTrans(a3);
  v23 = (int)a3[2];
  v24 = a3[8];
  if ( (_DWORD)v23 )
  {
    v56 = CompDiv(v24, v23 * (int)a3[6]);
    v57 = (int)a3[7];
    *a3 -= v56;
    a3[1] -= CompDiv(v58, v59 * v57);
  }
  v25 = (int)a3[5];
  if ( (_DWORD)v25 )
  {
    v60 = CompDiv(v24, v25 * (int)a3[6]);
    v61 = (int)a3[7];
    a3[3] -= v60;
    a3[4] -= CompDiv(v62, v63 * v61);
  }
  *((_QWORD *)a3 + 3) = 0LL;
  v26 = a14;
  v27 = a4 << 16;
  a3[8] = (int)(v24 + 2) >> 14;
  *(_DWORD *)(a1 + 472) = v26;
  if ( v26 )
  {
    *(_DWORD *)(a1 + 376) = v27;
    *(_DWORD *)(a1 + 380) = v27;
    *(_DWORD *)(a1 + 384) = mth_max_abs(*a3, a3[1]);
    *(_DWORD *)(a1 + 388) = mth_max_abs(a3[3], a3[4]);
  }
  else
  {
    *(_DWORD *)(a1 + 376) = mth_max_abs(*a3, a3[1]);
    v28 = mth_max_abs(a3[3], a3[4]);
    *(_DWORD *)(a1 + 380) = v28;
    *(_DWORD *)(a1 + 384) = v29;
    *(_DWORD *)(a1 + 388) = v28;
    if ( a2 )
    {
      *(_DWORD *)(a1 + 376) = (v29 + 0x8000) & 0xFFFF0000;
      *(_DWORD *)(a1 + 380) = (v28 + 0x8000) & 0xFFFF0000;
    }
  }
  v30 = scl_ComputeScaling(a1 + 264, *(unsigned int *)(a1 + 376), v27);
  v31 = *(unsigned int *)(a1 + 380);
  *(_DWORD *)(a1 + 184) = v30;
  v32 = scl_ComputeScaling(a1 + 280, v31, v27);
  v33 = *(unsigned int *)(a1 + 376);
  v34 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 188) = v32;
  if ( (int)v33 < v34 )
  {
    v43 = *(_OWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 192) = v32;
    LODWORD(v88) = (_DWORD)v33 << 16;
    HIDWORD(v88) = (int)v33 >> 16;
    *(_OWORD *)(a1 + 296) = v43;
    v44 = CompDiv((unsigned int)v34, v88);
    v37 = *(_DWORD *)(a1 + 380);
    *(_DWORD *)(a1 + 312) = v44;
    *(_DWORD *)(a1 + 316) = 0x10000;
  }
  else
  {
    v35 = *(_OWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 184);
    *(_OWORD *)(a1 + 296) = v35;
    *(_DWORD *)(a1 + 312) = 0x10000;
    v36 = CompDiv(v33, (__int64)v34 << 16);
    v37 = *(_DWORD *)(a1 + 376);
    *(_DWORD *)(a1 + 316) = v36;
  }
  v38 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 28) = v37;
  v39 = *(_DWORD *)(a1 + 376) == v38;
  *a15 = (__int16)((unsigned int)(v38 + 0x8000) >> 16);
  *(_BYTE *)(a1 + 340) = v39;
  *(_WORD *)(a1 + 24) = (unsigned int)(v37 + 0x8000) >> 16;
  *(_WORD *)(a1 + 26) = (unsigned int)(v17 + 0x8000) >> 16;
  *(_BYTE *)(a1 + 320) = mth_PositiveSquare(a3);
  mth_Non90DegreeTransformation(&v82, &a5, &a14);
  v40 = a5 != 0;
  *(_BYTE *)(a1 + 321) = 0;
  *(_BYTE *)(a1 + 321) = v40;
  if ( a14 )
    *(_BYTE *)(a1 + 321) |= 2u;
  v41 = a13;
  *a12 = 0;
  *v41 = 0;
  if ( !(_WORD)a8 && !v22 )
  {
    *(_QWORD *)(a1 + 444) = 0LL;
    return 0LL;
  }
  v45 = a7;
  v46 = CompDiv(72LL, (__int16)a7 * v17) + 0x8000;
  v49 = a3[3];
  v50 = v46 >> 16;
  if ( !v49 && !a3[1] )
  {
    if ( (int)*a3 > 0 )
    {
      if ( (int)a3[4] <= 0 )
        v51 = 4;
      else
        v51 = 0;
      goto LABEL_26;
    }
    if ( (*a3 & 0x80000000) != 0 )
    {
      if ( (a3[4] & 0x80000000) == 0 )
        v51 = 6;
      else
        v51 = 2;
      goto LABEL_26;
    }
LABEL_54:
    v51 = mth_90degClosestRotationFactor(a3);
    goto LABEL_26;
  }
  if ( *a3 || a3[4] )
    goto LABEL_54;
  if ( v49 >= 0 )
  {
    if ( v49 <= 0 )
      goto LABEL_54;
    if ( (a3[1] & 0x80000000) == 0 )
      v51 = 5;
    else
      v51 = 3;
  }
  else if ( (int)a3[1] <= 0 )
  {
    v51 = 7;
  }
  else
  {
    v51 = 1;
  }
LABEL_26:
  if ( v26 )
  {
    v64 = (unsigned __int16)v50;
    LOWORD(v50) = v89;
    v65 = (int)((unsigned __int64)(274877907LL * (v22 * v64 - 10)) >> 32) >> 6;
    *v47 = (v65 >> 31) + v65;
  }
  v52 = ((unsigned __int16)v50 * v22 - 10) / 1000;
  v53 = (unsigned __int16)v50 * (unsigned __int16)a8;
  *(_WORD *)(a1 + 444) = v52;
  *(_WORD *)(a1 + 446) = (v53 - 10) / 1000 + 1;
  if ( !v26 )
    *v47 = v52;
  if ( v51 )
  {
    if ( v51 != 1 )
    {
      switch ( v51 )
      {
        case 2:
          v68 = -1 - *v47;
          break;
        case 3:
          v66 = *v47;
          goto LABEL_70;
        case 4:
          v68 = *v47 + 1;
          break;
        case 5:
          v67 = *v47;
LABEL_67:
          *v48 = v67;
          v55 = -1 - *v47;
          goto LABEL_33;
        case 6:
          v54 = -1 - *v47;
          goto LABEL_32;
        case 7:
          v66 = -*v47;
LABEL_70:
          *v48 = v66;
          ++*v47;
          goto LABEL_34;
        default:
          *v48 = 0;
          *v47 = 0;
          goto LABEL_34;
      }
      *v48 = v68;
      goto LABEL_34;
    }
    v67 = -*v47;
    goto LABEL_67;
  }
  v54 = *v47 + 1;
LABEL_32:
  *v48 = v54;
  v55 = -*v47;
LABEL_33:
  *v47 = v55;
LABEL_34:
  if ( v26 )
    goto LABEL_83;
  if ( v45 != a6 )
  {
    v69 = DWORD1(v82);
    a8 = *(unsigned __int16 *)(a1 + 446) << 16;
    v89 = *(unsigned __int16 *)(a1 + 444) << 16;
    FixMul(DWORD1(v82), HIDWORD(v82));
    v70 = v83;
    v71 = v82;
    fixed = FixMul((unsigned int)v82, (unsigned int)v83);
    if ( fixed - v73 >= 0 )
      v74 = fixed - v73;
    else
      v74 = v73 - fixed;
    if ( v74 )
    {
      a15 = (_DWORD *)((__int64)v71 << 16);
      LODWORD(v82) = CompDiv(v74, a15);
      a15 = (_DWORD *)__PAIR64__(v69 >> 16, v69 << 16);
      DWORD1(v82) = CompDiv(v75, __PAIR64__(v69 >> 16, v69 << 16));
      a15 = (_DWORD *)__PAIR64__(v77 >> 16, v77 << 16);
      HIDWORD(v82) = CompDiv(v76, __PAIR64__(v77 >> 16, v77 << 16));
      a15 = (_DWORD *)__PAIR64__(v70 >> 16, v70 << 16);
      LODWORD(v83) = CompDiv(v78, __PAIR64__(v70 >> 16, v70 << 16));
      v86 = v87;
      v85[0] = v82;
      DWORD1(v85[0]) = -DWORD1(v82);
      HIDWORD(v85[0]) = -HIDWORD(v82);
      v85[1] = v83;
      mth_IntelMul(1, (unsigned int)&a8, (unsigned int)&v89, (unsigned int)&v82, 0x10000, 0x10000);
      a8 = CompDiv((unsigned int)v45, (__int16)a6 * (__int64)a8);
      mth_IntelMul(1, (unsigned int)&a8, (unsigned int)&v89, (unsigned int)v85, 0x10000, 0x10000);
      v79 = a8;
      if ( a8 < 0 )
        v79 = -a8;
      *(_WORD *)(a1 + 446) = (unsigned int)(v79 + 0x8000) >> 16;
      v80 = v89;
      if ( v89 < 0 )
        v80 = -v89;
      *(_WORD *)(a1 + 444) = (unsigned int)(v80 + 0x8000) >> 16;
    }
    else
    {
      *(_DWORD *)(a1 + 444) = 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 321) & 1) != 0 )
  {
LABEL_83:
    v81 = *(_DWORD *)(a1 + 188);
    a8 = a10;
    scl_Scale(a1 + 280, v81, (unsigned int)&a8, a1 + 448, 1);
    *(_DWORD *)(a1 + 448) &= 0xFFFFFFC0;
  }
  else
  {
    *(_DWORD *)(a1 + 448) = -64 * a11;
  }
  return 0LL;
}
