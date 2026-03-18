/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C009B86C (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005BF0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0008450 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00966D4 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0096710 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00987A0 (BmlFillPreferredMonitorMode.c)
 *     BmlGetNextBestTargetMode @ 0x1C0098D10 (BmlGetNextBestTargetMode.c)
 *     BmlGetNextBestSourceMode @ 0x1C0099080 (BmlGetNextBestSourceMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C009A494 (BmlIsSecondaryClonePath.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C009ABE8 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0172EC0 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        struct BML_VIDPN_PATH_ORDER **a1,
        struct DMMVIDPN *a2,
        const struct _D3DKMT_GETPATHSMODALITY *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  struct BML_VIDPN_PATH_ORDER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  VIDPN_MGR *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // r14d
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned __int16 v24; // r12
  __int64 v25; // rcx
  _DWORD *v26; // r15
  _DWORD *v27; // rbx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  unsigned int v30; // ebx
  struct DMMVIDPNTOPOLOGY *v31; // r12
  unsigned int v32; // edi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v33; // ecx
  _DWORD *v34; // r14
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r15
  unsigned int v39; // r13d
  _DWORD *v40; // rdi
  __int64 v41; // rbx
  DMMVIDPNTOPOLOGY *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r11
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v49; // r10
  _QWORD *v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  _DWORD *v54; // rcx
  _DWORD *v55; // rax
  _BOOL8 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  _DWORD *v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r14
  _DWORD *v67; // rcx
  VIDPN_MGR *v68; // r14
  int AdapterDefaultScaling; // eax
  _DWORD *v70; // rdx
  __int64 v71; // rdx
  _DWORD *v72; // rcx
  _DWORD *v73; // r15
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v78; // r14d
  __int64 v79; // r10
  unsigned int v80; // r15d
  unsigned __int8 *v81; // rbx
  __int64 v82; // r12
  unsigned __int8 *v83; // rax
  unsigned int v84; // edi
  unsigned int v85; // r14d
  __int64 v86; // r8
  unsigned __int8 *v87; // r10
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  unsigned __int64 v91; // rbx
  unsigned int v92; // r13d
  unsigned int v93; // r12d
  unsigned __int8 *v94; // rax
  unsigned int v95; // r15d
  unsigned __int8 *v96; // r14
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  struct DMMVIDPNSOURCEMODESET *v101; // r11
  struct DMMVIDPNPRESENTPATH *v102; // r13
  __int64 v103; // r12
  __int64 v104; // rcx
  struct DMMVIDPNSOURCEMODESET *v105; // r12
  _DWORD *v106; // rcx
  int v107; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  char v113; // r10
  __int64 v114; // r9
  int v115; // eax
  __int64 v116; // rbx
  __int64 v117; // rbx
  __int64 v118; // rax
  struct DMMVIDPNTARGETMODESET *v119; // rbx
  __int64 v120; // rcx
  __int16 v121; // ax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  _QWORD *v143; // rax
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  const struct DMMVIDPNPRESENTPATH *v149; // r14
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  unsigned int v153; // r15d
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned int *v158; // r14
  __int64 v159; // rdx
  unsigned int v160; // ecx
  unsigned int v161; // eax
  __int64 v162; // rax
  int v164; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v165; // eax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // r12
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rax
  unsigned int v176; // eax
  __int64 v177; // rax
  __int64 v178; // r10
  int v179; // eax
  _QWORD *v180; // rax
  __int64 v181; // r9
  int v182; // eax
  __int64 v183; // r10
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  _QWORD *v188; // rax
  __int64 v189; // rax
  unsigned __int8 *v190; // r8
  unsigned int j; // r9d
  __int64 v192; // r10
  int v193; // eax
  __int64 v194; // r10
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  _QWORD *v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  _QWORD *v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  _QWORD *v209; // rax
  VIDPN_MGR *v210; // [rsp+40h] [rbp-49h]
  unsigned __int64 v211; // [rsp+50h] [rbp-39h]
  unsigned int i; // [rsp+58h] [rbp-31h]
  unsigned int v213; // [rsp+5Ch] [rbp-2Dh] BYREF
  unsigned int v214; // [rsp+60h] [rbp-29h]
  unsigned int v215; // [rsp+64h] [rbp-25h] BYREF
  unsigned int v216; // [rsp+68h] [rbp-21h] BYREF
  __int64 v217; // [rsp+70h] [rbp-19h] BYREF
  DMMVIDPNTOPOLOGY *v218; // [rsp+78h] [rbp-11h]
  unsigned __int8 *v219; // [rsp+80h] [rbp-9h]
  struct DMMVIDPNTARGETMODESET *v220; // [rsp+88h] [rbp-1h] BYREF
  __int64 v221; // [rsp+90h] [rbp+7h]
  __int64 v222[7]; // [rsp+98h] [rbp+Fh] BYREF
  char v223; // [rsp+E0h] [rbp+57h]
  unsigned int v225; // [rsp+F0h] [rbp+67h] BYREF

  v10 = (struct BML_VIDPN_PATH_ORDER *)operator new[](
                                         104LL * (*((unsigned __int16 *)a3 + 10) - 1) + 120,
                                         0x63644356u,
                                         PagedPool);
  *a1 = v10;
  if ( !v10 )
  {
    v123 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v123 + 24) = a3;
    *(_QWORD *)(v123 + 32) = *((unsigned __int16 *)a3 + 10);
    WdLogEvent5_WdLowResource(v123);
    return 3221225626LL;
  }
  v15 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  v210 = v15;
  if ( !g_Win32kSupportsPathIndependentRotation )
    goto LABEL_9;
  if ( !*((_QWORD *)v15 + 1) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v124);
  }
  v11 = *((_QWORD *)v15 + 1);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 1976LL);
  if ( *(_BYTE *)(v12 + 133) )
    goto LABEL_104;
  if ( !v11 )
  {
    v125 = WdLogNewEntry5_WdAssertion(v12, 0LL, v13, v14);
    WdLogEvent5_WdAssertion(v125);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 176LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL) >= 0x4003u )
