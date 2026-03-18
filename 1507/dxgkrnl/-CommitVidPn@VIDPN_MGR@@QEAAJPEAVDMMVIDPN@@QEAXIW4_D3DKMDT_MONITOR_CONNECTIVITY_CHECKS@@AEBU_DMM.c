/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 *     DmmCommitVidPn @ 0x1C01755EC (DmmCommitVidPn.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??1?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ @ 0x1C0007874 (--1-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0008634 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C000E028 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00CAA18 (MonitorIsUsingSimulatedMonitor.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C00CBA0C (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C00CBAEC (-RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z.c)
 *     ?RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00CBB7C (-RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00CD224 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C00CD330 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00CDBEC (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C00CECC8 (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00CEF70 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C017297C (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C018254C (MonitorGetNumConnectedMonitor.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        __int64 this,
        struct DMMVIDPN *a2,
        void *const a3,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  __int64 *v8; // r12
  unsigned int v9; // ebx
  VIDPN_MGR *v11; // rdi
  int v12; // eax
  int active; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  D3DKMDT_HVIDPN v20; // r15
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // r12
  _QWORD *v27; // rsi
  _QWORD *v28; // rsi
  D3DKMDT_HVIDPN v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  D3DKMDT_HVIDPN v36; // rsi
  bool v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rsi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v41; // esi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r14
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // r11d
  __int64 v69; // r10
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // eax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rsi
  int ClientCommittedVidPnRef; // eax
  __int64 v88; // r14
  DMMVIDPN *v89; // rax
  unsigned __int8 v90; // r8
  DMMVIDPN *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _QWORD *v114; // r14
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  _QWORD *v127; // r14
  __int64 v128; // rax
  __int64 v129; // r8
  struct _DXGKARG_COMMITVIDPN *v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  _QWORD *v146; // r14
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rcx
  _QWORD *v161; // rsi
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rax
  int v170; // eax
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  _QWORD *v176; // r14
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rcx
  __int64 v195; // rsi
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  unsigned __int8 IsSourceInTopology; // [rsp+38h] [rbp-A9h]
  char v201; // [rsp+39h] [rbp-A8h] BYREF
  unsigned int v202; // [rsp+3Ch] [rbp-A5h]
  DMMVIDPN *v203; // [rsp+40h] [rbp-A1h] BYREF
  _DXGKARG_QUERYVIDPNHWCAPABILITY v204; // [rsp+48h] [rbp-99h] BYREF
  int v205; // [rsp+60h] [rbp-81h]
  _DXGKARG_COMMITVIDPN v206; // [rsp+68h] [rbp-79h] BYREF
  struct DMMVIDPN *v207; // [rsp+88h] [rbp-59h] BYREF
  struct _DXGKARG_COMMITVIDPN v208; // [rsp+90h] [rbp-51h] BYREF
  void **v209; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v210; // [rsp+B8h] [rbp-29h]
  void **v211; // [rsp+C8h] [rbp-19h]
  void *v212; // [rsp+D0h] [rbp-11h]
  __int64 v213; // [rsp+D8h] [rbp-9h]
  int v214; // [rsp+E0h] [rbp-1h]

  v8 = (__int64 *)a6;
  v9 = 0;
  v203 = 0LL;
  v11 = (VIDPN_MGR *)this;
  v12 = (int)(*(_DWORD *)a6 << 28) >> 28;
  if ( v12 <= 0 )
    goto LABEL_171;
  this = 1LL;
  if ( v12 <= 3 || v12 == 5 )
  {
    v207 = 0LL;
    active = VIDPN_MGR::ConvertClientVidPnToActiveVidPn((VIDPN_MGR *)1, a2, &v207);
    v15 = active;
    if ( active >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v203, (__int64)v207);
      v20 = (D3DKMDT_HVIDPN)v203;
      goto LABEL_6;
    }
    v114 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    if ( !*((_QWORD *)v11 + 1) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v111, v110, v112, v113);
      WdLogEvent5_WdAssertion(v115);
    }
    v114[3] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
    v114[4] = a2;
    v114[5] = v15;
    WdLogEvent5_WdError(v114);
LABEL_172:
    v9 = v15;
    goto LABEL_78;
  }
  if ( v12 != 4 )
  {
LABEL_171:
    v199 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v199 + 24) = (int)(*(_DWORD *)v8 << 28) >> 28;
    WdLogEvent5_WdError(v199);
    LODWORD(v15) = -1071774885;
    goto LABEL_172;
  }
  v89 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v89 )
    v91 = DMMVIDPN::DMMVIDPN(v89, a2, v90);
  else
    v91 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&v203, (__int64)v91);
  v20 = (D3DKMDT_HVIDPN)v203;
  if ( !v203 )
  {
    v108 = WdLogNewEntry5_WdLowResource(v92);
    *(_QWORD *)(v108 + 24) = a2;
    WdLogEvent5_WdLowResource(v108);
    LODWORD(v15) = -1073741801;
    goto LABEL_172;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(char *))v203 + 9))((char *)v203 + 72) )
  {
    v109 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17);
    v109[3] = v20;
    v109[4] = a2;
    v109[5] = *((int *)v20 + 20);
    WdLogEvent5_WdDmmEvent(v109);
    LODWORD(v15) = v20[20];
    goto LABEL_172;
  }
