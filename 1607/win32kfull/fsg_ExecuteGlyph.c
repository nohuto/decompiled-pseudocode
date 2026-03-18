/*
 * XREFs of fsg_ExecuteGlyph @ 0x1C00C8060
 * Callers:
 *     fsg_GridFit @ 0x1C00C7CF8 (fsg_GridFit.c)
 * Callees:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     scl_CopyCurrentPhantomPoints @ 0x1C001E3D4 (scl_CopyCurrentPhantomPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C001E434 (scl_ScaleOldPhantomPoints.c)
 *     scl_Scale @ 0x1C001E4D8 (scl_Scale.c)
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 *     InvokeGetSfntFragmentPtr @ 0x1C001EE20 (InvokeGetSfntFragmentPtr.c)
 *     scl_IncrementChildElement @ 0x1C00C51D0 (scl_IncrementChildElement.c)
 *     fsg_MergeGlyphData @ 0x1C00C52D0 (fsg_MergeGlyphData.c)
 *     fsg_LinkChild @ 0x1C00C5838 (fsg_LinkChild.c)
 *     sfac_ReadComponentData @ 0x1C00C5898 (sfac_ReadComponentData.c)
 *     fsg_CheckOutlineOrientation @ 0x1C00C5A70 (fsg_CheckOutlineOrientation.c)
 *     fsg_InitializeGlyphData @ 0x1C00C79F0 (fsg_InitializeGlyphData.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     sfac_ReadGlyphBbox @ 0x1C00C9510 (sfac_ReadGlyphBbox.c)
 *     fsg_DoScanControl @ 0x1C00C9754 (fsg_DoScanControl.c)
 *     scl_ScaleOldCharPoints @ 0x1C00C97E0 (scl_ScaleOldCharPoints.c)
 *     scl_CalcOrigPhantomPoints @ 0x1C00C9A58 (scl_CalcOrigPhantomPoints.c)
 *     sfac_ReadOutlineData @ 0x1C00C9C30 (sfac_ReadOutlineData.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00CA08C (scl_RoundCurrentSideBearingPnt.c)
 *     itrp_Execute @ 0x1C00CAFA0 (itrp_Execute.c)
 *     scl_CopyCurrentCharPoints @ 0x1C0115120 (scl_CopyCurrentCharPoints.c)
 *     mth_MxConcat2x2 @ 0x1C014C56C (mth_MxConcat2x2.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C014C6E4 (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C014C778 (scl_ScaleBackCurrentPhantomPoints.c)
 *     mth_UnitarySquare @ 0x1C01510D8 (mth_UnitarySquare.c)
 *     scl_InitializeChildScaling @ 0x1C0152AA0 (scl_InitializeChildScaling.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     scl_OriginalCharPointsToCurrentFixedFUnits @ 0x1C02DCC28 (scl_OriginalCharPointsToCurrentFixedFUnits.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DCC88 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
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
  __int64 v16; // rsi
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
  __int64 v55; // r9
  unsigned __int16 v56; // r15
  unsigned __int16 v57; // r11
  int v58; // edx
  __int64 v59; // r10
  __int64 v60; // r8
  __int64 v61; // r8
  int v62; // eax
  int v63; // r11d
  __int64 v64; // r10
  unsigned __int16 v65; // si
  __int64 v66; // r9
  unsigned int v67; // r8d
  __int16 v68; // ax
  int v69; // r8d
  int v70; // eax
  int v71; // r8d
  __int64 v72; // rdx
  __int16 v73; // cx
  __int16 v74; // r10
  __int64 v75; // r15
  __int128 v76; // xmm6
  int v77; // r12d
  __int128 v78; // xmm7
  int v79; // r9d
  int v80; // r8d
  int v81; // r13d
  __int64 v82; // r8
  const void **v83; // r13
  __int64 v84; // r12
  unsigned __int16 v85; // dx
  __int64 v86; // rdi
  int *v87; // r10
  int v88; // eax
  char *v89; // r11
  signed __int64 v90; // r11
  __int64 v91; // r9
  int v92; // edx
  int v93; // eax
  __int64 v94; // rdi
  int fixed; // eax
  _DWORD *v96; // r10
  int *v97; // r10
  int v98; // eax
  char *v99; // r11
  signed __int64 v100; // r11
  int v101; // edx
  int v102; // eax
  int v103; // eax
  _DWORD *v104; // r10
  const void **v105; // r10
  __int64 v106; // r9
  int v107; // ecx
  unsigned int v108; // r8d
  unsigned int v109; // r8d
  __m128i v110; // xmm1
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  int v117; // ecx
  unsigned int v118; // edx
  int v119; // edx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r8
  char *v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned __int16 v128; // di
  __int128 v129; // xmm0
  unsigned int v130; // ecx
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int64 v133; // r8
  __int16 v134; // ax
  __int64 v135; // r8
  int v136; // eax
  unsigned __int16 *v137; // r11
  int v138; // r10d
  unsigned __int16 i; // r8
  __int64 v140; // rcx
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int64 v143; // r8
  __int64 v144; // r9
  unsigned __int16 v145; // r8
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int16 v148; // ax
  __int16 v149; // dx
  unsigned __int16 v150; // ax
  unsigned int v151; // ecx
  unsigned __int16 v152; // ax
  unsigned __int16 v153; // dx
  unsigned int v154; // ecx
  __int64 v155; // r10
  __int64 v156; // rcx
  _DWORD *v157; // rdx
  bool v158; // zf
  __int64 v159; // r15
  unsigned int v160; // eax
  unsigned int v161; // edi
  int v162; // eax
  int v163; // ecx
  __int16 *v164; // rcx
  __int16 v165; // ax
  char *v166; // rcx
  unsigned __int16 v167; // [rsp+28h] [rbp-D1h]
  __int16 v168; // [rsp+30h] [rbp-C9h]
  __int16 v169; // [rsp+38h] [rbp-C1h]
  unsigned __int16 v170; // [rsp+40h] [rbp-B9h]
  unsigned __int16 v171; // [rsp+48h] [rbp-B1h]
  unsigned int v172; // [rsp+50h] [rbp-A9h]
  unsigned __int16 v173; // [rsp+68h] [rbp-91h]
  __int64 v174; // [rsp+70h] [rbp-89h]
  int v175; // [rsp+90h] [rbp-69h] BYREF
  int v176; // [rsp+94h] [rbp-65h]
  int v177; // [rsp+98h] [rbp-61h] BYREF
  __int64 v178; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v179; // [rsp+A8h] [rbp-51h]
  __int128 v180; // [rsp+B0h] [rbp-49h] BYREF
  __int128 v181; // [rsp+C0h] [rbp-39h]
  int v182; // [rsp+D0h] [rbp-29h]

  v14 = a6;
  v16 = a3;
  v17 = a11;
  v18 = a2;
  v49 = *(_DWORD *)(a6 + 56) == 3;
  v20 = 1;
  *a11 = 0;
  if ( !v49 )
    goto LABEL_103;
  v21 = *(_QWORD *)(v14 + 24);
  if ( v21 )
  {
    scl_IncrementChildElement(*(_QWORD *)(v14 + 176), *(_QWORD *)(v21 + 176));
  }
  else
  {
    *(_OWORD *)(v14 + 184) = *(_OWORD *)(v16 + 4);
    *(_OWORD *)(v14 + 200) = *(_OWORD *)(v16 + 20);
    *(_DWORD *)(v14 + 216) = *(_DWORD *)(v16 + 36);
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
    v45 = 0LL;
    goto LABEL_57;
  }
  if ( v44 )
  {
    if ( v44 <= 0 || v43 < 0 || v44 > 0x7FFFFFFF - v43 || v44 + v43 > *(_DWORD *)(v42 + 72) )
    {
      v45 = 0LL;
      goto LABEL_57;
    }
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
  v58 = *(_DWORD *)(a1 + 80);
  v59 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
LABEL_19:
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 5128LL;
  }
  if ( !v58 )
  {
    v60 = *(unsigned int *)(v59 + 272);
    goto LABEL_76;
  }
  if ( v58 > 0 && (int)v55 >= 0 && v58 <= 0x7FFFFFFF - (int)v55 && v58 + (int)v55 <= *(_DWORD *)(v59 + 72) )
  {
    v60 = *(int *)(a1 + 80);
LABEL_76:
    v61 = *(_QWORD *)(v59 + 64) + v60;
    goto LABEL_77;
  }
  v61 = 0LL;
LABEL_77:
  if ( !v61 )
    return 5128LL;
  if ( v56 >= v57 )
  {
    v62 = v57;
    v63 = v56 - v57;
    v64 = v61 + 4 * v62;
    if ( v64 + 2LL * (v63 + 1) > (unsigned __int64)(v61 + v55) )
      return 5135LL;
    *(_WORD *)(v14 + 70) = __ROR2__(*(_WORD *)(4 * v62 - 4 + v61), 8);
    *(_WORD *)(v14 + 74) = __ROR2__(*(_WORD *)(v64 + 2LL * v63), 8);
  }
  else
  {
    *(_WORD *)(v14 + 70) = __ROR2__(*(_WORD *)(4 * v56 + v61), 8);
    *(_WORD *)(v14 + 74) = __ROR2__(*(_WORD *)(4 * v56 + 2 + v61), 8);
  }
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  v65 = *(_WORD *)(a1 + 202);
  v178 = 0LL;
  v66 = 0LL;
  if ( v56 >= v65 )
    v67 = 2 * (v56 + v65) + 2;
  else
    v67 = 4 * v56 + 4;
  if ( *(_DWORD *)(a1 + 204) )
  {
    result = sfac_GetDataPtr(a1, 0, v67, 20, 0, &v178);
    if ( (_DWORD)result )
      return result;
    v66 = v178;
  }
  if ( *(_DWORD *)(a1 + 204) && v66 )
  {
    if ( v56 >= v65 )
    {
      v69 = 4 * v65;
      *(_WORD *)(v14 + 72) = __ROR2__(*(_WORD *)(v69 - 4 + v66), 8);
      v68 = *(_WORD *)(v66 + v69 + 2LL * (v56 - v65));
    }
    else
    {
      *(_WORD *)(v14 + 72) = __ROR2__(*(_WORD *)(4 * v56 + v66), 8);
      v68 = *(_WORD *)(4 * v56 + 2 + v66);
    }
    *(_WORD *)(v14 + 76) = __ROR2__(v68, 8);
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  }
  else
  {
    result = sfac_ReadGlyphBbox(a1, *(unsigned __int16 *)(a1 + 216), &v178);
    if ( (_DWORD)result )
      return result;
    *(_WORD *)(v14 + 72) = *(_WORD *)(a1 + 224) - *(_WORD *)(a1 + 226);
    *(_WORD *)(v14 + 76) = *(_WORD *)(a1 + 224) - HIWORD(v178);
  }
  v18 = a2;
  v17 = a11;
  v16 = a3;
  v20 = 1;
  *(_DWORD *)(v14 + 56) = v41 != 0;
LABEL_103:
  v70 = *(_DWORD *)(v14 + 56);
  if ( v70 )
  {
    if ( v70 != 2 )
    {
      if ( v70 == 1 )
      {
        v175 = 0;
        *(_DWORD *)(v14 + 56) = 2;
        v149 = 0;
        v177 = 0;
        v176 = 0;
        do
        {
          v150 = *(_WORD *)(v18 + 30);
          if ( v150 <= 1u )
          {
            v151 = 1;
          }
          else
          {
            v151 = v150;
            if ( v150 >= 0x14u )
              v151 = 20;
          }
          if ( (unsigned int)*(unsigned __int16 *)(v14 + 78) + 1 > v151 )
            return 5131LL;
          v152 = *(_WORD *)(v18 + 28);
          v153 = v149 + 1;
          LOWORD(a11) = v153;
          v154 = v152;
          if ( v152 <= 3u )
            v154 = 3;
          if ( v153 > v154 )
            return 5131LL;
          v155 = a7;
          LODWORD(v156) = 0;
          v157 = *(_DWORD **)(a7 + 24);
          if ( *v157 )
          {
LABEL_218:
            v158 = (_DWORD)v156 == a4;
          }
          else
          {
            while ( 1 )
            {
              v158 = (_DWORD)v156 == a4;
              if ( (unsigned int)v156 >= a4 )
                break;
              v156 = (unsigned int)(v156 + 1);
              if ( v157[v156] )
                goto LABEL_218;
            }
          }
          if ( v158 )
            return 5132LL;
          v157[(unsigned int)v156] = 0;
          v159 = *(_QWORD *)(v155 + 32) + 224LL * (unsigned int)v156;
          fsg_InitializeGlyphData(v159, v155, 0, *(_WORD *)(v14 + 78) + 1);
          fsg_LinkChild(v14, v159);
          v160 = sfac_ReadComponentData(
                   v14 + 32,
                   (_DWORD *)(v159 + 80),
                   (int *)(v159 + 84),
                   (int *)(v159 + 136),
                   (_DWORD *)(v159 + 140),
                   &v177,
                   (_WORD *)(v159 + 60),
                   (_WORD *)(v159 + 88),
                   (_WORD *)(v159 + 90),
                   (_WORD *)(v159 + 92),
                   (_WORD *)(v159 + 94),
                   v159 + 96,
                   &v178,
                   &v175);
          v18 = a2;
          v161 = v160;
          v14 = a6;
          if ( *(_WORD *)(v159 + 60) >= *(_WORD *)(a2 + 4) )
            return 5136LL;
          if ( (_DWORD)v178 )
          {
            mth_MxConcat2x2(v159 + 96, v159 + 184);
            v162 = mth_UnitarySquare(v159 + 96);
            v18 = a2;
            if ( !v162 )
              *(_DWORD *)(v159 + 220) = 0;
          }
          if ( v161 )
            return v161;
          v163 = v177 | v176;
          v149 = (__int16)a11;
          v176 |= v177;
        }
        while ( !v175 );
        if ( v163 )
        {
          v164 = *(__int16 **)(v14 + 40);
          v165 = *v164++;
          *(_WORD *)(v14 + 162) = __ROR2__(v165, 8);
          *(_QWORD *)(v14 + 168) = v164;
          v166 = (char *)v164 + *(unsigned __int16 *)(v14 + 162);
          *(_QWORD *)(v14 + 40) = v166;
          if ( (unsigned __int64)v166 > *(_QWORD *)(v14 + 48) )
            return 5133LL;
        }
      }
      return 0LL;
    }
    v141 = *(_OWORD *)(v14 + 184);
    v142 = *(_OWORD *)(v14 + 200);
    v143 = *(_QWORD *)(v14 + 176);
    v182 = *(_DWORD *)(v14 + 216);
    v174 = *(_QWORD *)(v14 + 168);
    v173 = *(_WORD *)(v14 + 162);
    v172 = *(_DWORD *)(v14 + 220);
    v171 = *(_WORD *)(v14 + 76);
    v170 = *(_WORD *)(v14 + 74);
    v169 = *(_WORD *)(v14 + 72);
    v168 = *(_WORD *)(v14 + 70);
    v167 = *(_WORD *)v16;
    v180 = v141;
    v181 = v142;
    result = fsg_CompositeInnerGridFit(
               a5,
               a8,
               v143,
               a10,
               a9,
               v167,
               v168,
               v169,
               v170,
               v171,
               v172,
               (__int64)&v180,
               v14 + 62,
               v173,
               v174,
               &a6,
               &a11,
               &v175);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v14 + 132) )
      {
        v144 = *(_QWORD *)(v14 + 176);
        v145 = *(_WORD *)(*(_QWORD *)(v144 + 64) + 2LL * (*(__int16 *)(v144 + 80) - 1)) + 2;
        v146 = 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v144 + 64) + 2LL * (*(__int16 *)(v144 + 80) - 1)) + 1);
        *(_DWORD *)(v146 + *(_QWORD *)v144) = *(_DWORD *)(v14 + 144);
        *(_DWORD *)(v146 + *(_QWORD *)(v144 + 8)) = *(_DWORD *)(v14 + 148);
        v147 = 4LL * v145;
        *(_DWORD *)(v147 + *(_QWORD *)v144) = *(_DWORD *)(v14 + 152);
        *(_DWORD *)(v147 + *(_QWORD *)(v144 + 8)) = *(_DWORD *)(v14 + 156);
      }
      if ( v175 )
      {
        if ( (unsigned int)fsg_DoScanControl((unsigned __int16)a11, *(unsigned int *)(v16 + 56)) )
          v148 = a6;
        else
          v148 = 2;
        *(_WORD *)(v14 + 160) = v148;
      }
      if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData((_BYTE *)a5, v14, *(_WORD *)v16), !(_DWORD)result) )
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
    result = sfac_ReadOutlineData(
               *(void **)(*(_QWORD *)(v14 + 176) + 48LL),
               v18,
               *v17,
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
      if ( *(_DWORD *)(v16 + 60) || a14 )
      {
        fsg_CheckOutlineOrientation(*(_QWORD *)(v14 + 176));
      }
      else
      {
        v71 = 0;
        if ( *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL) > 0 )
        {
          v72 = 0LL;
          do
          {
            ++v72;
            ++v71;
            *(_BYTE *)(v72 + *(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) - 1) = 0;
          }
          while ( v71 < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL) );
        }
      }
      v73 = *(_WORD *)(v14 + 72);
      v74 = *(_WORD *)(v14 + 70);
      v75 = *(_QWORD *)(v14 + 176);
      v76 = *(_OWORD *)(v14 + 184);
      v77 = *(_DWORD *)(v14 + 216);
      v78 = *(_OWORD *)(v14 + 200);
      v79 = *(unsigned __int16 *)(v14 + 76);
      v80 = *(unsigned __int16 *)(v14 + 74);
      v179 = *(_QWORD *)(v14 + 168);
      v81 = *(_DWORD *)(v14 + 220);
      LOWORD(v177) = *(_WORD *)(v14 + 162);
      LOWORD(a11) = *(_WORD *)v16;
      v175 = v81;
      v49 = *(_BYTE *)(a5 + 396) == 0;
      *(_BYTE *)(a5 + 341) = 0;
      *(_BYTE *)(a5 + 397) = v49;
      LOWORD(v176) = *(_WORD *)(a5 + 118);
      LOWORD(a6) = *(_WORD *)(a5 + 116);
      scl_CalcOrigPhantomPoints(v75, v14 + 62, v80, v79, v74, v73);
      if ( (*(_DWORD *)(a5 + 120) & 1) != 0 || !a10 )
      {
        if ( v81 )
        {
          scl_ScaleOldCharPoints(v75, a5);
          scl_ScaleOldPhantomPoints(v75, a5);
          scl_CopyCurrentCharPoints(v75);
          scl_CopyCurrentPhantomPoints((__int64 *)v75);
        }
        else
        {
          scl_OriginalCharPointsToCurrentFixedFUnits(v75);
          scl_OriginalPhantomPointsToCurrentFixedFUnits(v75);
        }
      }
      else
      {
        v49 = *(_BYTE *)(a5 + 341) == 0;
        *(_BYTE *)(a5 + 396) = v81;
        if ( v49 && (_BYTE)v81 )
          v20 = 0;
        *(_BYTE *)(a5 + 397) = v20;
        if ( !v81 )
        {
          v180 = v76;
          v181 = v78;
          v182 = v77;
          scl_InitializeChildScaling(a5, &v180, (unsigned __int16)a11);
        }
        scl_ScaleOldCharPoints(v75, a5);
        v83 = (const void **)(v75 + 16);
        v84 = 8LL;
        v85 = *(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 1;
        v86 = 4LL * v85;
        if ( *(_BYTE *)(a5 + 396) )
        {
          v87 = (int *)((char *)*v83 + v86);
          v88 = *(_DWORD *)(a5 + 184);
          v89 = (char *)(v86 + *(_QWORD *)(v75 + 32));
          v178 = 4LL * v85;
          if ( v88 == 1 )
          {
            *v87 = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *(_DWORD *)v89) >> *(_DWORD *)(a5 + 276);
            v87[1] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 1)) >> *(_DWORD *)(a5 + 276);
            v87[2] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 2)) >> *(_DWORD *)(a5 + 276);
            v87[3] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 3)) >> *(_DWORD *)(a5 + 276);
            v87[4] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 4)) >> *(_DWORD *)(a5 + 276);
            v87[5] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 5)) >> *(_DWORD *)(a5 + 276);
            v87[6] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 6)) >> *(_DWORD *)(a5 + 276);
            v87[7] = ((*(int *)(a5 + 268) >> 1) + *(_DWORD *)(a5 + 272) * *((_DWORD *)v89 + 7)) >> *(_DWORD *)(a5 + 276);
          }
          else
          {
            v90 = v89 - (char *)v87;
            if ( v88 == 2 )
            {
              v91 = 8LL;
              do
              {
                v92 = *(int *)((char *)v87 + v90);
                if ( v92 >= 0 )
                {
                  v82 = *(unsigned int *)(a5 + 268);
                  v93 = (*(_DWORD *)(a5 + 272) * v92 + (*(int *)(a5 + 268) >> 1)) / (int)v82;
                }
                else
                {
                  v93 = -(((*(int *)(a5 + 268) >> 1) - *(_DWORD *)(a5 + 272) * v92) / *(_DWORD *)(a5 + 268));
                }
                *v87++ = v93;
                --v91;
              }
              while ( v91 );
            }
            else
            {
              v94 = 8LL;
              do
              {
                fixed = FixMul(*(unsigned int *)((char *)v87 + v90), *(unsigned int *)(a5 + 264), v82);
                *v96 = fixed;
                v87 = v96 + 1;
                --v94;
              }
              while ( v94 );
              v86 = v178;
            }
          }
          v97 = (int *)(v86 + *(_QWORD *)(v75 + 24));
          v98 = *(_DWORD *)(a5 + 188);
          v99 = (char *)(v86 + *(_QWORD *)(v75 + 40));
          if ( v98 == 1 )
          {
            *v97 = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)v99 * *(_DWORD *)(a5 + 288)) >> *(_DWORD *)(a5 + 292);
            v97[1] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 1)) >> *(_DWORD *)(a5 + 292);
            v97[2] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 2)) >> *(_DWORD *)(a5 + 292);
            v97[3] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 3)) >> *(_DWORD *)(a5 + 292);
            v97[4] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 4)) >> *(_DWORD *)(a5 + 292);
            v97[5] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 5)) >> *(_DWORD *)(a5 + 292);
            v97[6] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 6)) >> *(_DWORD *)(a5 + 292);
            v97[7] = ((*(int *)(a5 + 284) >> 1) + *(_DWORD *)(a5 + 288) * *((_DWORD *)v99 + 7)) >> *(_DWORD *)(a5 + 292);
          }
          else
          {
            v100 = v99 - (char *)v97;
            if ( v98 == 2 )
            {
              do
              {
                v101 = *(int *)((char *)v97 + v100);
                if ( v101 >= 0 )
                  v102 = (*(_DWORD *)(a5 + 288) * v101 + (*(int *)(a5 + 284) >> 1)) / *(_DWORD *)(a5 + 284);
                else
                  v102 = -(((*(int *)(a5 + 284) >> 1) - *(_DWORD *)(a5 + 288) * v101) / *(_DWORD *)(a5 + 284));
                *v97++ = v102;
                --v84;
              }
              while ( v84 );
            }
            else
            {
              do
              {
                v103 = FixMul(*(unsigned int *)((char *)v97 + v100), *(unsigned int *)(a5 + 280), v82);
                *v104 = v103;
                v97 = v104 + 1;
                --v84;
              }
              while ( v84 );
            }
          }
        }
        else
        {
          scl_Scale(
            (int *)(a5 + 232),
            *(_DWORD *)(a5 + 176),
            v86 + *(_QWORD *)(v75 + 32),
            (int *)((char *)*v83 + v86),
            8);
          scl_Scale(
            (int *)(a5 + 248),
            *(_DWORD *)(a5 + 180),
            v86 + *(_QWORD *)(v75 + 40),
            (int *)(v86 + *(_QWORD *)(v75 + 24)),
            8);
        }
        v105 = (const void **)*v83;
        v106 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 1);
        v107 = *((_DWORD *)*v83 + v106);
        if ( (*(_BYTE *)(a5 + 452) & 5) == 1 )
          v108 = (v107 + 2) & 0xFFFFFFFC;
        else
          v108 = (v107 + 32) & 0xFFFFFFC0;
        v109 = v108 - v107;
        v110 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v109), 0);
        if ( v109 )
        {
          v111 = 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) != 0xFFFF )
          {
            if ( (unsigned int)v106 >= 8
              && (v105 > v83 || (const void **)((char *)v105 + 4 * (unsigned int)(v106 - 1)) < v83) )
            {
              do
              {
                v112 = (unsigned int)(v111 + 4);
                *(__m128i *)((char *)v105 + 4 * v111) = _mm_add_epi32(
                                                          _mm_loadu_si128((const __m128i *)((char *)v105 + 4 * v111)),
                                                          v110);
                v111 = (unsigned int)(v111 + 8);
                *(__m128i *)((char *)v105 + 4 * v112) = _mm_add_epi32(
                                                          _mm_loadu_si128((const __m128i *)((char *)v105 + 4 * v112)),
                                                          v110);
              }
              while ( (unsigned int)v111 < (unsigned __int64)((unsigned int)v106 - (v106 & 7)) );
            }
            if ( (unsigned int)v111 < (unsigned int)v106 )
            {
              v113 = (unsigned int)v111;
              v114 = (unsigned int)(v106 - v111);
              v115 = 4 * v113;
              do
              {
                v115 += 4LL;
                *(_DWORD *)((char *)*v83 + v115 - 4) += v109;
                --v114;
              }
              while ( v114 );
            }
          }
        }
        v116 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 1);
        v117 = *((_DWORD *)*v83 + v116);
        if ( (*(_BYTE *)(a5 + 452) & 5) == 1 )
          v118 = (v117 + 2) & 0xFFFFFFFC;
        else
          v118 = (v117 + 32) & 0xFFFFFFC0;
        v119 = v118 - v117;
        if ( v119 && (unsigned int)v116 < (int)v116 + 8 )
        {
          v120 = 4 * v116;
          v121 = 8LL;
          do
          {
            v120 += 4LL;
            *(_DWORD *)((char *)*v83 + v120 - 4) += v119;
            --v121;
          }
          while ( v121 );
        }
        memmove(
          *(void **)v75,
          *v83,
          4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 1));
        memmove(
          *(void **)(v75 + 8),
          *(const void **)(v75 + 24),
          4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 1));
        v122 = (unsigned __int16)a11;
        v123 = (char *)*v83;
        v124 = 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 1);
        v125 = *(_QWORD *)v75;
        *(_OWORD *)(v125 + v124) = *(_OWORD *)((char *)*v83 + v124);
        *(_OWORD *)(v125 + v124 + 16) = *(_OWORD *)&v123[v124 + 16];
        v126 = *(_QWORD *)(v75 + 24);
        v127 = *(_QWORD *)(v75 + 8);
        *(_OWORD *)(v127 + v124) = *(_OWORD *)(v124 + v126);
        *(_OWORD *)(v127 + v124 + 16) = *(_OWORD *)(v124 + v126 + 16);
        scl_RoundCurrentSideBearingPnt(v75, a5, v122);
        v128 = v177;
        if ( (_WORD)v177 )
        {
          memset(
            *(void **)(v75 + 72),
            0,
            (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v75 + 64) + 2LL * (*(__int16 *)(v75 + 80) - 1)) + 9));
          v129 = *(_OWORD *)(a5 + 48);
          v130 = 0;
          *(_WORD *)(a5 + 332) = 512;
          v131 = *(_OWORD *)(a5 + 64);
          *(_OWORD *)(a5 + 104) = v129;
          v132 = *(_OWORD *)(a5 + 80);
          *(_OWORD *)(a5 + 120) = v131;
          *(_QWORD *)&v131 = *(_QWORD *)(a5 + 96);
          *(_OWORD *)(a5 + 136) = v132;
          *(_QWORD *)(a5 + 152) = v131;
          if ( (*(_DWORD *)(a5 + 120) & 1) == 0 )
            v130 = itrp_Execute(a8, v75, v179, (unsigned int)v179 + v128, a5, a9);
          LOWORD(a6) = *(_WORD *)(a5 + 116);
          LOWORD(v176) = *(_WORD *)(a5 + 118);
          if ( v130 )
            return v130;
        }
        if ( !v175 )
        {
          scl_ScaleBackCurrentCharPoints(v75, a5);
          scl_ScaleBackCurrentPhantomPoints(v75, a5);
        }
      }
      if ( (unsigned int)fsg_DoScanControl((unsigned __int16)a6, *(unsigned int *)(a3 + 56)) )
        v134 = v176;
      else
        v134 = 2;
      *(_WORD *)(v14 + 160) = v134;
      FixMul(*(unsigned int *)(v14 + 96), *(unsigned int *)(v14 + 112), v133);
      v136 = FixMul(*(unsigned int *)(v14 + 100), *(unsigned int *)(v14 + 108), v135);
      if ( v138 - v136 < 0 )
      {
        for ( i = 0;
              i < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL);
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) + v140) ^= 1u )
        {
          v140 = i++;
        }
      }
      if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData((_BYTE *)a5, v14, *v137), !(_DWORD)result) )
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
