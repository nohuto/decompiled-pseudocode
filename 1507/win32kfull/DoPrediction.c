/*
 * XREFs of DoPrediction @ 0x1C01C8420
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C5118 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01C4198 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01C45DC (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C48BC (-FastMul64by64@@YA_J_J0@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C4950 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01C6858 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01C6D3C (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 */

_QWORD *__fastcall DoPrediction(_DWORD *a1, int *a2, unsigned __int16 *a3, int a4, unsigned int a5, unsigned int *a6)
{
  _DWORD *v6; // rsi
  int *v7; // r14
  __int64 v8; // rdi
  BOOL v9; // r12d
  int v10; // ebx
  int v11; // r13d
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r11
  unsigned __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // r14
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // r12
  unsigned __int64 v38; // rdi
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rbx
  __int64 *v52; // rax
  unsigned __int64 v53; // rax
  __int64 *v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // r8
  __int64 *v64; // rcx
  __int64 *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  unsigned __int64 v68; // rax
  __int64 v69; // rbx
  __int64 *v70; // rax
  unsigned __int64 v71; // rax
  bool v72; // sf
  __int64 v73; // r14
  __int64 *v74; // rax
  __int64 v75; // rcx
  __int64 *v76; // rax
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // r10
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 *v84; // r8
  __int64 *v85; // rcx
  __int64 *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rbx
  unsigned __int64 v89; // rax
  __int64 v90; // rbx
  __int64 *v91; // rax
  unsigned __int64 v92; // rax
  __int64 *v93; // rax
  __int64 v94; // rcx
  __int64 *v95; // rax
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // r10
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 *v103; // r8
  __int64 *v104; // rcx
  __int64 *v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rbx
  unsigned __int64 v108; // rax
  __int64 v109; // rbx
  __int64 *v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // r12
  unsigned __int64 *v113; // rax
  __int64 *v114; // rax
  __int64 v115; // rcx
  __int64 *v116; // rax
  __int64 v117; // rax
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // r9
  __int64 v121; // r10
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 *v125; // r8
  __int64 *v126; // rcx
  __int64 *v127; // rcx
  __int64 v128; // rax
  unsigned int *v129; // rbx
  __int64 v130; // rcx
  int v131; // edx
  int v132; // eax
  int v133; // edx
  int v134; // eax
  int v135; // edx
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rdx
  _QWORD *result; // rax
  unsigned int *v140; // r13
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rsi
  __int64 v144; // r12
  __int64 v145; // r13
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rbx
  __int64 *v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 *v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 *v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 *v168; // rcx
  __int64 v169; // rax
  __int64 *v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  unsigned __int64 v175; // [rsp+38h] [rbp-49h] BYREF
  __int64 v176; // [rsp+40h] [rbp-41h] BYREF
  __int64 v177; // [rsp+48h] [rbp-39h] BYREF
  __int64 v178; // [rsp+50h] [rbp-31h]
  __int64 v179; // [rsp+58h] [rbp-29h] BYREF
  __int64 v180; // [rsp+60h] [rbp-21h]
  __int64 v181; // [rsp+68h] [rbp-19h] BYREF
  __int64 v182; // [rsp+70h] [rbp-11h] BYREF
  __int64 v183; // [rsp+78h] [rbp-9h]
  __int64 v184; // [rsp+80h] [rbp-1h]
  unsigned __int64 v185; // [rsp+D8h] [rbp+57h] BYREF
  int *v186; // [rsp+E0h] [rbp+5Fh]
  _DWORD *v187; // [rsp+E8h] [rbp+67h]
  int v188; // [rsp+F0h] [rbp+6Fh] BYREF

  v187 = a3;
  v186 = a2;
  v185 = (unsigned __int64)a1;
  v6 = a3;
  v7 = a2;
  v8 = (__int64)a1;
  v9 = (unsigned int)(a1[6] - 6) <= 1;
  v10 = -__CFSHR__(a1[59], 4);
  if ( a4 && (unsigned int)(a1[6] - 6) > 1 && !__CFSHR__(a1[59], 4) )
  {
    *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 7);
    v11 = a1[355] - a1[356];
    if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || !v11 )
    {
      v11 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
      if ( !glTOUCH_DRIVER_HW_STACK_SAMPLETIME )
      {
        v129 = a6;
LABEL_159:
        EtwTracePointerDeviceContactIds(0LL, *v129, *(unsigned __int16 *)v6, *((_QWORD *)v7 + 6));
        v137 = *(_QWORD *)(v8 + 680);
        v138 = 2400LL * a5;
        result = (_QWORD *)*(unsigned int *)(v138 + v137 + 2392);
        if ( ((unsigned __int8)result & 0x20) == 0 )
        {
          *(_QWORD *)(v138 + v137 + 2252) = *((_QWORD *)v7 + 4);
          *(_QWORD *)(v138 + *(_QWORD *)(v8 + 680) + 2260) = *((_QWORD *)v7 + 5);
          *(_QWORD *)(v138 + *(_QWORD *)(v8 + 680) + 2268) = *((_QWORD *)v7 + 6);
          *(_QWORD *)(v138 + *(_QWORD *)(v8 + 680) + 2276) = *((_QWORD *)v7 + 7);
          result = *(_QWORD **)(v129 + 3);
          *(_QWORD *)(v138 + *(_QWORD *)(v8 + 680) + 2284) = result;
        }
        return result;
      }
    }
    EtwTracePointerPredictionStart(*a6);
    v12 = 0LL;
    v13 = 0LL;
    v188 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v182 = (__int64)v11 << 32;
    v16 = 0LL;
    v17 = 0LL;
    v18 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
    v19 = v186[10];
    v184 = (__int64)v186[8] << 32;
    v20 = v186[9];
    v183 = (__int64)v186[11] << 32;
    v21 = 2400LL * a5;
    v180 = v20 << 32;
    v22 = v185;
    v181 = v19 << 32;
    v178 = v21;
    v177 = *(_QWORD *)(v185 + 680);
    v179 = (v19 << 32) - *(_QWORD *)(v21 + v177 + 2168);
    if ( v179 )
    {
      v23 = Prediction::operator/(&v176, &v179, &v182);
      if ( &v175 != (unsigned __int64 *)v23 )
        v15 = *v23;
      v24 = v177;
      v15 = (v15 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
      v177 = v15 - *(_QWORD *)(v178 + v177 + 2104);
      v25 = Prediction::operator/(&v176, &v177, &v182);
      if ( &v175 == (unsigned __int64 *)v25 || (v12 = *v25, *v25 >= 0) )
        v26 = v12;
      else
        v26 = -v12;
      v21 = v178;
      if ( v26 > *(_QWORD *)(v178 + v24 + 2136) )
      {
        v27 = v12;
        if ( v12 < 0 )
          v27 = -v12;
        *(_QWORD *)(v178 + v24 + 2136) = v27;
      }
      v28 = v185;
      v175 = *(_QWORD *)(v185 + 680);
      if ( *(_QWORD *)(v21 + v175 + 2136) )
      {
        v177 = *(_QWORD *)(v21 + v175 + 2136);
        v29 = v12;
        if ( v12 < 0 )
          v29 = -v12;
        v179 = v29;
        v30 = Prediction::operator/(&v176, &v179, &v177);
        v21 = v178;
        v31 = (_QWORD *)(v178 + v175 + 1880);
        if ( v31 != v30 )
          *v31 = *v30;
        v32 = (_QWORD *)(v21 + *(_QWORD *)(v28 + 680) + 1864LL);
        if ( v32 != v31 )
          *v32 = *v31;
      }
      v33 = *(_QWORD *)(v28 + 680);
      v34 = v12;
      v35 = *(_QWORD *)(v21 + v33 + 2120);
      if ( v12 < 0 )
        v34 = -v12;
      if ( v35 < 0 )
        v35 = -v35;
      *(_QWORD *)(v21 + v33 + 2104) = v15;
      v16 = v34 - v35;
      v22 = v185;
      *(_QWORD *)(v21 + *(_QWORD *)(v185 + 680) + 2120) = v12;
    }
    v177 = *(_QWORD *)(v22 + 680);
    v179 = v183 - *(_QWORD *)(v21 + v177 + 2176);
    if ( v179 )
    {
      v36 = Prediction::operator/(&v176, &v179, &v182);
      if ( &v175 != (unsigned __int64 *)v36 )
        v15 = *v36;
      v37 = v177;
      v38 = (v15 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
      v175 = v38 - *(_QWORD *)(v178 + v177 + 2112);
      v39 = Prediction::operator/(&v176, (__int64 *)&v175, &v182);
      if ( &v175 != (unsigned __int64 *)v39 )
        v12 = *v39;
      v40 = v12;
      if ( v12 < 0 )
        v40 = -v12;
      v21 = v178;
      if ( v40 > *(_QWORD *)(v178 + v37 + 2144) )
      {
        v41 = v12;
        if ( v12 < 0 )
          v41 = -v12;
        *(_QWORD *)(v178 + v37 + 2144) = v41;
      }
      v42 = v185;
      v179 = *(_QWORD *)(v185 + 680);
      if ( *(_QWORD *)(v21 + v179 + 2144) )
      {
        v175 = *(_QWORD *)(v21 + v179 + 2144);
        v43 = v12;
        if ( v12 < 0 )
          v43 = -v12;
        v177 = v43;
        v44 = Prediction::operator/(&v176, &v177, (__int64 *)&v175);
        v21 = v178;
        v45 = (_QWORD *)(v178 + v179 + 1912);
        if ( v45 != v44 )
          *v45 = *v44;
        v46 = (_QWORD *)(v21 + *(_QWORD *)(v42 + 680) + 1896LL);
        if ( v46 != v45 )
          *v46 = *v45;
      }
      v47 = *(_QWORD *)(v42 + 680);
      v48 = v12;
      v49 = *(_QWORD *)(v21 + v47 + 2128);
      if ( v12 < 0 )
        v48 = -v12;
      if ( v49 < 0 )
        v49 = -v49;
      *(_QWORD *)(v21 + v47 + 2112) = v38;
      v17 = v48 - v49;
      v8 = v185;
      *(_QWORD *)(v21 + *(_QWORD *)(v185 + 680) + 2128) = v12;
    }
    else
    {
      v8 = v185;
    }
    v50 = *(_QWORD *)(v8 + 680);
    v185 = v50;
    v51 = v184 - *(_QWORD *)(v21 + v50 + 2152);
    v179 = v51;
    if ( v51 )
    {
      v52 = Prediction::operator/(&v176, &v179, &v182);
      v53 = FastMul64by64(*v52, v18);
      if ( v16 < 0 )
        v53 = FastMul64by64(v53, 0x100000000LL - *(_QWORD *)(v178 + v185 + 1864));
      v177 = v51;
      v175 = v53;
      v54 = Prediction::tagRlsFilter::Filter((__int64 *)(v178 + 8 + v185), &v176, (__int64)&v177, (__int64)&v175, &v188);
      if ( &v185 != (unsigned __int64 *)v54 )
        v13 = *v54;
      v185 = v13;
      v55 = Prediction::tagExpoSmoother::Smooth(
              (__int64 *)(*(_QWORD *)(v8 + 680) + v178 + 1864),
              &v176,
              (__int64 *)&v185);
      if ( v188 )
      {
        if ( &v185 != (unsigned __int64 *)v55 )
          v14 = *v55;
        v21 = v178;
        v60 = v184;
        *(_QWORD *)(v178 + *(_QWORD *)(v8 + 680) + 2216) += v14;
        v61 = *(_QWORD *)(v8 + 680);
        v62 = gPredictorRLSExpoSmoothAlpha;
        v59 = *(_QWORD *)(v21 + v61 + 2216) + v60;
        *(_QWORD *)(v21 + v61 + 2184) = v59;
        v63 = (__int64 *)(v21 + *(_QWORD *)(v8 + 680) + 1864LL);
        if ( v63 != (__int64 *)&v185 )
          *v63 = v62;
        v64 = (__int64 *)(v21 + *(_QWORD *)(v8 + 680) + 1872LL);
        if ( v64 != (__int64 *)&v185 )
          *v64 = 0LL;
      }
      else
      {
        if ( &v185 != (unsigned __int64 *)v55 )
          v14 = *v55;
        v56 = Prediction::DeltaOvershootCompensation(*(_QWORD *)(v178 + *(_QWORD *)(v8 + 680) + 2216), v51);
        *(_QWORD *)(v21 + v58 + 2216) = v57 + v56;
        v59 = v14 + v184 + *(_QWORD *)(v21 + *(_QWORD *)(v8 + 680) + 2216);
      }
      v65 = (__int64 *)(v21 + *(_QWORD *)(v8 + 680) + 2184LL);
      v66 = *v65;
      if ( v51 < 0 )
      {
        if ( v59 < v66 )
          goto LABEL_75;
      }
      else if ( v59 > v66 )
      {
        goto LABEL_75;
      }
      v59 = *v65;
    }
    else
    {
      v65 = (__int64 *)(v21 + v50 + 2184);
      v59 = *v65;
    }
LABEL_75:
    v67 = v181;
    *v65 = v59;
    v176 = (v59 + 0x80000000LL) >> 32;
    v68 = *(_QWORD *)(v8 + 680);
    v185 = v68;
    v69 = v67 - *(_QWORD *)(v21 + v68 + 2168);
    v179 = v69;
    if ( v69 )
    {
      v70 = Prediction::operator/(&v175, &v179, &v182);
      v71 = FastMul64by64(*v70, v18);
      v72 = v16 < 0;
      v73 = v178;
      if ( v72 )
        v71 = FastMul64by64(v71, 0x100000000LL - *(_QWORD *)(v178 + v185 + 1880));
      v177 = v69;
      v175 = v71;
      v74 = Prediction::tagRlsFilter::Filter(
              (__int64 *)(v73 + v185 + 440),
              &v179,
              (__int64)&v177,
              (__int64)&v175,
              &v188);
      if ( &v185 != (unsigned __int64 *)v74 )
        v13 = *v74;
      v75 = *(_QWORD *)(v8 + 680) + 1880LL;
      v185 = v13;
      v76 = Prediction::tagExpoSmoother::Smooth((__int64 *)(v73 + v75), &v175, (__int64 *)&v185);
      if ( v188 )
      {
        if ( &v185 != (unsigned __int64 *)v76 )
          v14 = *v76;
        v81 = v181;
        *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2232) += v14;
        v82 = *(_QWORD *)(v8 + 680);
        v83 = gPredictorRLSExpoSmoothAlpha;
        v80 = *(_QWORD *)(v73 + v82 + 2232) + v81;
        *(_QWORD *)(v73 + v82 + 2200) = v80;
        v84 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 1880LL);
        if ( v84 != (__int64 *)&v185 )
          *v84 = v83;
        v85 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 1888LL);
        if ( v85 != (__int64 *)&v185 )
          *v85 = 0LL;
      }
      else
      {
        if ( &v185 != (unsigned __int64 *)v76 )
          v14 = *v76;
        v77 = Prediction::DeltaOvershootCompensation(*(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2232), v69);
        *(_QWORD *)(v73 + v79 + 2232) = v78 + v77;
        v80 = v14 + v181 + *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2232);
      }
      v86 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 2200LL);
      v87 = *v86;
      if ( v69 < 0 )
      {
        if ( v80 < v87 )
          goto LABEL_96;
      }
      else if ( v80 > v87 )
      {
        goto LABEL_96;
      }
      v80 = *v86;
    }
    else
    {
      v73 = v178;
      v86 = (__int64 *)(v68 + v178 + 2200);
      v80 = *v86;
    }