LABEL_104:
    v223 = 1;
  else
LABEL_9:
    v223 = 0;
  v16 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v16 + 8) )
  {
    v126 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v126);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
  v18 = (*((_DWORD *)*a1 + 2) ^ (*(_QWORD *)(v17 + 1984) == 0LL)) & 1;
  *((_DWORD *)*a1 + 2) ^= v18;
  v19 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v19 + 8) )
  {
    v127 = WdLogNewEntry5_WdAssertion(v17, v18, v13, v14);
    WdLogEvent5_WdAssertion(v127);
  }
  v20 = 0;
  v21 = *a1;
  v22 = *((_DWORD *)*a1 + 2) & 1 | (2
                                  * ((*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL) + 284LL) >> 7) & 1u));
  v23 = a6;
  v21[2] = v22;
  *(_BYTE *)v21 = 0;
  v21[1] = v23;
  if ( *((_WORD *)a3 + 10) )
  {
    v24 = a5;
    do
    {
      v25 = 216LL * v20;
      v26 = (_DWORD *)((char *)a3 + v25 + 48);
      if ( (*v26 & 0x40000) == 0 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v25, v22, v13, v14);
        WdLogEvent5_WdAssertion(v128);
      }
      if ( !*((_QWORD *)v210 + 1) )
      {
        v129 = WdLogNewEntry5_WdAssertion(v25, v22, v13, v14);
        WdLogEvent5_WdAssertion(v129);
      }
      v22 = *((_QWORD *)v210 + 1);
      v21 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(v22 + 16) + 252LL);
      if ( v26[2] == (_DWORD)v21 )
      {
        if ( !v22 )
        {
          v130 = WdLogNewEntry5_WdAssertion(v21, 0LL, v13, v14);
          WdLogEvent5_WdAssertion(v130);
        }
        v21 = *(_DWORD **)(*((_QWORD *)v210 + 1) + 16LL);
        if ( v26[3] == HIDWORD(*(_QWORD *)(v21 + 63)) )
        {
          if ( (*v26 & 0x7000) != 0x7000 )
          {
            v131 = WdLogNewEntry5_WdError(28672LL);
            *(_QWORD *)(v131 + 24) = v20;
            *(_QWORD *)(v131 + 32) = a3;
            WdLogEvent5_WdError(v131);
            return 3221225485LL;
          }
          v27 = *a1;
          v28 = 26LL * *(unsigned __int8 *)*a1;
          *(_QWORD *)&v27[v28 + 4] = v26;
          LOWORD(v27[v28 + 8]) = v20;
          LOWORD(v27[v28 + 16]) = 0;
          LOWORD(v27[v28 + 17]) = 0;
          HIWORD(v27[v28 + 16]) = a4;
          HIWORD(v27[v28 + 17]) = v24;
          *(_QWORD *)&v27[v28 + 13] = 0LL;
          v27[v28 + 15] = 0;
          v27[v28 + 29] = 0;
          memset(&v27[v28 + 18], 0, 0x24uLL);
          ++*(_BYTE *)v27;
        }
      }
      ++v20;
    }
    while ( v20 < *((unsigned __int16 *)a3 + 10) );
    v15 = v210;
  }
  v29 = *a1;
  v30 = 0;
  v31 = (struct DMMVIDPN *)((char *)a2 + 96);
  v218 = (struct DMMVIDPN *)((char *)a2 + 96);
  if ( *(_BYTE *)v29 )
  {
    do
    {
      v32 = v30 + 1;
      v33 = v30 + 1;
      if ( (int)(v30 + 1) > 32 )
      {
        v132 = WdLogNewEntry5_WdAssertion(v32, v22, v13, v14);
        *(_QWORD *)(v132 + 24) = *a1;
        *(_QWORD *)(v132 + 32) = v30;
        WdLogEvent5_WdAssertion(v132);
        v33 = 32;
      }
      v34 = *a1;
      v35 = 104LL * v30;
      v36 = VIDPN_MGR::AddPathToVidPnTopology(
              v15,
              v31,
              *(unsigned int *)(*(_QWORD *)((char *)*a1 + v35 + 16) + 16LL),
              *(unsigned int *)(*(_QWORD *)((char *)*a1 + v35 + 16) + 20LL),
              v33,
              *(_WORD *)((char *)*a1 + v35 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v38 = v36;
      if ( v36 < 0 )
      {
        v133 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v22, v13, v14);
        v133[3] = *(unsigned int *)(*(_QWORD *)&v34[(unsigned __int64)v35 / 4 + 4] + 16LL);
        v133[4] = *(unsigned int *)(*(_QWORD *)&v34[(unsigned __int64)v35 / 4 + 4] + 20LL);
        v133[5] = v31;
        v133[6] = v38;
        return (unsigned int)v38;
      }
      v30 = v32;
      v15 = v210;
      v21 = (_DWORD *)*(unsigned __int8 *)*a1;
    }
    while ( v32 < (unsigned int)v21 );
  }
  v39 = 0;
  if ( *(_BYTE *)*a1 )
  {
    while ( 1 )
    {
      v40 = *a1;
      v41 = 26LL * v39;
      if ( (**(_DWORD **)((char *)*a1 + v41 * 4 + 16) & 0x40000) == 0 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v21, v22, v13, v14);
        WdLogEvent5_WdAssertion(v134);
      }
      v42 = v218;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               v218,
               *(_DWORD *)(*(_QWORD *)&v40[v41 + 4] + 16LL),
               *(_DWORD *)(*(_QWORD *)&v40[v41 + 4] + 20LL));
      if ( *(_BYTE *)(v49 + 117) != (_BYTE)v47 )
        break;
LABEL_42:
      v57 = *((_QWORD *)Path + 11);
      v58 = *(_QWORD *)(v57 + 104);
      if ( v58 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v58 + 96));
        v59 = *(_QWORD *)(v57 + 104);
      }
      else
      {
        v59 = v47;
      }
      v60 = *a1;
      v217 = v59;
      v61 = BmlFillPreferredMonitorMode((__int64)v60, v39, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v66 = v61;
      if ( v61 < 0 )
      {
        v180 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v62, v64, v65);
        v180[3] = *(unsigned int *)(*(_QWORD *)&v40[v41 + 4] + 16LL);
        v180[4] = *(unsigned int *)(*(_QWORD *)&v40[v41 + 4] + 20LL);
        v180[5] = v42;
        v180[6] = v66;
        *(_QWORD *)((char *)*a1 + 104 * v39 + 52) = 0LL;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v217, 0LL);
        return (unsigned int)v66;
      }
      v67 = *(_DWORD **)&v40[v41 + 4];
      if ( (*v67 & 0x400) != 0 )
      {
        AdapterDefaultScaling = v67[31];
        if ( AdapterDefaultScaling <= 0 )
          goto LABEL_120;
        if ( AdapterDefaultScaling > 5 )
        {
          if ( AdapterDefaultScaling == 253 )
          {
            v68 = v210;
          }
          else
          {
            if ( AdapterDefaultScaling != 255 )
            {
LABEL_120:
              v68 = v210;
              v40[v41 + 6] = VIDPN_MGR::GetAdapterDefaultScaling(v210, v62, v64, v65);
              v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v140, v139, v141, v142);
              v143[3] = (int)v40[v41 + 6];
              v143[4] = *a1;
              v143[5] = v39;
              v143[6] = *(int *)(*(_QWORD *)&v40[v41 + 4] + 124LL);
              WdLogEvent5_WdWarning(v143);
              goto LABEL_48;
            }
            v68 = v210;
            if ( !*((_QWORD *)v210 + 1) )
            {
              v138 = WdLogNewEntry5_WdAssertion(v67, v62, v64, v65);
              WdLogEvent5_WdAssertion(v138);
            }
            if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v210 + 1) + 16LL)) < 1105 )
            {
              v40[v41 + 6] = 255;
              goto LABEL_48;
            }
          }
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v68, v62, v64, v65);
        }
        else
        {
          v68 = v210;
        }
      }
      else
      {
        v68 = v210;
        AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v210, v62, v64, v65);
      }
      v40[v41 + 6] = AdapterDefaultScaling;
