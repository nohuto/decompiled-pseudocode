/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 *     DmmCommitVidPn @ 0x1C0179B84 (DmmCommitVidPn.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0001524 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C0004A34 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEA.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??1?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ @ 0x1C0009F10 (--1-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C008F11C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C008F228 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FD54 (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C0091758 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C0092344 (-RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z.c)
 *     ?RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00923E4 (-RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C0099168 (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0099BD4 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00ADA98 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00ADB10 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01771A8 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
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
  __int64 v16; // rcx
  D3DKMDT_HVIDPN v17; // r15
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r12
  _QWORD *v24; // rsi
  _QWORD *v25; // rsi
  D3DKMDT_HVIDPN v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rcx
  D3DKMDT_HVIDPN v32; // rsi
  bool v33; // r14
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rsi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v37; // esi
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int8 v43; // r8
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r11d
  __int64 v51; // r10
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rcx
  int v60; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r14
  DMMVIDPN *v67; // rax
  DMMVIDPN *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // r14
  __int64 v98; // rax
  __int64 v99; // r8
  struct _DXGKARG_COMMITVIDPN *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
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
  __int64 v130; // rdx
  __int64 v131; // rcx
  _QWORD *v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int8 IsSourceInTopology; // [rsp+38h] [rbp-A9h]
  unsigned int v138; // [rsp+3Ch] [rbp-A5h]
  DMMVIDPN *v139; // [rsp+40h] [rbp-A1h] BYREF
  _DXGKARG_QUERYVIDPNHWCAPABILITY v140; // [rsp+48h] [rbp-99h] BYREF
  int v141; // [rsp+60h] [rbp-81h]
  _DXGKARG_COMMITVIDPN v142; // [rsp+68h] [rbp-79h] BYREF
  struct DMMVIDPN *v143; // [rsp+88h] [rbp-59h] BYREF
  struct _DXGKARG_COMMITVIDPN v144; // [rsp+90h] [rbp-51h] BYREF
  void **v145; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v146; // [rsp+B8h] [rbp-29h]
  void **v147; // [rsp+C8h] [rbp-19h]
  void *v148; // [rsp+D0h] [rbp-11h]
  __int64 v149; // [rsp+D8h] [rbp-9h]
  int v150; // [rsp+E0h] [rbp-1h]

  v8 = (__int64 *)a6;
  v9 = 0;
  v139 = 0LL;
  v11 = (VIDPN_MGR *)this;
  v12 = (int)(*(_DWORD *)a6 << 28) >> 28;
  if ( v12 <= 0 )
    goto LABEL_155;
  this = 1LL;
  if ( v12 <= 3 )
  {
LABEL_3:
    v143 = 0LL;
    active = VIDPN_MGR::ConvertClientVidPnToActiveVidPn((VIDPN_MGR *)1, a2, &v143);
    v15 = active;
    if ( active >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v139, (__int64)v143);
      v17 = (D3DKMDT_HVIDPN)v139;
      goto LABEL_5;
    }
    v87 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    if ( !*((_QWORD *)v11 + 1) )
    {
      v88 = WdLogNewEntry5_WdAssertion(v86);
      WdLogEvent5_WdAssertion(v88);
    }
    v87[3] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
    v87[4] = a2;
    v87[5] = v15;
    WdLogEvent5_WdError(v87);
LABEL_156:
    v9 = v15;
    goto LABEL_75;
  }
  if ( v12 != 4 )
  {
    if ( v12 == 5 )
      goto LABEL_3;
LABEL_155:
    v136 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v136 + 24) = (int)(*(_DWORD *)v8 << 28) >> 28;
    WdLogEvent5_WdError(v136);
    LODWORD(v15) = -1071774885;
    goto LABEL_156;
  }
  v67 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v67 )
    v68 = DMMVIDPN::DMMVIDPN(v67, a2);
  else
    v68 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&v139, (__int64)v68);
  v17 = (D3DKMDT_HVIDPN)v139;
  if ( !v139 )
  {
    v84 = WdLogNewEntry5_WdLowResource(v70, v69, v71, v72);
    *(_QWORD *)(v84 + 24) = a2;
    WdLogEvent5_WdLowResource(v84);
    LODWORD(v15) = -1073741801;
    goto LABEL_156;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(char *))v139 + 9))((char *)v139 + 72) )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v85[3] = v17;
    v85[4] = a2;
    v85[5] = *((int *)v17 + 20);
    WdLogEvent5_WdDmmEvent(v85);
    LODWORD(v15) = v17[20];
    goto LABEL_156;
  }
