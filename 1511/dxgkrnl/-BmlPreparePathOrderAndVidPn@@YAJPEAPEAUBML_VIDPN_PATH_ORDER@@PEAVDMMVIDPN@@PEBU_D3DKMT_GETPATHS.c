/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50
 * Callers:
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C2C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009F58 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A2A0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C008DD14 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C008F33C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     sub_1C009CAA8 @ 0x1C009CAA8 (sub_1C009CAA8.c)
 *     sub_1C00A0A40 @ 0x1C00A0A40 (sub_1C00A0A40.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     sub_1C00A6A98 @ 0x1C00A6A98 (sub_1C00A6A98.c)
 *     sub_1C00A87FC @ 0x1C00A87FC (sub_1C00A87FC.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00A8810 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01776EC (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rbx
  _DWORD *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  char v23; // dl
  _DWORD *v24; // rcx
  unsigned int v25; // r14d
  unsigned int v26; // eax
  unsigned __int16 v27; // r12
  __int64 v28; // rcx
  _DWORD *v29; // r15
  __int64 v30; // rdx
  _DWORD *v31; // rbx
  __int64 v32; // rcx
  _DWORD *v33; // rax
  unsigned int v34; // ebx
  struct DMMVIDPNTOPOLOGY *v35; // r12
  unsigned int v36; // r14d
  __int64 v37; // rcx
  _DWORD *v38; // rdi
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  unsigned int v46; // r13d
  _DWORD *v47; // rdi
  __int64 v48; // rbx
  DMMVIDPNTOPOLOGY *v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v55; // r10
  _QWORD *v56; // rax
  _DWORD *v57; // rcx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  _DWORD *v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r14
  _DWORD *v68; // rcx
  int AdapterDefaultScaling; // eax
  VIDPN_MGR *v70; // r14
  _DWORD *v71; // rdx
  __int64 v72; // rdx
  _DWORD *v73; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v74; // r14d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  char v79; // r10
  __int64 v80; // r10
  __int64 v81; // r10
  int v82; // eax
  _BYTE *v83; // rax
  unsigned int v84; // r15d
  unsigned __int8 *v85; // rbx
  __int64 v86; // r12
  unsigned __int8 *v87; // rax
  unsigned int v88; // edi
  unsigned int v89; // r14d
  unsigned int v90; // r8d
  unsigned __int8 *v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned __int64 v94; // rbx
  unsigned int v95; // r13d
  unsigned int v96; // r12d
  unsigned __int8 *v97; // rax
  unsigned __int8 *v98; // rax
  unsigned int v99; // r15d
  unsigned __int8 *v100; // r14
  __int64 v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  struct DMMVIDPNSOURCEMODESET *v105; // r10
  struct DMMVIDPNPRESENTPATH *v106; // r13
  __int64 v107; // r12
  __int64 v108; // rcx
  struct DMMVIDPNSOURCEMODESET *v109; // r12
  _DWORD *v110; // rcx
  int v111; // eax
  _BOOL8 v113; // rcx
  _DWORD *v114; // r15
  __int64 v115; // rcx
  int v116; // eax
  __int64 v117; // rbx
  __int64 v118; // rbx
  __int64 v119; // rax
  struct DMMVIDPNTARGETMODESET *v120; // rbx
  __int64 v121; // rcx
  __int16 v122; // ax
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
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  _QWORD *v146; // rax
  __int64 v147; // rcx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r15
  __int64 v149; // rax
  __int64 v150; // rcx
  int v151; // r15d
  __int64 v152; // rcx
  int *v153; // r14
  int v154; // edx
  int v155; // ecx
  int v156; // eax
  __int64 v157; // rax
  int v158; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v159; // eax
  __int64 v160; // rcx
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // r12
  __int64 v164; // rax
  __int64 v165; // rax
  unsigned int v166; // eax
  __int64 v167; // rax
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  _DWORD *v170; // rcx
  __int64 v171; // rax
  unsigned __int8 *v172; // r8
  unsigned int i; // r9d
  __int64 v174; // r10
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  _QWORD *v179; // rax
  int v180; // eax
  __int64 v181; // r10
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  _QWORD *v186; // rax
  int v187; // eax
  __int64 v188; // r10
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  _QWORD *v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  _QWORD *v198; // rax
  VIDPN_MGR *v199; // [rsp+40h] [rbp-59h]
  unsigned int v200; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v201; // [rsp+58h] [rbp-41h]
  bool v202; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v203; // [rsp+64h] [rbp-35h]
  unsigned int v204; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v205; // [rsp+6Ch] [rbp-2Dh]
  struct DMMVIDPNSOURCEMODESET *v206; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v207; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v208; // [rsp+7Ch] [rbp-1Dh] BYREF
  unsigned __int8 *v209; // [rsp+80h] [rbp-19h]
  __int64 v210; // [rsp+88h] [rbp-11h]
  DMMVIDPNTOPOLOGY *v211; // [rsp+90h] [rbp-9h]
  __int64 v212; // [rsp+98h] [rbp-1h] BYREF
  __int64 v213[8]; // [rsp+A0h] [rbp+7h] BYREF
  char v214; // [rsp+F0h] [rbp+57h]
  bool v216; // [rsp+100h] [rbp+67h] BYREF

  v10 = (struct BML_VIDPN_PATH_ORDER *)operator new[](
                                         104LL * (*((unsigned __int16 *)a3 + 10) - 1) + 120,
                                         0x63644356u,
                                         PagedPool);
  *a1 = v10;
  if ( !v10 )
  {
    v124 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v124 + 24) = a3;
    *(_QWORD *)(v124 + 32) = *((unsigned __int16 *)a3 + 10);
    WdLogEvent5_WdLowResource(v124);
    return 3221225626LL;
  }
  v15 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  v199 = v15;
  if ( !g_Win32kSupportsPathIndependentRotation )
    goto LABEL_123;
  if ( !*((_QWORD *)v15 + 1) )
  {
    v125 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v125);
  }
  v16 = *((_QWORD *)v15 + 1);
  v12 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 1984LL);
  if ( *(_BYTE *)(v12 + 157) )
  {
    if ( !v16 )
    {
      v126 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v126);
    }
    v16 = *((_QWORD *)v15 + 1);
    v12 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 1984LL);
    if ( *(_BYTE *)(v12 + 158) )
      goto LABEL_9;
  }
  if ( !v16 )
  {
    v127 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v127);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 176LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL) >= 0x4003u )
