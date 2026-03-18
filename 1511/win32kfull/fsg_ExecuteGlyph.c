/*
 * XREFs of fsg_ExecuteGlyph @ 0x1C00AEC30
 * Callers:
 *     fsg_GridFit @ 0x1C00AE864 (fsg_GridFit.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 *     InvokeGetSfntFragmentPtr @ 0x1C00A6394 (InvokeGetSfntFragmentPtr.c)
 *     scl_IncrementChildElement @ 0x1C00AD6CC (scl_IncrementChildElement.c)
 *     fsg_MergeGlyphData @ 0x1C00AD7C8 (fsg_MergeGlyphData.c)
 *     fsg_LinkChild @ 0x1C00ADD20 (fsg_LinkChild.c)
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     sfac_ReadGlyphBbox @ 0x1C00B0018 (sfac_ReadGlyphBbox.c)
 *     fsg_DoScanControl @ 0x1C00B025C (fsg_DoScanControl.c)
 *     scl_ScaleOldCharPoints @ 0x1C00B02E0 (scl_ScaleOldCharPoints.c)
 *     scl_CalcOrigPhantomPoints @ 0x1C00B0584 (scl_CalcOrigPhantomPoints.c)
 *     sfac_ReadOutlineData @ 0x1C00B0720 (sfac_ReadOutlineData.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00B0BA0 (scl_RoundCurrentSideBearingPnt.c)
 *     itrp_Execute @ 0x1C00B0DE0 (itrp_Execute.c)
 *     fsg_InitializeGlyphData @ 0x1C00B1248 (fsg_InitializeGlyphData.c)
 *     fsg_CheckOutlineOrientation @ 0x1C00B1330 (fsg_CheckOutlineOrientation.c)
 *     sfac_ReadComponentData @ 0x1C00B2A5C (sfac_ReadComponentData.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00B2D90 (fsg_CompositeInnerGridFit.c)
 *     scl_CopyCurrentPhantomPoints @ 0x1C00B2FA4 (scl_CopyCurrentPhantomPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C00B2FF8 (scl_ScaleOldPhantomPoints.c)
 *     scl_Scale @ 0x1C00B3094 (scl_Scale.c)
 *     scl_CopyCurrentCharPoints @ 0x1C00F6D28 (scl_CopyCurrentCharPoints.c)
 *     mth_MxConcat2x2 @ 0x1C0147F34 (mth_MxConcat2x2.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C0147FE0 (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C0148060 (scl_ScaleBackCurrentPhantomPoints.c)
 *     mth_UnitarySquare @ 0x1C014BFDC (mth_UnitarySquare.c)
 *     scl_InitializeChildScaling @ 0x1C014D298 (scl_InitializeChildScaling.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     scl_OriginalCharPointsToCurrentFixedFUnits @ 0x1C02DC940 (scl_OriginalCharPointsToCurrentFixedFUnits.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DC994 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 */

