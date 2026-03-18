/*
 * XREFs of ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0007278 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000C4C8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FDF4 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00922B4 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B794 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00CB16C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DmmResetModeState @ 0x1C00CC0D8 (DmmResetModeState.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C016B120 (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathToActiveVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  unsigned int *i; // rdi
  int ClientVidPnFromActive; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  struct DMMVIDPN *v17; // rdi
  struct DMMVIDPNTOPOLOGY *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DMMVIDPN *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r13
  _QWORD *v27; // r13
  unsigned int v28; // r14d
  __int64 j; // r15
  int PathSourceFromTarget; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rax
  _QWORD *v44; // r14
  struct DXGADAPTERALLOCATION *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  DMMVIDPN *v52; // r13
  _QWORD *v53; // r13
  _QWORD *v54; // r13
  unsigned int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  DMMVIDPN *v59; // r13
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  struct DXGADAPTERALLOCATION *v65; // r13
  __int64 v66; // rax
  __int64 v67; // rcx
  DMMVIDPNTOPOLOGY *v68; // r14
  __int64 v69; // rax
  struct DXGADAPTERALLOCATION *v70; // rax
  __int64 v71; // rax
  bool v72; // zf
  __int64 v73; // rax
  __int64 v74; // rdx
  struct DXGDEVICE *v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rcx
  _QWORD *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  unsigned int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rcx
  _QWORD *v119; // rdi
  __int64 v120; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v121; // rcx
  __int64 v122; // rax
  _QWORD *v123; // rbx
  __int64 v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  int v132; // edi
  __int64 v133; // rcx
  __int64 v134; // rbx
  __int64 v135; // rax
  unsigned __int8 v137[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v138; // [rsp+44h] [rbp-BCh]
  DMMVIDPNTOPOLOGY *v139; // [rsp+48h] [rbp-B8h]
  DMMVIDPN *v140; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v141; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v142; // [rsp+60h] [rbp-A0h] BYREF
  char v143; // [rsp+64h] [rbp-9Ch]
  int v144; // [rsp+68h] [rbp-98h]
  struct DXGADAPTERALLOCATION *v145; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v146; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v147[480]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v148[2]; // [rsp+260h] [rbp+160h]

  v3 = a2;
  v138 = a2;
  v5 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v5 + 24) = v3;
  *(_QWORD *)(v5 + 32) = this;
  WdLogEvent5_WdDmmEvent(v5);
  CurrentThread = KeGetCurrentThread();
  if ( **((struct _KTHREAD ***)this + 5) != CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v3 == -1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL), 1u);
    v10 = (_QWORD *)*((_QWORD *)this + 12);
    v11 = v10 + 3;
    if ( (_QWORD *)*v11 != v11 )
    {
      for ( i = (unsigned int *)(*v11 - 8LL);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v10,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        VIDPN_MGR::SetTargetOwnership((__int64)this, i[6], 1);
      }
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership((__int64)this, v3, 1);
  }
  v141 = 0LL;
  v148[0] = 0LL;
  v148[1] = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive((__int64)this, (__int64 *)&v141, v6, v7);
  v15 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v14);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdDmmEvent(v16);
    goto LABEL_137;
  }
  v17 = v141;
  memset(v147, 0, sizeof(v147));
  v18 = (struct DMMVIDPN *)((char *)v141 + 96);
  v139 = (struct DMMVIDPN *)((char *)v141 + 96);
  v19 = *((_QWORD *)this + 10);
  v140 = 0LL;
  if ( v19 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v19 + 32), 1u);
    v20 = *((_QWORD *)this + 10);
    v17 = v141;
  }
  else
  {
    v20 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, v20);
  v24 = v140;
  if ( !v140 )
  {
    v25 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, 0LL);
    LODWORD(v15) = -1071774884;
    goto LABEL_137;
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
        j = *(unsigned int *)(v27[11] + 24LL);
        if ( v138 == -1 || v138 == v28 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v139, v28, v22, v23);
          if ( PathSourceFromTarget != (_DWORD)j )
          {
            if ( PathSourceFromTarget != -1 )
            {
              v32 = WdLogNewEntry5_WdAssertion(v31);
              WdLogEvent5_WdAssertion(v32);
            }
            if ( !*((_QWORD *)this + 1) )
            {
              v33 = WdLogNewEntry5_WdAssertion(v31);
              WdLogEvent5_WdAssertion(v33);
            }
            v34 = *((_QWORD *)this + 1);
            if ( !*(_QWORD *)(*(_QWORD *)(v34 + 16) + 1992LL) )
            {
LABEL_37:
              if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                          v24,
                          v28,
                          (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v147) < 0 )
              {
                v49 = WdLogNewEntry5_WdAssertion(v48);
                WdLogEvent5_WdAssertion(v49);
              }
              v50 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                      (struct _KTHREAD ***)this,
                      v139,
                      (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v147,
                      D3DKMDT_MCC_IGNORE);
              v15 = v50;
              if ( v50 < 0 )
                goto LABEL_56;
              *((_BYTE *)v148 + j) = 1;
              goto LABEL_41;
            }
            if ( !v34 )
            {
              v35 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v35);
            }
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), j);
            v145 = DisplayedPrimaryAllocation;
            if ( DisplayedPrimaryAllocation )
            {
              if ( *((_QWORD *)DisplayedPrimaryAllocation + 2) )
                goto LABEL_37;
              v44 = (_QWORD *)WdLogNewEntry5_WdError(v38);
              v45 = v145;
              v46 = *((_QWORD *)v145 + 2);
              v44[3] = v46;
              v44[4] = v45;
              v44[5] = j;
              if ( !*((_QWORD *)this + 1) )
              {
                v47 = WdLogNewEntry5_WdAssertion(v46);
                WdLogEvent5_WdAssertion(v47);
              }
              v44[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
              WdLogEvent5_WdError(v44);
            }
            else
            {
              v42 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
              *(_QWORD *)(v42 + 24) = j;
              if ( !*((_QWORD *)this + 1) )
              {
                v43 = WdLogNewEntry5_WdAssertion(v41);
                WdLogEvent5_WdAssertion(v43);
              }
              *(_QWORD *)(v42 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
              WdLogEvent5_WdWarning(v42);
            }
          }
        }
LABEL_41:
        v52 = (DMMVIDPN *)v27[1];
        if ( v52 == (DMMVIDPN *)((char *)v24 + 120) )
          v27 = 0LL;
        else
          v27 = (_QWORD *)((char *)v52 - 8);
        if ( !v27 )
        {
          v18 = v139;
          break;
        }
      }
    }
  }
  v53 = (_QWORD *)((char *)v24 + 120);
  if ( (_QWORD *)*v53 != v53 )
  {
    v54 = (_QWORD *)(*v53 - 8LL);
    if ( v54 )
    {
      while ( 1 )
      {
        v55 = *(_DWORD *)(v54[12] + 24LL);
        j = *(unsigned int *)(v54[11] + 24LL);
        if ( *((_BYTE *)v148 + j) )
        {
          if ( v138 == -1 || v138 == v55 )
          {
            if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                        v24,
                        v55,
                        (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v147) < 0 )
            {
              v57 = WdLogNewEntry5_WdAssertion(v56);
              WdLogEvent5_WdAssertion(v57);
            }
            v58 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    (struct _KTHREAD ***)this,
                    v18,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v147);
            v15 = v58;
            if ( v58 < 0 )
              break;
          }
        }
        v59 = (DMMVIDPN *)v54[1];
        if ( v59 == (DMMVIDPN *)((char *)v24 + 120) )
          v54 = 0LL;
        else
          v54 = (_QWORD *)((char *)v59 - 8);
        if ( !v54 )
          goto LABEL_60;
        v18 = v139;
      }
LABEL_56:
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v51);
      v60[3] = *(unsigned int *)v147;
      v60[4] = *(unsigned int *)&v147[4];
      v60[5] = v139;
      v60[6] = v15;
      WdLogEvent5_WdError(v60);
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, 0LL);
      goto LABEL_126;
    }
  }
LABEL_60:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v140, 0LL);
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v62);
      WdLogEvent5_WdAssertion(v63);
    }
    v64 = *((_QWORD *)this + 1);
    if ( (unsigned int)j >= *(_DWORD *)(v64 + 104) )
    {
      LODWORD(v15) = 0;
      goto LABEL_137;
    }
    if ( *((_BYTE *)v148 + j) )
    {
      v65 = 0LL;
      v137[0] = 0;
      if ( !v64 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v62);
        WdLogEvent5_WdAssertion(v66);
      }
      v67 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v67 + 16) + 1992LL) )
      {
        if ( !v67 )
        {
          v69 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v69);
        }
        v70 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), j);
        v65 = v70;
        if ( !v70 || !*((_QWORD *)v70 + 2) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v67);
          WdLogEvent5_WdAssertion(v71);
        }
        v68 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v65 + 2);
      }
      else
      {
        v68 = 0LL;
      }
      v72 = *((_QWORD *)this + 1) == 0LL;
      v139 = v68;
      if ( v72 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v67);
        WdLogEvent5_WdAssertion(v73);
      }
      v74 = *((_QWORD *)this + 1);
      v75 = *(struct DXGDEVICE **)(1016LL * (unsigned int)j + *(_QWORD *)(v74 + 136) + 672);
      if ( !v74 )
      {
        v76 = WdLogNewEntry5_WdAssertion(1016LL * (unsigned int)j);
        WdLogEvent5_WdAssertion(v76);
      }
      v138 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), j, 0LL, 512, v75, 0);
      if ( v138 < 0 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdError(v77);
        v79[3] = (unsigned int)j;
        if ( !*((_QWORD *)this + 1) )
        {
          v80 = WdLogNewEntry5_WdAssertion(v78);
          WdLogEvent5_WdAssertion(v80);
        }
        v81 = v138;
        v79[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        v79[5] = v81;
        WdLogEvent5_WdError(v79);
      }
      v143 &= 0xF8u;
      v144 = -3;
      v142 = v142 & 0xFFFFFF00 | 0x24;
      v82 = VIDPN_MGR::CommitVidPn(
              (__int64)this,
              v17,
              v68,
              j,
              D3DKMDT_MCC_IGNORE,
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v142,
              0LL,
              v137);
      v15 = v82;
      if ( v82 < 0 )
      {
        v125 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v83, v85, v86);
        v125[4] = (unsigned int)j;
        v125[3] = v17;
        v125[5] = v15;
        WdLogEvent5_WdWarning(v125);
        goto LABEL_126;
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v87 = WdLogNewEntry5_WdAssertion(v84);
        WdLogEvent5_WdAssertion(v87);
      }
      DisplayRestoreVidPnResult(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 252LL),
        (unsigned int)j,
        (unsigned int)v15);
      if ( v137[0] )
        break;
    }
LABEL_116:
    ;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v89 = WdLogNewEntry5_WdAssertion(v62);
    WdLogEvent5_WdAssertion(v89);
  }
  v90 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(*(_QWORD *)(v90 + 16) + 1992LL) )
  {
    if ( !v90 )
    {
      v91 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v91);
    }
    v92 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !*(_QWORD *)(v92 + 1992) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v92);
      WdLogEvent5_WdAssertion(v93);
    }
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
      &v146,
      v88);
    v98 = v146;
    if ( !v146 )
    {
      v122 = WdLogNewEntry5_WdLowResource(v95, v94, v96, v97);
      *(_QWORD *)(v122 + 24) = this;
      WdLogEvent5_WdLowResource(v122);
      v121 = 0LL;
LABEL_121:
      operator delete(v121);
      goto LABEL_126;
    }
    v146->hAllocation = v139;
    v98->VidPnSourceId = j;
    if ( !*((_QWORD *)this + 1) )
    {
      v99 = WdLogNewEntry5_WdAssertion(v95);
      WdLogEvent5_WdAssertion(v99);
    }
    v100 = *((_QWORD *)this + 1);
    v101 = *(_QWORD *)(*(_QWORD *)(v100 + 16) + 1992LL);
    v102 = *(_QWORD *)(v101 + 432);
    if ( !v100 )
    {
      v103 = WdLogNewEntry5_WdAssertion(v101);
      WdLogEvent5_WdAssertion(v103);
    }
    (*(void (__fastcall **)(__int64, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1992LL)
                                                                                             + 424LL)
                                                                                 + 8LL)
                                                                     + 208LL))(
      v102,
      *((_QWORD *)v65 + 1),
      &v98->PrimarySegment,
      &v98->PrimaryAddress);
    v98->Flags.Value |= 1u;
    if ( !*((_QWORD *)this + 1) )
    {
      v106 = WdLogNewEntry5_WdAssertion(v104);
      WdLogEvent5_WdAssertion(v106);
    }
    v107 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*((ADAPTER_DISPLAY **)this + 1), v98, v105);
    v15 = v107;
    if ( v107 < 0 )
    {
      v119 = (_QWORD *)WdLogNewEntry5_WdError(v108);
      v119[3] = v15;
      if ( !*((_QWORD *)this + 1) )
      {
        v120 = WdLogNewEntry5_WdAssertion(v118);
        WdLogEvent5_WdAssertion(v120);
      }
      v119[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v119[5] = (unsigned int)j;
      WdLogEvent5_WdError(v119);
      v121 = v98;
      goto LABEL_121;
    }
    operator delete(v98);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v109 = WdLogNewEntry5_WdAssertion(v90);
    WdLogEvent5_WdAssertion(v109);
  }
  v110 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v110 + 1984), j) == 1 )
  {
    v113 = *(_QWORD *)(v110 + 1992);
    if ( v113 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v113 + 400) + 8LL) + 776LL))(
        *(_QWORD *)(v113 + 408),
        (unsigned int)j);
    }
    else
    {
      v114 = *(_QWORD *)(*(_QWORD *)(v110 + 1984) + 320LL);
      if ( v114 )
      {
        v113 = *(_QWORD *)(v114 + 8) + 2408LL * (unsigned int)j;
        _InterlockedExchange((volatile __int32 *)(v113 + 680), 1);
        v17 = v141;
      }
    }
LABEL_113:
    if ( !*((_QWORD *)this + 1) )
    {
      v117 = WdLogNewEntry5_WdAssertion(v113);
      WdLogEvent5_WdAssertion(v117);
    }
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((PERESOURCE ***)this + 1), j, 0);
    goto LABEL_116;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v115 = WdLogNewEntry5_WdAssertion(v111);
    WdLogEvent5_WdAssertion(v115);
  }
  LOBYTE(v112) = 1;
  v116 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), j, v112, 512, 0LL, 1u);
  v15 = v116;
  if ( v116 >= 0 )
    goto LABEL_113;
  v123 = (_QWORD *)WdLogNewEntry5_WdError(v113);
  v123[3] = (unsigned int)j;
  if ( !*((_QWORD *)this + 1) )
  {
    v124 = WdLogNewEntry5_WdAssertion((unsigned int)j);
    WdLogEvent5_WdAssertion(v124);
  }
  v123[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v123[5] = v15;
  WdLogEvent5_WdError(v123);
LABEL_126:
  if ( !*((_QWORD *)this + 1) )
  {
    v126 = WdLogNewEntry5_WdAssertion(v61);
    WdLogEvent5_WdAssertion(v126);
  }
  DisplayRestoreVidPnResult(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 252LL),
    (unsigned int)j,
    (unsigned int)v15);
  if ( !*((_QWORD *)this + 1) )
  {
    v128 = WdLogNewEntry5_WdAssertion(v127);
    WdLogEvent5_WdAssertion(v128);
  }
  if ( (int)DmmResetModeState(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), (unsigned int)j) < 0 )
  {
    v130 = WdLogNewEntry5_WdAssertion(v129);
    WdLogEvent5_WdAssertion(v130);
  }
  v132 = DpiGdiAsyncDisplaySwitchCallout(0LL);
  if ( v132 < 0 )
  {
    v134 = WdLogNewEntry5_WdError(v131);
    if ( !*((_QWORD *)this + 1) )
    {
      v135 = WdLogNewEntry5_WdAssertion(v133);
      WdLogEvent5_WdAssertion(v135);
    }
    *(_QWORD *)(v134 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v134);
    LODWORD(v15) = v132;
  }
LABEL_137:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v141, 0LL);
  return (unsigned int)v15;
}