LABEL_5:
  v148 = 0LL;
  v145 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  v149 = 0LL;
  v147 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  v150 = 3;
  v146 = 0LL;
  if ( v17 == (D3DKMDT_HVIDPN)-96LL )
  {
    v89 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v89);
  }
  v18 = *((_DWORD *)v17 + 34);
  if ( v18 )
  {
    if ( !*((_QWORD *)v11 + 1) )
    {
      v90 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v90);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) >= 1105 )
    {
      DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v145, 12LL * (v18 - 1) + 16);
      v23 = v148;
      if ( !v148 )
      {
        v91 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
        WdLogEvent5_WdLowResource(v91);
        LODWORD(v36) = -1073741801;
        goto LABEL_154;
      }
      v24 = v17 + 30;
      *(_BYTE *)v148 = v18;
      v138 = 0;
      if ( (_QWORD *)*v24 != v24 )
      {
        v25 = (_QWORD *)(*v24 - 8LL);
        if ( v25 )
        {
          v26 = v17 + 22;
          while ( 1 )
          {
            memset(&v140, 0, sizeof(v140));
            if ( v26 )
              v140.hFunctionalVidPn = v26 - 22;
            else
              v140.hFunctionalVidPn = 0LL;
            v27 = v25[12];
            v140.SourceId = *(_DWORD *)(v25[11] + 24LL);
            v28 = *(unsigned int *)(v27 + 24);
            v140.TargetId = *(_DWORD *)(v27 + 24);
            if ( !*((_QWORD *)v11 + 1) )
            {
              v92 = WdLogNewEntry5_WdAssertion(v28);
              WdLogEvent5_WdAssertion(v92);
            }
            v141 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(*((ADAPTER_DISPLAY **)v11 + 1), &v140);
            if ( v141 < 0 )
              break;
            v30 = v138;
            if ( v138 >= v18 )
            {
              v93 = WdLogNewEntry5_WdAssertion(v29);
              WdLogEvent5_WdAssertion(v93);
              v30 = v138;
            }
            v138 = v30 + 1;
            v31 = 3LL * v30;
            v23[v31 + 1] = v140.SourceId;
            v23[v31 + 2] = v140.TargetId;
            v23[v31 + 3] = v140.VidPnHWCaps;
            v32 = (D3DKMDT_HVIDPN)v25[1];
            if ( v32 == v17 + 30 )
              v25 = 0LL;
            else
              v25 = v32 - 2;
            v26 = v17 + 22;
            if ( !v25 )
              goto LABEL_25;
          }
          v94 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v94[3] = v140.TargetId;
          v94[4] = v140.SourceId;
          v94[5] = v140.hFunctionalVidPn;
          v94[6] = v141;
          WdLogEvent5_WdError(v94);
          v148 = 0LL;
          v149 = 0LL;
          operator delete(v23);
        }
      }