LABEL_48:
      v70 = *(_DWORD **)&v40[v41 + 4];
      if ( (*v70 & 0x8000) != 0 && IsInternalVideoOutput(v70[20]) && (*(_DWORD *)(v71 + 4) & 0x200) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v68, *(_DWORD *)(v71 + 20));
        v149 = PathFromTargetInClientVidPn;
        if ( PathFromTargetInClientVidPn )
        {
          if ( !DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(
                  *(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTargetInClientVidPn + 12) + 96LL),
                  v145,
                  v147,
                  v148) )
            goto LABEL_50;
          v153 = *((_DWORD *)v149 + 29);
        }
        else
        {
          if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v146, v145, v147, v148) + 194) )
            goto LABEL_50;
          v153 = *((_DWORD *)DXGGLOBAL::GetGlobal(v155, v154, v156, v157) + 194);
        }
        if ( v153 )
        {
          v158 = *(unsigned int **)&v40[v41 + 4];
          v159 = *v158;
          if ( (v159 & 0x200) != 0 )
          {
            if ( (((unsigned __int8)v153 ^ *((_BYTE *)v158 + 120)) & 1) != 0 && (v159 & 0x20000) != 0 )
            {
              v160 = v158[35];
              v161 = v158[36];
              *v158 &= ~0x800000u;
              v158[35] = v161;
              v158[36] = v160;
            }
          }
          else if ( (v159 & 0x20000) != 0 )
          {
            v162 = WdLogNewEntry5_WdAssertion(v150, v159, v151, v152);
            WdLogEvent5_WdAssertion(v162);
          }
          *v158 |= 0x200u;
          v158[30] = v153;
          v40[v41 + 7] = v153;
          goto LABEL_56;
        }
      }