LABEL_96:
    v88 = v180;
    *v86 = v80;
    v178 = (v80 + 0x80000000LL) >> 32;
    v89 = *(_QWORD *)(v8 + 680);
    v185 = v89;
    v90 = v88 - *(_QWORD *)(v73 + v89 + 2160);
    v179 = v90;
    if ( v90 )
    {
      v91 = Prediction::operator/(&v175, &v179, &v182);
      v92 = FastMul64by64(*v91, v18);
      if ( v17 < 0 )
        v92 = FastMul64by64(v92, 0x100000000LL - *(_QWORD *)(v73 + v185 + 1896));
      v177 = v90;
      v175 = v92;
      v93 = Prediction::tagRlsFilter::Filter(
              (__int64 *)(v73 + v185 + 872),
              &v179,
              (__int64)&v177,
              (__int64)&v175,
              &v188);
      if ( &v185 != (unsigned __int64 *)v93 )
        v13 = *v93;
      v94 = *(_QWORD *)(v8 + 680) + 1896LL;
      v185 = v13;
      v95 = Prediction::tagExpoSmoother::Smooth((__int64 *)(v73 + v94), &v175, (__int64 *)&v185);
      if ( v188 )
      {
        if ( &v185 != (unsigned __int64 *)v95 )
          v14 = *v95;
        v100 = v180;
        *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2224) += v14;
        v101 = *(_QWORD *)(v8 + 680);
        v102 = gPredictorRLSExpoSmoothAlpha;
        v99 = *(_QWORD *)(v73 + v101 + 2224) + v100;
        *(_QWORD *)(v73 + v101 + 2192) = v99;
        v103 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 1896LL);
        if ( v103 != (__int64 *)&v185 )
          *v103 = v102;
        v104 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 1904LL);
        if ( v104 != (__int64 *)&v185 )
          *v104 = 0LL;
      }
      else
      {
        if ( &v185 != (unsigned __int64 *)v95 )
          v14 = *v95;
        v96 = Prediction::DeltaOvershootCompensation(*(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2224), v90);
        *(_QWORD *)(v73 + v98 + 2224) = v97 + v96;
        v99 = v14 + v180 + *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2224);
      }
      v105 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 2192LL);
      v106 = *v105;
      if ( v90 < 0 )
      {
        if ( v99 < v106 )
          goto LABEL_117;
      }
      else if ( v99 > v106 )
      {
        goto LABEL_117;
      }
      v99 = *v105;
    }
    else
    {
      v105 = (__int64 *)(v73 + v89 + 2192);
      v99 = *v105;
    }