LABEL_6:
  v212 = 0LL;
  v209 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  v213 = 0LL;
  v211 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  v214 = 3;
  v210 = 0LL;
  if ( v20 == (D3DKMDT_HVIDPN)-96LL )
  {
    v116 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v116);
  }
  v21 = *((_DWORD *)v20 + 34);
  if ( v21 )
  {
    if ( !*((_QWORD *)v11 + 1) )
    {
      v117 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v117);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) >= 1105 )
    {
      DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v209, 12LL * (v21 - 1) + 16);
      v26 = v212;
      if ( !v212 )
      {
        v118 = WdLogNewEntry5_WdLowResource(v23);
        WdLogEvent5_WdLowResource(v118);
        LODWORD(v40) = -1073741801;
        goto LABEL_170;
      }
      v27 = v20 + 30;
      *(_BYTE *)v212 = v21;
      v202 = 0;
      if ( (_QWORD *)*v27 != v27 )
      {
        v28 = (_QWORD *)(*v27 - 8LL);
        if ( v28 )
        {
          v29 = v20 + 22;
          while ( 1 )
          {
            memset(&v204, 0, sizeof(v204));
            if ( v29 )
              v204.hFunctionalVidPn = v29 - 22;
            else
              v204.hFunctionalVidPn = 0LL;
            v30 = v28[12];
            v204.SourceId = *(_DWORD *)(v28[11] + 24LL);
            v31 = *(unsigned int *)(v30 + 24);
            v204.TargetId = *(_DWORD *)(v30 + 24);
            if ( !*((_QWORD *)v11 + 1) )
            {
              v119 = WdLogNewEntry5_WdAssertion(v31, v22, v24, v25);
              WdLogEvent5_WdAssertion(v119);
            }
            v205 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(*((ADAPTER_DISPLAY **)v11 + 1), &v204);
            if ( v205 < 0 )
              break;
            v33 = v202;
            if ( v202 >= v21 )
            {
              v120 = WdLogNewEntry5_WdAssertion(v32, v202, v24, v25);
              WdLogEvent5_WdAssertion(v120);
              v33 = v202;
            }
            v34 = v33;
            v22 = v33 + 1;
            v202 = v22;
            v35 = 3 * v34;
            v26[v35 + 1] = v204.SourceId;
            v26[v35 + 2] = v204.TargetId;
            v26[v35 + 3] = v204.VidPnHWCaps;
            v36 = (D3DKMDT_HVIDPN)v28[1];
            if ( v36 == v20 + 30 )
              v28 = 0LL;
            else
              v28 = v36 - 2;
            v29 = v20 + 22;
            if ( !v28 )
              goto LABEL_26;
          }
          v121 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v121[3] = v204.TargetId;
          v121[4] = v204.SourceId;
          v121[5] = v204.hFunctionalVidPn;
          v121[6] = v205;
          WdLogEvent5_WdError(v121);
          v212 = 0LL;
          v213 = 0LL;
          operator delete(v26);
        }
      }