LABEL_9:
    v214 = 1;
  else
LABEL_123:
    v214 = 0;
  v17 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v17 + 8) )
  {
    v128 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v128);
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
  *((_DWORD *)*a1 + 2) ^= (*((_DWORD *)*a1 + 2) ^ (*(_QWORD *)(v18 + 1992) == 0LL)) & 1;
  v19 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v19 + 8) )
  {
    v129 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v129);
  }
  v20 = *a1;
  *((_DWORD *)*a1 + 2) ^= (*((_DWORD *)*a1 + 2) ^ (2
                                                 * ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL) + 284LL) >> 8) & 1))) & 2;
  v21 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v21 + 8) )
  {
    v130 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v130);
  }
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL) + 1984LL);
  if ( !*(_BYTE *)(v22 + 158) || (v23 = 1, *(_BYTE *)(v22 + 157)) )
    v23 = 0;
  v24 = *a1;
  v25 = 0;
  v26 = a6;
  v24[2] = *((_DWORD *)*a1 + 2) & 3 | (4 * (v23 & 1));
  *(_BYTE *)v24 = 0;
  v24[1] = v26;
  if ( *((_WORD *)a3 + 10) )
  {
    v27 = a5;
    do
    {
      v28 = 216LL * v25;
      v29 = (_DWORD *)((char *)a3 + v28 + 48);
      if ( (*v29 & 0x40000) == 0 )
      {
        v131 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v131);
      }
      if ( !*((_QWORD *)v199 + 1) )
      {
        v132 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v132);
      }
      v30 = *((_QWORD *)v199 + 1);
      v24 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(v30 + 16) + 252LL);
      if ( v29[2] == (_DWORD)v24 )
      {
        if ( !v30 )
        {
          v133 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v133);
        }
        v24 = *(_DWORD **)(*((_QWORD *)v199 + 1) + 16LL);
        if ( v29[3] == HIDWORD(*(_QWORD *)(v24 + 63)) )
        {
          if ( (*v29 & 0x7000) != 0x7000 )
          {
            v134 = WdLogNewEntry5_WdError(28672LL);
            *(_QWORD *)(v134 + 24) = v25;
            *(_QWORD *)(v134 + 32) = a3;
            WdLogEvent5_WdError(v134);
            return 3221225485LL;
          }
          v31 = *a1;
          v32 = 26LL * *(unsigned __int8 *)*a1;
          *(_QWORD *)&v31[v32 + 4] = v29;
          LOWORD(v31[v32 + 8]) = v25;
          LOWORD(v31[v32 + 16]) = 0;
          LOWORD(v31[v32 + 17]) = 0;
          HIWORD(v31[v32 + 16]) = a4;
          HIWORD(v31[v32 + 17]) = v27;
          *(_QWORD *)&v31[v32 + 13] = 0LL;
          v31[v32 + 15] = 0;
          v31[v32 + 29] = 0;
          memset(&v31[v32 + 18], 0, 0x24uLL);
          ++*(_BYTE *)v31;
        }
      }
      ++v25;
    }
    while ( v25 < *((unsigned __int16 *)a3 + 10) );
    v15 = v199;
  }
  v33 = *a1;
  v34 = 0;
  v35 = (struct DMMVIDPN *)((char *)a2 + 96);
  v211 = (struct DMMVIDPN *)((char *)a2 + 96);
  if ( *(_BYTE *)v33 )
  {
    do
    {
      v36 = v34 + 1;
      v37 = v34 + 1;
      if ( (int)(v34 + 1) > 32 )
      {
        v135 = WdLogNewEntry5_WdAssertion(v37);
        *(_QWORD *)(v135 + 24) = *a1;
        *(_QWORD *)(v135 + 32) = v34;
        WdLogEvent5_WdAssertion(v135);
        LODWORD(v37) = 32;
      }
      v38 = *a1;
      v39 = 104LL * v34;
      v40 = VIDPN_MGR::AddPathToVidPnTopology(
              v15,
              v35,
              *(_DWORD *)(*(_QWORD *)((char *)*a1 + v39 + 16) + 16LL),
              *(_DWORD *)(*(_QWORD *)((char *)*a1 + v39 + 16) + 20LL),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v37,
              *(_WORD *)((char *)*a1 + v39 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v45 = v40;
      if ( v40 < 0 )
      {
        v136 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41, v43, v44);
        v136[3] = *(unsigned int *)(*(_QWORD *)&v38[(unsigned __int64)v39 / 4 + 4] + 16LL);
        v136[4] = *(unsigned int *)(*(_QWORD *)&v38[(unsigned __int64)v39 / 4 + 4] + 20LL);
        v136[5] = v35;
        v136[6] = v45;
        return (unsigned int)v45;
      }
      v34 = v36;
      v15 = v199;
      v24 = (_DWORD *)*(unsigned __int8 *)*a1;
    }
    while ( v36 < (unsigned int)v24 );
  }
  v46 = 0;
  if ( *(_BYTE *)*a1 )
  {
    while ( 1 )
    {
      v47 = *a1;
      v48 = 26LL * v46;
      if ( (**(_DWORD **)((char *)*a1 + v48 * 4 + 16) & 0x40000) == 0 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v137);
      }
      v49 = v211;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               v211,
               *(_DWORD *)(*(_QWORD *)&v47[v48 + 4] + 16LL),
               *(_DWORD *)(*(_QWORD *)&v47[v48 + 4] + 20LL));
      if ( *(_BYTE *)(v55 + 117) )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v50, v52, v53);
        v56[3] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 16LL);
        v56[4] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 20LL);
        v56[5] = *(int *)(*(_QWORD *)&v47[v48 + 4] + 12LL);
        v56[6] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 8LL);
        v57 = *(_DWORD **)&v47[v48 + 4];
        if ( (*v57 & 0x20100) == 0x20100 )
        {
          if ( v57[26] != 21 )
          {
            v138 = WdLogNewEntry5_WdAssertion(v57);
            *(_QWORD *)(v138 + 24) = 3790LL;
            WdLogEvent5_WdAssertion(v138);
          }
          if ( *(_BYTE *)(*(_QWORD *)&v47[v48 + 4] + 116LL) )
          {
            v139 = WdLogNewEntry5_WdAssertion(v57);
            *(_QWORD *)(v139 + 24) = 3791LL;
            WdLogEvent5_WdAssertion(v139);
          }
        }
        v58 = *(_DWORD **)&v47[v48 + 4];
        if ( (*v58 & 0x20000) == 0 )
        {
          v113 = (*v58 & 0x100) == 0;
          if ( ((v58[1] & 0x100) == 0) != v113 )
          {
            v140 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v140 + 24) = 3805LL;
            WdLogEvent5_WdAssertion(v140);
          }
        }
      }
      v59 = *((_QWORD *)Path + 11);
      v60 = *(_QWORD *)(v59 + 104);
      if ( v60 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v60 + 96));
        v61 = *(_QWORD *)(v59 + 104);
      }
      else
      {
        v61 = 0LL;
      }
      v62 = *a1;
      v212 = v61;
      v63 = sub_1C009CAA8((__int64)v62, v46, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v67 = v63;
      if ( v63 < 0 )
      {
        v169 = (_QWORD *)WdLogNewEntry5_WdTrace(v64, 0LL, v65, v66);
        v169[3] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 16LL);
        v169[4] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 20LL);
        v169[5] = v49;
        v169[6] = v67;
        *(_QWORD *)((char *)*a1 + 104 * v46 + 52) = 0LL;
        goto LABEL_178;
      }
      v68 = *(_DWORD **)&v47[v48 + 4];
      if ( (*v68 & 0x400) == 0 )
        goto LABEL_98;
      AdapterDefaultScaling = v68[31];
      if ( AdapterDefaultScaling <= 0 )
        goto LABEL_133;
      if ( AdapterDefaultScaling > 5 )
        break;
      v70 = v199;
