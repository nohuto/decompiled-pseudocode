/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00840B4 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     DmmCommitVidPn @ 0x1C00E1FF0 (DmmCommitVidPn.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00E287C (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004898 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C0005D6C (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEA.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C000A298 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ @ 0x1C000D750 (--1-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C007E0AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C007E5E8 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C007E638 (-RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z.c)
 *     ?RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C007E6C8 (-RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00841C8 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C00842D4 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084E18 (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C00858AC (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0085F9C (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00C5E10 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00C5E88 (MonitorIsUsingSimulatedMonitor.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00CF16C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0183554 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01A0B74 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
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
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v8; // r15
  unsigned int v9; // ebx
  const struct DMMVIDPN *v10; // r12
  ADAPTER_DISPLAY **v11; // rdi
  int v12; // eax
  int active; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  D3DKMDT_HVIDPN v17; // r13
  unsigned int v18; // r14d
  DMMVIDPNTOPOLOGY *v19; // rcx
  __int64 v20; // rcx
  ADAPTER_DISPLAY *v21; // rcx
  __int64 v22; // rcx
  ADAPTER_DISPLAY *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  bool v26; // si
  char v27; // r14
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r14
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v37; // r14
  __int64 v38; // rcx
  int v39; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v46; // rcx
  _DWORD *v47; // r12
  _QWORD *v48; // rsi
  _QWORD *v49; // rsi
  D3DKMDT_HVIDPN v50; // r13
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // rcx
  D3DKMDT_HVIDPN v57; // rsi
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r11d
  ADAPTER_DISPLAY *v63; // r10
  int v64; // edx
  __int64 v65; // r8
  char v66; // r14
  ADAPTER_DISPLAY *v67; // rcx
  __int64 v68; // rcx
  ADAPTER_DISPLAY *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rsi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v72; // r14d
  ADAPTER_DISPLAY *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rsi
  DMMVIDPN *v76; // rax
  unsigned __int8 v77; // r8
  DMMVIDPN *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // r14
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rcx
  _QWORD *v101; // r14
  __int64 v102; // rax
  __int64 v103; // r8
  struct _DXGKARG_COMMITVIDPN *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  _QWORD *v113; // r14
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rsi
  __int64 v131; // rcx
  _QWORD *v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int8 IsSourceInTopology; // [rsp+38h] [rbp-B9h]
  unsigned int v138; // [rsp+3Ch] [rbp-B5h]
  DMMVIDPN *v139; // [rsp+40h] [rbp-B1h] BYREF
  D3DKMDT_HVIDPN v140; // [rsp+48h] [rbp-A9h] BYREF
  _DXGKARG_QUERYVIDPNHWCAPABILITY v141; // [rsp+50h] [rbp-A1h] BYREF
  DMMVIDPN *v142; // [rsp+68h] [rbp-89h]
  _DXGKARG_COMMITVIDPN v143; // [rsp+70h] [rbp-81h] BYREF
  struct DMMVIDPN *v144; // [rsp+90h] [rbp-61h] BYREF
  struct _DXGKARG_COMMITVIDPN v145; // [rsp+98h] [rbp-59h] BYREF
  void **v146; // [rsp+B8h] [rbp-39h] BYREF
  __int128 v147; // [rsp+C0h] [rbp-31h]
  void **v148; // [rsp+D0h] [rbp-21h]
  void *v149; // [rsp+D8h] [rbp-19h]
  __int64 v150; // [rsp+E0h] [rbp-11h]
  int v151; // [rsp+E8h] [rbp-9h]

  v8 = a6;
  v9 = 0;
  v10 = a2;
  v139 = 0LL;
  v11 = (ADAPTER_DISPLAY **)this;
  v12 = (int)(*(_DWORD *)a6 << 28) >> 28;
  if ( v12 <= 0 )
    goto LABEL_170;
  this = 1LL;
  if ( v12 <= 3 )
  {
LABEL_3:
    v144 = 0LL;
    active = VIDPN_MGR::ConvertClientVidPnToActiveVidPn((VIDPN_MGR *)1, a2, &v144);
    v15 = active;
    if ( active >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v139, (__int64)v144);
      v17 = (D3DKMDT_HVIDPN)v139;
      v142 = v139;
      goto LABEL_5;
    }
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    if ( !v11[1] )
    {
      v86 = WdLogNewEntry5_WdAssertion(v84);
      WdLogEvent5_WdAssertion(v86);
    }
    v85[3] = *((_QWORD *)v11[1] + 2);
    v85[4] = v10;
    v85[5] = v15;
    WdLogEvent5_WdError(v85);
LABEL_171:
    v9 = v15;
    goto LABEL_48;
  }
  if ( v12 != 4 )
  {
    if ( v12 == 5 )
      goto LABEL_3;
LABEL_170:
    v136 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v136 + 24) = (int)(*(_DWORD *)a6 << 28) >> 28;
    WdLogEvent5_WdError(v136);
    LODWORD(v15) = -1071774885;
    goto LABEL_171;
  }
  v76 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v76 )
    v78 = DMMVIDPN::DMMVIDPN(v76, v10, v77);
  else
    v78 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&v139, (__int64)v78);
  v17 = (D3DKMDT_HVIDPN)v139;
  v142 = v139;
  if ( !v139 )
  {
    v82 = WdLogNewEntry5_WdLowResource(v79);
    *(_QWORD *)(v82 + 24) = v10;
    WdLogEvent5_WdLowResource(v82);
    LODWORD(v15) = -1073741801;
    goto LABEL_171;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(char *))v139 + 9))((char *)v139 + 72) )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
    v83[3] = v17;
    v83[4] = v10;
    v83[5] = *((int *)v17 + 20);
    WdLogEvent5_WdDmmEvent(v83);
    LODWORD(v15) = v17[20];
    goto LABEL_171;
  }
LABEL_5:
  v149 = 0LL;
  v146 = &DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::`vftable'{for `SetElement'};
  v150 = 0LL;
  v148 = &DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::`vftable'{for `NonReferenceCounted'};
  v151 = 3;
  v140 = v17 + 24;
  v147 = 0LL;
  if ( v17 == (D3DKMDT_HVIDPN)-96LL )
  {
    v87 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v87);
  }
  v18 = *((_DWORD *)v17 + 34);
  if ( !v18 )
    goto LABEL_8;
  if ( !v11[1] )
  {
    v88 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v88);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v11[1] + 2)) >= 1105 )
  {
    DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v146, 12LL * (v18 - 1) + 16);
    v47 = v149;
    if ( !v149 )
    {
      v89 = WdLogNewEntry5_WdLowResource(v46);
      WdLogEvent5_WdLowResource(v89);
      LODWORD(v30) = -1073741801;
      goto LABEL_169;
    }
    v19 = (DMMVIDPNTOPOLOGY *)(v17 + 24);
    *(_BYTE *)v149 = v18;
    v48 = v17 + 30;
    v138 = 0;
    if ( (_QWORD *)*v48 == v48 || (v49 = (_QWORD *)(*v48 - 8LL)) == 0LL )
    {
      v10 = a2;
    }
    else
    {
      v50 = v17 + 22;
      while ( 1 )
      {
        memset(&v141, 0, sizeof(v141));
        if ( v50 )
          v141.hFunctionalVidPn = v50 - 22;
        else
          v141.hFunctionalVidPn = 0LL;
        v51 = v49[12];
        v141.SourceId = *(_DWORD *)(v49[11] + 24LL);
        v52 = *(unsigned int *)(v51 + 24);
        v141.TargetId = *(_DWORD *)(v51 + 24);
        if ( !v11[1] )
        {
          v90 = WdLogNewEntry5_WdAssertion(v52);
          WdLogEvent5_WdAssertion(v90);
        }
        v53 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(v11[1], &v141);
        v55 = v53;
        if ( v53 < 0 )
          break;
        if ( v138 >= v18 )
        {
          v91 = WdLogNewEntry5_WdAssertion(v54);
          WdLogEvent5_WdAssertion(v91);
        }
        v56 = 3LL * v138;
        v47[v56 + 1] = v141.SourceId;
        v47[v56 + 2] = v141.TargetId;
        v47[v56 + 3] = v141.VidPnHWCaps;
        v57 = (D3DKMDT_HVIDPN)v49[1];
        ++v138;
        if ( v57 == v140 + 6 )
          v49 = 0LL;
        else
          v49 = v57 - 2;
        if ( !v49 )
          goto LABEL_66;
      }
      v92 = (_QWORD *)WdLogNewEntry5_WdError(v54);
      v92[3] = v141.TargetId;
      v92[4] = v141.SourceId;
      v92[5] = v141.hFunctionalVidPn;
      v92[6] = v55;
      WdLogEvent5_WdError(v92);
      v149 = 0LL;
      v150 = 0LL;
      operator delete(v47);
LABEL_66:
      v17 = (D3DKMDT_HVIDPN)v142;
      v10 = a2;
      v8 = a6;
      v19 = (DMMVIDPNTOPOLOGY *)v140;
    }
  }
  else
  {
LABEL_8:
    v19 = (DMMVIDPNTOPOLOGY *)(v17 + 24);
  }
  IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v19, a4);
  if ( !IsSourceInTopology )
  {
    if ( !v11[1] )
    {
      v93 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v93);
    }
    v21 = v11[1];
    if ( *(_QWORD *)(*((_QWORD *)v21 + 2) + 2136LL) )
    {
      if ( !v21 )
      {
        v94 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v94);
      }
      v22 = *((_QWORD *)v11[1] + 2);
      if ( !*(_QWORD *)(v22 + 2136) )
      {
        v80 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v80);
      }
      if ( !v11[1] )
      {
        v95 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v95);
      }
      v23 = v11[1];
      v24 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 2136LL);
      v25 = *(_QWORD *)(v24 + 384);
      if ( !v23 )
      {
        v96 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v96);
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11[1] + 2)
                                                                                          + 2136LL)
                                                                              + 376LL)
                                                                  + 8LL)
                                                      + 432LL))(
        v25,
        a4,
        0LL);
    }
    else
    {
      if ( !v21 )
      {
        v97 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v97);
      }
      v98 = *((_QWORD *)v11[1] + 32);
      if ( v98 )
        BLTQUEUE::DisableVSync((BLTQUEUE *)(*(_QWORD *)(v98 + 8) + 2632LL * a4));
    }
  }
  v26 = (*((_BYTE *)v8 + 4) & 8) != 0;
  v27 = v26;
  if ( DMMVIDPN::IsPathFromSourcePoweredOff(v10, a4) && (*(_DWORD *)v8 & 0xF) != 4 )
  {
    memset(&v145, 0, sizeof(v145));
    if ( v10 == (const struct DMMVIDPN *)-88LL )
      v145.hFunctionalVidPn = 0LL;
    else
      v145.hFunctionalVidPn = (D3DKMDT_HVIDPN)v10;
    v145.AffectedVidPnSourceId = a4;
    v145.hPrimaryAllocation = a3;
    v145.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
    v145.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v145.Flags & 0xFFFFFFFC | 2);
    if ( !v26 )
    {
      if ( !v11[1] )
      {
        v99 = WdLogNewEntry5_WdAssertion(v58);
        WdLogEvent5_WdAssertion(v99);
      }
      v59 = ADAPTER_DISPLAY::DdiCommitVidPn(v11[1], &v145);
      v30 = v59;
      if ( v59 < 0 )
      {
        v101 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v101[3] = v10;
        if ( !v11[1] )
        {
          v102 = WdLogNewEntry5_WdAssertion(v100);
          WdLogEvent5_WdAssertion(v102);
        }
        v101[4] = *((_QWORD *)v11[1] + 2);
        v101[5] = v30;
        WdLogEvent5_WdError(v101);
        v103 = 1LL;
        v104 = &v145;
        goto LABEL_152;
      }
    }
    if ( !v11[1] )
    {
      v105 = WdLogNewEntry5_WdAssertion(v58);
      WdLogEvent5_WdAssertion(v105);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v11[1] + 2)) >= 1200 )
    {
      if ( !v61 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v60);
        WdLogEvent5_WdAssertion(v106);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11[1] + 2) + 192LL) + 64LL) + 40LL) + 28LL) >= 0x300Au )
        v27 = 1;
    }
  }
  v28 = VIDPN_MGR::CacheVidPnToBeComitted((__int64)v11, (const struct DMMVIDPN *)v17, a4, (__int64 *)v8, (__int64)&v146);
  v30 = v28;
  if ( v28 < 0 )
  {
    v107 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v107[3] = v17;
    v107[4] = a4;
    v107[5] = (int)(*(_DWORD *)v8 << 28) >> 28;
    v107[6] = v30;
    WdLogEvent5_WdError(v107);
    goto LABEL_169;
  }
  if ( !v27 )
  {
    memset(&v143, 0, sizeof(v143));
    if ( v17 == (D3DKMDT_HVIDPN)-88LL )
      v143.hFunctionalVidPn = 0LL;
    else
      v143.hFunctionalVidPn = v17;
    v143.AffectedVidPnSourceId = a4;
    v143.hPrimaryAllocation = a3;
    v31 = (*(_DWORD *)&v143.Flags & 0xFFFFFFFD ^ ((*(_BYTE *)v8 & 0xF) == 4)) & 1;
    v143.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(v31 ^ *(_DWORD *)&v143.Flags & 0xFFFFFFFD);
    if ( !v11[1] )
    {
      v108 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v108);
    }
    if ( (int)MonitorIsUsingSimulatedMonitor(*((DXGADAPTER **)v11[1] + 2)) < 0 )
    {
      v109 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v109);
    }
    v143.MonitorConnectivityChecks = a5;
    if ( !v11[1] )
    {
      v110 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v110);
    }
    DMMVIDPN::RequestPowerStateForTargets((DMMVIDPN *)v17, *((struct DXGADAPTER **)v11[1] + 2));
    if ( !v11[1] )
    {
      v111 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v111);
    }
    v34 = ADAPTER_DISPLAY::DdiCommitVidPn(v11[1], &v143);
    v36 = v34;
    LODWORD(v30) = -1071774920;
    if ( v34 != -1071774920 )
    {
      if ( v34 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v30 + 24) = v10;
        if ( !v11[1] )
        {
          v120 = WdLogNewEntry5_WdAssertion(v119);
          WdLogEvent5_WdAssertion(v120);
        }
        *(_QWORD *)(v30 + 32) = *((_QWORD *)v11[1] + 2);
        *(_QWORD *)(v30 + 40) = v36;
        WdLogEvent5_WdError(v30);
        DmmLogCommitVidPnFailedPacket(&v143, (unsigned int)v36, 4LL);
        LODWORD(v30) = v36;
        goto LABEL_169;
      }
      v37 = a6;
      if ( !v11[1] )
      {
        v121 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v121);
      }
      DMMVIDPN::RequestIdlePowerStateForTargetsNotInTopology(
        (DMMVIDPN *)v17,
        (struct VIDPN_MGR *)v11,
        *((struct DXGADAPTER **)v11[1] + 2));
      goto LABEL_40;
    }
    v113 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
    v113[3] = v10;
    v113[4] = a4;
    if ( !v11[1] )
    {
      v114 = WdLogNewEntry5_WdAssertion(v112);
      WdLogEvent5_WdAssertion(v114);
    }
    v113[5] = *((_QWORD *)v11[1] + 2);
    WdLogEvent5_WdDmmEvent(v113);
    if ( !v11[1] )
    {
      v116 = WdLogNewEntry5_WdAssertion(v115);
      WdLogEvent5_WdAssertion(v116);
    }
    if ( (int)MonitorGetNumConnectedMonitor(*((DXGADAPTER **)v11[1] + 2)) < 0 )
    {
      v118 = WdLogNewEntry5_WdAssertion(v117);
      WdLogEvent5_WdAssertion(v118);
    }
    v103 = 4LL;
    v104 = &v143;
