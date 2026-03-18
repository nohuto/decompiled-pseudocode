/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00BCBF8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0004AC0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000ADD4 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00844C8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0085248 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     BmlGetNextBestTargetMode @ 0x1C00BE624 (BmlGetNextBestTargetMode.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00BEC0C (BmlFillPreferredMonitorMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00BFCF4 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C00BFEF0 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00C05B0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01A10BC (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        struct BML_VIDPN_PATH_ORDER **a1,
        VIDPN_MGR **a2,
        const struct _D3DKMT_GETPATHSMODALITY *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 *v6; // rsi
  const struct _D3DKMT_GETPATHSMODALITY *v7; // r13
  __int16 v9; // r12
  PVOID v10; // rax
  __int64 v11; // rcx
  VIDPN_MGR *v12; // rdi
  __int64 v13; // rdx
  VIDPN_MGR *v14; // rbx
  __int64 v15; // rcx
  VIDPN_MGR *v16; // rbx
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rcx
  unsigned int v20; // r14d
  unsigned int v21; // eax
  bool i; // cf
  __int64 v23; // rcx
  _DWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdi
  unsigned __int16 v28; // ax
  void *v29; // rcx
  _BYTE *v30; // rax
  unsigned int v31; // ebx
  DMMVIDPNTOPOLOGY *v32; // r14
  unsigned int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  unsigned int v43; // r12d
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v51; // r10
  _QWORD *v52; // rax
  _DWORD *v53; // rcx
  _DWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DMMVIDPN *v63; // r14
  _DWORD *v64; // rcx
  int AdapterDefaultScaling; // eax
  VIDPN_MGR *v66; // r14
  _DWORD *v67; // rdx
  char v68; // r10
  int v69; // r12d
  __int64 v70; // rdx
  _DWORD *v71; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v72; // r14d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char v77; // r10
  unsigned int v78; // r12d
  __int64 v79; // r10
  __int64 v80; // r10
  int v81; // eax
  _BYTE *v82; // rax
  unsigned int v83; // r15d
  __int64 v84; // rbx
  __int64 v85; // r12
  unsigned __int8 *v86; // rax
  unsigned int v87; // edi
  unsigned int v88; // r14d
  unsigned int v89; // r8d
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned __int64 v93; // rbx
  unsigned int v94; // r13d
  unsigned int v95; // r12d
  unsigned __int8 *v96; // rax
  unsigned int v97; // r15d
  __int64 v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  struct DMMVIDPNSOURCEMODESET *v103; // r10
  struct DMMVIDPNPRESENTPATH *v104; // r13
  __int64 v105; // r12
  __int64 v106; // rcx
  struct DMMVIDPNSOURCEMODESET *v107; // r12
  _DWORD *v108; // rcx
  int v109; // eax
  _BOOL8 v111; // rcx
  __int64 v112; // r15
  __int64 v113; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v114; // r14d
  int v115; // eax
  __int64 v116; // r14
  __int64 v117; // rax
  struct DMMVIDPNTARGETMODESET *v118; // r14
  __int64 v119; // rcx
  struct DMMVIDPN *v120; // r12
  __int16 v121; // ax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  VIDPN_MGR *v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned int v137; // r12d
  const struct _D3DKMT_GETPATHSMODALITY *v138; // rsi
  __int64 v139; // r13
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  _QWORD *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  _QWORD *v154; // rax
  __int64 v155; // rcx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r15
  __int64 v157; // rax
  int v158; // eax
  __int64 v159; // rcx
  int v160; // r15d
  struct DXGGLOBAL *Global; // rax
  __int64 v162; // rcx
  struct DXGGLOBAL *v163; // rax
  int *v164; // r14
  int v165; // edx
  int v166; // ecx
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  unsigned int v171; // r10d
  unsigned int v172; // r14d
  __int64 v173; // r15
  __int64 v174; // rax
  int v175; // r14d
  __int64 v176; // rcx
  __int64 v177; // rax
  unsigned int *v178; // rcx
  unsigned int v179; // eax
  int v180; // r8d
  unsigned int v181; // edx
  int v182; // eax
  __int64 v183; // rcx
  _QWORD *v184; // rax
  _QWORD *v185; // rax
  __int64 v186; // r12
  __int64 v187; // rax
  __int64 v188; // rax
  unsigned int v189; // eax
  __int64 v190; // rax
  _QWORD *v191; // rax
  _QWORD *v192; // rax
  __int64 v193; // rdx
  __int64 *v194; // rcx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  _QWORD *v199; // rax
  _DWORD *v200; // rcx
  __int64 v201; // rax
  unsigned __int8 *v202; // r8
  unsigned int j; // r9d
  __int64 v204; // r10
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  _QWORD *v209; // rax
  unsigned int v210; // eax
  __int64 v211; // r10
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  _QWORD *v216; // rax
  unsigned int v217; // eax
  __int64 v218; // r10
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  _QWORD *v223; // rax
  __int64 v224; // [rsp+28h] [rbp-89h]
  char v225; // [rsp+48h] [rbp-69h]
  unsigned int v226; // [rsp+4Ch] [rbp-65h]
  unsigned int v227; // [rsp+4Ch] [rbp-65h]
  VIDPN_MGR *v228; // [rsp+50h] [rbp-61h]
  unsigned int v229; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v230; // [rsp+60h] [rbp-51h]
  unsigned __int64 v231; // [rsp+68h] [rbp-49h]
  DMMVIDPNTOPOLOGY *v232; // [rsp+70h] [rbp-41h]
  unsigned int v233; // [rsp+78h] [rbp-39h]
  unsigned int v234; // [rsp+7Ch] [rbp-35h] BYREF
  unsigned int v235; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v236; // [rsp+84h] [rbp-2Dh] BYREF
  struct DMMVIDPNSOURCEMODESET *v237; // [rsp+88h] [rbp-29h] BYREF
  __int64 v238; // [rsp+90h] [rbp-21h] BYREF
  __int64 v239; // [rsp+98h] [rbp-19h]
  __int64 v240; // [rsp+A0h] [rbp-11h]
  __int64 v241[10]; // [rsp+A8h] [rbp-9h] BYREF
  struct BML_VIDPN_PATH_ORDER **v242; // [rsp+108h] [rbp+57h] BYREF
  struct DMMVIDPN *v243; // [rsp+110h] [rbp+5Fh]
  const struct _D3DKMT_GETPATHSMODALITY *v244; // [rsp+118h] [rbp+67h] BYREF
  __int16 v245; // [rsp+120h] [rbp+6Fh]

  v245 = a4;
  v244 = a3;
  v243 = (struct DMMVIDPN *)a2;
  v242 = a1;
  v6 = (__int64 *)a1;
  v7 = a3;
  v9 = a4;
  v10 = operator new(104LL * (*((unsigned __int16 *)a3 + 10) - 1) + 120, 0x63644356u, PagedPool);
  *v6 = (__int64)v10;
  if ( !v10 )
  {
    v123 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v123 + 24) = v7;
    *(_QWORD *)(v123 + 32) = *((unsigned __int16 *)v7 + 10);
    WdLogEvent5_WdLowResource(v123);
    return 3221225626LL;
  }
  v12 = a2[6];
  v228 = v12;
  if ( !g_Win32kSupportsPathIndependentRotation )
    goto LABEL_128;
  if ( !*((_QWORD *)v12 + 1) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v124);
  }
  v13 = *((_QWORD *)v12 + 1);
  v11 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 2128LL);
  if ( *(_BYTE *)(v11 + 133) )
  {
    if ( !v13 )
    {
      v125 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v125);
    }
    v13 = *((_QWORD *)v12 + 1);
    v11 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 2128LL);
    if ( *(_BYTE *)(v11 + 134) )
      goto LABEL_9;
  }
  if ( !v13 )
  {
    v126 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v126);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 192LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL) >= 0x4003u )