LABEL_25:
      v8 = (__int64 *)a6;
    }
  }
  v33 = 0;
  if ( DMMVIDPN::IsPathFromSourcePoweredOff(a2, a4) && (*(_DWORD *)v8 & 0xF) != 4 )
  {
    memset(&v144, 0, sizeof(v144));
    if ( a2 == (struct DMMVIDPN *)-88LL )
      v144.hFunctionalVidPn = 0LL;
    else
      v144.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
    v144.hPrimaryAllocation = a3;
    v144.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
    v144.AffectedVidPnSourceId = a4;
    v144.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v144.Flags & 0xFFFFFFFC | 2);
    if ( !*((_QWORD *)v11 + 1) )
    {
      v95 = WdLogNewEntry5_WdAssertion(v77);
      WdLogEvent5_WdAssertion(v95);
    }
    v78 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)v11 + 1), &v144);
    v36 = v78;
    if ( v78 < 0 )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdError(v79);
      v97[3] = a2;
      if ( !*((_QWORD *)v11 + 1) )
      {
        v98 = WdLogNewEntry5_WdAssertion(v96);
        WdLogEvent5_WdAssertion(v98);
      }
      v97[4] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      v97[5] = v36;
      WdLogEvent5_WdError(v97);
      v99 = 1LL;
      v100 = &v144;
      goto LABEL_140;
    }
    if ( !*((_QWORD *)v11 + 1) )
    {
      v101 = WdLogNewEntry5_WdAssertion(v79);
      WdLogEvent5_WdAssertion(v101);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) >= 1200 )
    {
      if ( !v81 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v80);
        WdLogEvent5_WdAssertion(v102);
      }
      v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 176LL) + 64LL)
                                  + 40LL)
                      + 28LL) >= 0x300Au;
    }
  }
  v34 = VIDPN_MGR::CacheVidPnToBeComitted((__int64)v11, (const struct DMMVIDPN *)v17, a4, v8, (__int64)&v145);
  v36 = v34;
  if ( v34 < 0 )
  {
    v103 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v103[3] = v17;
    v103[4] = a4;
    v103[5] = (int)(*(_DWORD *)v8 << 28) >> 28;
    v103[6] = v36;
    WdLogEvent5_WdError(v103);
    goto LABEL_154;
  }
  v37 = a4;
  *((_BYTE *)v11 + 464) = 0;
  IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v17 + 24), a4);
  if ( !IsSourceInTopology )
  {
    if ( !*((_QWORD *)v11 + 1) )
    {
      v104 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v104);
    }
    v38 = *((_QWORD *)v11 + 1);
    if ( *(_QWORD *)(*(_QWORD *)(v38 + 16) + 1992LL) )
    {
      if ( !v38 )
      {
        v105 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v105);
      }
      v73 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      if ( !*(_QWORD *)(v73 + 1992) )
      {
        v82 = WdLogNewEntry5_WdAssertion(v73);
        WdLogEvent5_WdAssertion(v82);
      }
      if ( !*((_QWORD *)v11 + 1) )
      {
        v106 = WdLogNewEntry5_WdAssertion(v73);
        WdLogEvent5_WdAssertion(v106);
      }
      v74 = *((_QWORD *)v11 + 1);
      v75 = *(_QWORD *)(*(_QWORD *)(v74 + 16) + 1992LL);
      v76 = *(_QWORD *)(v75 + 408);
      if ( !v74 )
      {
        v107 = WdLogNewEntry5_WdAssertion(v75);
        WdLogEvent5_WdAssertion(v107);
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                                                                                          + 1992LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 432LL))(
        v76,
        a4,
        0LL);
      v37 = a4;
    }
  }
  if ( v33 )
    goto LABEL_45;
  memset(&v142, 0, sizeof(v142));
  if ( v17 == (D3DKMDT_HVIDPN)-88LL )
    v142.hFunctionalVidPn = 0LL;
  else
    v142.hFunctionalVidPn = v17;
  v142.hPrimaryAllocation = a3;
  v40 = *(_BYTE *)v8 & 0xF;
  v142.AffectedVidPnSourceId = v37;
  v41 = (*(_DWORD *)&v142.Flags & 0xFFFFFFFD ^ (v40 == 4)) & 1;
  v142.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(v41 ^ *(_DWORD *)&v142.Flags & 0xFFFFFFFD);
  if ( !*((_QWORD *)v11 + 1) )
  {
    v108 = WdLogNewEntry5_WdAssertion(v41);
    WdLogEvent5_WdAssertion(v108);
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) < 0 )
  {
    v109 = WdLogNewEntry5_WdAssertion(v42);
    WdLogEvent5_WdAssertion(v109);
  }
  v142.MonitorConnectivityChecks = a5;
  if ( !*((_QWORD *)v11 + 1) )
  {
    v110 = WdLogNewEntry5_WdAssertion(v42);
    WdLogEvent5_WdAssertion(v110);
  }
  DMMVIDPN::RequestPowerStateForTargets((DMMVIDPN *)v17, *(struct DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL), v43);
  if ( !*((_QWORD *)v11 + 1) )
  {
    v111 = WdLogNewEntry5_WdAssertion(v44);
    WdLogEvent5_WdAssertion(v111);
  }
  v45 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)v11 + 1), &v142);
  v47 = v45;
  LODWORD(v36) = -1071774920;
  if ( v45 == -1071774920 )
  {
    v113 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v113[3] = a2;
    v113[4] = a4;
    if ( !*((_QWORD *)v11 + 1) )
    {
      v114 = WdLogNewEntry5_WdAssertion(v112);
      WdLogEvent5_WdAssertion(v114);
    }
    v113[5] = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
    WdLogEvent5_WdDmmEvent(v113);
    *((_BYTE *)v11 + 464) = 1;
    if ( !*((_QWORD *)v11 + 1) )
    {
      v116 = WdLogNewEntry5_WdAssertion(v115);
      WdLogEvent5_WdAssertion(v116);
    }
    if ( (int)MonitorGetNumConnectedMonitor(*(DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL)) < 0 )
    {
      v118 = WdLogNewEntry5_WdAssertion(v117);
      WdLogEvent5_WdAssertion(v118);
    }
    v99 = 4LL;
    v100 = &v142;
LABEL_140:
    DmmLogCommitVidPnFailedPacket(v100, (unsigned int)v36, v99);
    goto LABEL_154;
  }
  if ( v45 < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v46);
    *(_QWORD *)(v36 + 24) = a2;
    if ( !*((_QWORD *)v11 + 1) )
    {
      v120 = WdLogNewEntry5_WdAssertion(v119);
      WdLogEvent5_WdAssertion(v120);
    }
    *(_QWORD *)(v36 + 32) = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
    *(_QWORD *)(v36 + 40) = v47;
    WdLogEvent5_WdError(v36);
    DmmLogCommitVidPnFailedPacket(&v142, (unsigned int)v47, 4LL);
    LODWORD(v36) = v47;
    goto LABEL_154;
  }
  if ( !*((_QWORD *)v11 + 1) )
  {
    v121 = WdLogNewEntry5_WdAssertion(v46);
    WdLogEvent5_WdAssertion(v121);
  }
  DMMVIDPN::RequestIdlePowerStateForTargetsNotInTopology(
    (DMMVIDPN *)v17,
    v11,
    *(struct DXGADAPTER **)(*((_QWORD *)v11 + 1) + 16LL));