LABEL_152:
    DmmLogCommitVidPnFailedPacket(v104, (unsigned int)v30, v103);
    goto LABEL_169;
  }
  v37 = a6;
LABEL_40:
  if ( IsSourceInTopology )
  {
    if ( !v11[1] )
    {
      v122 = WdLogNewEntry5_WdAssertion(v29);
      WdLogEvent5_WdAssertion(v122);
    }
    v62 = -1;
    v63 = v11[1];
    v64 = *(_DWORD *)(1016LL * a4 + *((_QWORD *)v63 + 14) + 964);
    if ( v64 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v17 + 24), v64) )
    {
      LOBYTE(v29) = 0;
      v65 = 1LL;
    }
    else
    {
      v65 = 1LL;
      LOBYTE(v29) = 1;
    }
    if ( (*(_DWORD *)v37 & 0xF) != 4 || v64 == v62 || (v66 = 0, (_BYTE)v29) )
      v66 = 1;
    if ( !v63 )
    {
      v123 = WdLogNewEntry5_WdAssertion(v29);
      WdLogEvent5_WdAssertion(v123);
    }
    v67 = v11[1];
    if ( *(_QWORD *)(*((_QWORD *)v67 + 2) + 2136LL) )
    {
      if ( !v67 )
      {
        v124 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v124);
      }
      v68 = *((_QWORD *)v11[1] + 2);
      if ( !*(_QWORD *)(v68 + 2136) )
      {
        v81 = WdLogNewEntry5_WdAssertion(v68);
        WdLogEvent5_WdAssertion(v81);
      }
      if ( v66 )
      {
        if ( !v11[1] )
        {
          v125 = WdLogNewEntry5_WdAssertion(v68);
          WdLogEvent5_WdAssertion(v125);
        }
        v69 = v11[1];
        v70 = *(_QWORD *)(*((_QWORD *)v69 + 2) + 2136LL);
        v71 = *(_QWORD *)(v70 + 384);
        if ( !v69 )
        {
          v126 = WdLogNewEntry5_WdAssertion(v70);
          WdLogEvent5_WdAssertion(v126);
        }
        LOBYTE(v65) = 1;
        v72 = a4;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11[1] + 2)
                                                                                             + 2136LL)
                                                                                 + 376LL)
                                                                     + 8LL)
                                                         + 432LL))(
          v71,
          a4,
          v65);
      }
      else
      {
        v72 = a4;
      }
      if ( !v11[1] )
      {
        v127 = WdLogNewEntry5_WdAssertion(v68);
        WdLogEvent5_WdAssertion(v127);
      }
      v73 = v11[1];
      v74 = *(_QWORD *)(*((_QWORD *)v73 + 2) + 2136LL);
      v75 = *(_QWORD *)(v74 + 384);
      if ( !v73 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v74);
        WdLogEvent5_WdAssertion(v128);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11[1] + 2) + 2136LL)
                                                                      + 376LL)
                                                          + 8LL)
                                              + 768LL))(
        v75,
        v72);
    }
    else
    {
      if ( !v67 )
      {
        v129 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v129);
      }
      v130 = *((_QWORD *)v11[1] + 32);
      if ( v130 )
      {
        if ( v66 )
          BLTQUEUE::EnableVSync((BLTQUEUE *)(*(_QWORD *)(v130 + 8) + 2632LL * a4));
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v130 + 8) + 2632LL * a4 + 856), 0);
        v17 = (D3DKMDT_HVIDPN)v139;
      }
    }
  }
  v139 = 0LL;
  v140 = v17;
  VIDPN_MGR::SetActiveVidPn(v11, &v140);
  v39 = (int)(*(_DWORD *)a6 << 28) >> 28;
  if ( v39 > 0 )
  {
    if ( v39 <= 3 )
    {
      ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef((VIDPN_MGR *)v11, v10);
      v44 = ClientCommittedVidPnRef;
      if ( ClientCommittedVidPnRef < 0 )
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v41, v42, v43);
        v132[3] = v10;
        if ( !v11[1] )
        {
          v133 = WdLogNewEntry5_WdAssertion(v131);
          WdLogEvent5_WdAssertion(v133);
        }
        v38 = *((_QWORD *)v11[1] + 2);
        v132[4] = v38;
        v132[5] = v44;
      }
      goto LABEL_44;
    }
    if ( v39 <= 5 )
    {
LABEL_44:
      LOBYTE(v38) = IsSourceInTopology;
      if ( (*(_DWORD *)a6 & 0xF) == 4 && IsSourceInTopology )
      {
        if ( !v11[1] )
        {
          v134 = WdLogNewEntry5_WdAssertion(v38);
          WdLogEvent5_WdAssertion(v134);
        }
        ADAPTER_DISPLAY::SetGammaRamp(v11[1], a4, 0LL);
        LOBYTE(v38) = IsSourceInTopology;
      }
      if ( a8 )
        *a8 = v38;
      goto LABEL_47;
    }
  }
  v135 = WdLogNewEntry5_WdError(v38);
  *(_QWORD *)(v135 + 24) = (int)(*(_DWORD *)a6 << 28) >> 28;
  WdLogEvent5_WdError(v135);
  LODWORD(v30) = -1071774885;
LABEL_169:
  v9 = v30;
LABEL_47:
  DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v146);
LABEL_48:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v139, 0LL);
  return v9;
}
