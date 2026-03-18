/*
 * XREFs of ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3B40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C00065DC (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000CC08 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C007E558 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0083584 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084EB8 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00883AC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00E216C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DmmResetModeState @ 0x1C00E2B30 (DmmResetModeState.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathToActiveVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rax
  unsigned int v11; // r12d
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  unsigned int *i; // rdi
  int ClientVidPnFromActive; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  struct DMMVIDPN *v18; // rdi
  struct DMMVIDPNTOPOLOGY *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DMMVIDPN *v25; // rbx
  _QWORD *v26; // r13
  _QWORD *v27; // r13
  unsigned int v28; // r14d
  __int64 v29; // r15
  int PathSourceFromTarget; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  DMMVIDPN *v41; // r13
  _QWORD *v42; // r13
  _QWORD *v43; // r13
  unsigned int v44; // edx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  DMMVIDPN *v48; // r13
  __int64 v49; // rcx
  __int64 v50; // rax
  struct DXGADAPTERALLOCATION *v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rdx
  struct _KTHREAD **v54; // rbx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r14
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rcx
  struct DXGADAPTERALLOCATION *v80; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r14
  __int64 v89; // rax
  _QWORD *v90; // r14
  struct DXGADAPTERALLOCATION *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  _QWORD *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // rdi
  __int64 v121; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v122; // rcx
  __int64 v123; // rax
  _QWORD *v124; // rbx
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v128; // rbx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  int v134; // edi
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rax
  unsigned __int8 v138[8]; // [rsp+40h] [rbp-C0h] BYREF
  DMMVIDPNTOPOLOGY *v139; // [rsp+48h] [rbp-B8h]
  DMMVIDPN *v140; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v141; // [rsp+58h] [rbp-A8h]
  struct DMMVIDPN *v142; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v143; // [rsp+68h] [rbp-98h] BYREF
  char v144; // [rsp+6Ch] [rbp-94h]
  int v145; // [rsp+70h] [rbp-90h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v146; // [rsp+78h] [rbp-88h]
  struct DXGADAPTERALLOCATION *v147; // [rsp+80h] [rbp-80h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v148; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v149[480]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v150[2]; // [rsp+270h] [rbp+170h]

  v4 = a2;
  v141 = a2;
  v146 = a4;
  v6 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  WdLogEvent5_WdDmmEvent(v6);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 1;
  if ( (_DWORD)v4 == -1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL), 1u);
    v12 = (_QWORD *)*((_QWORD *)this + 12);
    v13 = v12 + 3;
    if ( (_QWORD *)*v13 != v13 )
    {
      for ( i = (unsigned int *)(*v13 - 8LL);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v12,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        VIDPN_MGR::SetTargetOwnership((__int64)this, i[6], 1);
      }
    }
    if ( v12 )
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership((__int64)this, v4, 1);
  }
  v142 = 0LL;
  v150[0] = 0LL;
  v150[1] = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive((__int64)this, (__int64 *)&v142, v7, v8);
  v17 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v82 = WdLogNewEntry5_WdDmmEvent(v16);
    *(_QWORD *)(v82 + 24) = v17;
    WdLogEvent5_WdDmmEvent(v82);
    goto LABEL_94;
  }
  v18 = v142;
  v19 = (struct DMMVIDPN *)((char *)v142 + 96);
  v139 = (struct DMMVIDPN *)((char *)v142 + 96);
  memset(v149, 0, sizeof(v149));
  v20 = *((_QWORD *)this + 10);
  v140 = 0LL;
  if ( v20 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v20 + 32), 1u);
    v21 = *((_QWORD *)this + 10);
    v18 = v142;
  }
  else
  {
    v21 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, v21);
  v25 = v140;
  if ( !v140 )
  {
    v83 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v83 + 24) = this;
    WdLogEvent5_WdError(v83);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, 0LL);
    LODWORD(v17) = -1071774884;
    goto LABEL_94;
  }
  v26 = (_QWORD *)((char *)v140 + 120);
  if ( (_QWORD *)*v26 != v26 )
  {
    v27 = (_QWORD *)(*v26 - 8LL);
    if ( v27 )
    {
      while ( 1 )
      {
        v28 = *(_DWORD *)(v27[12] + 24LL);
        v29 = *(unsigned int *)(v27[11] + 24LL);
        if ( v141 == -1 || v141 == v28 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v139, v28, v23, v24);
          if ( PathSourceFromTarget != (_DWORD)v29 )
          {
            if ( PathSourceFromTarget != -1 )
            {
              v84 = WdLogNewEntry5_WdAssertion(v31);
              WdLogEvent5_WdAssertion(v84);
            }
            if ( !*((_QWORD *)this + 1) )
            {
              v85 = WdLogNewEntry5_WdAssertion(v31);
              WdLogEvent5_WdAssertion(v85);
            }
            v32 = *((_QWORD *)this + 1);
            if ( !*(_QWORD *)(*(_QWORD *)(v32 + 16) + 2136LL) )
            {
LABEL_26:
              if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                          v25,
                          v28,
                          (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v149) < 0 )
              {
                v94 = WdLogNewEntry5_WdAssertion(v38);
                WdLogEvent5_WdAssertion(v94);
              }
              v39 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                      this,
                      v139,
                      (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v149,
                      D3DKMDT_MCC_IGNORE);
              v17 = v39;
              if ( v39 < 0 )
              {
                v95 = (_QWORD *)WdLogNewEntry5_WdError(v40);
                v95[3] = *(unsigned int *)v149;
                v95[4] = *(unsigned int *)&v149[4];
                v95[5] = v139;
                v95[6] = v17;
                WdLogEvent5_WdError(v95);
                goto LABEL_109;
              }
              *((_BYTE *)v150 + v29) = 1;
              goto LABEL_30;
            }
            if ( !v32 )
            {
              v86 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v86);
            }
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                           *((DXGADAPTER ***)this + 1),
                                           v29);
            v147 = DisplayedPrimaryAllocation;
            if ( DisplayedPrimaryAllocation )
            {
              if ( *((_QWORD *)DisplayedPrimaryAllocation + 2) )
                goto LABEL_26;
              v90 = (_QWORD *)WdLogNewEntry5_WdError(v35);
              v91 = v147;
              v92 = *((_QWORD *)v147 + 2);
              v90[3] = v92;
              v90[4] = v91;
              v90[5] = v29;
              if ( !*((_QWORD *)this + 1) )
              {
                v93 = WdLogNewEntry5_WdAssertion(v92);
                WdLogEvent5_WdAssertion(v93);
              }
              v90[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
              WdLogEvent5_WdError(v90);
            }
            else
            {
              v88 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
              *(_QWORD *)(v88 + 24) = v29;
              if ( !*((_QWORD *)this + 1) )
              {
                v89 = WdLogNewEntry5_WdAssertion(v87);
                WdLogEvent5_WdAssertion(v89);
              }
              *(_QWORD *)(v88 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
              WdLogEvent5_WdWarning(v88);
            }
          }
        }
LABEL_30:
        v41 = (DMMVIDPN *)v27[1];
        if ( v41 == (DMMVIDPN *)((char *)v25 + 120) )
          v27 = 0LL;
        else
          v27 = (_QWORD *)((char *)v41 - 8);
        if ( !v27 )
        {
          v19 = v139;
          break;
        }
      }
    }
  }
  v42 = (_QWORD *)((char *)v25 + 120);
  if ( (_QWORD *)*v42 != v42 )
  {
    v43 = (_QWORD *)(*v42 - 8LL);
    if ( v43 )
    {
      while ( 1 )
      {
        v44 = *(_DWORD *)(v43[12] + 24LL);
        v29 = *(unsigned int *)(v43[11] + 24LL);
        if ( *((_BYTE *)v150 + v29) )
        {
          if ( v141 == -1 || v141 == v44 )
          {
            if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                        v25,
                        v44,
                        (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v149) < 0 )
            {
              v98 = WdLogNewEntry5_WdAssertion(v45);
              WdLogEvent5_WdAssertion(v98);
            }
            v46 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    this,
                    v19,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v149);
            v17 = v46;
            if ( v46 < 0 )
              break;
          }
        }
        v48 = (DMMVIDPN *)v43[1];
        if ( v48 == (DMMVIDPN *)((char *)v25 + 120) )
        {
          LODWORD(v17) = 0;
          v43 = 0LL;
        }
        else
        {
          v43 = (_QWORD *)((char *)v48 - 8);
          LODWORD(v17) = 0;
        }
        if ( !v43 )
          goto LABEL_44;
        v19 = v139;
      }
      v96 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v96[3] = *(unsigned int *)v149;
      v96[4] = *(unsigned int *)&v149[4];
      v96[5] = v139;
      v96[6] = v17;
      WdLogEvent5_WdError(v96);
      v11 = 2;
LABEL_109:
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, 0LL);
      goto LABEL_136;
    }
  }
  LODWORD(v17) = 0;
LABEL_44:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, 0LL);
  for ( LODWORD(v29) = 0; ; LODWORD(v29) = v29 + 1 )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v99 = WdLogNewEntry5_WdAssertion(v49);
      WdLogEvent5_WdAssertion(v99);
    }
    v50 = *((_QWORD *)this + 1);
    if ( (unsigned int)v29 >= *(_DWORD *)(v50 + 80) )
      goto LABEL_94;
    if ( *((_BYTE *)v150 + (unsigned int)v29) )
    {
      v138[0] = 0;
      v51 = 0LL;
      if ( !v50 )
      {
        v100 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v100);
      }
      v52 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v52 + 16) + 2136LL) )
      {
        if ( !v52 )
        {
          v101 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v101);
        }
        v80 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), v29);
        v51 = v80;
        if ( !v80 || !*((_QWORD *)v80 + 2) )
        {
          v102 = WdLogNewEntry5_WdAssertion(v52);
          WdLogEvent5_WdAssertion(v102);
        }
        v139 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v51 + 2);
      }
      else
      {
        v139 = 0LL;
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v103 = WdLogNewEntry5_WdAssertion(v52);
        WdLogEvent5_WdAssertion(v103);
      }
      v53 = *((_QWORD *)this + 1);
      v54 = *(struct _KTHREAD ***)(1016LL * (unsigned int)v29 + *(_QWORD *)(v53 + 112) + 672);
      if ( !v53 )
      {
        v104 = WdLogNewEntry5_WdAssertion(1016LL * (unsigned int)v29);
        WdLogEvent5_WdAssertion(v104);
      }
      v55 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v29, 0LL, 512, v54, 0, 1u);
      v57 = v55;
      if ( v55 < 0 )
      {
        v106 = (_QWORD *)WdLogNewEntry5_WdError(v56);
        v106[3] = (unsigned int)v29;
        if ( !*((_QWORD *)this + 1) )
        {
          v107 = WdLogNewEntry5_WdAssertion(v105);
          WdLogEvent5_WdAssertion(v107);
        }
        v106[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        v106[5] = v57;
        WdLogEvent5_WdError(v106);
      }
      v144 &= 0xF0u;
      v143 = v143 & 0xFFFFFF00 | 0x24;
      v145 = -3;
      v58 = VIDPN_MGR::CommitVidPn(
              (__int64)this,
              v18,
              v139,
              v29,
              D3DKMDT_MCC_IGNORE,
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v143,
              0LL,
              v138);
      v17 = v58;
      if ( v58 < 0 )
      {
        v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61, v62);
        v126[4] = (unsigned int)v29;
        v126[3] = v18;
        v126[5] = v17;
        WdLogEvent5_WdWarning(v126);
        v11 = 3;
        goto LABEL_136;
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v108 = WdLogNewEntry5_WdAssertion(v60);
        WdLogEvent5_WdAssertion(v108);
      }
      DisplayRestoreVidPnResult(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 268LL),
        (unsigned int)v29,
        6LL,
        (unsigned int)v17,
        v146);
      LODWORD(v17) = 0;
      if ( v138[0] )
        break;
    }
LABEL_93:
    ;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v109 = WdLogNewEntry5_WdAssertion(v49);
    WdLogEvent5_WdAssertion(v109);
  }
  v64 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(*(_QWORD *)(v64 + 16) + 2136LL) )
  {
    if ( !v64 )
    {
      v110 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v110);
    }
    v65 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !*(_QWORD *)(v65 + 2136) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v65);
      WdLogEvent5_WdAssertion(v66);
    }
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
      &v148,
      v63);
    v68 = v148;
    if ( !v148 )
    {
      LODWORD(v17) = -1073741801;
      v123 = WdLogNewEntry5_WdLowResource(v67);
      *(_QWORD *)(v123 + 24) = this;
      WdLogEvent5_WdLowResource(v123);
      v122 = 0LL;
LABEL_131:
      v11 = 4;
      operator delete(v122);
      goto LABEL_136;
    }
    v148->hAllocation = v139;
    v68->VidPnSourceId = v29;
    if ( !*((_QWORD *)this + 1) )
    {
      v111 = WdLogNewEntry5_WdAssertion(v67);
      WdLogEvent5_WdAssertion(v111);
    }
    v69 = *((_QWORD *)this + 1);
    v70 = *(_QWORD *)(*(_QWORD *)(v69 + 16) + 2136LL);
    v71 = *(_QWORD *)(v70 + 408);
    if ( !v69 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v70);
      WdLogEvent5_WdAssertion(v112);
    }
    (*(void (__fastcall **)(__int64, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2136LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 216LL))(
      v71,
      *((_QWORD *)v51 + 1),
      &v68->PrimarySegment,
      &v68->PrimaryAddress);
    v68->Flags.Value |= 1u;
    if ( !*((_QWORD *)this + 1) )
    {
      v113 = WdLogNewEntry5_WdAssertion(v72);
      WdLogEvent5_WdAssertion(v113);
    }
    v74 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*((DXGADAPTER ***)this + 1), v68, v73);
    v17 = v74;
    if ( v74 < 0 )
    {
      v120 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v120[3] = v17;
      if ( !*((_QWORD *)this + 1) )
      {
        v121 = WdLogNewEntry5_WdAssertion(v119);
        WdLogEvent5_WdAssertion(v121);
      }
      v120[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v120[5] = (unsigned int)v29;
      WdLogEvent5_WdError(v120);
      v122 = v68;
      goto LABEL_131;
    }
    operator delete(v68);
    LODWORD(v17) = 0;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v114 = WdLogNewEntry5_WdAssertion(v64);
    WdLogEvent5_WdAssertion(v114);
  }
  v76 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v76 + 2128), v29) == 1
    && (*(_DWORD *)(v76 + 276) != 1297040209 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v76) > 1300) )
  {
    v79 = *(_QWORD *)(v76 + 2136);
    if ( v79 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v79 + 376) + 8LL) + 776LL))(
        *(_QWORD *)(v79 + 384),
        (unsigned int)v29);
    }
    else
    {
      v117 = *(_QWORD *)(*(_QWORD *)(v76 + 2128) + 256LL);
      if ( v117 )
      {
        v79 = *(_QWORD *)(v117 + 8) + 2632LL * (unsigned int)v29;
        _InterlockedExchange((volatile __int32 *)(v79 + 856), 1);
        v18 = v142;
      }
    }
    goto LABEL_84;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v115 = WdLogNewEntry5_WdAssertion(v77);
    WdLogEvent5_WdAssertion(v115);
  }
  LOBYTE(v78) = 1;
  v116 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v29, v78, 512, 0LL, 1u, 0);
  v17 = v116;
  if ( v116 >= 0 )
  {
    LODWORD(v17) = 0;
LABEL_84:
    if ( !*((_QWORD *)this + 1) )
    {
      v118 = WdLogNewEntry5_WdAssertion(v79);
      WdLogEvent5_WdAssertion(v118);
    }
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((DXGADAPTER ***)this + 1), v29, 0);
    goto LABEL_93;
  }
  v124 = (_QWORD *)WdLogNewEntry5_WdError(v79);
  v124[3] = (unsigned int)v29;
  if ( !*((_QWORD *)this + 1) )
  {
    v125 = WdLogNewEntry5_WdAssertion((unsigned int)v29);
    WdLogEvent5_WdAssertion(v125);
  }
  v124[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v124[5] = v17;
  WdLogEvent5_WdError(v124);
  v11 = 5;
LABEL_136:
  if ( !*((_QWORD *)this + 1) )
  {
    v127 = WdLogNewEntry5_WdAssertion(v97);
    WdLogEvent5_WdAssertion(v127);
  }
  v128 = v146;
  DisplayRestoreVidPnResult(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 268LL),
    (unsigned int)v29,
    v11,
    (unsigned int)v17,
    v146);
  if ( !*((_QWORD *)this + 1) )
  {
    v130 = WdLogNewEntry5_WdAssertion(v129);
    WdLogEvent5_WdAssertion(v130);
  }
  if ( (int)DmmResetModeState(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), (unsigned int)v29) < 0 )
  {
    v132 = WdLogNewEntry5_WdAssertion(v131);
    WdLogEvent5_WdAssertion(v132);
  }
  v134 = DpiGdiAsyncDisplaySwitchCallout(0LL, v128);
  if ( v134 < 0 )
  {
    v136 = WdLogNewEntry5_WdError(v133);
    if ( !*((_QWORD *)this + 1) )
    {
      v137 = WdLogNewEntry5_WdAssertion(v135);
      WdLogEvent5_WdAssertion(v137);
    }
    *(_QWORD *)(v136 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v136);
    LODWORD(v17) = v134;
  }
LABEL_94:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v142, 0LL);
  return (unsigned int)v17;
}