LABEL_50:
      v72 = *(_DWORD **)&v40[v41 + 4];
      if ( (*v72 & 0x200) == 0 )
      {
        v73 = *a1;
        if ( !(unsigned __int8)BmlIsSecondaryClonePath(*a1, v39, &v216) )
        {
          v78 = D3DKMDT_VPPR_IDENTITY;
          goto LABEL_53;
        }
        v172 = 26LL * v216;
        v78 = v73[v172 + 7];
        if ( v78 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v173 = WdLogNewEntry5_WdAssertion(v75, v74, v76, v77);
          WdLogEvent5_WdAssertion(v173);
        }
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v78) != D3DKMDT_VPPR_IDENTITY )
        {
          v175 = WdLogNewEntry5_WdAssertion(v75, v174, v76, v77);
          WdLogEvent5_WdAssertion(v175);
        }
        v74 = 0LL;
        if ( !v223 )
          goto LABEL_53;
        LOBYTE(v75) = v73[v172 + 13] < v73[v172 + 14];
        if ( (_BYTE)v75 == v73[v41 + 13] < v73[v41 + 14] )
          goto LABEL_53;
        v176 = v78 - 1;
        if ( v73[v41 + 13] >= v73[v41 + 14] )
        {
          if ( v176 > 3 )
            goto LABEL_158;
          v78 += 4;
        }
        else
        {
          if ( v176 <= 3 )
          {
            v78 += 12;
            goto LABEL_53;
          }
LABEL_158:
          v78 = D3DKMDT_VPPR_NOTSPECIFIED;
        }