LABEL_55:
      v47[v48 + 6] = AdapterDefaultScaling;
LABEL_56:
      v71 = *(_DWORD **)&v47[v48 + 4];
      if ( (*v71 & 0x8000) != 0 && IsInternalVideoOutput(v71[20]) && (*(_DWORD *)(v72 + 4) & 0x200) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v70, *(_DWORD *)(v72 + 20));
        v67 = *((_QWORD *)a2 + 6);
        if ( !*(_QWORD *)(v67 + 8) )
        {
          v149 = WdLogNewEntry5_WdAssertion(v147);
          WdLogEvent5_WdAssertion(v149);
        }
        LODWORD(v67) = IsVirtualizationDisabledForTarget(
                         *(DXGADAPTER **)(*(_QWORD *)(v67 + 8) + 16LL),
                         *(_DWORD *)(*(_QWORD *)&v47[v48 + 4] + 20LL),
                         &v216,
                         &v202);
        if ( (int)v67 < 0 )
        {
          v168 = (_QWORD *)WdLogNewEntry5_WdError(v150);
          v168[3] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 20LL);
          v168[4] = *(int *)(*(_QWORD *)&v47[v48 + 4] + 12LL);
          v168[5] = *(unsigned int *)(*(_QWORD *)&v47[v48 + 4] + 8LL);
          WdLogEvent5_WdError(v168);