LABEL_117:
    v107 = v183;
    *v105 = v99;
    v177 = (v99 + 0x80000000LL) >> 32;
    v108 = *(_QWORD *)(v8 + 680);
    v185 = v108;
    v109 = v107 - *(_QWORD *)(v73 + v108 + 2176);
    v179 = v109;
    if ( !v109 )
    {
      v120 = v183;
      v127 = (__int64 *)(v73 + v108 + 2208);
      v122 = *v127;
      goto LABEL_139;
    }
    v110 = Prediction::operator/(&v175, &v179, &v182);
    v111 = FastMul64by64(*v110, v18);
    v72 = v17 < 0;
    v112 = v185;
    if ( v72 )
    {
      v185 = FastMul64by64(v111, 0x100000000LL - *(_QWORD *)(v73 + v185 + 1912));
      v113 = &v185;
    }
    else
    {
      v175 = v111;
      v113 = &v175;
    }
    v185 = *v113;
    v175 = v109;
    v114 = Prediction::tagRlsFilter::Filter(
             (__int64 *)(v73 + v112 + 1304),
             &v182,
             (__int64)&v175,
             (__int64)&v185,
             &v188);
    if ( &v185 != (unsigned __int64 *)v114 )
      v13 = *v114;
    v115 = *(_QWORD *)(v8 + 680) + 1912LL;
    v185 = v13;
    v116 = Prediction::tagExpoSmoother::Smooth((__int64 *)(v73 + v115), &v175, (__int64 *)&v185);
    if ( v188 )
    {
      if ( &v185 != (unsigned __int64 *)v116 )
        v14 = *v116;
      v120 = v183;
      *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2240) += v14;
      v123 = *(_QWORD *)(v8 + 680);
      v124 = gPredictorRLSExpoSmoothAlpha;
      v122 = v120 + *(_QWORD *)(v73 + v123 + 2240);
      *(_QWORD *)(v73 + v123 + 2208) = v122;
      v125 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 1912LL);
      if ( v125 != (__int64 *)&v185 )
        *v125 = v124;
      v126 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 1920LL);
      if ( v126 != (__int64 *)&v185 )
        *v126 = 0LL;
    }
    else
    {
      if ( &v185 != (unsigned __int64 *)v116 )
        v14 = *v116;
      v117 = Prediction::DeltaOvershootCompensation(*(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2240), v109);
      v119 = v118 + v117;
      v120 = v183;
      *(_QWORD *)(v73 + v121 + 2240) = v119;
      v122 = v14 + v183 + *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2240);
    }
    v127 = (__int64 *)(v73 + *(_QWORD *)(v8 + 680) + 2208LL);
    v128 = *v127;
    if ( v109 < 0 )
    {
      if ( v122 >= v128 )
LABEL_137:
        v122 = *v127;
    }
    else if ( v122 <= v128 )
    {
      goto LABEL_137;
    }