__int64 __fastcall fsg_ExecuteGlyph(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int *a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // rbx
  int *v15; // r11
  __int64 v16; // r15
  __int64 v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // rdx
  int v21; // r13d
  __int64 v22; // r12
  __int16 *v23; // r12
  int v24; // r15d
  int v25; // r9d
  __int16 v26; // r10
  int v27; // r8d
  int v28; // edx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // r15d
  unsigned int v33; // edi
  unsigned int v34; // edi
  int v35; // r13d
  int v36; // r8d
  __int64 v37; // r9
  int v38; // edx
  __int64 v39; // rcx
  _WORD *v40; // rcx
  _WORD *v41; // rdx
  __int16 v42; // ax
  int v43; // r13d
  __int16 v44; // cx
  __int16 v45; // r8
  __int16 v46; // ax
  __int16 v47; // r9
  int v48; // r8d
  unsigned __int16 v49; // di
  unsigned __int16 v50; // r10
  int v51; // edx
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r8
  unsigned __int16 v55; // r14
  unsigned int v56; // r8d
  __int64 result; // rax
  int v58; // eax
  __int64 *v59; // rdi
  _QWORD *v60; // r12
  __int64 v61; // rdx
  int i; // r8d
  __int128 v63; // xmm6
  int v64; // r13d
  __int128 v65; // xmm7
  int v66; // r9d
  int v67; // r8d
  __int16 v68; // cx
  __int16 v69; // r10
  unsigned __int16 v70; // ax
  char **v71; // r15
  bool v72; // al
  bool v73; // al
  char *v74; // r8
  unsigned __int16 v75; // dx
  __int64 v76; // r11
  int v77; // eax
  const void **v78; // rdi
  int *v79; // r10
  char *v80; // r8
  __int64 v81; // r9
  int v82; // eax
  int *v83; // r10
  char *v84; // r11
  const void **v85; // r8
  int v86; // ecx
  unsigned int v87; // edx
  unsigned int v88; // edx
  __m128i v89; // xmm1
  __int64 v90; // r8
  int v91; // edx
  unsigned int v92; // ecx
  int v93; // ecx
  __int64 v94; // r8
  char *v95; // rcx
  __int64 v96; // rdx
  char *v97; // rax
  char *v98; // rcx
  char *v99; // rax
  unsigned __int16 v100; // di
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  unsigned int v103; // ecx
  __int128 v104; // xmm0
  __int16 v105; // ax
  int v106; // eax
  unsigned __int16 *v107; // r11
  int v108; // r10d
  int v109; // r13d
  unsigned __int16 v110; // r12
  unsigned __int16 v111; // ax
  unsigned __int16 v112; // ax
  unsigned int v113; // ecx
  __int64 v114; // r10
  __int64 v115; // rcx
  _DWORD *v116; // rdx
  bool v117; // zf
  __int64 v118; // r15
  unsigned int ComponentData; // eax
  unsigned int v120; // edi
  __int16 *v121; // rcx
  __int16 v122; // ax
  char *v123; // rcx
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned __int16 v128; // r8
  __int64 v129; // rdx
  __int64 v130; // rdx
  _WORD *v131; // rcx
  __int64 v132; // r8
  int v133; // edx
  int v134; // eax
  signed __int64 v135; // r11
  int v136; // edx
  int v137; // eax
  __int64 v138; // rdx
  __int16 v139; // ax
  __int64 v140; // r12
  int fixed; // eax
  _DWORD *v142; // r10
  int v143; // eax
  unsigned __int16 j; // r8
  __int64 v145; // rcx
  unsigned int v146; // r11d
  unsigned int v147; // r9d
  __int64 v148; // rax
  __int64 v149; // r8
  __int64 v150; // rcx
  __int64 v151; // r9
  unsigned int v152; // r8d
  __int64 v153; // rdx
  __int64 v154; // r8
  int v155; // edi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // r12
  int v159; // eax
  _DWORD *v160; // r10
  __int16 v161; // [rsp+28h] [rbp-E8h]
  __int16 v162; // [rsp+30h] [rbp-E0h]
  __int16 v163; // [rsp+38h] [rbp-D8h]
  __int16 v164; // [rsp+40h] [rbp-D0h]
  __int16 v165; // [rsp+48h] [rbp-C8h]
  int v166; // [rsp+50h] [rbp-C0h]
  __int16 v167; // [rsp+68h] [rbp-A8h]
  __int64 v168; // [rsp+70h] [rbp-A0h]
  __int64 v169[2]; // [rsp+90h] [rbp-80h] BYREF
  __int16 v170; // [rsp+A0h] [rbp-70h]
  int v171; // [rsp+A4h] [rbp-6Ch] BYREF
  __int64 v172; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v173; // [rsp+B0h] [rbp-60h]
  __int128 v174; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v175; // [rsp+D0h] [rbp-40h]
  int v176; // [rsp+E0h] [rbp-30h]
  unsigned int v179; // [rsp+168h] [rbp+58h]

  v179 = a4;
  v14 = a6;
  v15 = a11;
  v16 = a3;
  v18 = a2;
  v117 = *(_DWORD *)(a6 + 56) == 3;
  v19 = 1;
  *a11 = 0;
  if ( !v117 )
    goto LABEL_65;
  v20 = *(_QWORD *)(v14 + 24);
  if ( v20 )
  {
    scl_IncrementChildElement(*(_QWORD *)(v14 + 176), *(_QWORD *)(v20 + 176));
    v15 = a11;
  }
  else
  {
    *(_OWORD *)(v14 + 184) = *(_OWORD *)(v16 + 4);
    *(_OWORD *)(v14 + 200) = *(_OWORD *)(v16 + 20);
    *(_DWORD *)(v14 + 216) = *(_DWORD *)(v16 + 36);
  }
  v21 = *(unsigned __int16 *)(v14 + 60);
  v22 = *(_QWORD *)(v14 + 176);
  *(_QWORD *)(v14 + 32) = 0LL;
  v23 = (__int16 *)(v22 + 80);
  *(_QWORD *)(v14 + 40) = 0LL;
  v24 = 6 * v21;
  v25 = 6 * v21 + 6;
  if ( *(_DWORD *)(a1 + 148) )
  {
    if ( 6 * v21 == -7 )
      v25 = *(_DWORD *)(a1 + 148);
    v156 = InvokeGetSfntFragmentPtr(*(_DWORD *)(a1 + 8), *(_QWORD *)a1, *(_DWORD *)(a1 + 144), v25);
    if ( v156 )
    {
      v157 = v24;
      v32 = _byteswap_ulong(*(_DWORD *)(v24 + v156));
      if ( v32 )
        v34 = (unsigned __int16)__ROR2__(*(_WORD *)(v157 + v156 + 4), 8);
      else
        v34 = 0;
      v35 = 21;
      InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
      goto LABEL_215;
    }
    v15 = a11;
  }
  v26 = *(_WORD *)(a1 + 16);
  if ( v26 )
    v27 = 4 * v21 + 8;
  else
    v27 = 2 * v21 + 4;
  if ( !*(_DWORD *)(a1 + 44) )
    return 5129LL;
  if ( v27 == -1 )
    v27 = *(_DWORD *)(a1 + 44);
  v28 = *(_DWORD *)(a1 + 40);
  v29 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 5128LL;
  }
  if ( !v28 )
  {
    v30 = *(unsigned int *)(v29 + 272);
    goto LABEL_17;
  }
  if ( v28 > 0 && v27 >= 0 && v28 <= 0x7FFFFFFF - v27 && v28 + v27 <= *(_DWORD *)(v29 + 72) )
  {
    v30 = *(int *)(a1 + 40);
LABEL_17:
    v31 = *(_QWORD *)(v29 + 64) + v30;
    goto LABEL_18;
  }
  v31 = 0LL;
