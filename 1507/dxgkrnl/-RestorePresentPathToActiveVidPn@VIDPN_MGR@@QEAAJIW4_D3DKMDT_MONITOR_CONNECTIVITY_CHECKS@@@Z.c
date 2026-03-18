/*
 * XREFs of ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAAA0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00099FC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000AC54 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6B20 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00BCB0C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DmmResetModeState @ 0x1C00BD4A0 (DmmResetModeState.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBA5C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0166B80 (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathToActiveVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  unsigned int *i; // rdi
  int ClientVidPnFromActive; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  struct DMMVIDPN *v17; // rdi
  struct DMMVIDPNTOPOLOGY *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DMMVIDPN *v24; // rbx
  _QWORD *v25; // r13
  _QWORD *v26; // r13
  unsigned int v27; // r14d
  __int64 j; // r15
  int PathSourceFromTarget; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rcx
  DMMVIDPN *v44; // r13
  _QWORD *v45; // r13
  _QWORD *v46; // r13
  unsigned int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  DMMVIDPN *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  struct DXGADAPTERALLOCATION *v59; // r13
  __int64 v60; // rcx
  DMMVIDPNTOPOLOGY *v61; // r14
  bool v62; // zf
  __int64 v63; // rdx
  struct DXGDEVICE *v64; // rbx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  struct DXGADAPTERALLOCATION *v96; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r14
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // r14
  struct DXGADAPTERALLOCATION *v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  _QWORD *v131; // rbx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  _QWORD *v147; // rdi
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdx
  _QWORD *v154; // rbx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rax
  __int64 v170; // rcx
  int v171; // edi
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rbx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  unsigned __int8 v178[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v179; // [rsp+44h] [rbp-BCh]
  DMMVIDPNTOPOLOGY *v180; // [rsp+48h] [rbp-B8h]
  DMMVIDPN *v181; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v182; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v183; // [rsp+60h] [rbp-A0h] BYREF
  char v184; // [rsp+64h] [rbp-9Ch]
  int v185; // [rsp+68h] [rbp-98h]
  struct DXGADAPTERALLOCATION *v186; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v187; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v188[480]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v189[2]; // [rsp+260h] [rbp+160h]

  v3 = a2;
  v179 = a2;
  v5 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v5 + 24) = v3;
  *(_QWORD *)(v5 + 32) = this;
  WdLogEvent5_WdDmmEvent(v5);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v6, v7, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (_DWORD)v3 == -1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL), 1u);
    v11 = (_QWORD *)*((_QWORD *)this + 12);
    v12 = v11 + 3;
    if ( (_QWORD *)*v12 != v12 )
    {
      for ( i = (unsigned int *)(*v12 - 8LL);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v11,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        VIDPN_MGR::SetTargetOwnership((__int64)this, i[6], 1);
      }
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership((__int64)this, v3, 1);
  }
  v182 = 0LL;
  v189[0] = 0LL;
  v189[1] = 0LL;
  ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive((__int64)this, (__int64 *)&v182, v7, v8);
  v16 = ClientVidPnFromActive;
  if ( ClientVidPnFromActive < 0 )
  {
    v98 = WdLogNewEntry5_WdDmmEvent(v15);
    *(_QWORD *)(v98 + 24) = v16;
    WdLogEvent5_WdDmmEvent(v98);
    goto LABEL_94;
  }
  v17 = v182;
  memset(v188, 0, sizeof(v188));
  v18 = (struct DMMVIDPN *)((char *)v182 + 96);
  v180 = (struct DMMVIDPN *)((char *)v182 + 96);
  v19 = *((_QWORD *)this + 10);
  v181 = 0LL;
  if ( v19 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v19 + 32), 1u);
    v20 = *((_QWORD *)this + 10);
    v17 = v182;
  }
  else
  {
    v20 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v181, v20);
  v24 = v181;
  if ( !v181 )
  {
    v99 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v99 + 24) = this;
    WdLogEvent5_WdError(v99);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v181, 0LL);
    LODWORD(v16) = -1071774884;
    goto LABEL_94;
  }
  v25 = (_QWORD *)((char *)v181 + 120);
  if ( (_QWORD *)*v25 != v25 )
  {
    v26 = (_QWORD *)(*v25 - 8LL);
    if ( v26 )
    {
      while ( 1 )
      {
        v27 = *(_DWORD *)(v26[12] + 24LL);
        j = *(unsigned int *)(v26[11] + 24LL);
        if ( v179 == -1 || v179 == v27 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v180, v27, v22, v23);
          if ( PathSourceFromTarget != (_DWORD)j )
          {
            if ( PathSourceFromTarget != -1 )
            {
              v100 = WdLogNewEntry5_WdAssertion(v31, v30, v22, v23);
              WdLogEvent5_WdAssertion(v100);
            }
            if ( !*((_QWORD *)this + 1) )
            {
              v101 = WdLogNewEntry5_WdAssertion(v31, v30, v22, v23);
              WdLogEvent5_WdAssertion(v101);
            }
            v32 = *((_QWORD *)this + 1);
            if ( !*(_QWORD *)(*(_QWORD *)(v32 + 16) + 1984LL) )
            {
LABEL_26:
              if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                     v24,
                     v27,
                     (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v188) < 0 )
              {
                v116 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
                WdLogEvent5_WdAssertion(v116);
              }
              v42 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                      this,
                      v180,
                      (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v188,
                      D3DKMDT_MCC_IGNORE);
              v16 = v42;
              if ( v42 < 0 )
                goto LABEL_107;
              *((_BYTE *)v189 + j) = 1;
              goto LABEL_30;
            }
            if ( !v32 )
            {
              v102 = WdLogNewEntry5_WdAssertion(0LL, v30, v22, v23);
              WdLogEvent5_WdAssertion(v102);
            }
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), j);
            v186 = DisplayedPrimaryAllocation;
            if ( DisplayedPrimaryAllocation )
            {
              if ( *((_QWORD *)DisplayedPrimaryAllocation + 2) )
                goto LABEL_26;
              v112 = (_QWORD *)WdLogNewEntry5_WdError(v35);
              v113 = v186;
              v114 = *((_QWORD *)v186 + 2);
              v112[3] = v114;
              v112[4] = v113;
              v112[5] = j;
              if ( !*((_QWORD *)this + 1) )
              {
                v115 = WdLogNewEntry5_WdAssertion(v114, v109, v110, v111);
                WdLogEvent5_WdAssertion(v115);
              }
              v112[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
              WdLogEvent5_WdError(v112);
            }
            else
            {
              v107 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
              *(_QWORD *)(v107 + 24) = j;
              if ( !*((_QWORD *)this + 1) )
              {
                v108 = WdLogNewEntry5_WdAssertion(v104, v103, v105, v106);
                WdLogEvent5_WdAssertion(v108);
              }
              *(_QWORD *)(v107 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
              WdLogEvent5_WdWarning(v107);
            }
          }
        }
LABEL_30:
        v44 = (DMMVIDPN *)v26[1];
        if ( v44 == (DMMVIDPN *)((char *)v24 + 120) )
          v26 = 0LL;
        else
          v26 = (_QWORD *)((char *)v44 - 8);
        if ( !v26 )
        {
          v18 = v180;
          break;
        }
      }
    }
  }
  v45 = (_QWORD *)((char *)v24 + 120);
  if ( (_QWORD *)*v45 != v45 )
  {
    v46 = (_QWORD *)(*v45 - 8LL);
    if ( v46 )
    {
      while ( 1 )
      {
        v47 = *(_DWORD *)(v46[12] + 24LL);
        j = *(unsigned int *)(v46[11] + 24LL);
        if ( *((_BYTE *)v189 + j) )
        {
          if ( v179 == -1 || v179 == v47 )
          {
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v24,
                   v47,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v188) < 0 )
            {
              v122 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
              WdLogEvent5_WdAssertion(v122);
            }
            v52 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    this,
                    v18,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v188);
            v16 = v52;
            if ( v52 < 0 )
              break;
          }
        }
        v53 = (DMMVIDPN *)v46[1];
        if ( v53 == (DMMVIDPN *)((char *)v24 + 120) )
          v46 = 0LL;
        else
          v46 = (_QWORD *)((char *)v53 - 8);
        if ( !v46 )
          goto LABEL_44;
        v18 = v180;
      }
LABEL_107:
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v117[3] = *(unsigned int *)v188;
      v117[4] = *(unsigned int *)&v188[4];
      v117[5] = v180;
      v117[6] = v16;
      WdLogEvent5_WdError(v117);
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v181, 0LL);
      goto LABEL_131;
    }
  }
LABEL_44:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v181, 0LL);
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v123 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
      WdLogEvent5_WdAssertion(v123);
    }
    v58 = *((_QWORD *)this + 1);
    if ( (unsigned int)j >= *(_DWORD *)(v58 + 80) )
    {
      LODWORD(v16) = 0;
      goto LABEL_94;
    }
    if ( *((_BYTE *)v189 + j) )
    {
      v59 = 0LL;
      v178[0] = 0;
      if ( !v58 )
      {
        v124 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
        WdLogEvent5_WdAssertion(v124);
      }
      v60 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v60 + 16) + 1984LL) )
      {
        if ( !v60 )
        {
          v125 = WdLogNewEntry5_WdAssertion(0LL, v54, v56, v57);
          WdLogEvent5_WdAssertion(v125);
        }
        v96 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), j);
        v59 = v96;
        if ( !v96 || !*((_QWORD *)v96 + 2) )
        {
          v126 = WdLogNewEntry5_WdAssertion(v60, v54, v56, v57);
          WdLogEvent5_WdAssertion(v126);
        }
        v61 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v59 + 2);
      }
      else
      {
        v61 = 0LL;
      }
      v62 = *((_QWORD *)this + 1) == 0LL;
      v180 = v61;
      if ( v62 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v60, v54, v56, v57);
        WdLogEvent5_WdAssertion(v127);
      }
      v63 = *((_QWORD *)this + 1);
      v64 = *(struct DXGDEVICE **)(1008LL * (unsigned int)j + *(_QWORD *)(v63 + 112) + 672);
      if ( !v63 )
      {
        v128 = WdLogNewEntry5_WdAssertion(1008LL * (unsigned int)j, 0LL, v56, v57);
        WdLogEvent5_WdAssertion(v128);
      }
      v179 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
               *((ADAPTER_DISPLAY **)this + 1),
               (unsigned int)j,
               0LL,
               512LL,
               v64,
               0);
      if ( v179 < 0 )
      {
        v131 = (_QWORD *)WdLogNewEntry5_WdError(v65);
        v131[3] = (unsigned int)j;
        if ( !*((_QWORD *)this + 1) )
        {
          v134 = WdLogNewEntry5_WdAssertion(v130, v129, v132, v133);
          WdLogEvent5_WdAssertion(v134);
        }
        v135 = v179;
        v131[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        v131[5] = v135;
        WdLogEvent5_WdError(v131);
      }
      v184 &= 0xF8u;
      v185 = -3;
      v183 = v183 & 0xFFFFFF00 | 0x24;
      v66 = VIDPN_MGR::CommitVidPn(
              this,
              v17,
              v61,
              j,
              D3DKMDT_MCC_IGNORE,
              (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v183,
              0LL,
              v178);
      v16 = v66;
      if ( v66 < 0 )
      {
        v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v67, v69, v70);
        v158[4] = (unsigned int)j;
        v158[3] = v17;
        v158[5] = v16;
        WdLogEvent5_WdWarning(v158);
        goto LABEL_131;
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v136 = WdLogNewEntry5_WdAssertion(v68, v67, v69, v70);
        WdLogEvent5_WdAssertion(v136);
      }
      DisplayRestoreVidPnResult(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 252LL),
        (unsigned int)j,
        (unsigned int)v16);
      if ( v178[0] )
        break;
    }
LABEL_92:
    ;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v137 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
    WdLogEvent5_WdAssertion(v137);
  }
  v71 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(*(_QWORD *)(v71 + 16) + 1984LL) )
  {
    if ( !v71 )
    {
      v138 = WdLogNewEntry5_WdAssertion(0LL, v54, v56, v57);
      WdLogEvent5_WdAssertion(v138);
    }
    v72 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !*(_QWORD *)(v72 + 1984) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v72, v54, v56, v57);
      WdLogEvent5_WdAssertion(v73);
    }
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
      &v187,
      v54);
    v78 = v187;
    if ( !v187 )
    {
      v152 = WdLogNewEntry5_WdLowResource(v75);
      *(_QWORD *)(v152 + 24) = this;
      WdLogEvent5_WdLowResource(v152);
      v151 = 0LL;
LABEL_126:
      operator delete(v151);
      goto LABEL_131;
    }
    v187->hAllocation = v180;
    v78->VidPnSourceId = j;
    if ( !*((_QWORD *)this + 1) )
    {
      v139 = WdLogNewEntry5_WdAssertion(v75, v74, v76, v77);
      WdLogEvent5_WdAssertion(v139);
    }
    v79 = *((_QWORD *)this + 1);
    v80 = *(_QWORD *)(*(_QWORD *)(v79 + 16) + 1984LL);
    v81 = *(_QWORD *)(v80 + 408);
    if ( !v79 )
    {
      v140 = WdLogNewEntry5_WdAssertion(v80, 0LL, v76, v77);
      WdLogEvent5_WdAssertion(v140);
    }
    (*(void (__fastcall **)(__int64, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1984LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 208LL))(
      v81,
      *((_QWORD *)v59 + 1),
      &v78->PrimarySegment,
      &v78->PrimaryAddress);
    v78->Flags.Value |= 1u;
    if ( !*((_QWORD *)this + 1) )
    {
      v141 = WdLogNewEntry5_WdAssertion(v83, v82, v84, v85);
      WdLogEvent5_WdAssertion(v141);
    }
    v86 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*((ADAPTER_DISPLAY **)this + 1), v78, v84);
    v16 = v86;
    if ( v86 < 0 )
    {
      v147 = (_QWORD *)WdLogNewEntry5_WdError(v87);
      v147[3] = v16;
      if ( !*((_QWORD *)this + 1) )
      {
        v150 = WdLogNewEntry5_WdAssertion(v146, v145, v148, v149);
        WdLogEvent5_WdAssertion(v150);
      }
      v147[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v147[5] = (unsigned int)j;
      WdLogEvent5_WdError(v147);
      v151 = v78;
      goto LABEL_126;
    }
    operator delete(v78);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v142 = WdLogNewEntry5_WdAssertion(v71, v54, v56, v57);
    WdLogEvent5_WdAssertion(v142);
  }
  v88 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v88 + 1976), j) == 1 )
  {
    v95 = *(_QWORD *)(v88 + 1984);
    if ( v95 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v95 + 376) + 8LL) + 776LL))(
        *(_QWORD *)(v95 + 384),
        (unsigned int)j);
    }
    else
    {
      v94 = *(_QWORD *)(*(_QWORD *)(v88 + 1976) + 248LL);
      if ( v94 )
      {
        v95 = *(_QWORD *)(v94 + 8) + 2384LL * (unsigned int)j;
        _InterlockedExchange((volatile __int32 *)(v95 + 656), 1);
        v17 = v182;
      }
    }
    goto LABEL_84;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v143 = WdLogNewEntry5_WdAssertion(v90, v89, v91, v92);
    WdLogEvent5_WdAssertion(v143);
  }
  LOBYTE(v91) = 1;
  v93 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), (unsigned int)j, v91, 512LL, 0LL, 1u);
  v16 = v93;
  if ( v93 >= 0 )
  {
LABEL_84:
    if ( !*((_QWORD *)this + 1) )
    {
      v144 = WdLogNewEntry5_WdAssertion(v95, v94, v91, v92);
      WdLogEvent5_WdAssertion(v144);
    }
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((PERESOURCE ***)this + 1), j, 0);
    goto LABEL_92;
  }
  v154 = (_QWORD *)WdLogNewEntry5_WdError(v95);
  v154[3] = (unsigned int)j;
  if ( !*((_QWORD *)this + 1) )
  {
    v157 = WdLogNewEntry5_WdAssertion((unsigned int)j, v153, v155, v156);
    WdLogEvent5_WdAssertion(v157);
  }
  v154[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v154[5] = v16;
  WdLogEvent5_WdError(v154);
LABEL_131:
  if ( !*((_QWORD *)this + 1) )
  {
    v159 = WdLogNewEntry5_WdAssertion(v119, v118, v120, v121);
    WdLogEvent5_WdAssertion(v159);
  }
  DisplayRestoreVidPnResult(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 252LL),
    (unsigned int)j,
    (unsigned int)v16);
  if ( !*((_QWORD *)this + 1) )
  {
    v164 = WdLogNewEntry5_WdAssertion(v161, v160, v162, v163);
    WdLogEvent5_WdAssertion(v164);
  }
  if ( (int)DmmResetModeState(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), (unsigned int)j) < 0 )
  {
    v169 = WdLogNewEntry5_WdAssertion(v166, v165, v167, v168);
    WdLogEvent5_WdAssertion(v169);
  }
  v171 = DpiGdiAsyncDisplaySwitchCallout(0LL);
  if ( v171 < 0 )
  {
    v174 = WdLogNewEntry5_WdError(v170);
    if ( !*((_QWORD *)this + 1) )
    {
      v177 = WdLogNewEntry5_WdAssertion(v173, v172, v175, v176);
      WdLogEvent5_WdAssertion(v177);
    }
    *(_QWORD *)(v174 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v174);
    LODWORD(v16) = v171;
  }
LABEL_94:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v182, 0LL);
  return (unsigned int)v16;
}