LABEL_178:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v212, 0LL);
          return (unsigned int)v67;
        }
        if ( PathFromTargetInClientVidPn )
        {
          if ( v216 )
            goto LABEL_58;
          v151 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
        }
        else
        {
          if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v150) + 230) )
            goto LABEL_58;
          v151 = *((_DWORD *)DXGGLOBAL::GetGlobal(v152) + 230);
        }
        if ( v151 )
        {
          v153 = *(int **)&v47[v48 + 4];
          v154 = *v153;
          if ( (*v153 & 0x200) != 0 )
          {
            if ( (((unsigned __int8)v151 ^ *((_BYTE *)v153 + 120)) & 1) != 0 && (v154 & 0x20000) != 0 )
            {
              v155 = v153[35];
              v156 = v153[36];
              *v153 &= ~0x800000u;
              v153[35] = v156;
              v153[36] = v155;
            }
          }
          else if ( (v154 & 0x20000) != 0 )
          {
            v157 = WdLogNewEntry5_WdAssertion(v150);
            WdLogEvent5_WdAssertion(v157);
          }
          *v153 |= 0x200u;
          v153[30] = v151;
          v47[v48 + 7] = v151;
          goto LABEL_64;
        }
      }
LABEL_58:
      v73 = *(_DWORD **)&v47[v48 + 4];
      if ( (*v73 & 0x200) == 0 )
      {
        v114 = *a1;
        if ( !(unsigned __int8)sub_1C00A87FC(*a1, v46, &v208) )
        {
          v74 = D3DKMDT_VPPR_IDENTITY;
          goto LABEL_102;
        }
        v163 = 26LL * v208;
        v74 = v114[v163 + 7];
        if ( v74 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v164 = WdLogNewEntry5_WdAssertion(v115);
          WdLogEvent5_WdAssertion(v164);
        }
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v74) != D3DKMDT_VPPR_IDENTITY )
        {
          v165 = WdLogNewEntry5_WdAssertion(v115);
          WdLogEvent5_WdAssertion(v165);
        }
        if ( !v214 )
          goto LABEL_102;
        LOBYTE(v115) = v114[v163 + 13] < v114[v163 + 14];
        if ( (_BYTE)v115 == v114[v48 + 13] < v114[v48 + 14] )
          goto LABEL_102;
        v166 = v74 - 1;
        if ( v114[v48 + 13] >= v114[v48 + 14] )
        {
          if ( v166 > 3 )
            goto LABEL_174;
          v74 += 4;
        }
        else
        {
          if ( v166 <= 3 )
          {
            v74 += 12;
            goto LABEL_102;
          }
LABEL_174:
          v74 = D3DKMDT_VPPR_NOTSPECIFIED;
        }
