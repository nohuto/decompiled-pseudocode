/*
 * XREFs of fsg_ExecuteGlyph @ 0x1C00B5A60
 * Callers:
 *     fsg_GridFit @ 0x1C00B56AC (fsg_GridFit.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00ADC28 (sfac_GetDataPtr.c)
 *     InvokeGetSfntFragmentPtr @ 0x1C00ADC8C (InvokeGetSfntFragmentPtr.c)
 *     scl_IncrementChildElement @ 0x1C00B4C24 (scl_IncrementChildElement.c)
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     sfac_ReadGlyphBbox @ 0x1C00B6EE0 (sfac_ReadGlyphBbox.c)
 *     fsg_DoScanControl @ 0x1C00B7124 (fsg_DoScanControl.c)
 *     scl_ScaleOldCharPoints @ 0x1C00B71A0 (scl_ScaleOldCharPoints.c)
 *     scl_CalcOrigPhantomPoints @ 0x1C00B7414 (scl_CalcOrigPhantomPoints.c)
 *     sfac_ReadOutlineData @ 0x1C00B75B0 (sfac_ReadOutlineData.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00B79B4 (scl_RoundCurrentSideBearingPnt.c)
 *     itrp_Execute @ 0x1C00B7B20 (itrp_Execute.c)
 *     fsg_InitializeGlyphData @ 0x1C00B7F88 (fsg_InitializeGlyphData.c)
 *     fsg_CheckOutlineOrientation @ 0x1C00B8150 (fsg_CheckOutlineOrientation.c)
 *     sfac_ReadComponentData @ 0x1C00B96E8 (sfac_ReadComponentData.c)
 *     fsg_LinkChild @ 0x1C00B98BC (fsg_LinkChild.c)
 *     fsg_MergeGlyphData @ 0x1C00B991C (fsg_MergeGlyphData.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00BA194 (fsg_CompositeInnerGridFit.c)
 *     scl_CopyCurrentPhantomPoints @ 0x1C00BA3A8 (scl_CopyCurrentPhantomPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C00BA3FC (scl_ScaleOldPhantomPoints.c)
 *     scl_Scale @ 0x1C00BA498 (scl_Scale.c)
 *     scl_CopyCurrentCharPoints @ 0x1C00F1304 (scl_CopyCurrentCharPoints.c)
 *     mth_MxConcat2x2 @ 0x1C011DD44 (mth_MxConcat2x2.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C011DDF0 (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C011DE70 (scl_ScaleBackCurrentPhantomPoints.c)
 *     mth_UnitarySquare @ 0x1C01222BC (mth_UnitarySquare.c)
 *     scl_InitializeChildScaling @ 0x1C01243B8 (scl_InitializeChildScaling.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     scl_OriginalCharPointsToCurrentFixedFUnits @ 0x1C02DC2A4 (scl_OriginalCharPointsToCurrentFixedFUnits.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DC2F8 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 */