LABEL_9:
    v225 = 1;
  else
LABEL_128:
    v225 = 0;
  v14 = a2[6];
  if ( !*((_QWORD *)v14 + 1) )
  {
    v127 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v127);
  }
  v15 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL);
  if ( *(_QWORD *)(v15 + 2136) )
  {
    *(_DWORD *)(*v6 + 8) &= ~1u;
  }
  else
  {
    v128 = a2[6];
    if ( !*((_QWORD *)v128 + 1) )
    {
      v129 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v129);
    }
    v130 = *(_QWORD *)(*((_QWORD *)v128 + 1) + 16LL);
    v131 = *(_QWORD *)(v130 + 2128);
    if ( *(_QWORD *)(*(_QWORD *)(v131 + 16) + 2136LL) )
    {
      v132 = WdLogNewEntry5_WdAssertion(v130);
      *(_QWORD *)(v132 + 24) = 4720LL;
      WdLogEvent5_WdAssertion(v132);
    }
    v15 = (*(_DWORD *)(*v6 + 8) ^ *(_DWORD *)(v131 + 248)) & 1;
    *(_DWORD *)(*v6 + 8) ^= v15;
  }
  v16 = a2[6];
  if ( !*((_QWORD *)v16 + 1) )
  {
    v133 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v133);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 1) + 16LL) + 2128LL);
  if ( !*(_BYTE *)(v17 + 134) || (v18 = 1, *(_BYTE *)(v17 + 133)) )
    v18 = 0;
  v19 = *v6;
  v20 = 0;
  v21 = a6;
  *(_DWORD *)(v19 + 8) = *(_DWORD *)(*v6 + 8) & 1 | (2 * (v18 & 1));
  *(_BYTE *)v19 = 0;
  *(_DWORD *)(v19 + 4) = v21;
  for ( i = *((_WORD *)v7 + 10) != 0; i; i = v20 < *((unsigned __int16 *)v7 + 10) )
  {
    v23 = 216LL * v20;
    v24 = (_DWORD *)((char *)v7 + v23 + 48);
    if ( (*v24 & 0x40000) == 0 )
    {
      v134 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v134);
    }
    if ( !*((_QWORD *)v12 + 1) )
    {
      v135 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v135);
    }
    v25 = *((_QWORD *)v12 + 1);
    v19 = *(unsigned int *)(*(_QWORD *)(v25 + 16) + 268LL);
    if ( v24[2] == (_DWORD)v19 )
    {
      if ( !v25 )
      {
        v136 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v136);
      }
      v19 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL);
      if ( v24[3] == *(_DWORD *)(v19 + 272) )
      {
        if ( (*v24 & 0x7000) != 0x7000 )
        {
          v141 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v141 + 24) = v20;
          *(_QWORD *)(v141 + 32) = v7;
          WdLogEvent5_WdError(v141);
          return 3221225485LL;
        }
        v26 = *v6;
        v27 = 104LL * *(unsigned __int8 *)*v6;
        v28 = a5;
        v29 = (void *)(v27 + *v6 + 72);
        *(_QWORD *)(v27 + v26 + 52) = 0LL;
        *(_QWORD *)(v27 + v26 + 16) = v24;
        *(_WORD *)(v27 + v26 + 32) = v20;
        *(_WORD *)(v27 + v26 + 64) = 0;
        *(_WORD *)(v27 + v26 + 68) = 0;
        *(_WORD *)(v27 + v26 + 66) = v9;
        *(_WORD *)(v27 + v26 + 70) = v28;
        *(_DWORD *)(v27 + v26 + 60) = 0;
        *(_DWORD *)(v27 + v26 + 116) = 0;
        memset(v29, 0, 0x24uLL);
        if ( g_IsMobileCore )
        {
          v137 = 0;
          if ( *((_WORD *)v7 + 10) )
          {
            v138 = v244;
            do
            {
              v139 = 216LL * v137;
              if ( (*(_DWORD *)((_BYTE *)v138 + v139 + 48) & 0x40000) == 0 )
              {
                v140 = WdLogNewEntry5_WdAssertion(v19);
                WdLogEvent5_WdAssertion(v140);
              }
              if ( v137 != v20 && *(_DWORD *)((char *)v138 + v139 + 248) == v24[50] )
                *(_DWORD *)(v27 + v26 + 116) |= 2u;
              ++v137;
            }
            while ( v137 < *((unsigned __int16 *)v138 + 10) );
            v6 = (__int64 *)v242;
            v7 = v244;
          }
          v9 = v245;
        }
        v12 = v228;
        ++*(_BYTE *)*v6;
      }
    }
    ++v20;
  }
  v30 = (_BYTE *)*v6;
  v31 = 0;
  v32 = (struct DMMVIDPN *)((char *)v243 + 96);
  v232 = (struct DMMVIDPN *)((char *)v243 + 96);
  if ( *v30 )
  {
    do
    {
      v33 = v31 + 1;
      v34 = v31 + 1;
      if ( (int)(v31 + 1) > 32 )
      {
        v142 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v142 + 24) = *v6;
        *(_QWORD *)(v142 + 32) = v31;
        WdLogEvent5_WdAssertion(v142);
        LODWORD(v34) = 32;
      }
      v35 = *v6;
      v36 = 104LL * v31;
      v37 = VIDPN_MGR::AddPathToVidPnTopology(
              v228,
              v232,
              *(_DWORD *)(*(_QWORD *)(v36 + *v6 + 16) + 16LL),
              *(_DWORD *)(*(_QWORD *)(v36 + *v6 + 16) + 20LL),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v34,
              *(_WORD *)(v36 + *v6 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v42 = v37;
      if ( v37 < 0 )
      {
        v143 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
        v143[3] = *(unsigned int *)(*(_QWORD *)(v36 + v35 + 16) + 16LL);
        v144 = *(unsigned int *)(*(_QWORD *)(v36 + v35 + 16) + 20LL);
        v143[5] = v232;
        v143[4] = v144;
        v143[6] = v42;
        return (unsigned int)v42;
      }
      v31 = v33;
      v19 = *(unsigned __int8 *)*v6;
    }
    while ( v33 < (unsigned int)v19 );
    v32 = v232;
  }
  v43 = 0;
  v226 = 0;
  if ( *(_BYTE *)*v6 )
  {
    while ( 1 )
    {
      v44 = *v6;
      v45 = 104LL * v43;
      if ( (**(_DWORD **)(*v6 + v45 + 16) & 0x40000) == 0 )
      {
        v145 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v145);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(
               v32,
               *(_DWORD *)(*(_QWORD *)(v44 + v45 + 16) + 16LL),
               *(_DWORD *)(*(_QWORD *)(v44 + v45 + 16) + 20LL));
      if ( *(_BYTE *)(v51 + 121) )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
        v52[3] = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 16LL);
        v52[4] = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 20LL);
        v52[5] = *(int *)(*(_QWORD *)(v44 + v45 + 16) + 12LL);
        v52[6] = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 8LL);
        v53 = *(_DWORD **)(v44 + v45 + 16);
        if ( (*v53 & 0x20100) == 0x20100 )
        {
          if ( v53[27] != 21 )
          {
            v146 = WdLogNewEntry5_WdAssertion(v53);
            *(_QWORD *)(v146 + 24) = 3780LL;
            WdLogEvent5_WdAssertion(v146);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v44 + v45 + 16) + 120LL) )
          {
            v147 = WdLogNewEntry5_WdAssertion(v53);
            *(_QWORD *)(v147 + 24) = 3781LL;
            WdLogEvent5_WdAssertion(v147);
          }
        }
        v54 = *(_DWORD **)(v44 + v45 + 16);
        if ( (*v54 & 0x20000) == 0 )
        {
          v111 = (*v54 & 0x100) == 0;
          if ( ((v54[1] & 0x100) == 0) != v111 )
          {
            v148 = WdLogNewEntry5_WdAssertion(v111);
            *(_QWORD *)(v148 + 24) = 3795LL;
            WdLogEvent5_WdAssertion(v148);
          }
        }
      }
      v55 = *((_QWORD *)Path + 11);
      v56 = *(_QWORD *)(v55 + 104);
      if ( v56 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
        v57 = *(_QWORD *)(v55 + 104);
      }
      else
      {
        v57 = 0LL;
      }
      v58 = *v6;
      v238 = v57;
      v59 = BmlFillPreferredMonitorMode(v58, v43, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v63 = (struct DMMVIDPN *)v59;
      if ( v59 < 0 )
      {
        v192 = (_QWORD *)WdLogNewEntry5_WdTrace(v60, 0LL, v61, v62);
        v192[3] = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 16LL);
        v193 = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 20LL);
        v192[5] = v232;
        v192[4] = v193;
        v192[6] = v63;
        *(_QWORD *)(104LL * v43 + *v6 + 52) = 0LL;
        goto LABEL_219;
      }
      v64 = *(_DWORD **)(v44 + v45 + 16);
      if ( (*v64 & 0x400) == 0 )
        goto LABEL_102;
      AdapterDefaultScaling = v64[32];
      if ( AdapterDefaultScaling <= 0 )
        goto LABEL_153;
      if ( AdapterDefaultScaling > 5 )
        break;
      v66 = v228;