LABEL_102:
        if ( v74 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v167 = WdLogNewEntry5_WdAssertion(v115);
          WdLogEvent5_WdAssertion(v167);
        }
LABEL_63:
        v47[v48 + 7] = v74;
        goto LABEL_64;
      }
      v74 = v73[30];
      if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v74) - 1) <= 3 )
      {
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v74) == D3DKMDT_VPPR_IDENTITY )
        {
          if ( v214 == v79 || !(unsigned __int8)sub_1C00A87FC(*a1, v46, &v207) )
            goto LABEL_63;
          v158 = *(_DWORD *)(*((_QWORD *)*a1 + 13 * v207 + 2) + 120LL);
          if ( (unsigned int)(v158 - 1) > 0xF
            || (unsigned int)(v74 - 1) > 0xF
            || v158 > 4
            || (unsigned int)((v74 - v158 + 4) % 4) > 3 )
          {
            v159 = D3DKMDT_VPPR_NOTSPECIFIED;
          }
          else
          {
            v159 = v158 - 4 + 4 * ((v74 - v158 + 4) % 4 + 1);
          }
LABEL_161:
          v47[v48 + 7] = v159;
          goto LABEL_64;
        }
        if ( v214 != v79 )
        {
          if ( (unsigned __int8)sub_1C00A87FC(*a1, v46, 0LL) )
          {
            v47[v48 + 7] = *(_DWORD *)(*(_QWORD *)&v47[v48 + 4] + 120LL);
            goto LABEL_64;
          }
          v161 = (_QWORD *)WdLogNewEntry5_WdAssertion(v160);
          v161[3] = *a1;
          v161[4] = v46;
          v161[5] = *(int *)(*(_QWORD *)&v47[v48 + 4] + 120LL);
          WdLogEvent5_WdAssertion(v161);
          v159 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v47[v48 + 4]
                                                                                          + 120LL));
          goto LABEL_161;
        }
      }
      v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, v75, v77, v78);
      v162[3] = *a1;
      v162[4] = v46;
      v162[5] = *(int *)(*(_QWORD *)&v47[v48 + 4] + 120LL);
      WdLogEvent5_WdWarning(v162);
      v47[v48 + 7] = 1;