LABEL_139:
    *v127 = v122;
    v129 = a6;
    v6 = v187;
    *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2152) = v184;
    v130 = (v122 + 0x80000000LL) >> 32;
    *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2168) = v181;
    *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2160) = v180;
    v131 = v176;
    *(_QWORD *)(v73 + *(_QWORD *)(v8 + 680) + 2176) = v120;
    v7 = v186;
    *(_OWORD *)(v8 + 124) = *(_OWORD *)(*(_QWORD *)(v8 + 264) + 28LL);
    if ( v131 < *(_DWORD *)(v8 + 124) )
      v131 = *(_DWORD *)(v8 + 124);
    if ( v131 > *(_DWORD *)(v8 + 132) - 1 )
      v131 = *(_DWORD *)(v8 + 132) - 1;
    v132 = *(_DWORD *)(v8 + 128);
    LODWORD(v185) = v131;
    v133 = v177;
    if ( (int)v177 < v132 )
      v133 = v132;
    if ( v133 > *(_DWORD *)(v8 + 136) - 1 )
      v133 = *(_DWORD *)(v8 + 136) - 1;
    v134 = *(_DWORD *)(v8 + 140);
    HIDWORD(v185) = v133;
    v135 = v178;
    if ( (int)v178 < v134 )
      v135 = v134;
    if ( v135 > *(_DWORD *)(v8 + 148) )
      v135 = *(_DWORD *)(v8 + 148);
    v136 = *(_DWORD *)(v8 + 144);
    LODWORD(v180) = v135;
    if ( (int)v130 < v136 )
      LODWORD(v130) = v136;
    if ( (int)v130 > *(_DWORD *)(v8 + 152) )
      LODWORD(v130) = *(_DWORD *)(v8 + 152);
    *((_QWORD *)v7 + 4) = v185;
    HIDWORD(v180) = v130;
    *((_QWORD *)v7 + 5) = v180;
    if ( v129[5] )
    {
      v6[28] += v7[8] - v7[12];
      v6[30] += v7[8] - v7[12];
      v6[29] += v7[9] - v7[13];
      v6[31] += v7[9] - v7[13];
    }
    EtwTracePointerPredictionStop(*v129);
    goto LABEL_159;
  }
  v140 = a6;
  *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 7);
  v141 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 4) = v141;
  EtwTracePointerDeviceContactIds(a4 == 0, *v140, *a3, v141);
  v142 = *(_QWORD *)(v8 + 680);
  v143 = 2400LL * a5;
  result = (_QWORD *)*(unsigned int *)(v143 + v142 + 2392);
  if ( ((unsigned __int8)result & 0x20) == 0 )
  {
    *(_QWORD *)(v143 + v142 + 2252) = *((_QWORD *)v7 + 4);
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2260) = *((_QWORD *)v7 + 5);
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2268) = *((_QWORD *)v7 + 6);
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2276) = *((_QWORD *)v7 + 7);
    result = *(_QWORD **)(v140 + 3);
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2284) = result;
  }
  if ( !v9 && !v10 )
  {
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 8LL), 0, 0x1B0uLL);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 440LL), 0, 0x1B0uLL);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 872LL), 0, 0x1B0uLL);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 1304LL), 0, 0x1B0uLL);
    v144 = gPredictorRLSLambdaLearningRate;
    v145 = gPredictorRLSLambdaMax;
    v146 = *(_QWORD *)(v8 + 680) + 8LL;
    v185 = gPredictorRLSLambdaMin;
    v177 = gPredictorRLSLambdaMin;
    v180 = gPredictorRLSDelta;
    v181 = gPredictorRLSDelta;
    v176 = gPredictorRLSLambdaLearningRate;
    v175 = gPredictorRLSLambdaMax;
    Prediction::tagRlsFilter::vInit((__int64 *)(v143 + v146), &v181, &v177, (__int64 *)&v175, &v176);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 1736LL), 0, 0x20uLL);
    v147 = *(_QWORD *)(v8 + 680);
    v148 = gPredictorRLSExpoSmoothAlpha;
    *(_QWORD *)(v143 + v147 + 1864) = 0LL;
    *(_QWORD *)(v143 + v147 + 1872) = 0LL;
    v149 = (__int64 *)(v143 + *(_QWORD *)(v8 + 680) + 1864LL);
    if ( v149 != &v176 )
      *v149 = v148;
    v150 = *(_QWORD *)(v8 + 680);
    v151 = (__int64)v7[12] << 32;
    v176 = v144;
    *(_QWORD *)(v143 + v150 + 2152) = v151;
    v152 = *(_QWORD *)(v8 + 680);
    v153 = (__int64)v7[12] << 32;
    v175 = v145;
    *(_QWORD *)(v143 + v152 + 2184) = v153;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2216) = 0LL;
    v154 = *(_QWORD *)(v8 + 680);
    v177 = v185;
    v181 = v180;
    Prediction::tagRlsFilter::vInit((__int64 *)(v143 + v154 + 440), &v181, &v177, (__int64 *)&v175, &v176);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 1768LL), 0, 0x20uLL);
    v155 = *(_QWORD *)(v8 + 680);
    *(_QWORD *)(v143 + v155 + 1880) = 0LL;
    *(_QWORD *)(v143 + v155 + 1888) = 0LL;
    v156 = (__int64 *)(v143 + *(_QWORD *)(v8 + 680) + 1880LL);
    if ( v156 != &v176 )
      *v156 = v148;
    v157 = *(_QWORD *)(v8 + 680);
    v158 = (__int64)v7[14] << 32;
    v176 = v144;
    *(_QWORD *)(v143 + v157 + 2168) = v158;
    v159 = *(_QWORD *)(v8 + 680);
    v160 = (__int64)v7[14] << 32;
    v175 = v145;
    *(_QWORD *)(v143 + v159 + 2200) = v160;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2232) = 0LL;
    v161 = *(_QWORD *)(v8 + 680);
    v177 = v185;
    v181 = v180;
    Prediction::tagRlsFilter::vInit((__int64 *)(v143 + v161 + 872), &v181, &v177, (__int64 *)&v175, &v176);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 1800LL), 0, 0x20uLL);
    v162 = *(_QWORD *)(v8 + 680);
    *(_QWORD *)(v143 + v162 + 1896) = 0LL;
    *(_QWORD *)(v143 + v162 + 1904) = 0LL;
    v163 = (__int64 *)(v143 + *(_QWORD *)(v8 + 680) + 1896LL);
    if ( v163 != &v176 )
      *v163 = v148;
    v164 = *(_QWORD *)(v8 + 680);
    v165 = (__int64)v7[13] << 32;
    v176 = v144;
    *(_QWORD *)(v143 + v164 + 2160) = v165;
    v166 = *(_QWORD *)(v8 + 680);
    v167 = (__int64)v7[13] << 32;
    v175 = v145;
    *(_QWORD *)(v143 + v166 + 2192) = v167;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2224) = 0LL;
    v168 = (__int64 *)(v143 + *(_QWORD *)(v8 + 680) + 1304LL);
    v177 = v180;
    Prediction::tagRlsFilter::vInit(v168, &v177, (__int64 *)&v185, (__int64 *)&v175, &v176);
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 1832LL), 0, 0x20uLL);
    v169 = *(_QWORD *)(v8 + 680);
    *(_QWORD *)(v143 + v169 + 1912) = 0LL;
    *(_QWORD *)(v143 + v169 + 1920) = 0LL;
    v170 = (__int64 *)(v143 + *(_QWORD *)(v8 + 680) + 1912LL);
    if ( v170 != (__int64 *)&v185 )
      *v170 = v148;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2176) = (__int64)v7[15] << 32;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2208) = (__int64)v7[15] << 32;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2240) = 0LL;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2104) = 0LL;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2112) = 0LL;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2120) = 0LL;
    *(_QWORD *)(v143 + *(_QWORD *)(v8 + 680) + 2128) = 0LL;
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 1928LL), 0, 0x58uLL);
    *(_DWORD *)(v143 + *(_QWORD *)(v8 + 680) + 1928) = 3;
    memset((void *)(v143 + *(_QWORD *)(v8 + 680) + 2016LL), 0, 0x58uLL);
    v171 = *(_QWORD *)(v8 + 680);
    v188 = 0;
    v185 = 0LL;
    v176 = 0LL;
    *(_DWORD *)(v143 + v171 + 2016) = 3;
    Prediction::tagRlsFilter::Filter(
      (__int64 *)(v143 + *(_QWORD *)(v8 + 680) + 8LL),
      &v175,
      (__int64)&v176,
      (__int64)&v185,
      &v188);
    v172 = *(_QWORD *)(v8 + 680) + 440LL;
    v185 = 0LL;
    v176 = 0LL;
    Prediction::tagRlsFilter::Filter((__int64 *)(v143 + v172), &v175, (__int64)&v176, (__int64)&v185, &v188);
    v173 = *(_QWORD *)(v8 + 680) + 872LL;
    v185 = 0LL;
    v176 = 0LL;
    Prediction::tagRlsFilter::Filter((__int64 *)(v143 + v173), &v175, (__int64)&v176, (__int64)&v185, &v188);
    v174 = *(_QWORD *)(v8 + 680) + 1304LL;
    v185 = 0LL;
    v176 = 0LL;
    return Prediction::tagRlsFilter::Filter((__int64 *)(v143 + v174), &v175, (__int64)&v176, (__int64)&v185, &v188);
  }
  return result;
}