LABEL_56:
      *(_DWORD *)(v44 + v45 + 24) = AdapterDefaultScaling;
LABEL_57:
      v67 = *(_DWORD **)(v44 + v45 + 16);
      v68 = 0;
      v69 = 0;
      if ( (*v67 & 0x8000) == 0 || !IsInternalVideoOutput(v67[20]) || (*(_DWORD *)(v70 + 4) & 0x200) != 0 )
        goto LABEL_59;
      PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v66, *(_DWORD *)(v70 + 20));
      v63 = (struct DMMVIDPN *)*((_QWORD *)v243 + 6);
      if ( !*((_QWORD *)v63 + 1) )
      {
        v157 = WdLogNewEntry5_WdAssertion(v155);
        WdLogEvent5_WdAssertion(v157);
      }
      v158 = IsVirtualizationDisabledForTarget(
               *(_QWORD *)(*((_QWORD *)v63 + 1) + 16LL),
               *(_DWORD *)(*(_QWORD *)(v44 + v45 + 16) + 20LL),
               (bool *)&v244,
               (bool *)&v242);
      v68 = 0;
      LODWORD(v63) = v158;
      if ( v158 < 0 )
      {
        v191 = (_QWORD *)WdLogNewEntry5_WdError(v159);
        v191[3] = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 20LL);
        v191[4] = *(int *)(*(_QWORD *)(v44 + v45 + 16) + 12LL);
        v191[5] = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 8LL);
        WdLogEvent5_WdError(v191);