LABEL_64:
      v80 = *(_QWORD *)&v47[v48 + 4];
      if ( *(_BYTE *)(v80 + 117) && (*(_DWORD *)v80 & 0x20000) != 0 )
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v47[v48 + 7]) - 2) & 0xFFFFFFFD) != 0 )
        {
          v47[v48 + 27] = *(_DWORD *)(v81 + 140);
          v82 = *(_DWORD *)(v81 + 144);
        }
        else
        {
          v47[v48 + 27] = *(_DWORD *)(v81 + 144);
          v82 = *(_DWORD *)(v81 + 140);
        }
        v47[v48 + 29] |= 1u;
        v47[v48 + 28] = v82;
      }
      if ( (unsigned __int8)sub_1C00A87FC(*a1, v46, 0LL) )
        HIWORD(v47[v48 + 16]) = 0;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v212, 0LL);
      ++v46;
      v24 = (_DWORD *)*(unsigned __int8 *)*a1;
      if ( v46 >= (unsigned int)v24 )
        goto LABEL_72;
    }
    if ( AdapterDefaultScaling == 253 )
    {
LABEL_98:
      v70 = v199;
    }
    else
    {
      if ( AdapterDefaultScaling != 255 )
      {
LABEL_133:
        v70 = v199;
        v47[v48 + 6] = VIDPN_MGR::GetAdapterDefaultScaling(v199);
        v146 = (_QWORD *)WdLogNewEntry5_WdWarning(v143, v142, v144, v145);
        v146[3] = (int)v47[v48 + 6];
        v146[4] = *a1;
        v146[5] = v46;
        v146[6] = *(int *)(*(_QWORD *)&v47[v48 + 4] + 124LL);
        WdLogEvent5_WdWarning(v146);
        goto LABEL_56;
      }
      v70 = v199;
      if ( !*((_QWORD *)v199 + 1) )
      {
        v141 = WdLogNewEntry5_WdAssertion(v68);
        WdLogEvent5_WdAssertion(v141);
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v199 + 1) + 16LL)) < 1105 )
      {
        v47[v48 + 6] = 255;
        goto LABEL_56;
      }
    }
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v70);
    goto LABEL_55;
  }