LABEL_18:
  if ( !v31 )
    return 5128LL;
  if ( v26 )
  {
    v32 = _byteswap_ulong(*(_DWORD *)(v31 + 4LL * (unsigned __int16)v21));
    v33 = _byteswap_ulong(*(_DWORD *)(v31 + 4LL * (unsigned __int16)v21 + 4));
  }
  else
  {
    v131 = (_WORD *)(v31 + 2LL * (unsigned __int16)v21);
    v32 = 2 * (unsigned __int16)__ROR2__(*v131, 8);
    v33 = 2 * (unsigned __int16)__ROR2__(v131[1], 8);
  }
  if ( v32 > v33 )
    return 5137LL;
  v34 = v33 - v32;
  v35 = 6;
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
LABEL_215:
    v15 = a11;
  }
  if ( !v34 )
  {
    *v15 = 0;
    *v23 = 1;
    v43 = 0;
    *(_QWORD *)(v14 + 62) = 0LL;
    goto LABEL_43;
  }
  if ( v34 < 0xA )
    return 5133LL;
  v36 = v34;
  if ( !*(_DWORD *)(a1 + 8LL * v35 + 28) )
  {
    *(_QWORD *)(v14 + 32) = 0LL;
    return 5129LL;
  }
  if ( v34 == -1 )
    v36 = *(_DWORD *)(a1 + 8LL * v35 + 28);
  v37 = *(_QWORD *)a1;
  v38 = v32 + *(_DWORD *)(a1 + 8LL * v35 + 24);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    if ( !v38 )
    {
      v39 = *(unsigned int *)(v37 + 272);
      goto LABEL_35;
    }
    if ( v38 > 0 && v36 >= 0 && v38 <= 0x7FFFFFFF - v36 && v38 + v36 <= *(_DWORD *)(v37 + 72) )
    {
      v39 = v38;
LABEL_35:
      v40 = (_WORD *)(*(_QWORD *)(v37 + 64) + v39);
      goto LABEL_36;
    }
    v40 = 0LL;
  }
  else
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    v15 = a11;
    v40 = 0LL;
  }
LABEL_36:
  *(_QWORD *)(v14 + 32) = v40;
  if ( !v40 )
    return 5128LL;
  v41 = v40;
  *(_QWORD *)(v14 + 48) = (char *)v40 + v34;
  v42 = __ROR2__(*v40, 8);
  *v23 = v42;
  if ( v42 == -1 )
  {
    v43 = 1;
    *v23 = 0;
    *v15 = 0;
  }
  else
  {
    if ( v42 < -1 )
      return 5127LL;
    v43 = 0;
    *v15 = 1;
  }
  v44 = __ROR2__(v40[1], 8);
  *(_WORD *)(v14 + 62) = v44;
  v45 = __ROR2__(v41[2], 8);
  *(_WORD *)(v14 + 64) = v45;
  v46 = __ROR2__(v41[3], 8);
  *(_WORD *)(v14 + 66) = v46;
  v47 = __ROR2__(v41[4], 8);
  *(_WORD *)(v14 + 68) = v47;
  if ( v44 > v46 || v45 > v47 )
    return 5120LL;
  *(_QWORD *)(v14 + 40) = v41 + 5;