LABEL_219:
        v194 = &v238;
        goto LABEL_222;
      }
      if ( PathFromTargetInClientVidPn && !(_BYTE)v244 )
      {
        v160 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
        goto LABEL_165;
      }
      if ( g_IsMobileCore )
        goto LABEL_172;
      if ( PathFromTargetInClientVidPn )
        goto LABEL_61;
      Global = DXGGLOBAL::GetGlobal(v159);
      v68 = 0;
      if ( *((_DWORD *)Global + 190) )
      {
        v163 = DXGGLOBAL::GetGlobal(v162);
        v68 = 0;
        v160 = *((_DWORD *)v163 + 190);
LABEL_165:
        if ( v160 )
        {
          v164 = *(int **)(v44 + v45 + 16);
          v165 = *v164;
          if ( (*v164 & 0x200) != 0 )
          {
            if ( (((unsigned __int8)v160 ^ *((_BYTE *)v164 + 124)) & 1) != 0 && (v165 & 0x20000) != 0 )
            {
              v166 = v164[36];
              v167 = v164[37];
              *v164 &= ~0x800000u;
              v164[36] = v167;
              v164[37] = v166;
            }
          }
          else if ( (v165 & 0x20000) != 0 )
          {
            v168 = WdLogNewEntry5_WdAssertion(v159);
            WdLogEvent5_WdAssertion(v168);
            v68 = 0;
          }
          *v164 |= 0x200u;
          v69 = 1;
          v164[31] = v160;
          *(_DWORD *)(v44 + v45 + 28) = v160;
        }
      }