LABEL_72:
  v83 = *a1;
  v84 = 0;
  v203 = 0;
  if ( *v83 )
  {
    do
    {
      v85 = (unsigned __int8 *)*a1;
      v86 = 104LL * v84;
      v209 = (unsigned __int8 *)*a1;
      v210 = v86;
      if ( !(unsigned __int8)sub_1C00A87FC(v209, v84, 0LL) )
      {
        v87 = (unsigned __int8 *)*a1;
        v88 = 0;
        v201 = 0LL;
        v89 = 0;
        v90 = v84;
        v205 = v84;
        if ( v84 < *v87 )
        {
          do
          {
            v91 = (unsigned __int8 *)*a1;
            v92 = 104LL * v90;
            v93 = *(_QWORD *)((char *)*a1 + v92 + 16);
            if ( *(_DWORD *)(v93 + 16) == *(_DWORD *)(*(_QWORD *)&v85[v86 + 16] + 16LL) )
            {
              v94 = *(_QWORD *)&v91[v92 + 44];
              if ( v214
                && ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)&v91[v92 + 28]) - 2) & 0xFFFFFFFD) == 0 )
              {
                v95 = v94;
                v96 = HIDWORD(v94);
                v94 = __PAIR64__(v94, HIDWORD(v94));
              }
              else
              {
                v95 = HIDWORD(v94);
                v96 = v94;
              }
              if ( !v96 || !v95 )
              {
                v123 = WdLogNewEntry5_WdAssertion(v93);
                WdLogEvent5_WdAssertion(v123);
                v90 = v205;
              }
              if ( v88 && v89 )
              {
                if ( v88 > v96 )
                  v88 = v96;
                LODWORD(v201) = v88;
                if ( v89 > v95 )
                  v89 = v95;
                HIDWORD(v201) = v89;
              }
              else
              {
                v201 = v94;
                v88 = v94;
                v89 = HIDWORD(v94);
              }
              v86 = v210;
              v85 = v209;
            }
            v97 = (unsigned __int8 *)*a1;
            v205 = ++v90;
          }
          while ( v90 < *v97 );
          v84 = v203;
        }
        *(_QWORD *)&v85[v86 + 36] = v201;
        *(_DWORD *)&v85[v86 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v85[v86 + 52]);
      }
      v98 = (unsigned __int8 *)*a1;
      v203 = ++v84;
    }
    while ( v84 < *v98 );
  }
  v99 = 0;
  if ( !*(_BYTE *)*a1 )
    return 0LL;
  while ( 1 )
  {
    v100 = (unsigned __int8 *)*a1;
    v101 = 104LL * v99;
    v106 = DMMVIDPNTOPOLOGY::FindPath(
             v211,
             *(_DWORD *)(*(_QWORD *)((char *)*a1 + v101 + 16) + 16LL),
             *(_DWORD *)(*(_QWORD *)((char *)*a1 + v101 + 16) + 20LL));
    v107 = *((_QWORD *)v106 + 11);
    v108 = *(_QWORD *)(v107 + 104);
    if ( v108 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v108 + 96));
      v109 = *(struct DMMVIDPNSOURCEMODESET **)(v107 + 104);
    }
    else
    {
      v109 = v105;
    }
    v110 = *(_DWORD **)&v100[v101 + 16];
    v206 = v109;
    v111 = v110[1];
    if ( (v111 & 0x820987) == 0 )
      goto LABEL_93;
    if ( (*v110 & v111 & 0x100) == 0 || (unsigned __int8)sub_1C00A87FC(*a1, v99, 0LL) )
    {
      v171 = WdLogNewEntry5_WdWarning(v110, v102, v103, v104);
      *(_QWORD *)(v171 + 24) = *a1;
      *(_QWORD *)(v171 + 32) = v99;
      WdLogEvent5_WdWarning(v171);
LABEL_93:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v106) )
      {
        v172 = (unsigned __int8 *)*a1;
        for ( i = 0; i < *v172; ++i )
        {
          v174 = 104LL * i;
          if ( *(_DWORD *)(*(_QWORD *)&v172[v174 + 16] + 16LL) == *(_DWORD *)(*(_QWORD *)&v100[v101 + 16] + 16LL) )
            *(_WORD *)&v172[v174 + 66] = 0;
        }
        *(_WORD *)&v100[v101 + 70] = 0;
      }
      goto LABEL_94;
    }
    v200 = -1;
    if ( (int)sub_1C00A0A40((__int64)*a1, (__int64)a2, (unsigned __int16)v99, (__int64)v109, 0xFFFFFFFF, &v200) >= 0 )
      break;
    v170 = *(_DWORD **)&v100[v101 + 16];
    if ( (*v170 & 0x400000) == 0 )
    {
      DxgkLogCodePointPacket(0x13u, v170[21], v170[22], v170[26]);
      v179 = (_QWORD *)WdLogNewEntry5_WdWarning(v176, v175, v177, v178);
      v179[3] = *a1;
      v179[5] = v99;
      v179[6] = v200;
      v179[4] = a2;
      WdLogEvent5_WdWarning(v179);
      LODWORD(v117) = -1071774970;
      goto LABEL_201;
    }
    v170[1] &= 0xFFFFFE78;