LABEL_53:
        if ( v78 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v177 = WdLogNewEntry5_WdAssertion(v75, v74, v76, v77);
          WdLogEvent5_WdAssertion(v177);
        }
LABEL_55:
        v40[v41 + 7] = v78;
        goto LABEL_56;
      }
      v78 = v72[30];
      if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v78) - 1) <= 3 )
      {
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v78) == D3DKMDT_VPPR_IDENTITY )
        {
          if ( v223 == v113 )
            goto LABEL_55;
          if ( !(unsigned __int8)BmlIsSecondaryClonePath(*a1, v39, &v215) )
            goto LABEL_55;
          v164 = *(_DWORD *)(*((_QWORD *)*a1 + 13 * v215 + 2) + 120LL);
          if ( (unsigned int)(v164 - 1) > 0xF
            || (unsigned int)(v78 - 1) > 0xF
            || v164 > 4
            || (unsigned int)((v78 - v164 + 4) % 4) > 3 )
          {
            v165 = D3DKMDT_VPPR_NOTSPECIFIED;
          }
          else
          {
            v165 = v164 - 4 + 4 * ((v78 - v164 + 4) % 4 + 1);
          }
LABEL_145:
          v40[v41 + 7] = v165;
          goto LABEL_56;
        }
        if ( v223 != v113 )
        {
          if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v39, 0LL) )
          {
            v40[v41 + 7] = *(_DWORD *)(*(_QWORD *)&v40[v41 + 4] + 120LL);
            goto LABEL_56;
          }
          v170 = (_QWORD *)WdLogNewEntry5_WdAssertion(v167, v166, v168, v169);
          v170[3] = *a1;
          v170[4] = v39;
          v170[5] = *(int *)(*(_QWORD *)&v40[v41 + 4] + 120LL);
          WdLogEvent5_WdAssertion(v170);
          v165 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v40[v41 + 4]
                                                                                          + 120LL));
          goto LABEL_145;
        }
      }
      v171 = (_QWORD *)WdLogNewEntry5_WdWarning(v110, v109, v111, v112);
      v171[3] = *a1;
      v171[4] = v39;
      v171[5] = *(int *)(*(_QWORD *)&v40[v41 + 4] + 120LL);
      WdLogEvent5_WdWarning(v171);
      v40[v41 + 7] = 1;