LABEL_26:
      v8 = (__int64 *)a6;
    }
  }
  v37 = 0;
  if ( DMMVIDPN::IsPathFromSourcePoweredOff(a2, a4) && (*(_DWORD *)v8 & 0xF) != 4 )
  {
    memset(&v208, 0, sizeof(v208));
    if ( a2 == (struct DMMVIDPN *)-88LL )
      v208.hFunctionalVidPn = 0LL;
    else
      v208.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
    v208.hPrimaryAllocation = a3;
    v208.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
    v208.AffectedVidPnSourceId = a4;
    v208.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v208.Flags & 0xFFFFFFFC | 2);
    if ( !*((_QWORD *)v11 + 1) )
    {
      v122 = WdLogNewEntry5_WdAssertion(v94, v93, v95, v96);
      WdLogEvent5_WdAssertion(v122);
    }
    v97 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)v11 + 1), &v208);
    v40 = v97;
    if ( v97 < 0 )
    {
      v127 = (_QWORD *)WdLogNewEntry5_WdError(v99);
      v127[3] = a2;
      if ( !*((_QWORD *)v11 + 1) )
      {
        v128 = WdLogNewEntry5_WdAssertion(v124, v123, v125, v126);
        WdLogEvent5_WdAssertion(v128);
      }
      v127[4] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      v127[5] = v40;
      WdLogEvent5_WdError(v127);
      v129 = 1LL;
      v130 = &v208;
      goto LABEL_156;
    }
    if ( !*((_QWORD *)v11 + 1) )
    {
      v131 = WdLogNewEntry5_WdAssertion(v99, v98, v100, v101);
      WdLogEvent5_WdAssertion(v131);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) >= 1200 )
    {
      if ( !v104 )
      {
        v132 = WdLogNewEntry5_WdAssertion(v103, v102, 0LL, v105);
        WdLogEvent5_WdAssertion(v132);
      }
      v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 176LL) + 64LL)
                                  + 40LL)
                      + 28LL) >= 0x300Au;
    }
  }
  v38 = VIDPN_MGR::CacheVidPnToBeComitted((__int64)v11, (const struct DMMVIDPN *)v20, a4, v8, (__int64)&v209);
  v40 = v38;
  if ( v38 < 0 )
  {
    v133 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v133[3] = v20;
    v133[4] = a4;
    v133[5] = (int)(*(_DWORD *)v8 << 28) >> 28;
    v133[6] = v40;
    WdLogEvent5_WdError(v133);
    goto LABEL_170;
  }
  v41 = a4;
  *((_BYTE *)v11 + 464) = 0;
  IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v20 + 24), a4);
  if ( !IsSourceInTopology )
  {
    if ( !*((_QWORD *)v11 + 1) )
    {
      v134 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
      WdLogEvent5_WdAssertion(v134);
    }
    v43 = *((_QWORD *)v11 + 1);
    if ( *(_QWORD *)(*(_QWORD *)(v43 + 16) + 1984LL) )
    {
      if ( !v43 )
      {
        v135 = WdLogNewEntry5_WdAssertion(0LL, v42, v44, v45);
        WdLogEvent5_WdAssertion(v135);
      }
      v83 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      if ( !*(_QWORD *)(v83 + 1984) )
      {
        v106 = WdLogNewEntry5_WdAssertion(v83, v42, v44, v45);
        WdLogEvent5_WdAssertion(v106);
      }
      if ( !*((_QWORD *)v11 + 1) )
      {
        v136 = WdLogNewEntry5_WdAssertion(v83, v42, v44, v45);
        WdLogEvent5_WdAssertion(v136);
      }
      v84 = *((_QWORD *)v11 + 1);
      v85 = *(_QWORD *)(*(_QWORD *)(v84 + 16) + 1984LL);
      v86 = *(_QWORD *)(v85 + 384);
      if ( !v84 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v85, 0LL, v44, v45);
        WdLogEvent5_WdAssertion(v137);
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                                                                                          + 1984LL)
                                                                              + 376LL)
                                                                  + 8LL)
                                                      + 432LL))(
        v86,
        a4,
        0LL);
      v41 = a4;
    }
  }
  if ( v37 )
    goto LABEL_48;
  memset(&v206, 0, sizeof(v206));
  if ( v20 == (D3DKMDT_HVIDPN)-88LL )
    v206.hFunctionalVidPn = 0LL;
  else
    v206.hFunctionalVidPn = v20;
  v206.hPrimaryAllocation = a3;
  v48 = *(_BYTE *)v8 & 0xF;
  v206.AffectedVidPnSourceId = v41;
  v201 = 0;
  v49 = (*(_DWORD *)&v206.Flags & 0xFFFFFFFD ^ (v48 == 4)) & 1;
  v50 = (unsigned int)v49 ^ *(_DWORD *)&v206.Flags & 0xFFFFFFFD;
  v206.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(v49 ^ *(_DWORD *)&v206.Flags & 0xFFFFFFFD);
  if ( !*((_QWORD *)v11 + 1) )
  {
    v138 = WdLogNewEntry5_WdAssertion(v49, v50, v46, v47);
    WdLogEvent5_WdAssertion(v138);
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL), &v201, v46, v47) < 0 )
  {
    v139 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
    WdLogEvent5_WdAssertion(v139);
  }
  v55 = a5;
  if ( v201 )
    v55 = D3DKMDT_MCC_IGNORE;
  v206.MonitorConnectivityChecks = v55;
  if ( !*((_QWORD *)v11 + 1) )
  {
    v140 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
    WdLogEvent5_WdAssertion(v140);
  }
  DMMVIDPN::RequestPowerStateForTargets((DMMVIDPN *)v20, *(struct DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL));
  if ( !*((_QWORD *)v11 + 1) )
  {
    v141 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
    WdLogEvent5_WdAssertion(v141);
  }
  v60 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)v11 + 1), &v206);
  v65 = v60;
  LODWORD(v40) = -1071774920;
  if ( v60 != -1071774920 )
  {
    if ( v60 < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v62);
      *(_QWORD *)(v40 + 24) = a2;
      if ( !*((_QWORD *)v11 + 1) )
      {
        v182 = WdLogNewEntry5_WdAssertion(v179, v178, v180, v181);
        WdLogEvent5_WdAssertion(v182);
      }
      *(_QWORD *)(v40 + 32) = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      *(_QWORD *)(v40 + 40) = v65;
      WdLogEvent5_WdError(v40);
      DmmLogCommitVidPnFailedPacket(&v206, (unsigned int)v65, 4LL);
      LODWORD(v40) = v65;
      goto LABEL_170;
    }
    goto LABEL_45;
  }
  v146 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v62);
  v146[3] = a2;
  v146[4] = a4;
  if ( !*((_QWORD *)v11 + 1) )
  {
    v147 = WdLogNewEntry5_WdAssertion(v143, v142, v144, v145);
    WdLogEvent5_WdAssertion(v147);
  }
  v146[5] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
  WdLogEvent5_WdDmmEvent(v146);
  v202 = 0;
  *((_BYTE *)v11 + 464) = 1;
  if ( !*((_QWORD *)v11 + 1) )
  {
    v152 = WdLogNewEntry5_WdAssertion(v149, v148, v150, v151);
    WdLogEvent5_WdAssertion(v152);
  }
  if ( (int)MonitorGetNumConnectedMonitor(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) < 0 )
  {
    v157 = WdLogNewEntry5_WdAssertion(v154, v153, v155, v156);
    WdLogEvent5_WdAssertion(v157);
  }
  if ( v202 != 1
    || a5 != D3DKMDT_MCC_ENFORCE
    || (v158 = (unsigned int)((int)(*(_DWORD *)a6 << 28) >> 28), (((_DWORD)v158 - 1) & 0xFFFFFFF9) != 0)
    || (_DWORD)v158 == 7 )
  {
    v129 = 4LL;
LABEL_155:
    v130 = &v206;
LABEL_156:
    DmmLogCommitVidPnFailedPacket(v130, (unsigned int)v40, v129);
    goto LABEL_170;
  }
  v161 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v158);
  v161[3] = a2;
  v161[4] = a4;
  if ( !*((_QWORD *)v11 + 1) )
  {
    v164 = WdLogNewEntry5_WdAssertion(v160, v159, v162, v163);
    WdLogEvent5_WdAssertion(v164);
  }
  v161[5] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
  WdLogEvent5_WdDmmEvent(v161);
  v206.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  if ( !*((_QWORD *)v11 + 1) )
  {
    v169 = WdLogNewEntry5_WdAssertion(v166, v165, v167, v168);
    WdLogEvent5_WdAssertion(v169);
  }
  v170 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)v11 + 1), &v206);
  v40 = v170;
  if ( v170 < 0 )
  {
    v176 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v171);
    v176[3] = a2;
    v176[4] = a4;
    if ( !*((_QWORD *)v11 + 1) )
    {
      v177 = WdLogNewEntry5_WdAssertion(v173, v172, v174, v175);
      WdLogEvent5_WdAssertion(v177);
    }
    v176[5] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
    v176[6] = v40;
    WdLogEvent5_WdDmmEvent(v176);
    v129 = 2LL;
    goto LABEL_155;
  }
  DmmLogCommitVidPnFailedPacket(&v206, (unsigned int)v170, 3LL);
  v8 = (__int64 *)a6;
  if ( a7 )
    *a7 = 1;
