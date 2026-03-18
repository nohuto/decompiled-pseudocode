/*
 * XREFs of ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8
 * Callers:
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00B1740 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0007278 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0007570 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0007710 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0007878 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000C4C8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000CCFC (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00922B4 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C0099F6C (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B794 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009BB50 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     DmmResetModeState @ 0x1C00CC0D8 (DmmResetModeState.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C016B120 (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathFromVidPnSourceToActiveVidPn(
        VIDPN_MGR *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        char a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v6; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned __int64 v13; // r14
  struct DMMVIDPN *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DMMVIDPN *v18; // rbx
  int NumPathsFromSource; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // r12
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v29; // rdx
  struct DXGDEVICE *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int128 v33; // xmm1
  __int64 v34; // xmm0_8
  __int64 v35; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  const struct _D3DKMT_DISPLAYMODE *v43; // rax
  char v44; // r12
  unsigned __int64 i; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r14d
  unsigned int PathSourceFromTarget; // eax
  __int64 v50; // rcx
  void *v51; // r12
  __int64 v52; // r13
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r12
  __int64 v68; // rcx
  __int64 v69; // rcx
  struct DXGADAPTER *v70; // rbx
  __int64 v72; // rax
  const struct _D3DKMT_DISPLAYMODE *v73; // rax
  __int64 v74; // rcx
  __int128 v75; // xmm1
  unsigned int v76; // r14d
  __int64 v77; // xmm0_8
  int CddAllocations; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  ADAPTER_RENDER *v81; // r13
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r12
  int v88; // r13d
  unsigned __int64 j; // r12
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  char *v95; // rdx
  __int64 v96; // rcx
  DMMVIDPNTOPOLOGY *v97; // r12
  int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // r14
  int v103; // eax
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  _QWORD *v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  _QWORD *v142; // rbx
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rcx
  _QWORD *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rcx
  int v163; // edi
  __int64 v164; // rcx
  __int64 v165; // rbx
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rbx
  __int64 v172; // rax
  unsigned __int8 v173[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v174; // [rsp+54h] [rbp-ACh] BYREF
  DMMVIDPNTOPOLOGY *v175; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v176; // [rsp+60h] [rbp-A0h]
  void *v177; // [rsp+68h] [rbp-98h]
  struct DXGADAPTERALLOCATION *v178; // [rsp+70h] [rbp-90h]
  struct DMMVIDPN *v179; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v180[56]; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPN *v181; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v182; // [rsp+C0h] [rbp-40h] BYREF
  char v183; // [rsp+C4h] [rbp-3Ch]
  int v184; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v185; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v186; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v187; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v188[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v189[480]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a3;
  v176 = a2;
  v9 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v9 + 24) = (unsigned int)v6;
  *(_QWORD *)(v9 + 32) = this;
  WdLogEvent5_WdDmmEvent(v9);
  if ( !a2 )
  {
    v107 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v107);
  }
  if ( !a5 )
  {
    v108 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v108);
  }
  CurrentThread = KeGetCurrentThread();
  if ( **((struct _KTHREAD ***)this + 5) != CurrentThread )
  {
    v72 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v72);
  }
  v179 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             this,
                                             (__int64 *)&v179);
  v13 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v109 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v109 + 24) = v13;
    WdLogEvent5_WdDmmEvent(v109);
    goto LABEL_76;
  }
  v14 = v179;
  v13 = 0LL;
  memset(v189, 0, sizeof(v189));
  v175 = (struct DMMVIDPN *)((char *)v179 + 96);
  v15 = *((_QWORD *)this + 10);
  v181 = 0LL;
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 32), 1u);
    v16 = *((_QWORD *)this + 10);
    v14 = v179;
  }
  else
  {
    v16 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v181, v16);
  v18 = v181;
  if ( v181 )
  {
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPN *)((char *)v181 + 96), v6, &v186);
    if ( NumPathsFromSource < 0 )
    {
      if ( NumPathsFromSource != -1071774919 )
      {
        v111 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v111);
      }
      v112 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      *(_QWORD *)(v112 + 24) = v6;
      *(_QWORD *)(v112 + 32) = this;
    }
    else
    {
      if ( !v186 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v113);
      }
      memset(v180, 0, sizeof(v180));
      if ( !*((_QWORD *)this + 1) )
      {
        v114 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v114);
      }
      v25 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v25 + 16) + 1992LL) && !a4 )
      {
        if ( !v25 )
        {
          v115 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v115);
        }
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)this + 1), v6);
        v178 = DisplayedPrimaryAllocation;
        if ( !*((_QWORD *)this + 1) )
        {
          v116 = WdLogNewEntry5_WdAssertion(v35);
          WdLogEvent5_WdAssertion(v116);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)this + 1), v6);
        v37 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)v180 = *(_OWORD *)DisplayModeInfo;
        v38 = *((_OWORD *)DisplayModeInfo + 2);
        *(_OWORD *)&v180[16] = v37;
        *(_QWORD *)&v37 = *((_QWORD *)DisplayModeInfo + 6);
        *(_OWORD *)&v180[32] = v38;
        *(_QWORD *)&v180[48] = v37;
      }
      else
      {
        if ( !v25 )
        {
          v117 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v117);
        }
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)this + 1), v6);
        v178 = DisplayedPrimaryAllocation;
        if ( !*((_QWORD *)this + 1) )
        {
          v118 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v118);
        }
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)this + 1), v6);
        v33 = *(_OWORD *)&CddDisplayMode->RefreshRate.Numerator;
        *(_OWORD *)v180 = *(_OWORD *)&CddDisplayMode->Width;
        v34 = *(_QWORD *)&CddDisplayMode->DisplayFixedOutput;
        LODWORD(CddDisplayMode) = *((_DWORD *)&CddDisplayMode->Flags + 1);
        *(_QWORD *)&v180[32] = v34;
        *(_DWORD *)&v180[40] = (_DWORD)CddDisplayMode;
        *(_OWORD *)&v180[16] = v33;
      }
      if ( *(_DWORD *)v180 && *(_DWORD *)&v180[4] )
      {
        if ( !DisplayedPrimaryAllocation || (v13 = *((_QWORD *)DisplayedPrimaryAllocation + 2)) == 0 )
        {
          if ( *((_QWORD *)this + 1) == v13 )
          {
            v119 = WdLogNewEntry5_WdAssertion(v30);
            WdLogEvent5_WdAssertion(v119);
          }
          v73 = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)this + 1), v6);
          v75 = *(_OWORD *)&v73->RefreshRate.Numerator;
          v76 = _mm_cvtsi128_si32(*(__m128i *)&v73->Width);
          *(_OWORD *)v180 = *(_OWORD *)&v73->Width;
          v77 = *(_QWORD *)&v73->DisplayFixedOutput;
          LODWORD(v73) = *((_DWORD *)&v73->Flags + 1);
          *(_QWORD *)&v180[32] = v77;
          *(_DWORD *)&v180[40] = (_DWORD)v73;
          *(_OWORD *)&v180[16] = v75;
          if ( !v76 || !*(_DWORD *)&v180[4] )
          {
            v120 = WdLogNewEntry5_WdAssertion(v74);
            WdLogEvent5_WdAssertion(v120);
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v121 = WdLogNewEntry5_WdAssertion(v74);
            WdLogEvent5_WdAssertion(v121);
          }
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *((ADAPTER_DISPLAY **)this + 1),
                             v176,
                             v6,
                             v76,
                             *(unsigned int *)&v180[4],
                             *(enum _D3DDDIFORMAT *)&v180[8],
                             (const struct _D3DDDI_RATIONAL *)&v180[16],
                             *(enum _D3DDDI_ROTATION *)&v180[28],
                             a5);
          v13 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v123 = (_QWORD *)WdLogNewEntry5_WdError(v79);
            v123[3] = v6;
            if ( !*((_QWORD *)this + 1) )
            {
              v124 = WdLogNewEntry5_WdAssertion(v122);
              WdLogEvent5_WdAssertion(v124);
            }
            v125 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v123[5] = v13;
            goto LABEL_148;
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v126 = WdLogNewEntry5_WdAssertion(v79);
            WdLogEvent5_WdAssertion(v126);
          }
          v178 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)this + 1), v6);
          if ( !v178 )
          {
            v127 = WdLogNewEntry5_WdAssertion(v80);
            WdLogEvent5_WdAssertion(v127);
          }
          v30 = v176;
          v13 = *((_QWORD *)v178 + 2);
          *(_DWORD *)&v180[44] = 1;
          v81 = (ADAPTER_RENDER *)*((_QWORD *)v176 + 2);
          *(_QWORD *)&v180[48] = 1LL;
          if ( *((_QWORD *)v176 + 354) == *((_QWORD *)v81 + 2) )
          {
            memset(&v187.Width, 0, 0x28uLL);
            v187.hAllocation = (HANDLE)v13;
            v83 = ADAPTER_RENDER::DdiDescribeAllocation(v81, &v187, v82);
            v87 = v83;
            if ( v83 < 0 )
            {
              v128 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v84, v85, v86);
              v128[3] = v178;
              v128[4] = v176;
              v128[5] = v87;
              WdLogEvent5_WdWarning(v128);
            }
            else
            {
              *(D3DDDI_MULTISAMPLINGMETHOD *)&v180[44] = v187.MultisampleMethod;
              *(_DWORD *)&v180[52] = v187.PrivateDriverFormatAttribute;
            }
          }
        }
        if ( !*((_QWORD *)this + 1) )
        {
          v129 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v129);
        }
        v39 = *((_QWORD *)this + 1);
        v40 = -*(_QWORD *)(*(_QWORD *)(v39 + 16) + 1992LL);
        v177 = (void *)(v13 & -(__int64)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 1992LL) != 0LL));
        if ( !v39 )
        {
          v130 = WdLogNewEntry5_WdAssertion(v40);
          WdLogEvent5_WdAssertion(v130);
        }
        if ( ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*((DXGADAPTER ***)this + 1), v6) )
          goto LABEL_104;
        if ( !*((_QWORD *)this + 1) )
        {
          v131 = WdLogNewEntry5_WdAssertion(v41);
          WdLogEvent5_WdAssertion(v131);
        }
        v43 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)this + 1), v6);
        if ( !IsDisplayModeEqual((const struct _D3DKMT_DISPLAYMODE *)v180, v43) )
        {
LABEL_104:
          if ( v175 )
            v95 = (char *)v175 + 56;
          else
            v95 = 0LL;
          LOBYTE(v42) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v188, v95, v42);
          DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v175, v6);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v188);
        }
        v44 = 0;
        v173[0] = 0;
        for ( i = 0LL; ; ++i )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v18 + 96), v6, i, &v174) < 0 )
          {
            v132 = WdLogNewEntry5_WdAssertion(v47);
            WdLogEvent5_WdAssertion(v132);
          }
          v48 = v174;
          if ( v174 == -1 )
            break;
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v175, v174);
          if ( PathSourceFromTarget != (_DWORD)v6 )
          {
            if ( PathSourceFromTarget != -1 )
            {
              v133 = WdLogNewEntry5_WdAssertion(v50);
              WdLogEvent5_WdAssertion(v133);
            }
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v18,
                   v48,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v189) < 0 )
            {
              v134 = WdLogNewEntry5_WdAssertion(v96);
              WdLogEvent5_WdAssertion(v134);
            }
            v97 = v175;
            v98 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                    (struct _KTHREAD ***)this,
                    v175,
                    (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v189,
                    D3DKMDT_MCC_ENFORCE);
            v13 = v98;
            if ( v98 < 0 )
            {
              v135 = (_QWORD *)WdLogNewEntry5_WdError(v99);
              v135[3] = *(unsigned int *)v189;
              v135[4] = *(unsigned int *)&v189[4];
              v135[5] = v97;
LABEL_134:
              v135[6] = v13;
              v136 = v135;
              goto LABEL_149;
            }
            v44 = 1;
          }
        }
        LODWORD(v13) = 0;
        if ( v44 )
        {
          v88 = *(_DWORD *)&v180[4];
          for ( j = 0LL; ; ++j )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v18 + 96), v6, j, &v174) < 0 )
            {
              v137 = WdLogNewEntry5_WdAssertion(v90);
              WdLogEvent5_WdAssertion(v137);
            }
            if ( v174 == -1 )
              break;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v18,
                   v174,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v189) < 0 )
            {
              v138 = WdLogNewEntry5_WdAssertion(v91);
              WdLogEvent5_WdAssertion(v138);
            }
            v92 = *(unsigned int *)&v189[364];
            if ( (v180[40] & 0x10) == 0 )
              v92 = 1LL;
            *(_DWORD *)&v189[388] = *(_DWORD *)&v180[8];
            *(_DWORD *)&v189[364] = v92;
            if ( *(_DWORD *)&v189[368] != *(_DWORD *)v180 || *(_DWORD *)&v189[372] != v88 )
            {
              v139 = WdLogNewEntry5_WdAssertion(v92);
              WdLogEvent5_WdAssertion(v139);
            }
            v93 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    (struct _KTHREAD ***)this,
                    v175,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v189);
            v13 = v93;
            if ( v93 < 0 )
            {
              v135 = (_QWORD *)WdLogNewEntry5_WdError(v94);
              v135[3] = *(unsigned int *)v189;
              v135[4] = *(unsigned int *)&v189[4];
              v135[5] = v175;
              goto LABEL_134;
            }
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v140 = WdLogNewEntry5_WdAssertion(v90);
            WdLogEvent5_WdAssertion(v140);
          }
          v100 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v6, 0, 0x80u, v176, 0);
          v102 = v100;
          if ( v100 < 0 )
          {
            v142 = (_QWORD *)WdLogNewEntry5_WdError(v101);
            v52 = v6;
            v142[3] = v6;
            if ( !*((_QWORD *)this + 1) )
            {
              v143 = WdLogNewEntry5_WdAssertion(v141);
              WdLogEvent5_WdAssertion(v143);
            }
            v142[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v142[5] = v102;
            WdLogEvent5_WdError(v142);
          }
          else
          {
            v52 = v6;
          }
          v51 = v177;
          v183 &= 0xF8u;
          v182 = v182 & 0xFFFFFF00 | 0x25;
          v184 = -3;
          v103 = VIDPN_MGR::CommitVidPn(
                   (__int64)this,
                   v14,
                   v177,
                   v6,
                   D3DKMDT_MCC_ENFORCE,
                   (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v182,
                   0LL,
                   v173);
          v13 = v103;
          if ( v103 < 0 )
          {
            v144 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v104, v105);
            v144[3] = v14;
            v144[4] = v52;
            v144[5] = v13;
            WdLogEvent5_WdWarning(v144);
            goto LABEL_150;
          }
          if ( !v173[0] )
            goto LABEL_74;
        }
        else
        {
          v51 = v177;
          v52 = v6;
        }
        if ( !*((_QWORD *)this + 1) )
        {
          v146 = WdLogNewEntry5_WdAssertion(v47);
          WdLogEvent5_WdAssertion(v146);
        }
        v53 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(*(_QWORD *)(v53 + 16) + 1992LL) )
        {
          if ( !v53 )
          {
            v147 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v147);
          }
          v54 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          if ( !*(_QWORD *)(v54 + 1992) )
          {
            v106 = WdLogNewEntry5_WdAssertion(v54);
            WdLogEvent5_WdAssertion(v106);
          }
          CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
            &v185,
            v46);
          v59 = v185;
          if ( v185 )
          {
            v185->VidPnSourceId = v6;
            v59->hAllocation = v51;
            if ( !*((_QWORD *)this + 1) )
            {
              v151 = WdLogNewEntry5_WdAssertion(v56);
              WdLogEvent5_WdAssertion(v151);
            }
            v60 = *((_QWORD *)this + 1);
            v61 = *(_QWORD *)(*(_QWORD *)(v60 + 16) + 1992LL);
            v62 = *(_QWORD *)(v61 + 432);
            if ( !v60 )
            {
              v152 = WdLogNewEntry5_WdAssertion(v61);
              WdLogEvent5_WdAssertion(v152);
            }
            (*(void (__fastcall **)(__int64, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1992LL) + 424LL)
                                                                                         + 8LL)
                                                                             + 208LL))(
              v62,
              *((_QWORD *)v178 + 1),
              &v59->PrimarySegment,
              &v59->PrimaryAddress);
            v59->Flags.Value |= 1u;
            if ( !*((_QWORD *)this + 1) )
            {
              v153 = WdLogNewEntry5_WdAssertion(v63);
              WdLogEvent5_WdAssertion(v153);
            }
            v65 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*((ADAPTER_DISPLAY **)this + 1), v59, v64);
            v67 = v65;
            if ( v65 >= 0 )
            {
              operator delete(v59);
              goto LABEL_64;
            }
            v155 = (_QWORD *)WdLogNewEntry5_WdError(v66);
            v155[3] = v67;
            if ( !*((_QWORD *)this + 1) )
            {
              v150 = WdLogNewEntry5_WdAssertion(v154);
              WdLogEvent5_WdAssertion(v150);
            }
            v155[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v155[5] = v52;
            WdLogEvent5_WdError(v155);
            v149 = v59;
          }
          else
          {
            v148 = WdLogNewEntry5_WdLowResource(v56, v55, v57, v58);
            *(_QWORD *)(v148 + 24) = this;
            WdLogEvent5_WdLowResource(v148);
            v149 = 0LL;
          }
          operator delete(v149);
          goto LABEL_150;
        }
LABEL_64:
        if ( !*((_QWORD *)this + 1) )
        {
          v156 = WdLogNewEntry5_WdAssertion(v53);
          WdLogEvent5_WdAssertion(v156);
        }
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)this + 1), v6, 1u, 0x80u, 0LL, 1u);
        if ( (v13 & 0x80000000) == 0LL )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v167 = WdLogNewEntry5_WdAssertion(v68);
            WdLogEvent5_WdAssertion(v167);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((PERESOURCE ***)this + 1), v6, 0);
          if ( !*((_QWORD *)this + 1) )
          {
            v168 = WdLogNewEntry5_WdAssertion(v69);
            WdLogEvent5_WdAssertion(v168);
          }
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *((PERESOURCE ***)this + 1),
            v6,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v180);
          v70 = *(struct DXGADAPTER **)(*((_QWORD *)v176 + 2) + 16LL);
          if ( !*((_QWORD *)this + 1) )
          {
            v169 = WdLogNewEntry5_WdAssertion(v176);
            WdLogEvent5_WdAssertion(v169);
          }
          ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(*((ADAPTER_DISPLAY **)this + 1), v6, v70);
LABEL_74:
          LODWORD(v13) = 0;
          goto LABEL_75;
        }
        v123 = (_QWORD *)WdLogNewEntry5_WdError(v68);
        v123[3] = v52;
        if ( !*((_QWORD *)this + 1) )
        {
          v158 = WdLogNewEntry5_WdAssertion(v157);
          WdLogEvent5_WdAssertion(v158);
        }
        v125 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        v123[5] = (int)v13;
LABEL_148:
        v123[4] = v125;
        v136 = v123;
LABEL_149:
        WdLogEvent5_WdError(v136);
LABEL_150:
        if ( !*((_QWORD *)this + 1) )
        {
          v159 = WdLogNewEntry5_WdAssertion(v145);
          WdLogEvent5_WdAssertion(v159);
        }
        if ( (int)DmmResetModeState(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), (unsigned int)v6) < 0 )
        {
          v161 = WdLogNewEntry5_WdAssertion(v160);
          WdLogEvent5_WdAssertion(v161);
        }
        v163 = DpiGdiAsyncDisplaySwitchCallout(0LL);
        if ( v163 < 0 )
        {
          v165 = WdLogNewEntry5_WdError(v162);
          if ( !*((_QWORD *)this + 1) )
          {
            v166 = WdLogNewEntry5_WdAssertion(v164);
            WdLogEvent5_WdAssertion(v166);
          }
          *(_QWORD *)(v165 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          WdLogEvent5_WdError(v165);
          LODWORD(v13) = v163;
        }
        goto LABEL_75;
      }
      v171 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v171 + 24) = v6;
      if ( !*((_QWORD *)this + 1) )
      {
        v172 = WdLogNewEntry5_WdAssertion(v170);
        WdLogEvent5_WdAssertion(v172);
      }
      v112 = v171;
      *(_QWORD *)(v171 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    }
    WdLogEvent5_WdWarning(v112);
  }
  else
  {
    v110 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v110 + 24) = this;
    WdLogEvent5_WdError(v110);
    LODWORD(v13) = -1071774884;
  }
LABEL_75:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v181, 0LL);
LABEL_76:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v179, 0LL);
  return (unsigned int)v13;
}