LABEL_56:
      v79 = *(_QWORD *)&v40[v41 + 4];
      if ( *(_BYTE *)(v79 + 117) && (*(_DWORD *)v79 & 0x20000) != 0 )
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v40[v41 + 7]) - 2) & 0xFFFFFFFD) != 0 )
        {
          v40[v41 + 27] = *(_DWORD *)(v178 + 140);
          v179 = *(_DWORD *)(v178 + 144);
        }
        else
        {
          v40[v41 + 27] = *(_DWORD *)(v178 + 144);
          v179 = *(_DWORD *)(v178 + 140);
        }
        v40[v41 + 29] |= 1u;
        v40[v41 + 28] = v179;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v39, 0LL) )
        HIWORD(v40[v41 + 16]) = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v217, 0LL);
      ++v39;
      v21 = (_DWORD *)*(unsigned __int8 *)*a1;
      if ( v39 >= (unsigned int)v21 )
        goto LABEL_61;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
    v50[3] = *(unsigned int *)(*(_QWORD *)&v40[v41 + 4] + 16LL);
    v50[4] = *(unsigned int *)(*(_QWORD *)&v40[v41 + 4] + 20LL);
    v50[5] = *(int *)(*(_QWORD *)&v40[v41 + 4] + 12LL);
    v50[6] = *(unsigned int *)(*(_QWORD *)&v40[v41 + 4] + 8LL);
    v53 = 131328LL;
    v54 = *(_DWORD **)&v40[v41 + 4];
    if ( (*v54 & 0x20100) == 0x20100 )
    {
      if ( v54[26] != 21 )
      {
        v135 = WdLogNewEntry5_WdAssertion(v54, 131328LL, v51, v52);
        *(_QWORD *)(v135 + 24) = 3770LL;
        WdLogEvent5_WdAssertion(v135);
      }
      v47 = 0LL;
      if ( !*(_BYTE *)(*(_QWORD *)&v40[v41 + 4] + 116LL) )
        goto LABEL_39;
      v136 = WdLogNewEntry5_WdAssertion(v54, v53, v51, v52);
      *(_QWORD *)(v136 + 24) = 3771LL;
      WdLogEvent5_WdAssertion(v136);
    }
    v47 = 0LL;
LABEL_39:
    v55 = *(_DWORD **)&v40[v41 + 4];
    if ( (*v55 & 0x20000) == 0 )
    {
      v56 = (*v55 & 0x100) == 0;
      if ( ((v55[1] & 0x100) == 0) != v56 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v56, v53, v51, v52);
        *(_QWORD *)(v137 + 24) = 3785LL;
        WdLogEvent5_WdAssertion(v137);
        v47 = 0LL;
      }
    }
    goto LABEL_42;
  }