LABEL_45:
  if ( IsSourceInTopology )
  {
    if ( !*((_QWORD *)v11 + 1) )
    {
      v122 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v122);
    }
    v48 = *((_QWORD *)v11 + 1);
    if ( *(_QWORD *)(*(_QWORD *)(v48 + 16) + 1992LL) )
    {
      if ( !v48 )
      {
        v123 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v123);
      }
      v49 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
      if ( !*(_QWORD *)(v49 + 1992) )
      {
        v83 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v83);
      }
      if ( !*((_QWORD *)v11 + 1) )
      {
        v124 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v124);
      }
      v50 = -1;
      v51 = *((_QWORD *)v11 + 1);
      v52 = *(_DWORD *)(1016LL * a4 + *(_QWORD *)(v51 + 136) + 956);
      if ( v52 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v17 + 24), v52) )
        LOBYTE(v49) = 0;
      else
        v49 = 1LL;
      if ( (*(_DWORD *)v8 & 0xF) != 4 || v52 == v50 || (_BYTE)v49 )
      {
        if ( !v51 )
        {
          v125 = WdLogNewEntry5_WdAssertion(v49);
          WdLogEvent5_WdAssertion(v125);
        }
        v53 = *((_QWORD *)v11 + 1);
        v54 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 1992LL);
        v55 = *(_QWORD *)(v54 + 408);
        if ( !v53 )
        {
          v126 = WdLogNewEntry5_WdAssertion(v54);
          WdLogEvent5_WdAssertion(v126);
        }
        LOBYTE(v39) = 1;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                                                                                             + 1992LL)
                                                                                 + 400LL)
                                                                     + 8LL)
                                                         + 432LL))(
          v55,
          a4,
          v39);
      }
      if ( !*((_QWORD *)v11 + 1) )
      {
        v127 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v127);
      }
      v56 = *((_QWORD *)v11 + 1);
      v57 = *(_QWORD *)(*(_QWORD *)(v56 + 16) + 1992LL);
      v58 = *(_QWORD *)(v57 + 408);
      if ( !v56 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v57);
        WdLogEvent5_WdAssertion(v128);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1)
                                                                                              + 16LL)
                                                                                  + 1992LL)
                                                                      + 400LL)
                                                          + 8LL)
                                              + 768LL))(
        v58,
        a4);
    }
    else
    {
      if ( !v48 )
      {
        v129 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v129);
      }
      v130 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 320LL);
      if ( v130 )
      {
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v130 + 8) + 2408LL * a4 + 680), 0);
        v17 = (D3DKMDT_HVIDPN)v139;
      }
    }
  }
  v139 = 0LL;
  a6 = (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)v17;
  VIDPN_MGR::SetActiveVidPn(v11, &a6);
  v60 = (int)(*(_DWORD *)v8 << 28) >> 28;
  if ( v60 > 0 )
  {
    if ( v60 <= 3 )
    {
      ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v11, a2);
      v65 = ClientCommittedVidPnRef;
      if ( ClientCommittedVidPnRef < 0 )
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdTrace(v59, v62, v63, v64);
        v132[3] = a2;
        if ( !*((_QWORD *)v11 + 1) )
        {
          v133 = WdLogNewEntry5_WdAssertion(v131);
          WdLogEvent5_WdAssertion(v133);
        }
        v59 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL);
        v132[4] = v59;
        v132[5] = v65;
      }
      goto LABEL_71;
    }
    if ( v60 <= 5 )
    {
LABEL_71:
      LOBYTE(v59) = IsSourceInTopology;
      if ( (*(_DWORD *)v8 & 0xF) == 4 && IsSourceInTopology )
      {
        if ( !*((_QWORD *)v11 + 1) )
        {
          v134 = WdLogNewEntry5_WdAssertion(v59);
          WdLogEvent5_WdAssertion(v134);
        }
        ADAPTER_DISPLAY::SetGammaRamp(*((ADAPTER_DISPLAY **)v11 + 1), a4, 0LL);
        LOBYTE(v59) = IsSourceInTopology;
      }
      if ( a8 )
        *a8 = v59;
      goto LABEL_74;
    }
  }
  v135 = WdLogNewEntry5_WdError(v59);
  *(_QWORD *)(v135 + 24) = (int)(*(_DWORD *)v8 << 28) >> 28;
  WdLogEvent5_WdError(v135);
  LODWORD(v36) = -1071774885;
LABEL_154:
  v9 = v36;
LABEL_74:
  DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v145);
LABEL_75:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v139, 0LL);
  return v9;
}