LABEL_59:
      if ( g_IsMobileCore == v68 )
        goto LABEL_60;
LABEL_172:
      if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)(v44 + v45 + 16) + 80LL))
        && (*(_DWORD *)(v169 + 4) & 0x200) == 0 )
      {
        v172 = v171;
        if ( (unsigned __int16)v171 < *((_WORD *)v7 + 10) )
        {
          do
          {
            v173 = 216LL * v172;
            if ( (*(_DWORD *)((_BYTE *)v7 + v173 + 48) & 0x40000) == 0 )
            {
              v174 = WdLogNewEntry5_WdAssertion(v170);
              WdLogEvent5_WdAssertion(v174);
            }
            v170 = *(unsigned int *)(*(_QWORD *)(v44 + v45 + 16) + 200LL);
            if ( *(_DWORD *)((char *)v7 + v173 + 248) == (_DWORD)v170
              && IsInternalVideoOutput(*(_DWORD *)((char *)v7 + v173 + 128)) )
            {
              break;
            }
            ++v172;
          }
          while ( v172 < *((unsigned __int16 *)v7 + 10) );
        }
        if ( v172 < *((unsigned __int16 *)v7 + 10) )
        {
          v175 = 1;
          v176 = *((unsigned int *)DXGGLOBAL::GetGlobal(v170) + 190);
          if ( (int)v176 >= 0 )
          {
            if ( (int)v176 <= 1 )
            {
LABEL_190:
              v178 = *(unsigned int **)(v44 + v45 + 16);
              v69 = 1;
              v179 = *v178;
              v178[31] = v175;
              *v178 = v179 & 0xFF7FFDFF | 0x200;
              *(_DWORD *)(v44 + v45 + 28) = v175;
              goto LABEL_60;
            }
            switch ( (_DWORD)v176 )
            {
              case 2:
                v175 = 4;
                goto LABEL_190;
              case 3:
                v175 = 3;
                goto LABEL_190;
              case 4:
                v175 = 2;
                goto LABEL_190;
            }
          }
          v177 = WdLogNewEntry5_WdAssertion(v176);
          WdLogEvent5_WdAssertion(v177);
          goto LABEL_190;
        }
      }
LABEL_60:
      if ( v69 )
        goto LABEL_67;