__int64 __fastcall fsg_ExecuteGlyph(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
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
  unsigned __int16 *v16; // rsi
  int *v17; // r9
  __int64 v18; // r8
  char v20; // di
  __int64 v21; // rdx
  int v22; // r13d
  __int64 v23; // r15
  __int16 *v24; // r15
  int v25; // esi
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // esi
  int v30; // r13d
  unsigned int v31; // edi
  __int16 v32; // r11
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r9
  __int64 result; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  _WORD *v39; // rcx
  unsigned int v40; // edi
  int v41; // r13d
  __int64 v42; // r9
  int v43; // r8d
  int v44; // edx
  _WORD *v45; // rcx
  __int64 v46; // rcx
  _WORD *v47; // rdx
  __int16 v48; // ax
  bool v49; // zf
  int *v50; // rax
  __int16 v51; // cx
  __int16 v52; // r8
  __int16 v53; // ax
  __int16 v54; // r9
  __int64 v55; // r8
  unsigned __int16 v56; // di
  unsigned __int16 v57; // r10
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rsi
  unsigned __int16 v62; // r15
  __int64 v63; // rdx
  unsigned int v64; // r8d
  int v65; // eax
  __int64 v66; // rcx
  int v67; // r8d
  __int64 v68; // rdx
  __int16 v69; // cx
  __int16 v70; // r10
  char **v71; // r15
  __int128 v72; // xmm6
  int v73; // r12d
  __int128 v74; // xmm7
  int v75; // r9d
  int v76; // r8d
  int v77; // r13d
  __int64 v78; // r8
  const void **v79; // r13
  __int64 v80; // r12
  unsigned __int16 v81; // dx
  __int64 v82; // rdi
  int *v83; // r10
  int v84; // eax
  char *v85; // r11
  signed __int64 v86; // r11
  __int64 v87; // r9
  int v88; // edx
  int v89; // eax
  __int64 v90; // rdi
  int fixed; // eax
  _DWORD *v92; // r10
  int *v93; // r10
  int v94; // eax
  char *v95; // r11
  signed __int64 v96; // r11
  int v97; // edx
  int v98; // eax
  int v99; // eax
  _DWORD *v100; // r10
  const void **v101; // r10
  __int64 v102; // r9
  int v103; // ecx
  unsigned int v104; // r8d
  unsigned int v105; // r8d
  __m128i v106; // xmm1
  unsigned int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  int v113; // ecx
  unsigned int v114; // edx
  int v115; // edx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r8
  char *v119; // rcx
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rcx
  char *v123; // rax
  unsigned __int16 v124; // di
  __int128 v125; // xmm0
  unsigned int v126; // ecx
  __int128 v127; // xmm1
  __int128 v128; // xmm0
  __int64 v129; // r8
  __int16 v130; // ax
  __int64 v131; // r8
  int v132; // eax
  unsigned __int16 *v133; // r11
  int v134; // r10d
  unsigned __int16 i; // r8
  __int64 v136; // rcx
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int64 v139; // r8
  __int64 v140; // r9
  unsigned __int16 v141; // r8
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int16 v144; // ax
  __int16 v145; // dx
  unsigned __int16 v146; // ax
  unsigned int v147; // ecx
  unsigned __int16 v148; // ax
  unsigned __int16 v149; // dx
  unsigned int v150; // ecx
  __int64 v151; // r10
  __int64 v152; // rcx
  _DWORD *v153; // rdx
  bool v154; // zf
  __int64 v155; // r15
  unsigned int ComponentData; // eax
  unsigned int v157; // edi
  int v158; // eax
  int v159; // ecx
  __int16 *v160; // rcx
  __int16 v161; // ax
  char *v162; // rcx
  __int16 v163; // [rsp+28h] [rbp-D1h]
  __int16 v164; // [rsp+30h] [rbp-C9h]
  __int16 v165; // [rsp+38h] [rbp-C1h]
  __int16 v166; // [rsp+40h] [rbp-B9h]
  __int16 psResult; // [rsp+48h] [rbp-B1h]
  int v168; // [rsp+50h] [rbp-A9h]
  __int16 v169; // [rsp+68h] [rbp-91h]
  __int64 v170; // [rsp+70h] [rbp-89h]
  int v171; // [rsp+90h] [rbp-69h] BYREF
  int v172; // [rsp+94h] [rbp-65h]
  int v173; // [rsp+98h] [rbp-61h] BYREF
  __int64 v174; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v175; // [rsp+A8h] [rbp-51h]
  __int128 v176; // [rsp+B0h] [rbp-49h] BYREF
  __int128 v177; // [rsp+C0h] [rbp-39h]
  int v178; // [rsp+D0h] [rbp-29h]

  v14 = a6;
  v16 = a3;
  v17 = a11;
  v18 = a2;
  v49 = *(_DWORD *)(a6 + 56) == 3;
  v20 = 1;
  *a11 = 0;
  if ( !v49 )
    goto LABEL_102;
  v21 = *(_QWORD *)(v14 + 24);
  if ( v21 )
  {
    scl_IncrementChildElement(*(_QWORD *)(v14 + 176), *(_QWORD *)(v21 + 176));
  }
  else
  {
    *(_OWORD *)(v14 + 184) = *(_OWORD *)(v16 + 2);
    *(_OWORD *)(v14 + 200) = *(_OWORD *)(v16 + 10);
    *(_DWORD *)(v14 + 216) = *((_DWORD *)v16 + 9);
  }
  v22 = *(unsigned __int16 *)(v14 + 60);
  v23 = *(_QWORD *)(v14 + 176);
  *(_QWORD *)(v14 + 32) = 0LL;
  v24 = (__int16 *)(v23 + 80);
  *(_QWORD *)(v14 + 40) = 0LL;
  v25 = 6 * v22;
  v26 = 6 * v22 + 6;
  if ( *(_DWORD *)(a1 + 148) )
  {
    if ( 6 * v22 == -7 )
      v26 = *(_DWORD *)(a1 + 148);
    v27 = InvokeGetSfntFragmentPtr(*(_DWORD *)(a1 + 8), *(_QWORD *)a1, *(_DWORD *)(a1 + 144), v26);
    if ( v27 )
    {
      v28 = v25;
      v29 = _byteswap_ulong(*(_DWORD *)(v25 + v27));
      v30 = 21;
      if ( v29 )
        v31 = (unsigned __int16)__ROR2__(*(_WORD *)(v28 + v27 + 4), 8);
      else
        v31 = 0;
      InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
      goto LABEL_39;
    }
  }
  v32 = *(_WORD *)(a1 + 16);
  v33 = 2 * v22 + 4;
  if ( v32 )
    v33 = 4 * v22 + 8;
  if ( !*(_DWORD *)(a1 + 44) )
    return 5129LL;
  v34 = *(_DWORD *)(a1 + 40);
  v35 = *(_QWORD *)a1;
  if ( v33 == -1 )
    v33 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 8) != 1 )
    goto LABEL_19;
  if ( !v34 )
  {
    v37 = *(unsigned int *)(v35 + 272);
    goto LABEL_28;
  }
  if ( v34 > 0 && v33 >= 0 && v34 <= 0x7FFFFFFF - v33 && v34 + v33 <= *(_DWORD *)(v35 + 72) )
  {
    v37 = *(int *)(a1 + 40);
LABEL_28:
    v38 = *(_QWORD *)(v35 + 64) + v37;
    goto LABEL_29;
  }
  v38 = 0LL;