LABEL_45:
  if ( !*((_QWORD *)v11 + 1) )
  {
    v183 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
    WdLogEvent5_WdAssertion(v183);
  }
  DMMVIDPN::RequestIdlePowerStateForTargetsNotInTopology(
    (DMMVIDPN *)v20,
    v11,
    *(struct DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL));
LABEL_48:
  if ( IsSourceInTopology )
  {
    if ( !*((_QWORD *)v11 + 1) )
    {
      v184 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
      WdLogEvent5_WdAssertion(v184);
    }
    v66 = *((_QWORD *)v11 + 1);
    if ( *(_QWORD *)(*(_QWORD *)(v66 + 16) + 1984LL) )
    {
      if ( !v66 )
      {
        v185 = WdLogNewEntry5_WdAssertion(0LL, v42, v44, v45);
        WdLogEvent5_WdAssertion(v185);
      }
      v67 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      if ( !*(_QWORD *)(v67 + 1984) )
      {
        v107 = WdLogNewEntry5_WdAssertion(v67, v42, v44, v45);
        WdLogEvent5_WdAssertion(v107);
      }
      if ( !*((_QWORD *)v11 + 1) )
      {
        v186 = WdLogNewEntry5_WdAssertion(v67, v42, v44, v45);
        WdLogEvent5_WdAssertion(v186);
      }
      v68 = -1;
      v69 = *((_QWORD *)v11 + 1);
      v70 = *(unsigned int *)(1008LL * a4 + *(_QWORD *)(v69 + 112) + 956);
      if ( (_DWORD)v70 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v20 + 24), v70) )
        LOBYTE(v67) = 0;
      else
        v67 = 1LL;
      if ( (*(_DWORD *)v8 & 0xF) != 4 || (_DWORD)v70 == v68 || (_BYTE)v67 )
      {
        if ( !v69 )
        {
          v187 = WdLogNewEntry5_WdAssertion(v67, v70, v44, v45);
          WdLogEvent5_WdAssertion(v187);
        }
        v71 = *((_QWORD *)v11 + 1);
        v72 = *(_QWORD *)(*(_QWORD *)(v71 + 16) + 1984LL);
        v73 = *(_QWORD *)(v72 + 384);
        if ( !v71 )
        {
          v188 = WdLogNewEntry5_WdAssertion(v72, 0LL, v44, v45);
          WdLogEvent5_WdAssertion(v188);
        }
        LOBYTE(v44) = 1;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                                                                                             + 1984LL)
                                                                                 + 376LL)
                                                                     + 8LL)
                                                         + 432LL))(
          v73,
          a4,
          v44);
      }
      if ( !*((_QWORD *)v11 + 1) )
      {
        v189 = WdLogNewEntry5_WdAssertion(v67, v70, v44, v45);
        WdLogEvent5_WdAssertion(v189);
      }
      v74 = *((_QWORD *)v11 + 1);
      v75 = *(_QWORD *)(*(_QWORD *)(v74 + 16) + 1984LL);
      v76 = *(_QWORD *)(v75 + 384);
      if ( !v74 )
      {
        v190 = WdLogNewEntry5_WdAssertion(v75, 0LL, v44, v45);
        WdLogEvent5_WdAssertion(v190);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1)
                                                                                              + 16LL)
                                                                                  + 1984LL)
                                                                      + 376LL)
                                                          + 8LL)
                                              + 768LL))(
        v76,
        a4);
    }
    else
    {
      if ( !v66 )
      {
        v191 = WdLogNewEntry5_WdAssertion(0LL, v42, v44, v45);
        WdLogEvent5_WdAssertion(v191);
      }
      v192 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 248LL);
      if ( v192 )
      {
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v192 + 8) + 2384LL * a4 + 656), 0);
        v20 = (D3DKMDT_HVIDPN)v203;
      }
    }
  }
  v203 = 0LL;
  a6 = (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)v20;
  VIDPN_MGR::SetActiveVidPn(v11, &a6);
  v81 = (int)(*(_DWORD *)v8 << 28) >> 28;
  if ( v81 > 0 )
  {
    if ( v81 <= 3 )
    {
      ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v11, a2);
      v88 = ClientCommittedVidPnRef;
      if ( ClientCommittedVidPnRef < 0 )
      {
        v193 = WdLogNewEntry5_WdTrace(v78, v77, v79, v80);
        v195 = v193;
        *(_QWORD *)(v193 + 24) = a2;
        if ( !*((_QWORD *)v11 + 1) )
        {
          v196 = WdLogNewEntry5_WdAssertion(v194, v77, v79, v80);
          WdLogEvent5_WdAssertion(v196);
        }
        v78 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
        *(_QWORD *)(v195 + 32) = v78;
        *(_QWORD *)(v195 + 40) = v88;
      }
      goto LABEL_74;
    }
    if ( v81 <= 5 )
    {
LABEL_74:
      LOBYTE(v78) = IsSourceInTopology;
      if ( (*(_DWORD *)v8 & 0xF) == 4 && IsSourceInTopology )
      {
        if ( !*((_QWORD *)v11 + 1) )
        {
          v197 = WdLogNewEntry5_WdAssertion(v78, v77, v79, v80);
          WdLogEvent5_WdAssertion(v197);
        }
        ADAPTER_DISPLAY::SetGammaRamp(*((PERESOURCE ***)v11 + 1), a4, 0LL);
        LOBYTE(v78) = IsSourceInTopology;
      }
      if ( a8 )
        *a8 = v78;
      goto LABEL_77;
    }
  }
  v198 = WdLogNewEntry5_WdError(v78);
  *(_QWORD *)(v198 + 24) = (int)(*(_DWORD *)v8 << 28) >> 28;
  WdLogEvent5_WdError(v198);
  LODWORD(v40) = -1071774885;
LABEL_170:
  v9 = v40;
LABEL_77:
  DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v209);
LABEL_78:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v203, 0LL);
  return v9;
}