LABEL_94:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v206, 0LL);
    if ( ++v99 >= *(unsigned __int8 *)*a1 )
      return 0LL;
  }
  v116 = VIDPN_MGR::PinVidPnSourceMode(v199, v109, v200, 1);
  v117 = v116;
  if ( v116 >= 0 )
  {
    *(_WORD *)&v100[v101 + 66] = 0;
    v118 = *((_QWORD *)v106 + 12);
    v119 = *(_QWORD *)(v118 + 104);
    if ( v119 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v119 + 96));
      v120 = *(struct DMMVIDPNTARGETMODESET **)(v118 + 104);
    }
    else
    {
      v120 = 0LL;
    }
    v121 = *(_QWORD *)&v100[v101 + 16];
    v213[0] = (__int64)v120;
    if ( (*(_BYTE *)v121 & 0x87) == 0x87
      && (*(_BYTE *)(v121 + 4) & 0x87) == 0x87
      && *(_DWORD *)(v121 + 48)
      && *(_DWORD *)(v121 + 44) )
    {
      v204 = -1;
      if ( (int)sub_1C00A6A98((__int64)*a1, (__int64)a2, (unsigned __int16)v99, v120, (__int64)v109, 0xFFFFFFFF, &v204) < 0 )
      {
        v187 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v100[v101 + 16] + 44LL),
                 *(unsigned int *)(*(_QWORD *)&v100[v101 + 16] + 48LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v188 + 36), *(_DWORD *)(v188 + 40), v187);
        v193 = (_QWORD *)WdLogNewEntry5_WdWarning(v190, v189, v191, v192);
        v193[3] = *a1;
        v193[5] = v99;
        v193[4] = a2;
        WdLogEvent5_WdWarning(v193);
        LODWORD(v117) = -1071774970;
        goto LABEL_199;
      }
      v117 = (int)VIDPN_MGR::PinVidPnTargetMode(v199, v120, v204, 1);
      v122 = 0;
      if ( (int)v117 < 0 )
      {
        v180 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v100[v101 + 16] + 44LL),
                 *(unsigned int *)(*(_QWORD *)&v100[v101 + 16] + 48LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v181 + 36), *(_DWORD *)(v181 + 40), v180);
        v186 = (_QWORD *)WdLogNewEntry5_WdWarning(v183, v182, v184, v185);
        v186[4] = *a1;
        v186[6] = v99;
        v186[3] = v117;
        v186[5] = a2;
        WdLogEvent5_WdWarning(v186);
LABEL_199:
        auto_rc<DMMVIDPNTARGETMODESET>::reset(v213, 0LL);
        goto LABEL_201;
      }
    }
    else
    {
      v122 = -1;
    }
    *(_WORD *)&v100[v101 + 70] = v122;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v213, 0LL);
    goto LABEL_93;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)&v100[v101 + 16] + 84LL),
    *(_DWORD *)(*(_QWORD *)&v100[v101 + 16] + 88LL),
    *(_DWORD *)(*(_QWORD *)&v100[v101 + 16] + 104LL));
  v198 = (_QWORD *)WdLogNewEntry5_WdWarning(v195, v194, v196, v197);
  v198[4] = *a1;
  v198[5] = a2;
  v198[6] = v99;
  v198[3] = v117;
  WdLogEvent5_WdWarning(v198);
LABEL_201:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v206, 0LL);
  return (unsigned int)v117;
}