LABEL_29:
  if ( !v38 )
    return 5128LL;
  if ( v32 )
  {
    v29 = _byteswap_ulong(*(_DWORD *)(v38 + 4LL * (unsigned __int16)v22));
    v40 = _byteswap_ulong(*(_DWORD *)(v38 + 4LL * (unsigned __int16)v22 + 4));
  }
  else
  {
    v39 = (_WORD *)(v38 + 2LL * (unsigned __int16)v22);
    v29 = 2 * (unsigned __int16)__ROR2__(*v39, 8);
    v40 = 2 * (unsigned __int16)__ROR2__(v39[1], 8);
  }
  if ( v29 > v40 )
    return 5137LL;
  v31 = v40 - v29;
  v30 = 6;
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
LABEL_39:
  if ( !v31 )
  {
    *v24 = 1;
    *(_QWORD *)(v14 + 62) = 0LL;
    v41 = 0;
    *a11 = 0;
    goto LABEL_66;
  }
  if ( v31 < 0xA )
    return 5133LL;
  if ( !*(_DWORD *)(a1 + 8LL * v30 + 28) )
  {
    *(_QWORD *)(v14 + 32) = 0LL;
    return 5129LL;
  }
  v42 = *(_QWORD *)a1;
  v43 = v31;
  if ( v31 == -1 )
    v43 = *(_DWORD *)(a1 + 8LL * v30 + 28);
  v44 = v29 + *(_DWORD *)(a1 + 8LL * v30 + 24);
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
LABEL_48:
    v45 = 0LL;
    goto LABEL_57;
  }
  if ( v44 )
  {
    if ( v44 <= 0 || v43 < 0 || v44 > 0x7FFFFFFF - v43 || v44 + v43 > *(_DWORD *)(v42 + 72) )
      goto LABEL_48;
    v46 = v44;
  }
  else
  {
    v46 = *(unsigned int *)(v42 + 272);
  }
  v45 = (_WORD *)(*(_QWORD *)(v42 + 64) + v46);
LABEL_57:
  *(_QWORD *)(v14 + 32) = v45;
  if ( !v45 )
    return 5128LL;
  v47 = v45;
  *(_QWORD *)(v14 + 48) = (char *)v45 + v31;
  v48 = __ROR2__(*v45, 8);
  *v24 = v48;
  v49 = v48 == -1;
  if ( v48 < -1 )
    return 5127LL;
  v50 = a11;
  if ( v49 )
  {
    v41 = 1;
    *v24 = 0;
    *v50 = 0;
  }
  else
  {
    v41 = 0;
    *a11 = 1;
  }
  v51 = __ROR2__(v45[1], 8);
  *(_WORD *)(v14 + 62) = v51;
  v52 = __ROR2__(v47[2], 8);
  *(_WORD *)(v14 + 64) = v52;
  v53 = __ROR2__(v47[3], 8);
  *(_WORD *)(v14 + 66) = v53;
  v54 = __ROR2__(v47[4], 8);
  *(_WORD *)(v14 + 68) = v54;
  if ( v51 > v53 || v52 > v54 )
    return 5120LL;
  *(_QWORD *)(v14 + 40) = v47 + 5;
