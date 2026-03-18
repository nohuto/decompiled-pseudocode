/*
 * XREFs of RenderNineGridInternal @ 0x1C00D4030
 * Callers:
 *     RenderNineGrid @ 0x1C00D3D6C (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00D4A10 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00D4B90 (DNG_DrawRow.c)
 *     DNG_InitStretch @ 0x1C00D4EF8 (DNG_InitStretch.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00D4FB4 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 */

int __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        __int64 a7,
        int a8)
{
  __m128i v10; // xmm1
  __int64 v11; // r9
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // r14
  int v14; // r10d
  __int64 v15; // rsi
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // edi
  __int64 v25; // rax
  __int64 v26; // kr00_8
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // r8
  int v31; // edx
  int v32; // r11d
  int v33; // r15d
  __int64 v34; // r8
  int v35; // r8d
  int v36; // r11d
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // r13d
  int v41; // r15d
  int v42; // r13d
  int v43; // eax
  int v44; // r8d
  int v45; // r8d
  int v46; // r15d
  int v47; // r15d
  int v48; // ebx
  int v49; // r11d
  int v50; // r13d
  int v51; // r15d
  int v52; // edx
  int v53; // ebx
  int v54; // ecx
  int v55; // r8d
  _DWORD *v56; // r8
  int v57; // edx
  int v58; // ebx
  int v59; // r10d
  __int64 v60; // rax
  int v61; // edx
  int v62; // ecx
  int v63; // edx
  unsigned int v64; // r8d
  __int64 v65; // rbx
  __int64 v66; // r12
  int v67; // eax
  __int64 v68; // r10
  int v69; // r13d
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rcx
  int v73; // ebx
  __int64 v74; // r12
  int v75; // eax
  int v76; // ecx
  int v77; // r8d
  int v78; // eax
  int v79; // esi
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // rdx
  int v83; // ebx
  __int64 v84; // rcx
  int v85; // r10d
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rbx
  int *v90; // rdx
  int *v91; // r8
  __int64 v92; // r11
  int v93; // ecx
  int v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+30h] [rbp-D0h]
  __int64 v97; // [rsp+38h] [rbp-C8h]
  int v98; // [rsp+38h] [rbp-C8h]
  int v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+44h] [rbp-BCh]
  int v101; // [rsp+48h] [rbp-B8h]
  __int64 v102; // [rsp+48h] [rbp-B8h]
  int v103; // [rsp+50h] [rbp-B0h]
  __int64 v104; // [rsp+60h] [rbp-A0h]
  __int64 v105; // [rsp+68h] [rbp-98h]
  __int64 v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+78h] [rbp-88h]
  int v108; // [rsp+80h] [rbp-80h]
  __int64 v109; // [rsp+80h] [rbp-80h]
  int v110; // [rsp+90h] [rbp-70h] BYREF
  int v111; // [rsp+94h] [rbp-6Ch]
  __int64 v112; // [rsp+98h] [rbp-68h]
  int v113; // [rsp+A0h] [rbp-60h]
  int v114; // [rsp+A4h] [rbp-5Ch]
  int v115; // [rsp+A8h] [rbp-58h]
  __int64 v116; // [rsp+B0h] [rbp-50h]
  int v117; // [rsp+B8h] [rbp-48h]
  int v118; // [rsp+BCh] [rbp-44h]
  int v119; // [rsp+C0h] [rbp-40h]
  int v120; // [rsp+C4h] [rbp-3Ch]
  int v121; // [rsp+CCh] [rbp-34h]
  int v122; // [rsp+D0h] [rbp-30h]
  int v123; // [rsp+D4h] [rbp-2Ch]
  int v124; // [rsp+D8h] [rbp-28h]
  int v125; // [rsp+DCh] [rbp-24h]
  int v126; // [rsp+E0h] [rbp-20h]
  int v127; // [rsp+E4h] [rbp-1Ch]
  int v128; // [rsp+E8h] [rbp-18h]
  int v129; // [rsp+ECh] [rbp-14h]
  int v130; // [rsp+F0h] [rbp-10h]
  int v131; // [rsp+F4h] [rbp-Ch]
  char v132; // [rsp+F8h] [rbp-8h] BYREF
  char v133; // [rsp+118h] [rbp+18h] BYREF
  int v134; // [rsp+138h] [rbp+38h]
  int v135; // [rsp+13Ch] [rbp+3Ch]
  int v136; // [rsp+140h] [rbp+40h]
  char v137; // [rsp+144h] [rbp+44h] BYREF
  int v138; // [rsp+164h] [rbp+64h]
  __int64 v139; // [rsp+168h] [rbp+68h]
  __int64 v140; // [rsp+170h] [rbp+70h]
  __int64 v141; // [rsp+178h] [rbp+78h]
  __int64 v142; // [rsp+180h] [rbp+80h]
  __int64 v143; // [rsp+190h] [rbp+90h]
  __int64 v144; // [rsp+198h] [rbp+98h]
  _BYTE v145[96]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v148; // [rsp+220h] [rbp+120h]
  __int64 v149; // [rsp+220h] [rbp+120h]
  int v150; // [rsp+228h] [rbp+128h]
  int v151; // [rsp+240h] [rbp+140h]
  int v152; // [rsp+240h] [rbp+140h]
  int v153; // [rsp+240h] [rbp+140h]
  int v154; // [rsp+240h] [rbp+140h]
  int v155; // [rsp+240h] [rbp+140h]

  v10 = *a4;
  v11 = a3->m128i_i64[0];
  v12 = _mm_srli_si128(v10, 8).m128i_u64[0];
  v13 = HIDWORD(a3->m128i_i64[0]);
  v14 = v12 - v10.m128i_i32[0];
  v15 = (unsigned int)(HIDWORD(v12) - v10.m128i_i32[1]);
  v16 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v144 = v15;
  v103 = v16 - v11;
  v107 = HIDWORD(v16) - v13;
  LODWORD(v17) = 128000000;
  if ( v14 >= 128000000 )
    return v17;
  if ( (int)v15 >= 128000000 )
    return v17;
  LODWORD(v17) = -128000000;
  if ( v14 <= -128000000 || (int)v15 <= -128000000 )
    return v17;
  v18 = *(_QWORD *)(a1 + 48);
  v19 = v13 - v10.m128i_i32[1];
  v20 = v11 - v10.m128i_i32[0];
  v21 = v18 + *(unsigned int *)(a1 + 40);
  v139 = v18;
  v22 = *(_QWORD *)(a2 + 48);
  v23 = v16 - v10.m128i_i32[0];
  v140 = v21;
  v24 = HIDWORD(v16) - v10.m128i_i32[1];
  v25 = v22 + *(unsigned int *)(a2 + 40);
  v141 = v22;
  v142 = v25;
  v138 = *(_DWORD *)(a1 + 32);
  v26 = *(int *)(a1 + 64);
  v110 = v20;
  v111 = v16 - v10.m128i_i32[0];
  v27 = (int)(v26 / 4);
  v148 = v27;
  v28 = *(_DWORD *)(a2 + 64) / 4;
  v29 = v28;
  v97 = v20;
  v113 = v26 / 4;
  v150 = v28;
  v117 = v28;
  v108 = v19;
  v143 = (unsigned int)(HIDWORD(v16) - v10.m128i_i32[1]);
  v105 = *(_QWORD *)(a1 + 56) + 4 * ((int)v27 * ((int)v15 - v19 - 1) - (__int64)v20);
  v151 = *(_DWORD *)(a2 + 32);
  v30 = *a5;
  v31 = a5[1];
  v32 = a5[3] - v31;
  v33 = a5[2] - v30;
  v100 = v32;
  v34 = *(_QWORD *)(a2 + 56) + 4 * (v30 + v31 * v28 + (__int64)((v32 - 1) * v28));
  v106 = v34;
  if ( (*a6 & 0x20) != 0 )
  {
    v71 = v105 + 4 * ((int)v27 * v19 - (__int64)((int)v27 * ((int)v15 - 1)));
    v17 = (v32 - 1) * v28;
    if ( v32 < v24 )
      v24 = a5[3] - v31;
    v72 = v34 + 4 * ((int)v29 * v19 - v17);
    if ( v33 < v23 )
      v23 = v33;
    v149 = v34 + 4 * ((int)v29 * v19 - v17);
    if ( v23 > v20 && v19 < v24 )
    {
      v73 = 4 * (v23 - v20);
      do
      {
        LODWORD(v17) = DNG_CopyMemory(
                         (struct _DNGINTERNALDATA *)&v110,
                         (void *)(v71 + 4 * v97),
                         (void *)(v72 + 4 * v97),
                         v73);
        if ( !(_DWORD)v17 )
          break;
        v71 += 4 * v27;
        ++v19;
        v72 = v149 + 4 * v29;
        v149 = v72;
      }
      while ( v19 < v24 );
    }
    goto LABEL_48;
  }
  v35 = a6[1];
  v136 = *a6 & 2;
  v119 = v32;
  v36 = a6[2];
  v115 = v103;
  v114 = v14;
  v118 = v33;
  v120 = v151;
  v121 = v35;
  v124 = v36;
  if ( v14 - v36 - v35 <= 0 || v33 - v36 - v35 <= 0 )
  {
    v37 = 0;
    v131 = 0;
    if ( v36 + v35 )
    {
      v38 = v14 * v35 / (v36 + v35);
      v134 = v38;
      v37 = v131;
    }
    else
    {
      v38 = 0;
      v134 = 0;
    }
    v39 = v14 - v38;
  }
  else
  {
    v37 = 1;
    v38 = v35;
    v131 = 1;
    v39 = v36;
    v134 = v35;
  }
  v135 = v39;
  v40 = v16 - v10.m128i_i32[0];
  v122 = v20;
  if ( v38 < v23 )
    v40 = v38;
  v123 = v40;
  if ( !v37 && v38 )
  {
    DNG_InitStretch((unsigned int)&v132, v38, v35, v20, v40);
    v39 = v135;
    v38 = v134;
    v36 = v124;
    v35 = v121;
    v14 = v114;
    v20 = v110;
    v33 = v118;
    v23 = v111;
  }
  v41 = v33 - v36 - v35;
  v42 = v14 - v39 - v38;
  v127 = v41;
  v128 = v42;
  v43 = v20;
  v44 = v23;
  if ( v38 > v20 )
    v43 = v38;
  v129 = v43;
  if ( v14 - v39 < v23 )
    v44 = v14 - v39;
  v152 = v44;
  v130 = v44;
  v45 = v131;
  if ( v131 )
  {
    DNG_InitStretch((unsigned int)&v137, v42, v41, v43 - v38, v152 - v38);
    v39 = v135;
    v38 = v134;
    v36 = v124;
    v14 = v114;
    v20 = v110;
    v45 = v131;
    v42 = v128;
    v23 = v111;
  }
  v46 = v20;
  if ( v14 - v39 > v20 )
    v46 = v14 - v39;
  v47 = v46 - v42 - v38;
  v125 = v47;
  if ( v14 < v23 )
    v23 = v14;
  v48 = v23 - v42 - v38;
  v126 = v48;
  if ( !v45 && v39 )
  {
    DNG_InitStretch((unsigned int)&v133, v39, v36, v47, v48);
    v20 = v110;
  }
  v49 = a6[4];
  v50 = a6[3];
  v95 = v49;
  LODWORD(v17) = (int)v15 - v50 - v49 > 0 && v100 - v50 - v49 > 0;
  v101 = v17;
  if ( (_DWORD)v17 )
  {
    v51 = a6[3];
    v99 = v51;
    v52 = a6[4];
  }
  else
  {
    if ( v49 + v50 )
    {
      LODWORD(v17) = (int)v15 * v50 / (v49 + v50);
      v51 = v17;
    }
    else
    {
      v51 = 0;
    }
    v99 = v51;
    v52 = v15 - v51;
  }
  v53 = v19;
  v54 = v15 - v52;
  v55 = HIDWORD(v16) - v10.m128i_i32[1];
  v153 = v15 - v52;
  if ( (int)v15 - v52 > v19 )
    v53 = v15 - v52;
  if ( (int)v15 < v24 )
    v55 = v15;
  if ( v24 > v54 )
  {
    LODWORD(v17) = v106;
    v112 = v105;
    v116 = v106;
    if ( v49 == v52 )
    {
      v63 = v49 - (v52 + v53 - v15) - 1;
      v112 = v105 - 4LL * (int)v27 * v63;
      LODWORD(v17) = v106 - 4 * v150 * v63;
      v116 = v106 - 4LL * v150 * v63;
      if ( v53 >= v55 )
      {
LABEL_56:
        v54 = v153;
        goto LABEL_33;
      }
      v64 = v55 - v53;
      v65 = 4 * v27;
      v66 = v64;
      do
      {
        LODWORD(v17) = DNG_DrawRow(&v110);
        v112 += v65;
        v116 += 4LL * v150;
        --v66;
      }
      while ( v66 );
      LODWORD(v27) = v148;
    }
    else
    {
      if ( v52 <= 0 )
        goto LABEL_33;
      DNG_InitStretch((unsigned int)v145, v52, v49, v15 - v55, v15 - v53);
      LODWORD(v17) = DNG_StretchCol(&v110, v145);
    }
    v49 = v95;
    v20 = v110;
    goto LABEL_56;
  }