LABEL_61:
      v71 = *(_DWORD **)(v44 + v45 + 16);
      if ( (*v71 & 0x200) == 0 )
      {
        v112 = *v6;
        v78 = v226;
        if ( !(unsigned __int8)BmlIsSecondaryClonePath(*v6, v226, &v236) )
        {
          v114 = D3DKMDT_VPPR_IDENTITY;
LABEL_106:
          if ( v114 == D3DKMDT_VPPR_UNINITIALIZED )
          {
            v190 = WdLogNewEntry5_WdAssertion(v113);
            WdLogEvent5_WdAssertion(v190);
          }
          *(_DWORD *)(v44 + v45 + 28) = v114;
          goto LABEL_68;
        }
        v186 = 104LL * v236;
        v114 = *(_DWORD *)(v186 + v112 + 28);
        if ( v114 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v187 = WdLogNewEntry5_WdAssertion(v113);
          WdLogEvent5_WdAssertion(v187);
        }
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v114) != D3DKMDT_VPPR_IDENTITY )
        {
          v188 = WdLogNewEntry5_WdAssertion(v113);
          WdLogEvent5_WdAssertion(v188);
        }
        if ( !v225
          || (LOBYTE(v113) = *(_DWORD *)(v186 + v112 + 52) < *(_DWORD *)(v186 + v112 + 56),
              (_BYTE)v113 == *(_DWORD *)(v112 + v45 + 52) < *(_DWORD *)(v112 + v45 + 56)) )
        {
          v78 = v226;
          goto LABEL_106;
        }
        v78 = v226;
        v189 = v114 - 1;
        if ( *(_DWORD *)(v112 + v45 + 52) >= *(_DWORD *)(v112 + v45 + 56) )
        {
          if ( v189 <= 3 )
          {
            v114 += 4;
            goto LABEL_106;
          }
        }
        else if ( v189 <= 3 )
        {
          v114 += 12;
          goto LABEL_106;
        }
        v114 = D3DKMDT_VPPR_NOTSPECIFIED;
        goto LABEL_106;
      }
      v72 = v71[31];
      if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v72) - 1) > 3 )
        goto LABEL_201;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v72) == D3DKMDT_VPPR_IDENTITY )
      {
        if ( v225 != v77 && (unsigned __int8)BmlIsSecondaryClonePath(*v6, v226, &v235) )
        {
          v180 = *(_DWORD *)(*(_QWORD *)(104LL * v235 + *v6 + 16) + 124LL);
          if ( (unsigned int)(v180 - 1) > 0xF
            || (unsigned int)(v72 - 1) > 0xF
            || (v181 = (v72 - v180 + 4) % 4, v180 > 4)
            || (v182 = v180 + 4 * v181, v181 > 3) )
          {
            v182 = 255;
          }
          *(_DWORD *)(v44 + v45 + 28) = v182;
        }
        else
        {
          *(_DWORD *)(v44 + v45 + 28) = v72;
        }
LABEL_67:
        v78 = v226;
        goto LABEL_68;
      }
      if ( v225 == v77 )
      {
LABEL_201:
        v185 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v73, v75, v76);
        v78 = v226;
        v185[3] = *v6;
        v185[4] = v226;
        v185[5] = *(int *)(*(_QWORD *)(v44 + v45 + 16) + 124LL);
        WdLogEvent5_WdWarning(v185);
        *(_DWORD *)(v44 + v45 + 28) = 1;
        goto LABEL_68;
      }
      v78 = v226;
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*v6, v226, 0LL) )
      {
        *(_DWORD *)(v44 + v45 + 28) = *(_DWORD *)(*(_QWORD *)(v44 + v45 + 16) + 124LL);
      }
      else
      {
        v184 = (_QWORD *)WdLogNewEntry5_WdAssertion(v183);
        v184[3] = *v6;
        v184[4] = v226;
        v184[5] = *(int *)(*(_QWORD *)(v44 + v45 + 16) + 124LL);
        WdLogEvent5_WdAssertion(v184);
        *(_DWORD *)(v44 + v45 + 28) = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)(v44 + v45 + 16) + 124LL));
      }
LABEL_68:
      v79 = *(_QWORD *)(v44 + v45 + 16);
      if ( *(_BYTE *)(v79 + 121) && (*(_DWORD *)v79 & 0x20000) != 0 )
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v44 + v45 + 28)) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)(v44 + v45 + 108) = *(_DWORD *)(v80 + 144);
          v81 = *(_DWORD *)(v80 + 148);
        }
        else
        {
          *(_DWORD *)(v44 + v45 + 108) = *(_DWORD *)(v80 + 148);
          v81 = *(_DWORD *)(v80 + 144);
        }
        *(_DWORD *)(v44 + v45 + 116) |= 1u;
        *(_DWORD *)(v44 + v45 + 112) = v81;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*v6, v78, 0LL) )
        *(_WORD *)(v44 + v45 + 66) = 0;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v238, 0LL);
      v43 = v78 + 1;
      v226 = v43;
      v19 = *(unsigned __int8 *)*v6;
      if ( v43 >= (unsigned int)v19 )
        goto LABEL_76;
      v32 = v232;
    }
    if ( AdapterDefaultScaling == 253 )
    {
LABEL_102:
      v66 = v228;
    }
    else
    {
      if ( AdapterDefaultScaling != 255 )
      {
LABEL_153:
        v66 = v228;
        *(_DWORD *)(v44 + v45 + 24) = VIDPN_MGR::GetAdapterDefaultScaling(v228);
        v154 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v150, v152, v153);
        v154[3] = *(int *)(v44 + v45 + 24);
        v154[4] = *v6;
        v154[5] = v43;
        v154[6] = *(int *)(*(_QWORD *)(v44 + v45 + 16) + 128LL);
        WdLogEvent5_WdWarning(v154);
        goto LABEL_57;
      }
      v66 = v228;
      if ( !*((_QWORD *)v228 + 1) )
      {
        v149 = WdLogNewEntry5_WdAssertion(v64);
        WdLogEvent5_WdAssertion(v149);
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v228 + 1) + 16LL)) < 1105 )
      {
        *(_DWORD *)(v44 + v45 + 24) = 255;
        goto LABEL_57;
      }
    }
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v66);
    goto LABEL_56;
  }