LABEL_66:
  v55 = *(unsigned int *)(a1 + 84);
  v56 = *(_WORD *)(v14 + 60);
  v57 = *(_WORD *)(a1 + 200);
  if ( !(_DWORD)v55 )
    return 5129LL;
  v58 = *(int *)(a1 + 80);
  v59 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
LABEL_19:
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 5128LL;
  }
  if ( !(_DWORD)v58 )
  {
    v58 = *(unsigned int *)(v59 + 272);
LABEL_75:
    v60 = *(_QWORD *)(v59 + 64) + v58;
    goto LABEL_76;
  }
  if ( (int)v58 > 0
    && (int)v55 >= 0
    && (int)v58 <= 0x7FFFFFFF - (int)v55
    && (int)v58 + (int)v55 <= *(_DWORD *)(v59 + 72) )
  {
    goto LABEL_75;
  }
  v60 = 0LL;
LABEL_76:
  if ( !v60 )
    return 5128LL;
  if ( v56 >= v57 )
  {
    v59 = v60 + 4 * v57;
    if ( v59 + 2LL * (v56 - v57 + 1) > (unsigned __int64)(v60 + v55) )
      return 5135LL;
    v61 = v56;
    *(_WORD *)(v14 + 70) = __ROR2__(*(_WORD *)(v60 + 4LL * v57 - 4), 8);
    *(_WORD *)(v14 + 74) = __ROR2__(*(_WORD *)(v59 + 2 * (v56 - (unsigned __int64)v57)), 8);
  }
  else
  {
    v61 = v56;
    *(_WORD *)(v14 + 70) = __ROR2__(*(_WORD *)(v60 + 4LL * v56), 8);
    *(_WORD *)(v14 + 74) = __ROR2__(*(_WORD *)(v60 + 4LL * v56 + 2), 8);
  }
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  v62 = *(_WORD *)(a1 + 202);
  v174 = 0LL;
  v63 = 0LL;
  if ( v56 >= v62 )
    v64 = 2 * (v56 + v62) + 2;
  else
    v64 = 4 * v56 + 4;
  if ( *(_DWORD *)(a1 + 204) )
  {
    result = sfac_GetDataPtr(a1, 0, v64, 20, 0, &v174);
    if ( (_DWORD)result )
      return result;
    v63 = v174;
  }
  if ( *(_DWORD *)(a1 + 204) && v63 )
  {
    if ( v56 >= v62 )
    {
      *(_WORD *)(v14 + 72) = __ROR2__(*(_WORD *)(v63 + 4LL * v62 - 4), 8);
      *(_WORD *)(v14 + 76) = __ROR2__(*(_WORD *)(v63 + 2 * (v62 + v61)), 8);
    }
    else
    {
      *(_WORD *)(v14 + 72) = __ROR2__(*(_WORD *)(v63 + 4 * v61), 8);
      *(_WORD *)(v14 + 76) = __ROR2__(*(_WORD *)(v63 + 4 * v61 + 2), 8);
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  }
  else
  {
    result = sfac_ReadGlyphBbox(a1, *(unsigned __int16 *)(a1 + 216), &v174, v59);
    if ( (_DWORD)result )
      return result;
    *(_WORD *)(v14 + 72) = *(_WORD *)(a1 + 224) - *(_WORD *)(a1 + 226);
    *(_WORD *)(v14 + 76) = *(_WORD *)(a1 + 224) - HIWORD(v174);
  }
  v18 = a2;
  v17 = a11;
  v16 = a3;
  v20 = 1;
  *(_DWORD *)(v14 + 56) = v41 != 0;
LABEL_102:
  v65 = *(_DWORD *)(v14 + 56);
  if ( v65 )
  {
    if ( v65 != 2 )
    {
      if ( v65 == 1 )
      {
        v171 = 0;
        *(_DWORD *)(v14 + 56) = 2;
        v145 = 0;
        v173 = 0;
        v172 = 0;
        do
        {
          v146 = *(_WORD *)(v18 + 30);
          if ( v146 <= 1u )
          {
            v147 = 1;
          }
          else
          {
            v147 = v146;
            if ( v146 >= 0x14u )
              v147 = 20;
          }
          if ( (unsigned int)*(unsigned __int16 *)(v14 + 78) + 1 > v147 )
            return 5131LL;
          v148 = *(_WORD *)(v18 + 28);
          v149 = v145 + 1;
          LOWORD(a11) = v149;
          v150 = v148;
          if ( v148 <= 3u )
            v150 = 3;
          if ( v149 > v150 )
            return 5131LL;
          v151 = a7;
          LODWORD(v152) = 0;
          v153 = *(_DWORD **)(a7 + 24);
          if ( *v153 )
          {
LABEL_217:
            v154 = (_DWORD)v152 == a4;
          }
          else
          {
            while ( 1 )
            {
              v154 = (_DWORD)v152 == a4;
              if ( (unsigned int)v152 >= a4 )
                break;
              v152 = (unsigned int)(v152 + 1);
              if ( v153[v152] )
                goto LABEL_217;
            }
          }
          if ( v154 )
            return 5132LL;
          v153[(unsigned int)v152] = 0;
          v155 = *(_QWORD *)(v151 + 32) + 224LL * (unsigned int)v152;
          fsg_InitializeGlyphData(v155, v151, 0LL, (unsigned __int16)(*(_WORD *)(v14 + 78) + 1));
          fsg_LinkChild(v14, v155);
          ComponentData = sfac_ReadComponentData(
                            (int)v14 + 32,
                            (int)v155 + 80,
                            (int)v155 + 84,
                            (int)v155 + 136,
                            v155 + 140,
                            (__int64)&v173,
                            v155 + 60,
                            v155 + 88,
                            v155 + 90,
                            v155 + 92,
                            v155 + 94,
                            v155 + 96,
                            (__int64)&v174,
                            (__int64)&v171);
          v18 = a2;
          v157 = ComponentData;
          v14 = a6;
          if ( *(_WORD *)(v155 + 60) >= *(_WORD *)(a2 + 4) )
            return 5136LL;
          if ( (_DWORD)v174 )
          {
            mth_MxConcat2x2(v155 + 96, v155 + 184);
            v158 = mth_UnitarySquare(v155 + 96);
            v18 = a2;
            if ( !v158 )
              *(_DWORD *)(v155 + 220) = 0;
          }
          if ( v157 )
            return v157;
          v159 = v173 | v172;
          v145 = (__int16)a11;
          v172 |= v173;
        }
        while ( !v171 );
        if ( v159 )
        {
          v160 = *(__int16 **)(v14 + 40);
          v161 = *v160++;
          *(_WORD *)(v14 + 162) = __ROR2__(v161, 8);
          *(_QWORD *)(v14 + 168) = v160;
          v162 = (char *)v160 + *(unsigned __int16 *)(v14 + 162);
          *(_QWORD *)(v14 + 40) = v162;
          if ( (unsigned __int64)v162 > *(_QWORD *)(v14 + 48) )
            return 5133LL;
        }
      }
      return 0LL;
    }
    v137 = *(_OWORD *)(v14 + 184);
    v138 = *(_OWORD *)(v14 + 200);
    v139 = *(_QWORD *)(v14 + 176);
    v178 = *(_DWORD *)(v14 + 216);
    v170 = *(_QWORD *)(v14 + 168);
    v169 = *(_WORD *)(v14 + 162);
    v168 = *(_DWORD *)(v14 + 220);
    psResult = *(_WORD *)(v14 + 76);
    v166 = *(_WORD *)(v14 + 74);
    v165 = *(_WORD *)(v14 + 72);
    v164 = *(_WORD *)(v14 + 70);
    v163 = *v16;
    v176 = v137;
    v177 = v138;
    result = fsg_CompositeInnerGridFit(
               a5,
               a8,
               v139,
               a10,
               a9,
               v163,
               v164,
               v165,
               v166,
               psResult,
               v168,
               (__int64)&v176,
               v14 + 62,
               v169,
               v170,
               (__int64)&a6,
               (__int64)&a11,
               (__int64)&v171);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v14 + 132) )
      {
        v140 = *(_QWORD *)(v14 + 176);
        v141 = *(_WORD *)(*(_QWORD *)(v140 + 64) + 2LL * *(__int16 *)(v140 + 80) - 2) + 2;
        v142 = 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v140 + 64) + 2LL * *(__int16 *)(v140 + 80) - 2) + 1);
        *(_DWORD *)(v142 + *(_QWORD *)v140) = *(_DWORD *)(v14 + 144);
        *(_DWORD *)(v142 + *(_QWORD *)(v140 + 8)) = *(_DWORD *)(v14 + 148);
        v143 = 4LL * v141;
        *(_DWORD *)(v143 + *(_QWORD *)v140) = *(_DWORD *)(v14 + 152);
        *(_DWORD *)(v143 + *(_QWORD *)(v140 + 8)) = *(_DWORD *)(v14 + 156);
      }
      if ( v171 )
      {
        if ( (unsigned int)fsg_DoScanControl((unsigned __int16)a11, *((unsigned int *)v16 + 14)) )
          v144 = a6;
        else
          v144 = 2;
        *(_WORD *)(v14 + 160) = v144;
      }
      if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData(a5, v14, *v16), !(_DWORD)result) )
      {
        if ( *(_QWORD *)(v14 + 40) )
        {
          InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
          *(_QWORD *)(v14 + 40) = 0LL;
          *(_QWORD *)(v14 + 32) = 0LL;
        }
        *(_QWORD *)(v14 + 168) = 0LL;
        *(_WORD *)(v14 + 162) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    v66 = *(_QWORD *)(v14 + 176);
    result = sfac_ReadOutlineData(
               *(_QWORD *)(v66 + 48),
               *(_QWORD *)(v66 + 40),
               *(_QWORD *)(v66 + 32),
               (int)v14 + 32,
               v18,
               *v17,
               *(_QWORD *)(v14 + 24) != 0LL,
               *(_WORD *)(v66 + 80),
               *(_QWORD *)(v66 + 56),
               *(SHORT **)(v66 + 64),
               v14 + 162,
               v14 + 168,
               a12,
               a13);
    if ( !(_DWORD)result )
    {
      if ( *((_DWORD *)v16 + 15) || a14 )
      {
        fsg_CheckOutlineOrientation(*(_QWORD *)(v14 + 176));
      }
      else
      {
        v67 = 0;
        if ( *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL) > 0 )
        {
          v68 = 0LL;
          do
          {
            ++v68;
            ++v67;
            *(_BYTE *)(v68 + *(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) - 1) = 0;
          }
          while ( v67 < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL) );
        }
      }
      v69 = *(_WORD *)(v14 + 72);
      v70 = *(_WORD *)(v14 + 70);
      v71 = *(char ***)(v14 + 176);
      v72 = *(_OWORD *)(v14 + 184);
      v73 = *(_DWORD *)(v14 + 216);
      v74 = *(_OWORD *)(v14 + 200);
      v75 = *(unsigned __int16 *)(v14 + 76);
      v76 = *(unsigned __int16 *)(v14 + 74);
      v175 = *(_QWORD *)(v14 + 168);
      v77 = *(_DWORD *)(v14 + 220);
      LOWORD(v173) = *(_WORD *)(v14 + 162);
      LOWORD(a11) = *v16;
      v171 = v77;
      v49 = *(_BYTE *)(a5 + 396) == 0;
      *(_BYTE *)(a5 + 341) = 0;
      *(_BYTE *)(a5 + 397) = v49;
      LOWORD(v172) = *(_WORD *)(a5 + 118);
      LOWORD(a6) = *(_WORD *)(a5 + 116);
      scl_CalcOrigPhantomPoints((_DWORD)v71, v14 + 62, v76, v75, v70, v69);
      if ( (*(_DWORD *)(a5 + 120) & 1) != 0 || !a10 )
      {
        if ( v77 )
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
        v49 = *(_BYTE *)(a5 + 341) == 0;
        *(_BYTE *)(a5 + 396) = v77;
        if ( v49 && (_BYTE)v77 )
          v20 = 0;
        *(_BYTE *)(a5 + 397) = v20;
        if ( !v77 )
        {
          v176 = v72;
          v177 = v74;
          v178 = v73;
          scl_InitializeChildScaling(a5, &v176, (unsigned __int16)a11);
        }
        scl_ScaleOldCharPoints(v71, a5);
        v79 = (const void **)(v71 + 2);
        v80 = 8LL;
        v81 = *(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1;
        v82 = 4LL * v81;
        if ( *(_BYTE *)(a5 + 396) )
        {
          v83 = (int *)((char *)*v79 + v82);
          v84 = *(_DWORD *)(a5 + 184);
          v85 = &v71[4][v82];
          v174 = 4LL * v81;
          if ( v84 == 1 )
          {
            *v83 = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *(_DWORD *)v85) >> *(_DWORD *)(a5 + 276);
            v83[1] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 1)) >> *(_DWORD *)(a5 + 276);
            v83[2] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 2)) >> *(_DWORD *)(a5 + 276);
            v83[3] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 3)) >> *(_DWORD *)(a5 + 276);
            v83[4] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 4)) >> *(_DWORD *)(a5 + 276);
            v83[5] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 5)) >> *(_DWORD *)(a5 + 276);
            v83[6] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 6)) >> *(_DWORD *)(a5 + 276);
            v83[7] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v85 + 7)) >> *(_DWORD *)(a5 + 276);
          }
          else
          {
            v86 = v85 - (char *)v83;
            if ( v84 == 2 )
            {
              v87 = 8LL;
              do
              {
                v88 = *(int *)((char *)v83 + v86);
                if ( v88 >= 0 )
                {
                  v78 = *(unsigned int *)(a5 + 268);
                  v89 = (*(_DWORD *)(a5 + 272) * v88 + (*(int *)(a5 + 268) >> 1)) / (int)v78;
                }
                else
                {
                  v89 = -(((*(int *)(a5 + 268) >> 1) - *(_DWORD *)(a5 + 272) * v88) / *(_DWORD *)(a5 + 268));
                }
                *v83++ = v89;
                --v87;
              }
              while ( v87 );
            }
            else
            {
              v90 = 8LL;
              do
              {
                fixed = FixMul(*(unsigned int *)((char *)v83 + v86), *(unsigned int *)(a5 + 264), v78);
                *v92 = fixed;
                v83 = v92 + 1;
                --v90;
              }
              while ( v90 );
              v82 = v174;
            }
          }
          v93 = (int *)&v71[3][v82];
          v94 = *(_DWORD *)(a5 + 188);
          v95 = &v71[5][v82];
          if ( v94 == 1 )
          {
            *v93 = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)v95 * *(_DWORD *)(a5 + 288)) >> *(_DWORD *)(a5 + 292);
            v93[1] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 1)) >> *(_DWORD *)(a5 + 292);
            v93[2] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 2)) >> *(_DWORD *)(a5 + 292);
            v93[3] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 3)) >> *(_DWORD *)(a5 + 292);
            v93[4] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 4)) >> *(_DWORD *)(a5 + 292);
            v93[5] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 5)) >> *(_DWORD *)(a5 + 292);
            v93[6] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 6)) >> *(_DWORD *)(a5 + 292);
            v93[7] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v95 + 7)) >> *(_DWORD *)(a5 + 292);
          }
          else
          {
            v96 = v95 - (char *)v93;
            if ( v94 == 2 )
            {
              do
              {
                v97 = *(int *)((char *)v93 + v96);
                if ( v97 >= 0 )
                  v98 = (*(_DWORD *)(a5 + 288) * v97 + (*(int *)(a5 + 284) >> 1)) / *(_DWORD *)(a5 + 284);
                else
                  v98 = -(((*(int *)(a5 + 284) >> 1) - *(_DWORD *)(a5 + 288) * v97) / *(_DWORD *)(a5 + 284));
                *v93++ = v98;
                --v80;
              }
              while ( v80 );
            }
            else
            {
              do
              {
                v99 = FixMul(*(unsigned int *)((char *)v93 + v96), *(unsigned int *)(a5 + 280), v78);
                *v100 = v99;
                v93 = v100 + 1;
                --v80;
              }
              while ( v80 );
            }
          }
        }
        else
        {
          scl_Scale(a5 + 232, *(_DWORD *)(a5 + 176), v82 + (unsigned int)v71[4], v82 + *(_DWORD *)v79, 8);
          scl_Scale(a5 + 248, *(_DWORD *)(a5 + 180), v82 + (unsigned int)v71[5], v82 + *((_DWORD *)v71 + 6), 8);
        }
        v101 = (const void **)*v79;
        v102 = (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
        v103 = *((_DWORD *)*v79 + v102);
        if ( (*(_BYTE *)(a5 + 452) & 5) == 1 )
          v104 = (v103 + 2) & 0xFFFFFFFC;
        else
          v104 = (v103 + 32) & 0xFFFFFFC0;
        v105 = v104 - v103;
        v106 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v105), 0);
        if ( v105 )
        {
          v107 = 0;
          if ( *(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] != 0xFFFF )
          {
            if ( (unsigned int)v102 >= 8
              && (v101 > v79 || (const void **)((char *)v101 + 4 * (unsigned int)(v102 - 1)) < v79) )
            {
              do
              {
                *(__m128i *)&v101[v107 / 2] = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v101[v107 / 2]), v106);
                v108 = v107 + 4;
                v107 += 8;
                *(__m128i *)((char *)v101 + 4 * v108) = _mm_add_epi32(
                                                          _mm_loadu_si128((const __m128i *)((char *)v101 + 4 * v108)),
                                                          v106);
              }
              while ( v107 < (unsigned __int64)((unsigned int)v102 - (v102 & 7)) );
            }
            if ( v107 < (unsigned int)v102 )
            {
              v109 = v107;
              v110 = (unsigned int)v102 - v107;
              v111 = 4 * v109;
              do
              {
                v111 += 4LL;
                *(_DWORD *)((char *)*v79 + v111 - 4) += v105;
                --v110;
              }
              while ( v110 );
            }
          }
        }
        v112 = (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
        v113 = *((_DWORD *)*v79 + v112);
        if ( (*(_BYTE *)(a5 + 452) & 5) == 1 )
          v114 = (v113 + 2) & 0xFFFFFFFC;
        else
          v114 = (v113 + 32) & 0xFFFFFFC0;
        v115 = v114 - v113;
        if ( v115 && (unsigned int)v112 < (int)v112 + 8 )
        {
          v116 = 4 * v112;
          v117 = 8LL;
          do
          {
            v116 += 4LL;
            *(_DWORD *)((char *)*v79 + v116 - 4) += v115;
            --v117;
          }
          while ( v117 );
        }
        memmove(*v71, *v79, 4LL * (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1));
        memmove(v71[1], v71[3], 4LL * (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1));
        v118 = (unsigned __int16)a11;
        v119 = (char *)*v79;
        v120 = 4LL * (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 1);
        v121 = *v71;
        *(_OWORD *)&v121[v120] = *(_OWORD *)((char *)*v79 + v120);
        *(_OWORD *)&v121[v120 + 16] = *(_OWORD *)&v119[v120 + 16];
        v122 = v71[3];
        v123 = v71[1];
        *(_OWORD *)&v123[v120] = *(_OWORD *)&v122[v120];
        *(_OWORD *)&v123[v120 + 16] = *(_OWORD *)&v122[v120 + 16];
        scl_RoundCurrentSideBearingPnt(v71, a5, v118);
        v124 = v173;
        if ( (_WORD)v173 )
        {
          memset(v71[9], 0, (unsigned __int16)(*(_WORD *)&v71[8][2 * *((__int16 *)v71 + 40) - 2] + 9));
          v125 = *(_OWORD *)(a5 + 48);
          v126 = 0;
          *(_WORD *)(a5 + 332) = 512;
          v127 = *(_OWORD *)(a5 + 64);
          *(_OWORD *)(a5 + 104) = v125;
          v128 = *(_OWORD *)(a5 + 80);
          *(_OWORD *)(a5 + 120) = v127;
          *(_QWORD *)&v127 = *(_QWORD *)(a5 + 96);
          *(_OWORD *)(a5 + 136) = v128;
          *(_QWORD *)(a5 + 152) = v127;
          if ( (*(_DWORD *)(a5 + 120) & 1) == 0 )
            v126 = itrp_Execute(a8, (_DWORD)v71, v175, (unsigned int)v175 + v124, a5, a9);
          LOWORD(a6) = *(_WORD *)(a5 + 116);
          LOWORD(v172) = *(_WORD *)(a5 + 118);
          if ( v126 )
            return v126;
        }
        if ( !v171 )
        {
          scl_ScaleBackCurrentCharPoints(v71, a5);
          scl_ScaleBackCurrentPhantomPoints(v71, a5);
        }
      }
      if ( (unsigned int)fsg_DoScanControl((unsigned __int16)a6, *((unsigned int *)a3 + 14)) )
        v130 = v172;
      else
        v130 = 2;
      *(_WORD *)(v14 + 160) = v130;
      FixMul(*(unsigned int *)(v14 + 96), *(unsigned int *)(v14 + 112), v129);
      v132 = FixMul(*(unsigned int *)(v14 + 100), *(unsigned int *)(v14 + 108), v131);
      if ( v134 - v132 < 0 )
      {
        for ( i = 0;
              i < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL);
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) + v136) ^= 1u )
        {
          v136 = i++;
        }
      }
      if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData(a5, v14, *v133), !(_DWORD)result) )
      {
        if ( *(_QWORD *)(v14 + 40) )
        {
          if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
            EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
          *(_QWORD *)(v14 + 40) = 0LL;
          *(_QWORD *)(v14 + 32) = 0LL;
        }
        *(_QWORD *)(v14 + 168) = 0LL;
        *(_WORD *)(v14 + 162) = 0;
        return 0LL;
      }
    }
  }
  return result;
}