LABEL_33:
  v56 = a6;
  v57 = a6[4];
  v58 = v100 - a6[3] - v57;
  v59 = v15 - a6[3] - v57;
  if ( !v101 || v58 <= 0 || v59 <= 0 || v19 >= v54 )
  {
LABEL_45:
    if ( v51 < v24 )
      v24 = v51;
    goto LABEL_47;
  }
  if ( v24 > v51 )
  {
    v104 = v105 - 4LL * (int)v27 * v57;
    v112 = v104;
    v60 = v150 * v57;
    v61 = v19;
    v116 = v106 - 4 * v60;
    if ( v50 > v19 )
      v61 = v50;
    if ( v136 )
    {
      v74 = v104 - 4LL * (int)v27 * (v59 - 1) + 4LL * (int)v27 * (v61 - v50);
      v112 = v74;
      v116 = v106 - 4 * v60 - 4LL * v150 * (v58 - 1) + 4LL * v117 * ((v61 - v50) % v58);
      v75 = v59;
      v76 = HIDWORD(v16) - v10.m128i_i32[1];
      if ( v58 < v59 )
        v75 = v58;
      v77 = v15 - v49;
      v96 = v15 - v49;
      if ( (int)v15 - v49 < v24 )
        v76 = v15 - v49;
      if ( v61 + v75 >= v76 )
      {
        v78 = HIDWORD(v16) - v10.m128i_i32[1];
        if ( v77 < v24 )
          v78 = v15 - v49;
      }
      else
      {
        if ( v58 < v59 )
          v59 = v58;
        v78 = v59 + v61;
      }
      v154 = v78;
      if ( v61 < v78 )
      {
        v79 = v58 - (v61 - v50) % v58;
        v80 = 4LL * v148;
        v81 = (unsigned int)(v78 - v61);
        do
        {
          DNG_DrawRow(&v110);
          if ( --v79 )
          {
            v82 = v116;
          }
          else
          {
            v79 = v58;
            v82 = v116 - 4LL * v150 * v58;
          }
          v74 = v80 + v112;
          v116 = 4LL * v150 + v82;
          v112 += v80;
          --v81;
        }
        while ( v81 );
        v20 = v110;
        v24 = v143;
        LODWORD(v15) = v144;
        v19 = v108;
        v51 = v99;
        v77 = v96;
      }
      v17 = v148 * v58;
      v83 = v154;
      v84 = v74 - 4 * v17;
      LODWORD(v17) = v24;
      v102 = v84;
      v116 = v84;
      if ( v77 < v24 )
        LODWORD(v17) = v77;
      v98 = v17;
      if ( v154 < (int)v17 )
      {
        v85 = 4 * v115;
        v17 = v20;
        v155 = 4 * v115;
        v109 = v20;
        do
        {
          LODWORD(v17) = DNG_CopyMemory(
                           (struct _DNGINTERNALDATA *)&v110,
                           (void *)(v74 + 4 * v17),
                           (void *)(v84 + 4 * v17),
                           v85);
          if ( !(_DWORD)v17 )
            break;
          ++v83;
          v85 = v155;
          v86 = 4LL * v148;
          v84 = v86 + v102;
          v74 += v86;
          v17 = v109;
          v112 = v74;
          v102 = v84;
          v116 = v84;
        }
        while ( v83 < v98 );
      }
      LODWORD(v27) = v148;
    }
    else
    {
      v62 = HIDWORD(v16) - v10.m128i_i32[1];
      if ( (int)v15 - v49 < v24 )
        v62 = v15 - v49;
      DNG_InitStretch((unsigned int)v145, v59, v58, v50 + v59 - v62, v50 + v59 - v61);
      LODWORD(v17) = DNG_StretchCol(&v110, v145);
    }
    v56 = a6;
    goto LABEL_45;
  }