LABEL_76:
  v82 = (_BYTE *)*v6;
  v83 = 0;
  v233 = 0;
  if ( *v82 )
  {
    do
    {
      v84 = *v6;
      v85 = 104LL * v83;
      v239 = *v6;
      v240 = v85;
      if ( !(unsigned __int8)BmlIsSecondaryClonePath(v239, v83, 0LL) )
      {
        v86 = (unsigned __int8 *)*v6;
        v87 = 0;
        v231 = 0LL;
        v88 = 0;
        v89 = v83;
        v227 = v83;
        if ( v83 < *v86 )
        {
          do
          {
            v90 = *v6;
            v91 = 104LL * v89;
            v92 = *(_QWORD *)(v91 + *v6 + 16);
            if ( *(_DWORD *)(v92 + 16) == *(_DWORD *)(*(_QWORD *)(v85 + v84 + 16) + 16LL) )
            {
              v93 = *(_QWORD *)(v91 + v90 + 44);
              v230 = v93;
              if ( v225
                && ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v91 + v90 + 28)) - 2) & 0xFFFFFFFD) == 0 )
              {
                v94 = v230;
                v95 = HIDWORD(v230);
                v230 = __PAIR64__(v230, HIDWORD(v230));
                v93 = v230;
              }
              else
              {
                v94 = HIDWORD(v230);
                v95 = v230;
              }
              if ( !v95 || !v94 )
              {
                v122 = WdLogNewEntry5_WdAssertion(v92);
                WdLogEvent5_WdAssertion(v122);
                v89 = v227;
              }
              if ( v87 && v88 )
              {
                if ( v87 > v95 )
                  v87 = v95;
                LODWORD(v231) = v87;
                if ( v88 > v94 )
                  v88 = v94;
                HIDWORD(v231) = v88;
              }
              else
              {
                v231 = v93;
                v87 = v93;
                v88 = HIDWORD(v93);
              }
              v85 = v240;
              v84 = v239;
            }
            v227 = ++v89;
          }
          while ( v89 < *(unsigned __int8 *)*v6 );
          v83 = v233;
        }
        *(_QWORD *)(v85 + v84 + 36) = v231;
        *(_DWORD *)(v85 + v84 + 60) = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(v85 + v84 + 52));
      }
      v96 = (unsigned __int8 *)*v6;
      v233 = ++v83;
    }
    while ( v83 < *v96 );
  }
  v97 = 0;
  if ( !*(_BYTE *)*v6 )
    return 0LL;
  while ( 1 )
  {
    v98 = *v6;
    v99 = 104LL * v97;
    v104 = DMMVIDPNTOPOLOGY::FindPath(
             v232,
             *(_DWORD *)(*(_QWORD *)(v99 + *v6 + 16) + 16LL),
             *(_DWORD *)(*(_QWORD *)(v99 + *v6 + 16) + 20LL));
    v105 = *((_QWORD *)v104 + 11);
    v106 = *(_QWORD *)(v105 + 104);
    if ( v106 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v106 + 96));
      v107 = *(struct DMMVIDPNSOURCEMODESET **)(v105 + 104);
    }
    else
    {
      v107 = v103;
    }
    v108 = *(_DWORD **)(v99 + v98 + 16);
    v237 = v107;
    v109 = v108[1];
    if ( (v109 & 0x820987) == 0 )
      goto LABEL_97;
    if ( (*v108 & v109 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*v6, v97, 0LL) )
    {
      v201 = WdLogNewEntry5_WdWarning(v108, v100, v101, v102);
      *(_QWORD *)(v201 + 24) = *v6;
      *(_QWORD *)(v201 + 32) = v97;
      WdLogEvent5_WdWarning(v201);
      goto LABEL_97;
    }
    v63 = v243;
    v229 = -1;
    if ( (int)BmlGetNextBestSourceMode(*v6, -1, (__int64)&v229) >= 0 )
      break;
    v200 = *(_DWORD **)(v99 + v98 + 16);
    if ( (*v200 & 0x400000) == 0 )
    {
      DxgkLogCodePointPacket(0x13u, v200[22], v200[23], v200[27]);
      v209 = (_QWORD *)WdLogNewEntry5_WdWarning(v206, v205, v207, v208);
      v209[3] = *v6;
      v209[5] = v97;
      v209[6] = v229;
      v209[4] = v63;
      WdLogEvent5_WdWarning(v209);
      LODWORD(v63) = -1071774970;
      goto LABEL_221;
    }
    v200[1] &= 0xFFFFFE78;