LABEL_61:
  v80 = 0;
  for ( i = 0; v80 < *(unsigned __int8 *)*a1; i = ++v80 )
  {
    v81 = (unsigned __int8 *)*a1;
    v82 = 104LL * v80;
    v219 = (unsigned __int8 *)*a1;
    v221 = v82;
    if ( !(unsigned __int8)BmlIsSecondaryClonePath(v219, v80, 0LL) )
    {
      v83 = (unsigned __int8 *)*a1;
      v84 = 0;
      v211 = 0LL;
      v85 = 0;
      v86 = v80;
      v214 = v80;
      if ( v80 < *v83 )
      {
        do
        {
          v87 = (unsigned __int8 *)*a1;
          v88 = 104LL * (unsigned int)v86;
          v89 = *(_QWORD *)((char *)*a1 + v88 + 16);
          v90 = *(unsigned int *)(*(_QWORD *)&v81[v82 + 16] + 16LL);
          if ( *(_DWORD *)(v89 + 16) == (_DWORD)v90 )
          {
            v91 = *(_QWORD *)&v87[v88 + 44];
            if ( !v223
              || ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)&v87[v88 + 28]) - 2) & 0xFFFFFFFD) != 0 )
            {
              v92 = HIDWORD(v91);
              v93 = v91;
            }
            else
            {
              v92 = v91;
              v93 = HIDWORD(v91);
              v91 = __PAIR64__(v91, HIDWORD(v91));
            }
            if ( !v93 || !v92 )
            {
              v122 = WdLogNewEntry5_WdAssertion(v90, v89, v86, v88);
              WdLogEvent5_WdAssertion(v122);
              LODWORD(v86) = v214;
            }
            if ( v84 && v85 )
            {
              if ( v84 > v93 )
                v84 = v93;
              LODWORD(v211) = v84;
              if ( v85 > v92 )
                v85 = v92;
              HIDWORD(v211) = v85;
            }
            else
            {
              v211 = v91;
              v84 = v91;
              v85 = HIDWORD(v91);
            }
            v82 = v221;
            v81 = v219;
          }
          v94 = (unsigned __int8 *)*a1;
          v86 = (unsigned int)(v86 + 1);
          v214 = v86;
        }
        while ( (unsigned int)v86 < *v94 );
        v80 = i;
      }
      *(_QWORD *)&v81[v82 + 36] = v211;
      *(_DWORD *)&v81[v82 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v81[v82 + 52]);
    }
  }
  v95 = 0;
  if ( !*(_BYTE *)*a1 )
    return 0LL;
  while ( 1 )
  {
    v96 = (unsigned __int8 *)*a1;
    v97 = 104LL * v95;
    v102 = DMMVIDPNTOPOLOGY::FindPath(
             v218,
             *(_DWORD *)(*(_QWORD *)((char *)*a1 + v97 + 16) + 16LL),
             *(_DWORD *)(*(_QWORD *)((char *)*a1 + v97 + 16) + 20LL));
    v103 = *((_QWORD *)v102 + 11);
    v104 = *(_QWORD *)(v103 + 104);
    if ( v104 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v104 + 96));
      v105 = *(struct DMMVIDPNSOURCEMODESET **)(v103 + 104);
    }
    else
    {
      v105 = v101;
    }
    v106 = *(_DWORD **)&v96[v97 + 16];
    v222[0] = (__int64)v105;
    v107 = v106[1];
    if ( (v107 & 0x820987) == 0 )
      goto LABEL_81;
    if ( (*v106 & v107 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*a1, v95, 0LL) )
    {
      v189 = WdLogNewEntry5_WdWarning(v106, v98, v99, v100);
      *(_QWORD *)(v189 + 24) = *a1;
      *(_QWORD *)(v189 + 32) = v95;
      WdLogEvent5_WdWarning(v189);
      goto LABEL_81;
    }
    v225 = -1;
    if ( (int)BmlGetNextBestSourceMode(
                (__int64)*a1,
                (__int64)a2,
                (unsigned __int16)v95,
                (__int64)v105,
                0xFFFFFFFF,
                &v225) < 0 )
      break;
    LOBYTE(v114) = 1;
    v115 = VIDPN_MGR::PinVidPnSourceMode(v210, v105, v225, v114);
    v116 = v115;
    if ( v115 < 0 )
    {
      DxgkLogCodePointPacket(
        0x15u,
        *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 84LL),
        *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 88LL),
        *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 104LL));
      v204 = (_QWORD *)WdLogNewEntry5_WdWarning(v201, v200, v202, v203);
      v204[4] = *a1;
      v204[5] = a2;
      v204[6] = v95;
      v204[3] = v116;
      WdLogEvent5_WdWarning(v204);
      goto LABEL_188;
    }
    *(_WORD *)&v96[v97 + 66] = 0;
    v117 = *((_QWORD *)v102 + 12);
    v118 = *(_QWORD *)(v117 + 104);
    if ( v118 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v118 + 96));
      v119 = *(struct DMMVIDPNTARGETMODESET **)(v117 + 104);
    }
    else
    {
      v119 = 0LL;
    }
    v120 = *(_QWORD *)&v96[v97 + 16];
    v220 = v119;
    if ( (*(_BYTE *)v120 & 0x87) == 0x87
      && (*(_BYTE *)(v120 + 4) & 0x87) == 0x87
      && *(_DWORD *)(v120 + 48)
      && *(_DWORD *)(v120 + 44) )
    {
      v213 = -1;
      if ( (int)BmlGetNextBestTargetMode(
                  (__int64)*a1,
                  (__int64)a2,
                  (unsigned __int16)v95,
                  v119,
                  (__int64)v105,
                  0xFFFFFFFF,
                  &v213) < 0 )
      {
        v193 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v96[v97 + 16] + 44LL),
                 *(unsigned int *)(*(_QWORD *)&v96[v97 + 16] + 48LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v194 + 36), *(_DWORD *)(v194 + 40), v193);
        v199 = (_QWORD *)WdLogNewEntry5_WdWarning(v196, v195, v197, v198);
        v199[3] = *a1;
        v199[5] = v95;
        v199[4] = a2;
        WdLogEvent5_WdWarning(v199);
        LODWORD(v116) = -1071774970;
        goto LABEL_185;
      }
      LOBYTE(v181) = 1;
      v116 = (int)VIDPN_MGR::PinVidPnTargetMode(v210, v119, v213, v181);
      v121 = 0;
      if ( (int)v116 < 0 )
      {
        v182 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v96[v97 + 16] + 44LL),
                 *(unsigned int *)(*(_QWORD *)&v96[v97 + 16] + 48LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v183 + 36), *(_DWORD *)(v183 + 40), v182);
        v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v185, v184, v186, v187);
        v188[4] = *a1;
        v188[6] = v95;
        v188[3] = v116;
        v188[5] = a2;
        WdLogEvent5_WdWarning(v188);