LABEL_47:
  if ( v19 < v51 )
  {
    v67 = v100 - v56[3];
    v112 = v105 - 4LL * (int)v27 * ((int)v15 - v51);
    v17 = 4LL * v150 * v67;
    v68 = v106 - v17;
    v116 = v106 - v17;
    if ( v50 == v51 )
    {
      v69 = v50 - v19;
      v112 = v105 - 4LL * (int)v27 * ((int)v15 - v51) - 4LL * (int)v27 * (v69 - 1);
      LODWORD(v17) = v68 - 4 * v150 * (v69 - 1);
      v116 = v68 - 4LL * v150 * (v69 - 1);
      if ( v19 < v24 )
      {
        v70 = (unsigned int)(v24 - v19);
        do
        {
          LODWORD(v17) = DNG_DrawRow(&v110);
          v112 += 4LL * (int)v27;
          v116 += 4LL * v150;
          --v70;
        }
        while ( v70 );
      }
    }
    else if ( v51 > 0 )
    {
      DNG_InitStretch((unsigned int)v145, v51, v50, v51 - v24, v51 - v19);
      LODWORD(v17) = DNG_StretchCol(&v110, v145);
    }
  }
LABEL_48:
  if ( a8 )
  {
    v87 = a1;
    if ( v107 <= *(_DWORD *)(a1 + 36) )
    {
      LODWORD(v17) = v103;
      if ( v103 <= *(_DWORD *)(a1 + 32) && v107 > 0 )
      {
        LODWORD(v17) = v103 / 2;
        v88 = 0LL;
        v89 = (unsigned int)v107;
        do
        {
          v90 = (int *)(v88 + *(_QWORD *)(v87 + 56));
          v91 = &v90[v103 - 1];
          if ( v103 / 2 > 0 )
          {
            v92 = (unsigned int)(v103 / 2);
            do
            {
              v93 = *v90;
              LODWORD(v17) = *v91;
              *v90++ = *v91;
              *v91-- = v93;
              --v92;
            }
            while ( v92 );
          }
          v87 = a1;
          v88 += 4LL * (int)v27;
          --v89;
        }
        while ( v89 );
      }
    }
  }
  return v17;
}
