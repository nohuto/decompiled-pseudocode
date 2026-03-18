/*
 * XREFs of ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C
 * Callers:
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00709C0 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 * Callees:
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00061C4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C00063C4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0006520 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C00065DC (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000CC08 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C0022A78 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C007E558 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0083584 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00869DC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00883AC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00884F8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0088748 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DmmResetModeState @ 0x1C00E2B30 (DmmResetModeState.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathFromVidPnSourceToActiveVidPn(
        VIDPN_MGR *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        char a4,
        struct COREDEVICEACCESS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  struct DMMVIDPN *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DMMVIDPN *v21; // rbx
  int NumPathsFromSource; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // r12
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v32; // rdx
  struct DXGDEVICE *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int128 v36; // xmm1
  __int64 v37; // xmm0_8
  __int64 v38; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r9
  const struct _D3DKMT_DISPLAYMODE *v46; // rax
  char v47; // r12
  __int64 i; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // r14d
  int PathSourceFromTarget; // eax
  __int64 v55; // rcx
  void *v56; // r12
  __int64 v57; // r13
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r12
  __int64 v70; // rcx
  __int64 v71; // rcx
  struct DXGADAPTER *v72; // rbx
  int v74; // r13d
  __int64 j; // r12
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // eax
  int v79; // eax
  __int64 v80; // rcx
  const struct _D3DKMT_DISPLAYMODE *v81; // rax
  __int64 v82; // rcx
  __int128 v83; // xmm1
  unsigned int v84; // r14d
  __int64 v85; // xmm0_8
  int CddAllocations; // eax
  __int64 v87; // rcx
  __int64 v88; // rcx
  ADAPTER_RENDER *v89; // r13
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r12
  char *v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  DMMVIDPNTOPOLOGY *v100; // r12
  int v101; // eax
  __int64 v102; // rcx
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // r14
  int v106; // eax
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rcx
  _QWORD *v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  _QWORD *v138; // rax
  _QWORD *v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rcx
  _QWORD *v145; // rbx
  __int64 v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rcx
  _QWORD *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rcx
  int v166; // edi
  __int64 v167; // rcx
  __int64 v168; // rbx
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rbx
  __int64 v175; // rax
  __int64 v176; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v177[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v178; // [rsp+54h] [rbp-ACh] BYREF
  DMMVIDPNTOPOLOGY *v179; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v180; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTERALLOCATION *v181; // [rsp+68h] [rbp-98h]
  struct DMMVIDPN *v182; // [rsp+70h] [rbp-90h] BYREF
  void *v183; // [rsp+78h] [rbp-88h]
  _BYTE v184[56]; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPN *v185; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v186; // [rsp+C0h] [rbp-40h] BYREF
  char v187; // [rsp+C4h] [rbp-3Ch]
  int v188; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v189; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v190; // [rsp+D8h] [rbp-28h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v191; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v192[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v193[480]; // [rsp+130h] [rbp+30h] BYREF

  v7 = a3;
  v180 = a2;
  v10 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v10 + 24) = (unsigned int)v7;
  *(_QWORD *)(v10 + 32) = this;
  WdLogEvent5_WdDmmEvent(v10);
  if ( !a2 )
  {
    v110 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v110);
  }
  if ( !a5 )
  {
    v111 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v111);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v13);
  }
  v182 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(this);
  v16 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v112 = WdLogNewEntry5_WdDmmEvent(v15);
    *(_QWORD *)(v112 + 24) = v16;
    WdLogEvent5_WdDmmEvent(v112);
    goto LABEL_76;
  }
  v17 = v182;
  v179 = (struct DMMVIDPN *)((char *)v182 + 96);
  memset(v193, 0, sizeof(v193));
  v18 = *((_QWORD *)this + 10);
  v16 = 0LL;
  v185 = 0LL;
  if ( v18 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v18 + 32), 1u);
    v19 = *((_QWORD *)this + 10);
    v17 = v182;
  }
  else
  {
    v19 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v185, v19);
  v21 = v185;
  if ( v185 )
  {
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPN *)((char *)v185 + 96), v7, &v189);
    if ( NumPathsFromSource < 0 )
    {
      if ( NumPathsFromSource != -1071774919 )
      {
        v114 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v114);
      }
      v115 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v115 + 24) = v7;
      *(_QWORD *)(v115 + 32) = this;
    }
    else
    {
      if ( !v189 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v116);
      }
      memset(v184, 0, sizeof(v184));
      if ( !*((_QWORD *)this + 1) )
      {
        v117 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v117);
      }
      v28 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v28 + 16) + 2136LL) && !a4 )
      {
        if ( !v28 )
        {
          v118 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v118);
        }
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)this + 1), v7);
        v181 = DisplayedPrimaryAllocation;
        if ( !*((_QWORD *)this + 1) )
        {
          v119 = WdLogNewEntry5_WdAssertion(v38);
          WdLogEvent5_WdAssertion(v119);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)this + 1), v7);
        v40 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)v184 = *(_OWORD *)DisplayModeInfo;
        v41 = *((_OWORD *)DisplayModeInfo + 2);
        *(_OWORD *)&v184[16] = v40;
        *(_QWORD *)&v40 = *((_QWORD *)DisplayModeInfo + 6);
        *(_OWORD *)&v184[32] = v41;
        *(_QWORD *)&v184[48] = v40;
      }
      else
      {
        if ( !v28 )
        {
          v120 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v120);
        }
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)this + 1), v7, 0);
        v181 = DisplayedPrimaryAllocation;
        if ( !*((_QWORD *)this + 1) )
        {
          v121 = WdLogNewEntry5_WdAssertion(v29);
          WdLogEvent5_WdAssertion(v121);
        }
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)this + 1), v7);
        v36 = *(_OWORD *)&CddDisplayMode->RefreshRate.Numerator;
        *(_OWORD *)v184 = *(_OWORD *)&CddDisplayMode->Width;
        v37 = *(_QWORD *)&CddDisplayMode->DisplayFixedOutput;
        LODWORD(CddDisplayMode) = *((_DWORD *)&CddDisplayMode->Flags + 1);
        *(_QWORD *)&v184[32] = v37;
        *(_DWORD *)&v184[40] = (_DWORD)CddDisplayMode;
        *(_OWORD *)&v184[16] = v36;
      }
      if ( *(_DWORD *)v184 && *(_DWORD *)&v184[4] )
      {
        if ( !DisplayedPrimaryAllocation || (v16 = *((_QWORD *)DisplayedPrimaryAllocation + 2)) == 0 )
        {
          if ( *((_QWORD *)this + 1) == v16 )
          {
            v122 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v122);
          }
          v81 = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)this + 1), v7);
          v83 = *(_OWORD *)&v81->RefreshRate.Numerator;
          v84 = _mm_cvtsi128_si32(*(__m128i *)&v81->Width);
          *(_OWORD *)v184 = *(_OWORD *)&v81->Width;
          v85 = *(_QWORD *)&v81->DisplayFixedOutput;
          LODWORD(v81) = *((_DWORD *)&v81->Flags + 1);
          *(_QWORD *)&v184[32] = v85;
          *(_DWORD *)&v184[40] = (_DWORD)v81;
          *(_OWORD *)&v184[16] = v83;
          if ( !v84 || !*(_DWORD *)&v184[4] )
          {
            v123 = WdLogNewEntry5_WdAssertion(v82);
            WdLogEvent5_WdAssertion(v123);
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v124 = WdLogNewEntry5_WdAssertion(v82);
            WdLogEvent5_WdAssertion(v124);
          }
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *((ADAPTER_DISPLAY **)this + 1),
                             v180,
                             v7,
                             v84,
                             *(unsigned int *)&v184[4],
                             *(enum _D3DDDIFORMAT *)&v184[8],
                             (const struct _D3DDDI_RATIONAL *)&v184[16],
                             *(enum _D3DDDI_ROTATION *)&v184[28],
                             a5);
          v16 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v126 = (_QWORD *)WdLogNewEntry5_WdError(v87);
            v126[3] = v7;
            if ( !*((_QWORD *)this + 1) )
            {
              v127 = WdLogNewEntry5_WdAssertion(v125);
              WdLogEvent5_WdAssertion(v127);
            }
            v128 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v126[5] = v16;
            goto LABEL_148;
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v129 = WdLogNewEntry5_WdAssertion(v87);
            WdLogEvent5_WdAssertion(v129);
          }
          v181 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)this + 1), v7);
          if ( !v181 )
          {
            v130 = WdLogNewEntry5_WdAssertion(v88);
            WdLogEvent5_WdAssertion(v130);
          }
          v33 = v180;
          v16 = *((_QWORD *)v181 + 2);
          *(_DWORD *)&v184[44] = 1;
          v89 = (ADAPTER_RENDER *)*((_QWORD *)v180 + 2);
          *(_QWORD *)&v184[48] = 1LL;
          if ( *((_QWORD *)v180 + 357) == *((_QWORD *)v89 + 2) )
          {
            memset(&v191.Width, 0, 0x28uLL);
            v191.hAllocation = (HANDLE)v16;
            v90 = ADAPTER_RENDER::DdiDescribeAllocation(v89, &v191);
            v94 = v90;
            if ( v90 < 0 )
            {
              v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v91, v92, v93);
              v131[3] = v181;
              v131[4] = v180;
              v131[5] = v94;
              WdLogEvent5_WdWarning(v131);
            }
            else
            {
              *(D3DDDI_MULTISAMPLINGMETHOD *)&v184[44] = v191.MultisampleMethod;
              *(_DWORD *)&v184[52] = v191.PrivateDriverFormatAttribute;
            }
          }
        }
        if ( !*((_QWORD *)this + 1) )
        {
          v132 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v132);
        }
        v42 = *((_QWORD *)this + 1);
        v43 = -*(_QWORD *)(*(_QWORD *)(v42 + 16) + 2136LL);
        v183 = (void *)(v16 & -(__int64)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 2136LL) != 0LL));
        if ( !v42 )
        {
          v133 = WdLogNewEntry5_WdAssertion(v43);
          WdLogEvent5_WdAssertion(v133);
        }
        if ( ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*((DXGADAPTER ***)this + 1), v7) )
          goto LABEL_104;
        if ( !*((_QWORD *)this + 1) )
        {
          v134 = WdLogNewEntry5_WdAssertion(v44);
          WdLogEvent5_WdAssertion(v134);
        }
        v46 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)this + 1), v7);
        if ( !IsDisplayModeEqual((const struct _D3DKMT_DISPLAYMODE *)v184, v46) )
        {
LABEL_104:
          if ( v179 )
            v95 = (char *)v179 + 56;
          else
            v95 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v192,
            (__int64)v95,
            2u,
            v45,
            v176,
            *((_QWORD *)v179 + 5));
          DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v179, v7);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v192,
            v96,
            v97,
            v98);
        }
        v47 = 0;
        v177[0] = 0;
        for ( i = 0LL; ; ++i )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v21 + 96), v7, i, &v178) < 0 )
          {
            v135 = WdLogNewEntry5_WdAssertion(v50);
            WdLogEvent5_WdAssertion(v135);
          }
          v53 = v178;
          if ( v178 == -1 )
            break;
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v179, v178, v51, v52);
          if ( PathSourceFromTarget != (_DWORD)v7 )
          {
            if ( PathSourceFromTarget != -1 )
            {
              v136 = WdLogNewEntry5_WdAssertion(v55);
              WdLogEvent5_WdAssertion(v136);
            }
            if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                        v21,
                        v53,
                        (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v193) < 0 )
            {
              v137 = WdLogNewEntry5_WdAssertion(v99);
              WdLogEvent5_WdAssertion(v137);
            }
            v100 = v179;
            v101 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                     this,
                     v179,
                     (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v193,
                     D3DKMDT_MCC_ENFORCE);
            v16 = v101;
            if ( v101 < 0 )
            {
              v138 = (_QWORD *)WdLogNewEntry5_WdError(v102);
              v138[3] = *(unsigned int *)v193;
              v138[4] = *(unsigned int *)&v193[4];
              v138[5] = v100;
LABEL_134:
              v138[6] = v16;
              v139 = v138;
              goto LABEL_149;
            }
            v47 = 1;
          }
        }
        LODWORD(v16) = 0;
        if ( v47 )
        {
          v74 = *(_DWORD *)&v184[4];
          for ( j = 0LL; ; ++j )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v21 + 96), v7, j, &v178) < 0 )
            {
              v140 = WdLogNewEntry5_WdAssertion(v76);
              WdLogEvent5_WdAssertion(v140);
            }
            if ( v178 == -1 )
              break;
            if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                        v21,
                        v178,
                        (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v193) < 0 )
            {
              v141 = WdLogNewEntry5_WdAssertion(v77);
              WdLogEvent5_WdAssertion(v141);
            }
            v78 = *(_DWORD *)&v193[364];
            if ( (v184[40] & 0x10) == 0 )
              v78 = 1;
            *(_DWORD *)&v193[364] = v78;
            *(_DWORD *)&v193[388] = *(_DWORD *)&v184[8];
            if ( *(_DWORD *)&v193[368] != *(_DWORD *)v184 || *(_DWORD *)&v193[372] != v74 )
            {
              v142 = WdLogNewEntry5_WdAssertion(1LL);
              WdLogEvent5_WdAssertion(v142);
            }
            v79 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    this,
                    v179,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v193);
            v16 = v79;
            if ( v79 < 0 )
            {
              v138 = (_QWORD *)WdLogNewEntry5_WdError(v80);
              v138[3] = *(unsigned int *)v193;
              v138[4] = *(unsigned int *)&v193[4];
              v138[5] = v179;
              goto LABEL_134;
            }
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v143 = WdLogNewEntry5_WdAssertion(v76);
            WdLogEvent5_WdAssertion(v143);
          }
          v103 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v7, 0, 0x80u, v180, 0, 0);
          v105 = v103;
          if ( v103 < 0 )
          {
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v104);
            v57 = v7;
            v145[3] = v7;
            if ( !*((_QWORD *)this + 1) )
            {
              v146 = WdLogNewEntry5_WdAssertion(v144);
              WdLogEvent5_WdAssertion(v146);
            }
            v145[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v145[5] = v105;
            WdLogEvent5_WdError(v145);
          }
          else
          {
            v57 = v7;
          }
          v56 = v183;
          v187 &= 0xF0u;
          v186 = v186 & 0xFFFFFF00 | 0x25;
          v188 = -3;
          v106 = VIDPN_MGR::CommitVidPn(
                   (__int64)this,
                   v17,
                   v183,
                   v7,
                   D3DKMDT_MCC_ENFORCE,
                   (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v186,
                   0LL,
                   v177);
          v16 = v106;
          if ( v106 < 0 )
          {
            v147 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v107, v108);
            v147[3] = v17;
            v147[4] = v57;
            v147[5] = v16;
            WdLogEvent5_WdWarning(v147);
            goto LABEL_150;
          }
          if ( !v177[0] )
            goto LABEL_74;
        }
        else
        {
          v56 = v183;
          v57 = v7;
        }
        if ( !*((_QWORD *)this + 1) )
        {
          v149 = WdLogNewEntry5_WdAssertion(v50);
          WdLogEvent5_WdAssertion(v149);
        }
        v58 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(*(_QWORD *)(v58 + 16) + 2136LL) )
        {
          if ( !v58 )
          {
            v150 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v150);
          }
          v59 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          if ( !*(_QWORD *)(v59 + 2136) )
          {
            v109 = WdLogNewEntry5_WdAssertion(v59);
            WdLogEvent5_WdAssertion(v109);
          }
          CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
            &v190,
            v49);
          v61 = v190;
          if ( v190 )
          {
            v190->VidPnSourceId = v7;
            v61->hAllocation = v56;
            if ( !*((_QWORD *)this + 1) )
            {
              v154 = WdLogNewEntry5_WdAssertion(v60);
              WdLogEvent5_WdAssertion(v154);
            }
            v62 = *((_QWORD *)this + 1);
            v63 = *(_QWORD *)(*(_QWORD *)(v62 + 16) + 2136LL);
            v64 = *(_QWORD *)(v63 + 408);
            if ( !v62 )
            {
              v155 = WdLogNewEntry5_WdAssertion(v63);
              WdLogEvent5_WdAssertion(v155);
            }
            (*(void (__fastcall **)(__int64, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2136LL) + 400LL)
                                                                                         + 8LL)
                                                                             + 216LL))(
              v64,
              *((_QWORD *)v181 + 1),
              &v61->PrimarySegment,
              &v61->PrimaryAddress);
            v61->Flags.Value |= 1u;
            if ( !*((_QWORD *)this + 1) )
            {
              v156 = WdLogNewEntry5_WdAssertion(v65);
              WdLogEvent5_WdAssertion(v156);
            }
            v67 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*((DXGADAPTER ***)this + 1), v61, v66);
            v69 = v67;
            if ( v67 >= 0 )
            {
              operator delete(v61);
              goto LABEL_64;
            }
            v158 = (_QWORD *)WdLogNewEntry5_WdError(v68);
            v158[3] = v69;
            if ( !*((_QWORD *)this + 1) )
            {
              v153 = WdLogNewEntry5_WdAssertion(v157);
              WdLogEvent5_WdAssertion(v153);
            }
            v158[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v158[5] = v57;
            WdLogEvent5_WdError(v158);
            v152 = v61;
          }
          else
          {
            v151 = WdLogNewEntry5_WdLowResource(v60);
            *(_QWORD *)(v151 + 24) = this;
            WdLogEvent5_WdLowResource(v151);
            v152 = 0LL;
          }
          operator delete(v152);
          goto LABEL_150;
        }
LABEL_64:
        if ( !*((_QWORD *)this + 1) )
        {
          v159 = WdLogNewEntry5_WdAssertion(v58);
          WdLogEvent5_WdAssertion(v159);
        }
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v7, 1u, 0x80u, 0LL, 1u, 0);
        if ( (v16 & 0x80000000) == 0LL )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v170 = WdLogNewEntry5_WdAssertion(v70);
            WdLogEvent5_WdAssertion(v170);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((DXGADAPTER ***)this + 1), v7, 0);
          if ( !*((_QWORD *)this + 1) )
          {
            v171 = WdLogNewEntry5_WdAssertion(v71);
            WdLogEvent5_WdAssertion(v171);
          }
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *((DXGADAPTER ***)this + 1),
            v7,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v184);
          v72 = *(struct DXGADAPTER **)(*((_QWORD *)v180 + 2) + 16LL);
          if ( !*((_QWORD *)this + 1) )
          {
            v172 = WdLogNewEntry5_WdAssertion(v180);
            WdLogEvent5_WdAssertion(v172);
          }
          ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(*((ADAPTER_DISPLAY **)this + 1), v7, v72);
LABEL_74:
          LODWORD(v16) = 0;
          goto LABEL_75;
        }
        v126 = (_QWORD *)WdLogNewEntry5_WdError(v70);
        v126[3] = v57;
        if ( !*((_QWORD *)this + 1) )
        {
          v161 = WdLogNewEntry5_WdAssertion(v160);
          WdLogEvent5_WdAssertion(v161);
        }
        v128 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        v126[5] = (int)v16;
LABEL_148:
        v126[4] = v128;
        v139 = v126;
LABEL_149:
        WdLogEvent5_WdError(v139);
LABEL_150:
        if ( !*((_QWORD *)this + 1) )
        {
          v162 = WdLogNewEntry5_WdAssertion(v148);
          WdLogEvent5_WdAssertion(v162);
        }
        if ( (int)DmmResetModeState(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), (unsigned int)v7) < 0 )
        {
          v164 = WdLogNewEntry5_WdAssertion(v163);
          WdLogEvent5_WdAssertion(v164);
        }
        v166 = DpiGdiAsyncDisplaySwitchCallout(0LL, a6);
        if ( v166 < 0 )
        {
          v168 = WdLogNewEntry5_WdError(v165);
          if ( !*((_QWORD *)this + 1) )
          {
            v169 = WdLogNewEntry5_WdAssertion(v167);
            WdLogEvent5_WdAssertion(v169);
          }
          *(_QWORD *)(v168 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          WdLogEvent5_WdError(v168);
          LODWORD(v16) = v166;
        }
        goto LABEL_75;
      }
      v174 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      *(_QWORD *)(v174 + 24) = v7;
      if ( !*((_QWORD *)this + 1) )
      {
        v175 = WdLogNewEntry5_WdAssertion(v173);
        WdLogEvent5_WdAssertion(v175);
      }
      v115 = v174;
      *(_QWORD *)(v174 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    }
    WdLogEvent5_WdWarning(v115);
  }
  else
  {
    v113 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v113 + 24) = this;
    WdLogEvent5_WdError(v113);
    LODWORD(v16) = -1071774884;
  }
LABEL_75:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v185, 0LL);
LABEL_76:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v182, 0LL);
  return (unsigned int)v16;
}