LABEL_185:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v220, 0LL);
        goto LABEL_188;
      }
    }
    else
    {
      v121 = -1;
    }
    *(_WORD *)&v96[v97 + 70] = v121;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v220, 0LL);
LABEL_81:
    if ( DMMVIDPNPRESENTPATH::IsFunctional(v102) )
    {
      v190 = (unsigned __int8 *)*a1;
      for ( j = 0; j < *v190; ++j )
      {
        v192 = 104LL * j;
        if ( *(_DWORD *)(*(_QWORD *)&v190[v192 + 16] + 16LL) == *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 16LL) )
          *(_WORD *)&v190[v192 + 66] = 0;
      }
      *(_WORD *)&v96[v97 + 70] = 0;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v222, 0LL);
    if ( ++v95 >= *(unsigned __int8 *)*a1 )
      return 0LL;
  }
  DxgkLogCodePointPacket(
    0x13u,
    *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 84LL),
    *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 88LL),
    *(_DWORD *)(*(_QWORD *)&v96[v97 + 16] + 104LL));
  v209 = (_QWORD *)WdLogNewEntry5_WdWarning(v206, v205, v207, v208);
  v209[3] = *a1;
  v209[5] = v95;
  v209[6] = v225;
  v209[4] = a2;
  WdLogEvent5_WdWarning(v209);
  LODWORD(v116) = -1071774970;
LABEL_188:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v222, 0LL);
  return (unsigned int)v116;
}