LABEL_98:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v237, 0LL);
    if ( ++v97 >= *(unsigned __int8 *)*v6 )
      return 0LL;
  }
  v115 = VIDPN_MGR::PinVidPnSourceMode(v228, v107, v229, 1);
  v63 = (struct DMMVIDPN *)v115;
  if ( v115 < 0 )
  {
    DxgkLogCodePointPacket(
      0x15u,
      *(_DWORD *)(*(_QWORD *)(v99 + v98 + 16) + 88LL),
      *(_DWORD *)(*(_QWORD *)(v99 + v98 + 16) + 92LL),
      *(_DWORD *)(*(_QWORD *)(v99 + v98 + 16) + 108LL));
    v199 = (_QWORD *)WdLogNewEntry5_WdWarning(v196, v195, v197, v198);
    v199[4] = *v6;
    v199[5] = v243;
    v199[6] = v97;
    v199[3] = v63;
    WdLogEvent5_WdWarning(v199);
    goto LABEL_221;
  }
  *(_WORD *)(v99 + v98 + 66) = 0;
  v116 = *((_QWORD *)v104 + 12);
  v117 = *(_QWORD *)(v116 + 104);
  if ( v117 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v117 + 96));
    v118 = *(struct DMMVIDPNTARGETMODESET **)(v116 + 104);
  }
  else
  {
    v118 = 0LL;
  }
  v119 = *(_QWORD *)(v99 + v98 + 16);
  v241[0] = (__int64)v118;
  if ( (*(_BYTE *)v119 & 0x87) != 0x87
    || (*(_BYTE *)(v119 + 4) & 0x87) != 0x87
    || !*(_DWORD *)(v119 + 48)
    || !*(_DWORD *)(v119 + 44) )
  {
    v121 = -1;
    goto LABEL_121;
  }
  v234 = -1;
  v224 = (__int64)v107;
  v120 = v243;
  if ( (int)BmlGetNextBestTargetMode(*v6, (__int64)v243, (unsigned __int16)v97, v118, v224, 0xFFFFFFFF, &v234) >= 0 )
  {
    v63 = (struct DMMVIDPN *)(int)VIDPN_MGR::PinVidPnTargetMode(v228, v118, v234, 1);
    v121 = 0;
    if ( (int)v63 < 0 )
    {
      v210 = DMMVIDEOSIGNALMODE::DivideAndRound(
               *(unsigned int *)(*(_QWORD *)(v99 + v98 + 16) + 44LL),
               *(unsigned int *)(*(_QWORD *)(v99 + v98 + 16) + 48LL));
      DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v211 + 36), *(_DWORD *)(v211 + 40), v210);
      v216 = (_QWORD *)WdLogNewEntry5_WdWarning(v213, v212, v214, v215);
      v216[4] = *v6;
      v216[6] = v97;
      v216[3] = v63;
      v216[5] = v120;
      WdLogEvent5_WdWarning(v216);
      goto LABEL_243;
    }
LABEL_121:
    *(_WORD *)(v99 + v98 + 70) = v121;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v241, 0LL);
LABEL_97:
    if ( DMMVIDPNPRESENTPATH::IsFunctional(v104) )
    {
      v202 = (unsigned __int8 *)*v6;
      for ( j = 0; j < *v202; ++j )
      {
        v204 = 104LL * j;
        if ( *(_DWORD *)(*(_QWORD *)&v202[v204 + 16] + 16LL) == *(_DWORD *)(*(_QWORD *)(v99 + v98 + 16) + 16LL) )
          *(_WORD *)&v202[v204 + 66] = 0;
      }
      *(_WORD *)(v99 + v98 + 70) = 0;
    }
    goto LABEL_98;
  }
  v217 = DMMVIDEOSIGNALMODE::DivideAndRound(
           *(unsigned int *)(*(_QWORD *)(v99 + v98 + 16) + 44LL),
           *(unsigned int *)(*(_QWORD *)(v99 + v98 + 16) + 48LL));
  DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v218 + 36), *(_DWORD *)(v218 + 40), v217);
  v223 = (_QWORD *)WdLogNewEntry5_WdWarning(v220, v219, v221, v222);
  v223[3] = *v6;
  v223[5] = v97;
  v223[4] = v120;
  WdLogEvent5_WdWarning(v223);
  LODWORD(v63) = -1071774970;
LABEL_243:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v241, 0LL);
LABEL_221:
  v194 = (__int64 *)&v237;
LABEL_222:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v194, 0LL);
  return (unsigned int)v63;
}