LABEL_43:
  v48 = *(_DWORD *)(a1 + 84);
  v49 = *(_WORD *)(v14 + 60);
  v50 = *(_WORD *)(a1 + 200);
  if ( !v48 )
  {
    result = 5129LL;
    goto LABEL_63;
  }
  v51 = *(_DWORD *)(a1 + 80);
  v52 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    v15 = a11;
    goto LABEL_222;
  }
  if ( !v51 )
  {
    v53 = *(unsigned int *)(v52 + 272);
    goto LABEL_51;
  }
  if ( v51 > 0 && v48 >= 0 && v51 <= 0x7FFFFFFF - v48 && v51 + v48 <= *(_DWORD *)(v52 + 72) )
  {
    v53 = *(int *)(a1 + 80);
LABEL_51:
    v54 = *(_QWORD *)(v52 + 64) + v53;
    goto LABEL_52;
  }
  v54 = 0LL;
LABEL_52:
  if ( !v54 )
  {
LABEL_222:
    result = 5128LL;
    goto LABEL_63;
  }
  if ( v49 >= v50 )
  {
    *(_WORD *)(v14 + 70) = __ROR2__(*(_WORD *)(v54 + 4LL * v50 - 4), 8);
    *(_WORD *)(v14 + 74) = __ROR2__(*(_WORD *)(v54 + 2 * (v50 + (unsigned __int64)v49)), 8);
  }
  else
  {
    *(_WORD *)(v14 + 70) = __ROR2__(*(_WORD *)(v54 + 4LL * v49), 8);
    *(_WORD *)(v14 + 74) = __ROR2__(*(_WORD *)(v54 + 4LL * v49 + 2), 8);
  }
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  v55 = *(_WORD *)(a1 + 202);
  v169[0] = 0LL;
  if ( v49 < v55 )
    v56 = 4 * v49 + 4;
  else
    v56 = 2 * (v49 + v55) + 2;
  if ( !*(_DWORD *)(a1 + 204) )
    goto LABEL_59;
  result = sfac_GetDataPtr(a1, 0, v56, 20, 0, v169);
  if ( (_DWORD)result )
    goto LABEL_62;
  v138 = v169[0];
  if ( *(_DWORD *)(a1 + 204) && v169[0] )
  {
    if ( v49 >= v55 )
    {
      *(_WORD *)(v14 + 72) = __ROR2__(*(_WORD *)(v169[0] + 4LL * v55 - 4), 8);
      *(_WORD *)(v14 + 76) = __ROR2__(*(_WORD *)(v138 + 2 * (v55 + (unsigned __int64)v49)), 8);
    }
    else
    {
      *(_WORD *)(v14 + 72) = __ROR2__(*(_WORD *)(v169[0] + 4LL * v49), 8);
      *(_WORD *)(v14 + 76) = __ROR2__(*(_WORD *)(v138 + 4LL * v49 + 2), 8);
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  }
  else
  {
LABEL_59:
    result = sfac_ReadGlyphBbox(a1, *(unsigned __int16 *)(a1 + 216), &v172);
    if ( (_DWORD)result )
      goto LABEL_62;
    *(_WORD *)(v14 + 72) = *(_WORD *)(a1 + 224) - *(_WORD *)(a1 + 226);
    *(_WORD *)(v14 + 76) = *(_WORD *)(a1 + 224) - HIWORD(v172);
  }
  result = 0LL;
LABEL_62:
  v15 = a11;
LABEL_63:
  if ( (_DWORD)result )
    return result;
  v16 = a3;
  v18 = a2;
  a4 = v179;
  v19 = 1;
  *(_DWORD *)(v14 + 56) = v43 != 0;
LABEL_65:
  v58 = *(_DWORD *)(v14 + 56);
  if ( v58 )
  {
    if ( v58 == 2 )
    {
      v124 = *(_OWORD *)(v14 + 184);
      v125 = *(_OWORD *)(v14 + 200);
      v126 = *(_QWORD *)(v14 + 176);
      v176 = *(_DWORD *)(v14 + 216);
      v168 = *(_QWORD *)(v14 + 168);
      v167 = *(_WORD *)(v14 + 162);
      v166 = *(_DWORD *)(v14 + 220);
      v165 = *(_WORD *)(v14 + 76);
      v164 = *(_WORD *)(v14 + 74);
      v163 = *(_WORD *)(v14 + 72);
      v162 = *(_WORD *)(v14 + 70);
      v161 = *(_WORD *)v16;
      v174 = v124;
      v175 = v125;
      result = fsg_CompositeInnerGridFit(
                 a5,
                 a8,
                 v126,
                 a10,
                 a9,
                 v161,
                 v162,
                 v163,
                 v164,
                 v165,
                 v166,
                 (__int64)&v174,
                 v14 + 62,
                 v167,
                 v168,
                 (__int64)&a6,
                 (__int64)&a11,
                 (__int64)v169);
      if ( (_DWORD)result )
        return result;
      if ( *(_DWORD *)(v14 + 132) )
      {
        v127 = *(_QWORD *)(v14 + 176);
        v128 = *(_WORD *)(*(_QWORD *)(v127 + 64) + 2LL * *(__int16 *)(v127 + 80) - 2) + 2;
        v129 = 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v127 + 64) + 2LL * *(__int16 *)(v127 + 80) - 2) + 1);
        *(_DWORD *)(v129 + *(_QWORD *)v127) = *(_DWORD *)(v14 + 144);
        *(_DWORD *)(v129 + *(_QWORD *)(v127 + 8)) = *(_DWORD *)(v14 + 148);
        v130 = 4LL * v128;
        *(_DWORD *)(v130 + *(_QWORD *)v127) = *(_DWORD *)(v14 + 152);
        *(_DWORD *)(v130 + *(_QWORD *)(v127 + 8)) = *(_DWORD *)(v14 + 156);
      }
      if ( LODWORD(v169[0]) )
      {
        if ( (unsigned int)fsg_DoScanControl((unsigned __int16)a11, *(unsigned int *)(v16 + 56)) )
          v139 = a6;
        else
          v139 = 2;
        *(_WORD *)(v14 + 160) = v139;
      }
      if ( *(_QWORD *)(v14 + 24) )
      {
        result = fsg_MergeGlyphData(a5, v14, *(_WORD *)v16);
        if ( (_DWORD)result )
          return result;
      }
      if ( *(_QWORD *)(v14 + 40) )
      {
        InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
        *(_QWORD *)(v14 + 40) = 0LL;
        *(_QWORD *)(v14 + 32) = 0LL;
      }
      *(_QWORD *)(v14 + 168) = 0LL;
      *(_WORD *)(v14 + 162) = 0;
    }
    else if ( v58 == 1 )
    {
      v171 = 0;
      *(_DWORD *)(v14 + 56) = 2;
      v109 = 0;
      LODWORD(a11) = 0;
      v110 = 0;
      do
      {
        v111 = *(_WORD *)(v18 + 30);
        if ( v111 > 1u )
        {
          v19 = v111;
          if ( v111 >= 0x14u )
            v19 = 20;
        }
        if ( (unsigned int)*(unsigned __int16 *)(v14 + 78) + 1 > v19 )
          return 5131LL;
        v112 = *(_WORD *)(v18 + 28);
        ++v110;
        v113 = v112 <= 3u ? 3 : v112;
        if ( v110 > v113 )
          return 5131LL;
        v114 = a7;
        LODWORD(v115) = 0;
        v116 = *(_DWORD **)(a7 + 24);
        if ( *v116 )
        {
LABEL_125:
          v117 = (_DWORD)v115 == a4;
        }
        else
        {
          while ( 1 )
          {
            v117 = (_DWORD)v115 == a4;
            if ( (unsigned int)v115 >= a4 )
              break;
            v115 = (unsigned int)(v115 + 1);
            if ( v116[v115] )
              goto LABEL_125;
          }
        }
        if ( v117 )
          return 5132LL;
        v116[(unsigned int)v115] = 0;
        v118 = *(_QWORD *)(v114 + 32) + 224LL * (unsigned int)v115;
        fsg_InitializeGlyphData(v118, v114, 0LL, (unsigned __int16)(*(_WORD *)(v14 + 78) + 1));
        fsg_LinkChild(v14, v118);
        ComponentData = sfac_ReadComponentData(
                          (int)v14 + 32,
                          (int)v118 + 80,
                          (int)v118 + 84,
                          (int)v118 + 136,
                          v118 + 140,
                          (__int64)&a11,
                          v118 + 60,
                          v118 + 88,
                          v118 + 90,
                          v118 + 92,
                          v118 + 94,
                          v118 + 96,
                          (__int64)v169,
                          (__int64)&v171);
        v18 = a2;
        v120 = ComponentData;
        v14 = a6;
        if ( *(_WORD *)(v118 + 60) >= *(_WORD *)(a2 + 4) )
          return 5136LL;
        if ( LODWORD(v169[0]) )
        {
          mth_MxConcat2x2(v118 + 96, v118 + 184);
          v143 = mth_UnitarySquare(v118 + 96);
          v18 = a2;
          if ( !v143 )
            *(_DWORD *)(v118 + 220) = 0;
        }
        if ( v120 )
          return v120;
        v109 |= (unsigned int)a11;
        v19 = 1;
        a4 = v179;
      }
      while ( !v171 );
      if ( v109 )
      {
        v121 = *(__int16 **)(v14 + 40);
        v122 = *v121++;
        *(_WORD *)(v14 + 162) = __ROR2__(v122, 8);
        *(_QWORD *)(v14 + 168) = v121;
        v123 = (char *)v121 + *(unsigned __int16 *)(v14 + 162);
        *(_QWORD *)(v14 + 40) = v123;
        if ( (unsigned __int64)v123 > *(_QWORD *)(v14 + 48) )
          return 5133LL;
      }
    }
    return 0LL;
  }
  v59 = (__int64 *)(v14 + 168);
  v60 = (_QWORD *)(v14 + 32);
  result = sfac_ReadOutlineData(
             *(void **)(*(_QWORD *)(v14 + 176) + 48LL),
             v18,
             *v15,
             *(_QWORD *)(v14 + 24) != 0LL,
             *(_WORD *)(*(_QWORD *)(v14 + 176) + 80LL),
             *(_QWORD *)(*(_QWORD *)(v14 + 176) + 56LL),
             *(_QWORD *)(*(_QWORD *)(v14 + 176) + 64LL),
             v14 + 162,
             v14 + 168,
             a12,
             a13);
  if ( !(_DWORD)result )
  {
    if ( a14 || *(_DWORD *)(v16 + 60) )
    {
      fsg_CheckOutlineOrientation(*(_QWORD *)(v14 + 176));
    }
    else
    {
      v61 = 0LL;
      for ( i = 0;
            i < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL);
            *(_BYTE *)(v61 + *(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) - 1) = 0 )
      {
        ++v61;
        ++i;
      }
    }
    v63 = *(_OWORD *)(v14 + 184);
    v64 = *(_DWORD *)(v14 + 220);
    v65 = *(_OWORD *)(v14 + 200);
    v66 = *(unsigned __int16 *)(v14 + 76);
    v67 = *(unsigned __int16 *)(v14 + 74);
    v68 = *(_WORD *)(v14 + 72);
    v69 = *(_WORD *)(v14 + 70);
    LODWORD(v169[0]) = *(_DWORD *)(v14 + 216);
    v173 = *v59;
    LOWORD(v171) = *(_WORD *)(v14 + 162);
    v70 = *(_WORD *)v16;
    v71 = *(char ***)(v14 + 176);
    v117 = *(_BYTE *)(a5 + 396) == 0;
    LOWORD(a11) = v70;
    *(_BYTE *)(a5 + 341) = 0;
    v72 = v117;
    *(_BYTE *)(a5 + 397) = v72;
    v170 = *(_WORD *)(a5 + 118);
    LOWORD(a6) = *(_WORD *)(a5 + 116);
    scl_CalcOrigPhantomPoints((_DWORD)v71, v14 + 62, v67, v66, v69, v68);
    if ( (*(_DWORD *)(a5 + 120) & 1) != 0 || !a10 )
    {
      if ( v64 )
      {
        scl_ScaleOldCharPoints(v71, a5);
        scl_ScaleOldPhantomPoints(v71, a5);
        scl_CopyCurrentCharPoints(v71);
        scl_CopyCurrentPhantomPoints(v71);
      }
      else
      {
        scl_OriginalCharPointsToCurrentFixedFUnits(v71);
        scl_OriginalPhantomPointsToCurrentFixedFUnits(v71);
      }
    }
    else
    {
      v117 = *(_BYTE *)(a5 + 341) == 0;
      *(_BYTE *)(a5 + 396) = v64;
      v73 = !v117 || !(_BYTE)v64;
      *(_BYTE *)(a5 + 397) = v73;
      if ( !v64 )
      {
        v176 = v169[0];
        v174 = v63;
        v175 = v65;
        scl_InitializeChildScaling(a5, &v174, (unsigned __int16)a11);
      }
      scl_ScaleOldCharPoints(v71, a5);
      v74 = v71[4];
      v75 = *(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1;
      if ( *(_BYTE *)(a5 + 396) )
      {
        v76 = 4LL * v75;
        v77 = *(_DWORD *)(a5 + 184);
        v78 = (const void **)(v71 + 2);
        v79 = (int *)&v71[2][v76];
        v80 = &v74[v76];
        v81 = 8LL;
        if ( v77 == 1 )
        {
          *v79 = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *(_DWORD *)v80) >> *(_DWORD *)(a5 + 276);
          v79[1] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 1)) >> *(_DWORD *)(a5 + 276);
          v79[2] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 2)) >> *(_DWORD *)(a5 + 276);
          v79[3] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 3)) >> *(_DWORD *)(a5 + 276);
          v79[4] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 4)) >> *(_DWORD *)(a5 + 276);
          v79[5] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 5)) >> *(_DWORD *)(a5 + 276);
          v79[6] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 6)) >> *(_DWORD *)(a5 + 276);
          v79[7] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v80 + 7)) >> *(_DWORD *)(a5 + 276);
        }
        else
        {
          v132 = v80 - (char *)v79;
          v169[0] = v132;
          if ( v77 == 2 )
          {
            v172 = 8LL;
            do
            {
              v133 = *(int *)((char *)v79 + v132);
              if ( v133 < 0 )
              {
                v134 = -(((*(int *)(a5 + 268) >> 1) - *(_DWORD *)(a5 + 272) * v133) / *(_DWORD *)(a5 + 268));
              }
              else
              {
                v134 = (*(_DWORD *)(a5 + 272) * v133 + (*(int *)(a5 + 268) >> 1)) / *(_DWORD *)(a5 + 268);
                v132 = v169[0];
              }
              *v79++ = v134;
              --v172;
            }
            while ( v172 );
          }
          else
          {
            v140 = 8LL;
            do
            {
              fixed = FixMul(*(unsigned int *)((char *)v79 + v132), *(unsigned int *)(a5 + 264));
              v132 = v169[0];
              *v142 = fixed;
              v79 = v142 + 1;
              --v140;
            }
            while ( v140 );
            v60 = (_QWORD *)(v14 + 32);
            v81 = 8LL;
          }
        }
        v82 = *(_DWORD *)(a5 + 188);
        v83 = (int *)&v71[3][v76];
        v84 = &v71[5][v76];
        if ( v82 == 1 )
        {
          *v83 = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)v84 * *(_DWORD *)(a5 + 288)) >> *(_DWORD *)(a5 + 292);
          v83[1] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 1)) >> *(_DWORD *)(a5 + 292);
          v83[2] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 2)) >> *(_DWORD *)(a5 + 292);
          v83[3] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 3)) >> *(_DWORD *)(a5 + 292);
          v83[4] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 4)) >> *(_DWORD *)(a5 + 292);
          v83[5] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 5)) >> *(_DWORD *)(a5 + 292);
          v83[6] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 6)) >> *(_DWORD *)(a5 + 292);
          v83[7] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v84 + 7)) >> *(_DWORD *)(a5 + 292);
        }
        else
        {
          v135 = v84 - (char *)v83;
          if ( v82 == 2 )
          {
            do
            {
              v136 = *(int *)((char *)v83 + v135);
              if ( v136 < 0 )
                v137 = -(((*(int *)(a5 + 284) >> 1) - *(_DWORD *)(a5 + 288) * v136) / *(_DWORD *)(a5 + 284));
              else
                v137 = (*(_DWORD *)(a5 + 288) * v136 + (*(int *)(a5 + 284) >> 1)) / *(_DWORD *)(a5 + 284);
              *v83++ = v137;
              --v81;
            }
            while ( v81 );
          }
          else
          {
            v158 = 8LL;
            do
            {
              v159 = FixMul(*(unsigned int *)((char *)v83 + v135), *(unsigned int *)(a5 + 280));
              *v160 = v159;
              v83 = v160 + 1;
              --v158;
            }
            while ( v158 );
            v60 = (_QWORD *)(v14 + 32);
          }
        }
      }
      else
      {
        v155 = 4 * v75;
        scl_Scale(a5 + 232, *(_DWORD *)(a5 + 176), v155 + (_DWORD)v74, v155 + *((_DWORD *)v71 + 4), 8);
        scl_Scale(a5 + 248, *(_DWORD *)(a5 + 180), v155 + (unsigned int)v71[5], v155 + *((_DWORD *)v71 + 6), 8);
        v78 = (const void **)(v71 + 2);
      }
      v85 = (const void **)*v78;
      v86 = *((_DWORD *)*v78 + (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1));
      if ( (*(_BYTE *)(a5 + 452) & 5) == 1 )
        v87 = (v86 + 2) & 0xFFFFFFFC;
      else
        v87 = (v86 + 32) & 0xFFFFFFC0;
      v88 = v87 - v86;
      v89 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v88), 0);
      if ( v88 )
      {
        v146 = (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
        v147 = 0;
        if ( *(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] != 0xFFFF )
        {
          if ( v146 >= 8 && (v85 > v78 || (const void **)((char *)v85 + 4 * v146 - 4) < v78) )
          {
            do
            {
              *(__m128i *)&v85[v147 / 2] = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v85[v147 / 2]), v89);
              v148 = v147 + 4;
              v147 += 8;
              *(__m128i *)((char *)v85 + 4 * v148) = _mm_add_epi32(
                                                       _mm_loadu_si128((const __m128i *)((char *)v85 + 4 * v148)),
                                                       v89);
            }
            while ( v147 < v146 - (v146 & 7) );
          }
          if ( v147 < v146 )
          {
            v149 = v146 - v147;
            v150 = 4LL * v147;
            do
            {
              v150 += 4LL;
              *(_DWORD *)((char *)*v78 + v150 - 4) += v88;
              --v149;
            }
            while ( v149 );
          }
        }
      }
      v90 = (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
      v91 = *((_DWORD *)*v78 + v90);
      if ( (*(_BYTE *)(a5 + 452) & 5) == 1 )
        v92 = (v91 + 2) & 0xFFFFFFFC;
      else
        v92 = (v91 + 32) & 0xFFFFFFC0;
      v93 = v92 - v91;
      if ( v93 )
      {
        v151 = (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
        v152 = v90 + 8;
        if ( (unsigned int)v151 < v152 )
        {
          v153 = 4 * v151;
          v154 = v152 - (unsigned int)v151;
          do
          {
            v153 += 4LL;
            *(_DWORD *)((char *)*v78 + v153 - 4) += v93;
            --v154;
          }
          while ( v154 );
        }
      }
      memmove(*v71, *v78, 4LL * (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1));
      memmove(v71[1], v71[3], 4LL * (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1));
      v94 = (unsigned __int16)a11;
      v95 = (char *)*v78;
      v96 = 4LL * (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
      v97 = *v71;
      *(_OWORD *)&v97[v96] = *(_OWORD *)((char *)*v78 + v96);
      *(_OWORD *)&v97[v96 + 16] = *(_OWORD *)&v95[v96 + 16];
      v98 = v71[3];
      v99 = v71[1];
      *(_OWORD *)&v99[v96] = *(_OWORD *)&v98[v96];
      *(_OWORD *)&v99[v96 + 16] = *(_OWORD *)&v98[v96 + 16];
      scl_RoundCurrentSideBearingPnt(v71, a5, v94);
      v100 = v171;
      if ( (_WORD)v171 )
      {
        memset(v71[9], 0, (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 9));
        v101 = *(_OWORD *)(a5 + 48);
        *(_WORD *)(a5 + 332) = 512;
        v102 = *(_OWORD *)(a5 + 64);
        v103 = 0;
        *(_OWORD *)(a5 + 104) = v101;
        v104 = *(_OWORD *)(a5 + 80);
        *(_OWORD *)(a5 + 120) = v102;
        *(_QWORD *)&v102 = *(_QWORD *)(a5 + 96);
        *(_OWORD *)(a5 + 136) = v104;
        *(_QWORD *)(a5 + 152) = v102;
        if ( (*(_DWORD *)(a5 + 120) & 1) == 0 )
          v103 = itrp_Execute(a8, (_DWORD)v71, v173, (unsigned int)v173 + v100, a5, a9);
        LOWORD(a6) = *(_WORD *)(a5 + 116);
        v170 = *(_WORD *)(a5 + 118);
        if ( v103 )
          return v103;
      }
      if ( !v64 )
      {
        scl_ScaleBackCurrentCharPoints(v71, a5);
        scl_ScaleBackCurrentPhantomPoints(v71, a5);
      }
      v59 = (__int64 *)(v14 + 168);
    }
    if ( (unsigned int)fsg_DoScanControl((unsigned __int16)a6, *(unsigned int *)(a3 + 56)) )
      v105 = v170;
    else
      v105 = 2;
    *(_WORD *)(v14 + 160) = v105;
    FixMul(*(unsigned int *)(v14 + 96), *(unsigned int *)(v14 + 112));
    v106 = FixMul(*(unsigned int *)(v14 + 100), *(unsigned int *)(v14 + 108));
    if ( v108 - v106 < 0 )
    {
      for ( j = 0;
            j < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL);
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) + v145) ^= 1u )
      {
        v145 = j++;
      }
    }
    if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData(a5, v14, *v107), !(_DWORD)result) )
    {
      if ( v60[1] )
      {
        if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
          EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
        v60[1] = 0LL;
        *v60 = 0LL;
      }
      *v59 = 0LL;
      *(_WORD *)(v14 + 162) = 0;
      return 0LL;
    }
  }
  return result;
}
