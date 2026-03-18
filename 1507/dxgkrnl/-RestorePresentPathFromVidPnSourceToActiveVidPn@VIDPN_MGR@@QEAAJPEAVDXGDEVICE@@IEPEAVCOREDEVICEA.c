/*
 * XREFs of ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC
 * Callers:
 *     DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00BA110 (DmmRestorePresentPathFromVidPnSourceToActiveVidPn.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0006528 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00099FC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000AC54 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000ADEC (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C000B8B0 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000E1CC (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00B57D8 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6B20 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6BDC (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DmmResetModeState @ 0x1C00BD4A0 (DmmResetModeState.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBA5C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFA64 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0166B80 (DpiGdiAsyncDisplaySwitchCallout.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rcx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  struct DMMVIDPN *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DMMVIDPN *v22; // rbx
  int NumPathsFromSource; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r12
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v39; // rdx
  struct DXGDEVICE *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char *v51; // rdx
  char v52; // r12
  __int64 i; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // r14d
  int v59; // r13d
  __int64 j; // r12
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r14
  __int64 v68; // r13
  void *v69; // r12
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // r12
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  ADAPTER_RENDER **v99; // rbx
  int PathSourceFromTarget; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  DMMVIDPNTOPOLOGY *v110; // r12
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int128 v125; // xmm1
  __int64 v126; // xmm0_8
  __int64 v127; // rax
  const struct _D3DKMT_DISPLAYMODE *v128; // rax
  const struct _D3DKMT_DISPLAYMODE *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int128 v134; // xmm1
  unsigned int v135; // r14d
  __int64 v136; // xmm0_8
  int CddAllocations; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  ADAPTER_RENDER *v143; // r13
  __int64 v144; // r8
  int v145; // eax
  __int64 v146; // r12
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  _QWORD *v165; // rbx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  _QWORD *v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  _QWORD *v179; // rax
  _QWORD *v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  _QWORD *v187; // rbx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rax
  _QWORD *v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v199; // rcx
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  _QWORD *v206; // rdi
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rax
  __int64 v221; // rcx
  int v222; // edi
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rbx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // rbx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rax
  __int64 v238; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v239[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v240; // [rsp+54h] [rbp-ACh] BYREF
  DMMVIDPNTOPOLOGY *v241; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v242; // [rsp+60h] [rbp-A0h]
  void *v243; // [rsp+68h] [rbp-98h]
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // [rsp+70h] [rbp-90h]
  struct DMMVIDPN *v245; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v246[56]; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPN *v247; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v248; // [rsp+C0h] [rbp-40h] BYREF
  char v249; // [rsp+C4h] [rbp-3Ch]
  int v250; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v251; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v252; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v253; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v254[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v255[480]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a3;
  v242 = a2;
  v9 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v9 + 24) = (unsigned int)v6;
  *(_QWORD *)(v9 + 32) = this;
  WdLogEvent5_WdDmmEvent(v9);
  if ( !a2 )
  {
    v148 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v148);
  }
  if ( !a5 )
  {
    v149 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v149);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v127 = WdLogNewEntry5_WdAssertion(CurrentThread, v10, v12, v13);
    WdLogEvent5_WdAssertion(v127);
  }
  v245 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             this,
                                             (__int64 *)&v245,
                                             v12,
                                             v13);
  v17 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v150 = WdLogNewEntry5_WdDmmEvent(v16);
    *(_QWORD *)(v150 + 24) = v17;
    WdLogEvent5_WdDmmEvent(v150);
    goto LABEL_78;
  }
  v18 = v245;
  v17 = 0LL;
  memset(v255, 0, sizeof(v255));
  v241 = (struct DMMVIDPN *)((char *)v245 + 96);
  v19 = *((_QWORD *)this + 10);
  v247 = 0LL;
  if ( v19 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v19 + 32), 1u);
    v20 = *((_QWORD *)this + 10);
    v18 = v245;
  }
  else
  {
    v20 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v247, v20);
  v22 = v247;
  if ( v247 )
  {
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPN *)((char *)v247 + 96), v6, &v252);
    if ( NumPathsFromSource < 0 )
    {
      if ( NumPathsFromSource != -1071774919 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v152);
      }
      v153 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v153 + 24) = v6;
      *(_QWORD *)(v153 + 32) = this;
    }
    else
    {
      if ( !v252 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v154);
      }
      memset(v246, 0, sizeof(v246));
      if ( !*((_QWORD *)this + 1) )
      {
        v155 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
        WdLogEvent5_WdAssertion(v155);
      }
      v32 = *((_QWORD *)this + 1);
      if ( !*(_QWORD *)(*(_QWORD *)(v32 + 16) + 1984LL) || a4 )
      {
        if ( !v32 )
        {
          v158 = WdLogNewEntry5_WdAssertion(0LL, v28, v30, v31);
          WdLogEvent5_WdAssertion(v158);
        }
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(
                                 *((DXGADAPTER ***)this + 1),
                                 (unsigned int)v6,
                                 v30,
                                 v31);
        DisplayedPrimaryAllocation = CddPrimaryAllocation;
        if ( !*((_QWORD *)this + 1) )
        {
          v159 = WdLogNewEntry5_WdAssertion(v121, v120, v122, v123);
          WdLogEvent5_WdAssertion(v159);
        }
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)this + 1), v6);
        v125 = *(_OWORD *)&CddDisplayMode->RefreshRate.Numerator;
        *(_OWORD *)v246 = *(_OWORD *)&CddDisplayMode->Width;
        v126 = *(_QWORD *)&CddDisplayMode->DisplayFixedOutput;
        LODWORD(CddDisplayMode) = *((_DWORD *)&CddDisplayMode->Flags + 1);
        *(_QWORD *)&v246[32] = v126;
        *(_DWORD *)&v246[40] = (_DWORD)CddDisplayMode;
        *(_OWORD *)&v246[16] = v125;
      }
      else
      {
        if ( !v32 )
        {
          v156 = WdLogNewEntry5_WdAssertion(0LL, v28, v30, v31);
          WdLogEvent5_WdAssertion(v156);
        }
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), v6);
        DisplayedPrimaryAllocation = CddPrimaryAllocation;
        if ( !*((_QWORD *)this + 1) )
        {
          v157 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          WdLogEvent5_WdAssertion(v157);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)this + 1), v6);
        v43 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)v246 = *(_OWORD *)DisplayModeInfo;
        v44 = *((_OWORD *)DisplayModeInfo + 2);
        *(_OWORD *)&v246[16] = v43;
        *(_QWORD *)&v43 = *((_QWORD *)DisplayModeInfo + 6);
        *(_OWORD *)&v246[32] = v44;
        *(_QWORD *)&v246[48] = v43;
      }
      if ( *(_DWORD *)v246 && *(_DWORD *)&v246[4] )
      {
        if ( !CddPrimaryAllocation || (v17 = *((_QWORD *)CddPrimaryAllocation + 2)) == 0 )
        {
          if ( *((_QWORD *)this + 1) == v17 )
          {
            v160 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
            WdLogEvent5_WdAssertion(v160);
          }
          v129 = ADAPTER_DISPLAY::GetCddDisplayMode(*((DXGADAPTER ***)this + 1), v6);
          v134 = *(_OWORD *)&v129->RefreshRate.Numerator;
          v135 = _mm_cvtsi128_si32(*(__m128i *)&v129->Width);
          *(_OWORD *)v246 = *(_OWORD *)&v129->Width;
          v136 = *(_QWORD *)&v129->DisplayFixedOutput;
          LODWORD(v129) = *((_DWORD *)&v129->Flags + 1);
          *(_QWORD *)&v246[32] = v136;
          *(_DWORD *)&v246[40] = (_DWORD)v129;
          *(_OWORD *)&v246[16] = v134;
          if ( !v135 || !*(_DWORD *)&v246[4] )
          {
            v161 = WdLogNewEntry5_WdAssertion(v131, v130, v132, v133);
            WdLogEvent5_WdAssertion(v161);
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v162 = WdLogNewEntry5_WdAssertion(v131, v130, v132, v133);
            WdLogEvent5_WdAssertion(v162);
          }
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *((ADAPTER_DISPLAY **)this + 1),
                             v242,
                             v6,
                             v135,
                             *(unsigned int *)&v246[4],
                             *(_D3DDDIFORMAT *)&v246[8],
                             (const struct _D3DDDI_RATIONAL *)&v246[16],
                             *(enum _D3DDDI_ROTATION *)&v246[28],
                             a5);
          v17 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v165 = (_QWORD *)WdLogNewEntry5_WdError(v139);
            v165[3] = v6;
            if ( !*((_QWORD *)this + 1) )
            {
              v168 = WdLogNewEntry5_WdAssertion(v164, v163, v166, v167);
              WdLogEvent5_WdAssertion(v168);
            }
            v169 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v165[5] = v17;
            goto LABEL_148;
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v170 = WdLogNewEntry5_WdAssertion(v139, v138, v140, v141);
            WdLogEvent5_WdAssertion(v170);
          }
          DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((DXGADAPTER ***)this + 1), v6);
          if ( !DisplayedPrimaryAllocation )
          {
            v171 = WdLogNewEntry5_WdAssertion(v142, v39, v41, v42);
            WdLogEvent5_WdAssertion(v171);
          }
          v40 = v242;
          v17 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
          *(_DWORD *)&v246[44] = 1;
          v143 = (ADAPTER_RENDER *)*((_QWORD *)v242 + 2);
          *(_QWORD *)&v246[48] = 1LL;
          if ( *((_QWORD *)v242 + 2338) == *((_QWORD *)v143 + 2) )
          {
            memset(&v253.Width, 0, 0x28uLL);
            v253.hAllocation = (HANDLE)v17;
            v145 = ADAPTER_RENDER::DdiDescribeAllocation(v143, &v253, v144);
            v146 = v145;
            if ( v145 < 0 )
            {
              v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
              v172[3] = DisplayedPrimaryAllocation;
              v172[4] = v242;
              v172[5] = v146;
              WdLogEvent5_WdWarning(v172);
            }
            else
            {
              *(D3DDDI_MULTISAMPLINGMETHOD *)&v246[44] = v253.MultisampleMethod;
              *(_DWORD *)&v246[52] = v253.PrivateDriverFormatAttribute;
            }
          }
        }
        if ( !*((_QWORD *)this + 1) )
        {
          v173 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
          WdLogEvent5_WdAssertion(v173);
        }
        v45 = *((_QWORD *)this + 1);
        v46 = -*(_QWORD *)(*(_QWORD *)(v45 + 16) + 1984LL);
        v243 = (void *)(v17 & -(__int64)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 1984LL) != 0LL));
        if ( !v45 )
        {
          v174 = WdLogNewEntry5_WdAssertion(v46, 0LL, v41, v42);
          WdLogEvent5_WdAssertion(v174);
        }
        if ( ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*((DXGADAPTER ***)this + 1), v6) )
          goto LABEL_32;
        if ( !*((_QWORD *)this + 1) )
        {
          v175 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
          WdLogEvent5_WdAssertion(v175);
        }
        v128 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)this + 1), v6);
        if ( !IsDisplayModeEqual((const struct _D3DKMT_DISPLAYMODE *)v246, v128) )
        {
LABEL_32:
          if ( v241 )
            v51 = (char *)v241 + 56;
          else
            v51 = 0LL;
          LOBYTE(v49) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v254,
            (__int64)v51,
            v49,
            v50,
            v238,
            *((_QWORD *)v241 + 5));
          DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v241, v6);
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v254);
        }
        v52 = 0;
        v239[0] = 0;
        for ( i = 0LL; ; ++i )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                      (DMMVIDPN *)((char *)v22 + 96),
                      (unsigned int)v6,
                      i,
                      &v240) < 0 )
          {
            v176 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
            WdLogEvent5_WdAssertion(v176);
          }
          v58 = v240;
          if ( v240 == -1 )
            break;
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v241, v240, v56, v57);
          if ( PathSourceFromTarget != (_DWORD)v6 )
          {
            if ( PathSourceFromTarget != -1 )
            {
              v177 = WdLogNewEntry5_WdAssertion(v103, v102, v104, v105);
              WdLogEvent5_WdAssertion(v177);
            }
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v22,
                   v58,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v255) < 0 )
            {
              v178 = WdLogNewEntry5_WdAssertion(v107, v106, v108, v109);
              WdLogEvent5_WdAssertion(v178);
            }
            v110 = v241;
            v111 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                     this,
                     v241,
                     (struct _D3DKMDT_VIDPN_PRESENT_PATH *)v255,
                     D3DKMDT_MCC_ENFORCE);
            v17 = v111;
            if ( v111 < 0 )
            {
              v179 = (_QWORD *)WdLogNewEntry5_WdError(v112);
              v179[3] = *(unsigned int *)v255;
              v179[4] = *(unsigned int *)&v255[4];
              v179[5] = v110;
LABEL_134:
              v179[6] = v17;
              v180 = v179;
              goto LABEL_149;
            }
            v52 = 1;
          }
        }
        LODWORD(v17) = 0;
        if ( v52 )
        {
          v59 = *(_DWORD *)&v246[4];
          for ( j = 0LL; ; ++j )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                        (DMMVIDPN *)((char *)v22 + 96),
                        (unsigned int)v6,
                        j,
                        &v240) < 0 )
            {
              v181 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
              WdLogEvent5_WdAssertion(v181);
            }
            if ( v240 == -1 )
              break;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v22,
                   v240,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v255) < 0 )
            {
              v182 = WdLogNewEntry5_WdAssertion(v114, v113, v115, v116);
              WdLogEvent5_WdAssertion(v182);
            }
            v117 = *(unsigned int *)&v255[364];
            if ( (v246[40] & 0x10) == 0 )
              v117 = 1LL;
            *(_DWORD *)&v255[388] = *(_DWORD *)&v246[8];
            *(_DWORD *)&v255[364] = v117;
            if ( *(_DWORD *)&v255[368] != *(_DWORD *)v246 || *(_DWORD *)&v255[372] != v59 )
            {
              v183 = WdLogNewEntry5_WdAssertion(v117, v113, v115, v116);
              WdLogEvent5_WdAssertion(v183);
            }
            v118 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                     this,
                     v241,
                     (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v255);
            v17 = v118;
            if ( v118 < 0 )
            {
              v179 = (_QWORD *)WdLogNewEntry5_WdError(v119);
              v179[3] = *(unsigned int *)v255;
              v179[4] = *(unsigned int *)&v255[4];
              v179[5] = v241;
              goto LABEL_134;
            }
          }
          if ( !*((_QWORD *)this + 1) )
          {
            v184 = WdLogNewEntry5_WdAssertion(v62, v240, v63, v64);
            WdLogEvent5_WdAssertion(v184);
          }
          v65 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                  *((ADAPTER_DISPLAY **)this + 1),
                  (unsigned int)v6,
                  0LL,
                  128LL,
                  v242,
                  0);
          v67 = v65;
          if ( v65 < 0 )
          {
            v187 = (_QWORD *)WdLogNewEntry5_WdError(v66);
            v68 = v6;
            v187[3] = v6;
            if ( !*((_QWORD *)this + 1) )
            {
              v190 = WdLogNewEntry5_WdAssertion(v186, v185, v188, v189);
              WdLogEvent5_WdAssertion(v190);
            }
            v187[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v187[5] = v67;
            WdLogEvent5_WdError(v187);
          }
          else
          {
            v68 = v6;
          }
          v69 = v243;
          v249 &= 0xF8u;
          v248 = v248 & 0xFFFFFF00 | 0x25;
          v250 = -3;
          v70 = VIDPN_MGR::CommitVidPn(
                  this,
                  v18,
                  v243,
                  v6,
                  D3DKMDT_MCC_ENFORCE,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v248,
                  0LL,
                  v239);
          v17 = v70;
          if ( v70 < 0 )
          {
            v191 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
            v191[3] = v18;
            v191[4] = v68;
            v191[5] = v17;
            WdLogEvent5_WdWarning(v191);
            goto LABEL_150;
          }
          if ( !v239[0] )
            goto LABEL_76;
        }
        else
        {
          v69 = v243;
          v68 = v6;
        }
        if ( !*((_QWORD *)this + 1) )
        {
          v196 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
          WdLogEvent5_WdAssertion(v196);
        }
        v71 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(*(_QWORD *)(v71 + 16) + 1984LL) )
        {
          if ( !v71 )
          {
            v197 = WdLogNewEntry5_WdAssertion(0LL, v54, v56, v57);
            WdLogEvent5_WdAssertion(v197);
          }
          v72 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          if ( !*(_QWORD *)(v72 + 1984) )
          {
            v147 = WdLogNewEntry5_WdAssertion(v72, v54, v56, v57);
            WdLogEvent5_WdAssertion(v147);
          }
          CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
            &v251,
            v54);
          v77 = v251;
          if ( v251 )
          {
            v251->VidPnSourceId = v6;
            v77->hAllocation = v69;
            if ( !*((_QWORD *)this + 1) )
            {
              v201 = WdLogNewEntry5_WdAssertion(v74, v73, v75, v76);
              WdLogEvent5_WdAssertion(v201);
            }
            v78 = *((_QWORD *)this + 1);
            v79 = *(_QWORD *)(*(_QWORD *)(v78 + 16) + 1984LL);
            v80 = *(_QWORD *)(v79 + 408);
            if ( !v78 )
            {
              v202 = WdLogNewEntry5_WdAssertion(v79, 0LL, v75, v76);
              WdLogEvent5_WdAssertion(v202);
            }
            (*(void (__fastcall **)(__int64, _QWORD, UINT *, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1984LL) + 400LL)
                                                                                         + 8LL)
                                                                             + 208LL))(
              v80,
              *((_QWORD *)DisplayedPrimaryAllocation + 1),
              &v77->PrimarySegment,
              &v77->PrimaryAddress);
            v77->Flags.Value |= 1u;
            if ( !*((_QWORD *)this + 1) )
            {
              v203 = WdLogNewEntry5_WdAssertion(v82, v81, v83, v84);
              WdLogEvent5_WdAssertion(v203);
            }
            v85 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*((ADAPTER_DISPLAY **)this + 1), v77, v83);
            v87 = v85;
            if ( v85 >= 0 )
            {
              operator delete(v77);
              goto LABEL_66;
            }
            v206 = (_QWORD *)WdLogNewEntry5_WdError(v86);
            v206[3] = v87;
            if ( !*((_QWORD *)this + 1) )
            {
              v200 = WdLogNewEntry5_WdAssertion(v205, v204, v207, v208);
              WdLogEvent5_WdAssertion(v200);
            }
            v206[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            v206[5] = v68;
            WdLogEvent5_WdError(v206);
            v199 = v77;
          }
          else
          {
            v198 = WdLogNewEntry5_WdLowResource(v74);
            *(_QWORD *)(v198 + 24) = this;
            WdLogEvent5_WdLowResource(v198);
            v199 = 0LL;
          }
          operator delete(v199);
          goto LABEL_150;
        }
LABEL_66:
        if ( !*((_QWORD *)this + 1) )
        {
          v209 = WdLogNewEntry5_WdAssertion(v71, v54, v56, v57);
          WdLogEvent5_WdAssertion(v209);
        }
        LOBYTE(v56) = 1;
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(
          *((ADAPTER_DISPLAY **)this + 1),
          (unsigned int)v6,
          v56,
          128LL,
          0LL,
          1u);
        if ( (v17 & 0x80000000) == 0LL )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v229 = WdLogNewEntry5_WdAssertion(v89, v88, v90, v91);
            WdLogEvent5_WdAssertion(v229);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((PERESOURCE ***)this + 1), v6, 0);
          if ( !*((_QWORD *)this + 1) )
          {
            v230 = WdLogNewEntry5_WdAssertion(v93, v92, v94, v95);
            WdLogEvent5_WdAssertion(v230);
          }
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *((PERESOURCE ***)this + 1),
            v6,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v246);
          v99 = *(ADAPTER_RENDER ***)(*((_QWORD *)v242 + 2) + 16LL);
          if ( !*((_QWORD *)this + 1) )
          {
            v231 = WdLogNewEntry5_WdAssertion(v242, v96, v97, v98);
            WdLogEvent5_WdAssertion(v231);
          }
          ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
            *((ADAPTER_DISPLAY **)this + 1),
            (unsigned int)v6,
            v99,
            v98);
LABEL_76:
          LODWORD(v17) = 0;
          goto LABEL_77;
        }
        v165 = (_QWORD *)WdLogNewEntry5_WdError(v89);
        v165[3] = v68;
        if ( !*((_QWORD *)this + 1) )
        {
          v214 = WdLogNewEntry5_WdAssertion(v211, v210, v212, v213);
          WdLogEvent5_WdAssertion(v214);
        }
        v169 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        v165[5] = (int)v17;
LABEL_148:
        v165[4] = v169;
        v180 = v165;
LABEL_149:
        WdLogEvent5_WdError(v180);
LABEL_150:
        if ( !*((_QWORD *)this + 1) )
        {
          v215 = WdLogNewEntry5_WdAssertion(v193, v192, v194, v195);
          WdLogEvent5_WdAssertion(v215);
        }
        if ( (int)DmmResetModeState(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), (unsigned int)v6) < 0 )
        {
          v220 = WdLogNewEntry5_WdAssertion(v217, v216, v218, v219);
          WdLogEvent5_WdAssertion(v220);
        }
        v222 = DpiGdiAsyncDisplaySwitchCallout(0LL);
        if ( v222 < 0 )
        {
          v225 = WdLogNewEntry5_WdError(v221);
          if ( !*((_QWORD *)this + 1) )
          {
            v228 = WdLogNewEntry5_WdAssertion(v224, v223, v226, v227);
            WdLogEvent5_WdAssertion(v228);
          }
          *(_QWORD *)(v225 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          WdLogEvent5_WdError(v225);
          LODWORD(v17) = v222;
        }
        goto LABEL_77;
      }
      v234 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
      *(_QWORD *)(v234 + 24) = v6;
      if ( !*((_QWORD *)this + 1) )
      {
        v237 = WdLogNewEntry5_WdAssertion(v233, v232, v235, v236);
        WdLogEvent5_WdAssertion(v237);
      }
      v153 = v234;
      *(_QWORD *)(v234 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    }
    WdLogEvent5_WdWarning(v153);
  }
  else
  {
    v151 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v151 + 24) = this;
    WdLogEvent5_WdError(v151);
    LODWORD(v17) = -1071774884;
  }
LABEL_77:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v247, 0LL);
LABEL_78:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v245, 0LL);
  return (unsigned int)v17;
}
