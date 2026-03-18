/*
 * XREFs of ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C008C040 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0005304 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0005EBC (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00060A8 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00060F4 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0006170 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00061C4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00062E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006370 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C00063C4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00064BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0006984 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006BBC (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000CC08 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C001D2F4 (--1-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ??1?$auto_rc@VDMMVIDPN@@@@QEAA@XZ @ 0x1C001D690 (--1-$auto_rc@VDMMVIDPN@@@@QEAA@XZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C001D698 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00728B0 (DxgkStatusChangeNotify.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0077F6C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C007E558 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0081148 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0082978 (ConvertDMMScalingToGdiScaling.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0083584 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00841C8 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0085858 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00869DC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0087708 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00883AC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00884F8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0088748 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C01A2934 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 */

__int64 __fastcall DmmCommitVidPnOnAdapter(
        struct DXGDEVICE *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned __int8 *a7,
        int *const a8,
        struct COREDEVICEACCESS *a9)
{
  unsigned int v9; // r12d
  int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  struct DXGADAPTER *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r15d
  VIDPN_MGR **v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  struct DMMVIDPN *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  DMMVIDPNTOPOLOGY *v35; // rdi
  DMMVIDPNTOPOLOGY *v36; // r13
  int NumPathsFromSource; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r13d
  int v46; // edx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 i; // rcx
  unsigned int PathSourceFromTarget; // esi
  _DWORD *v51; // r8
  PVOID v52; // rax
  __int64 v53; // rcx
  _DWORD *v54; // rdi
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rcx
  struct DMMVIDPNPRESENTPATH *v58; // rdi
  char v59; // r10
  __int64 v60; // rax
  bool IsVidPnSourceOwnerDwm; // al
  __int16 v62; // ax
  char v63; // si
  DMMVIDPNPRESENTPATH *v64; // r13
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  unsigned int v68; // r15d
  unsigned int v69; // r13d
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rax
  unsigned int *v74; // rdx
  unsigned int *v75; // rcx
  unsigned int *v76; // rax
  _QWORD *v77; // rax
  int v78; // ecx
  unsigned int v79; // r15d
  int v80; // r12d
  DMMVIDPNTOPOLOGY *v81; // rbx
  DMMVIDPNTOPOLOGY *v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  struct DMMVIDPNPRESENTPATH *v86; // r13
  __int64 v87; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v89; // ecx
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v92; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v93; // r8d
  int updated; // eax
  __int64 v95; // rcx
  __int64 j; // rdi
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  DMMVIDPNPRESENTPATH *v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  _QWORD *v104; // rax
  int v105; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  ADAPTER_DISPLAY *v108; // rax
  __int64 v109; // r12
  unsigned int v110; // edi
  int v111; // r15d
  unsigned __int8 IsPrimaryVisible; // al
  ADAPTER_DISPLAY *v113; // rcx
  __int64 v114; // r9
  unsigned int v115; // r12d
  int v116; // eax
  int v117; // r12d
  struct DXGDEVICE *v118; // rdx
  int v119; // r13d
  DMMVIDPNTOPOLOGY *v120; // rbx
  unsigned int v121; // r13d
  unsigned int *v122; // r12
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  unsigned __int8 IsSourceInTopology; // al
  __int64 v130; // rax
  DMMVIDPNTOPOLOGY *v131; // rsi
  char *v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  VIDPN_MGR *v138; // r12
  int v139; // eax
  int v140; // eax
  __int64 v141; // rcx
  _QWORD *v142; // rax
  __int64 v143; // rax
  unsigned int k; // r15d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  struct DXGADAPTERALLOCATION *v149; // rdi
  VIDPN_MGR *v150; // r12
  _QWORD *v151; // rax
  __int64 v152; // r9
  unsigned __int64 *v153; // rsi
  __int64 v154; // rdx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  int v160; // ecx
  void *v161; // r8
  int v162; // eax
  __int64 v163; // rcx
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  unsigned int v166; // edx
  __int64 v167; // rax
  unsigned int v168; // r15d
  DMMVIDPNTOPOLOGY *v169; // r13
  int v170; // eax
  __int64 v171; // rcx
  __int64 v172; // r9
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rax
  DMMVIDPNTOPOLOGY *v180; // rsi
  __int64 v181; // rcx
  __int64 v182; // rax
  __int64 v183; // rdi
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rcx
  __int64 v187; // rax
  int v188; // eax
  __int64 v189; // rcx
  _QWORD *v190; // rax
  unsigned __int64 m; // r12
  __int64 v192; // rcx
  __int64 v193; // rax
  __int64 v194; // rdi
  __int64 v195; // rcx
  __int64 v196; // rax
  int v197; // eax
  __int64 v198; // rcx
  _QWORD *v199; // rax
  DMMVIDPNPRESENTPATH *v200; // rcx
  __int64 v201; // r13
  __int64 v202; // rax
  __int64 v203; // r13
  __int64 v204; // rcx
  __int64 v205; // rax
  __int64 v206; // rdi
  DXGADAPTER **v207; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v208; // rax
  __int64 v209; // rcx
  __int128 v210; // xmm1
  __int128 v211; // xmm0
  __int64 v212; // rcx
  int v213; // eax
  __int64 v214; // rcx
  int v215; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v216; // eax
  __int64 v217; // r10
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rcx
  __int64 v222; // rsi
  __int64 v223; // rdi
  enum _D3DDDI_ROTATION v224; // eax
  const struct _D3DDDI_RATIONAL *v225; // rdx
  struct DXGDEVICE *v226; // rdi
  enum _D3DDDIFORMAT v227; // r10d
  int CddAllocations; // eax
  __int64 v229; // rcx
  _QWORD *v230; // rax
  int v231; // edi
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // rax
  unsigned int v235; // r13d
  unsigned int v236; // r15d
  int v237; // ebx
  int v238; // eax
  bool v239; // zf
  char v240; // di
  VIDPN_MGR *v241; // rcx
  __int64 v242; // rcx
  int v243; // eax
  __int64 v244; // rcx
  __int64 v245; // rax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r8
  int v247; // ecx
  int v248; // edx
  int v249; // ecx
  void *v250; // r8
  int v251; // eax
  __int64 v252; // rcx
  _QWORD *v253; // rax
  __int64 v254; // r8
  unsigned int *v255; // rax
  unsigned int *v256; // rbx
  __int64 v257; // rcx
  __int64 v258; // rax
  _QWORD *v259; // rdi
  struct COREDEVICEACCESS *v260; // rdx
  _QWORD *v261; // rbx
  int v262; // eax
  __int64 v263; // rcx
  _QWORD *v264; // rax
  ADAPTER_DISPLAY *v265; // rbx
  unsigned int v266; // edi
  struct DXGADAPTER *v267; // r14
  unsigned int v268; // edi
  __int64 v269; // rcx
  int *v270; // r14
  __int64 v271; // rdx
  char v272; // al
  int v273; // eax
  __int64 v274; // rcx
  _QWORD *v275; // rax
  __int64 v276; // rax
  unsigned int v277; // ecx
  int ClientCommittedVidPnRef; // eax
  __int64 v279; // rcx
  __int64 v280; // rax
  __int64 v282; // rax
  __int64 v283; // [rsp+20h] [rbp-E0h]
  char v284; // [rsp+50h] [rbp-B0h]
  int v285; // [rsp+54h] [rbp-ACh]
  int v287; // [rsp+58h] [rbp-A8h]
  unsigned int v288; // [rsp+58h] [rbp-A8h]
  int v289; // [rsp+58h] [rbp-A8h]
  bool v290; // [rsp+5Ch] [rbp-A4h]
  char v291; // [rsp+5Dh] [rbp-A3h]
  unsigned int v292; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v293; // [rsp+64h] [rbp-9Ch]
  unsigned int v294; // [rsp+68h] [rbp-98h]
  char v295; // [rsp+6Ch] [rbp-94h]
  __int64 v296; // [rsp+70h] [rbp-90h] BYREF
  __int64 v297; // [rsp+78h] [rbp-88h] BYREF
  int v298; // [rsp+80h] [rbp-80h]
  DMMVIDPNPRESENTPATH *Path; // [rsp+88h] [rbp-78h]
  VIDPN_MGR *v300; // [rsp+90h] [rbp-70h]
  DMMVIDPNTOPOLOGY *v301; // [rsp+98h] [rbp-68h]
  DMMVIDPNTOPOLOGY *v302; // [rsp+A0h] [rbp-60h]
  __int64 v303; // [rsp+A8h] [rbp-58h]
  int v304; // [rsp+B0h] [rbp-50h]
  unsigned int v305; // [rsp+B4h] [rbp-4Ch]
  int v306; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v307; // [rsp+C0h] [rbp-40h] BYREF
  struct DMMVIDPN *v308; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v309; // [rsp+D0h] [rbp-30h] BYREF
  int *v310; // [rsp+D8h] [rbp-28h]
  struct DXGDEVICE *v311; // [rsp+E0h] [rbp-20h]
  void *v312; // [rsp+E8h] [rbp-18h]
  __int64 v313; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v314; // [rsp+F8h] [rbp-8h]
  struct DXGADAPTER *v315; // [rsp+100h] [rbp+0h]
  struct DMMVIDPN *v316; // [rsp+108h] [rbp+8h]
  void *v317; // [rsp+110h] [rbp+10h] BYREF
  struct COREDEVICEACCESS *v318; // [rsp+118h] [rbp+18h]
  _BYTE v319[48]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v320; // [rsp+150h] [rbp+50h]
  unsigned int *v321; // [rsp+158h] [rbp+58h]
  unsigned int *v322; // [rsp+160h] [rbp+60h]
  unsigned int *v323; // [rsp+168h] [rbp+68h]
  __int64 v324; // [rsp+170h] [rbp+70h] BYREF
  __int64 v325; // [rsp+178h] [rbp+78h] BYREF
  char v326[8]; // [rsp+180h] [rbp+80h] BYREF
  int v327; // [rsp+188h] [rbp+88h] BYREF
  __int64 v328; // [rsp+190h] [rbp+90h]
  _BYTE v329[24]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v330[24]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v331[24]; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v332[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v333; // [rsp+200h] [rbp+100h] BYREF

  v9 = 0;
  v311 = a1;
  v314 = a7;
  v13 = 0;
  v310 = a8;
  v318 = a9;
  v304 = a3 & 0x10000;
  v290 = (a3 & 0x10000) != 0;
  v291 = 1;
  v284 = 1;
  v321 = a4;
  v322 = a5;
  v323 = a6;
  v312 = 0LL;
  LODWORD(v296) = 0;
  v285 = 0;
  v293 = 0;
  v294 = 0;
  v305 = 0;
  v306 = 0;
  v297 = 0LL;
  v298 = 0;
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
    &v317,
    (unsigned int)a2);
  if ( !v317 )
  {
    v15 = WdLogNewEntry5_WdLowResource(v14);
    WdLogEvent5_WdLowResource(v15);
    LODWORD(v16) = -1073741801;
    goto LABEL_280;
  }
  if ( *((_DWORD *)a1 + 76) != 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  v18 = *((_QWORD *)a1 + 357);
  v313 = v18;
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v14);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v19 + 24) = a1;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_280;
  }
  v20 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL);
  v315 = v20;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18) || !DXGADAPTER::IsCoreResourceSharedOwner(v20) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = 1;
  ++*(_DWORD *)(*(_QWORD *)(v18 + 2128) + 240LL);
  v300 = *(VIDPN_MGR **)(*(_QWORD *)(v18 + 2128) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v326, (__int64)v300);
  v24 = (VIDPN_MGR **)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v316 = (struct DMMVIDPN *)v24;
  if ( !v24 || v24[6] != v300 )
  {
    v26 = WdLogNewEntry5_WdError(v25);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_279;
  }
  v308 = 0LL;
  v302 = (DMMVIDPNTOPOLOGY *)(v24 + 12);
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             (const struct DMMVIDPN **)v300,
                                             (__int64 *)&v308);
  v16 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v31[3] = *(int *)(v18 + 272);
    v31[4] = *(unsigned int *)(v18 + 268);
    v31[5] = v16;
    WdLogEvent5_WdError(v31);
    goto LABEL_278;
  }
  v32 = v308;
  v33 = 0LL;
  v34 = *(_QWORD *)(v18 + 2128);
  v35 = (struct DMMVIDPN *)((char *)v308 + 96);
  v301 = (struct DMMVIDPN *)((char *)v308 + 96);
  if ( *(_DWORD *)(v34 + 80) )
  {
    v36 = v302;
    while ( 1 )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v36, v9, &v309);
      if ( NumPathsFromSource < 0 && (NumPathsFromSource != -1071774919 || v309) )
      {
        v38 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v38);
      }
      v39 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v35, v9, &v307);
      LODWORD(v16) = v39;
      if ( v39 >= 0 )
        goto LABEL_25;
      if ( v39 != -1071774919 )
        break;
      v41 = v307;
      if ( v307 )
        break;
LABEL_26:
      v28 = v309;
      if ( v309 )
      {
        v305 |= v23;
        if ( v309 != v41 )
        {
          v285 |= v23;
          v290 = 1;
        }
        v43 = 0LL;
        while ( 2 )
        {
          v303 = v43;
          LODWORD(v16) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v36, v9, v43, &v292);
          if ( (int)v16 < 0 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v28);
            WdLogEvent5_WdAssertion(v44);
          }
          v45 = v292;
          if ( v292 == -1 )
          {
            v36 = v302;
            goto LABEL_79;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v35, v9, v292);
          if ( !Path )
          {
            v285 |= v23;
            v290 = 1;
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v35, v45, v47, v48);
            if ( PathSourceFromTarget != -1 )
            {
              v51 = v312;
              if ( !v312 )
              {
                v52 = operator new(0x400uLL, 0x4E506456u, PagedPool);
                v312 = v52;
                v51 = v52;
                if ( !v52 )
                {
                  LODWORD(v16) = -1073741801;
                  v77 = (_QWORD *)WdLogNewEntry5_WdLowResource(v53);
                  v77[3] = *(int *)(v18 + 272);
                  v77[4] = *(unsigned int *)(v18 + 268);
                  v77[5] = -1073741801LL;
                  WdLogEvent5_WdLowResource(v77);
                  goto LABEL_278;
                }
                v54 = v52;
                for ( i = 256LL; i; --i )
                  *v54++ = -1;
              }
              v55 = 0;
              while ( v51[16 * PathSourceFromTarget + v55] != -1 )
              {
                if ( ++v55 >= 0x10 )
                  goto LABEL_45;
              }
              i = PathSourceFromTarget;
              v51[16 * PathSourceFromTarget + v55] = v45;
              LODWORD(v296) = (1 << PathSourceFromTarget) | v296;
LABEL_45:
              if ( v55 >= 0x10 )
              {
                v56 = WdLogNewEntry5_WdAssertion(i);
                WdLogEvent5_WdAssertion(v56);
              }
LABEL_47:
              v35 = v301;
            }
            v36 = v302;
LABEL_49:
            v43 = v303 + 1;
            continue;
          }
          break;
        }
        v36 = v302;
        v58 = DMMVIDPNTOPOLOGY::FindPath(v302, v46, v47);
        if ( !v58 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v57);
          WdLogEvent5_WdAssertion(v60);
          v59 = 0;
        }
        if ( *(_BYTE *)(v18 + 1993) == v59 && *(_BYTE *)(*(_QWORD *)(v18 + 2128) + 133LL) == v59
          || (IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*(DXGADAPTER ***)(v18 + 2128), v9),
              v59 = 0,
              !IsVidPnSourceOwnerDwm) )
        {
          v62 = a3;
        }
        else
        {
          v62 = a3;
          if ( *(_BYTE *)(*(_QWORD *)(v18 + 2128) + 133LL) || (a3 & 0x400000) != 0 )
          {
            v63 = 1;
            goto LABEL_60;
          }
        }
        v63 = v59;
LABEL_60:
        if ( (v23 & v285) != 0 )
        {
          v35 = v301;
          goto LABEL_49;
        }
        v64 = Path;
        if ( (v62 & 0x4000) == 0
          && DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path, v58, v63) )
        {
          if ( *((_DWORD *)v64 + 29) != *((_DWORD *)v58 + 29) )
          {
            if ( !v63 )
            {
              v66 = WdLogNewEntry5_WdAssertion(v65);
              WdLogEvent5_WdAssertion(v66);
            }
            v293 |= v23;
LABEL_67:
            v67 = v285;
LABEL_68:
            if ( (v23 & v67) == 0
              && (*((_DWORD *)v64 + 26) != *((_DWORD *)v58 + 26) || *((_WORD *)v64 + 54) != *((_WORD *)v58 + 54)) )
            {
              v306 |= v23;
            }
            goto LABEL_47;
          }
          if ( !*((_BYTE *)v300 + 464)
            && !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v9) )
          {
            goto LABEL_67;
          }
        }
        v67 = v23 | v285;
        v285 |= v23;
        goto LABEL_68;
      }
      if ( v41 )
        v294 |= v23;
LABEL_79:
      ++v9;
      v23 *= 2;
      if ( v9 >= *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 80LL) )
      {
        v13 = v296;
        goto LABEL_81;
      }
    }
    v42 = WdLogNewEntry5_WdAssertion(v40);
    WdLogEvent5_WdAssertion(v42);
LABEL_25:
    v41 = v307;
    goto LABEL_26;
  }
LABEL_81:
  v68 = v294;
  v69 = ~v294 & v13;
  LODWORD(v296) = v69;
  if ( (v69 & v285) != v69 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v28);
    WdLogEvent5_WdAssertion(v70);
  }
  v71 = ~v285 & v293;
  v293 = v71;
  if ( (v68 & (unsigned int)v71) != 0 )
  {
    v72 = WdLogNewEntry5_WdAssertion(v71);
    WdLogEvent5_WdAssertion(v72);
    v71 = v293;
  }
  if ( !v285 && !v68 && !(_DWORD)v71 )
  {
    LODWORD(v16) = 0;
    v73 = (_QWORD *)WdLogNewEntry5_WdTrace(v71, v33, v29, v30);
    v74 = v321;
    v73[3] = *(int *)(v18 + 272);
    v73[4] = *(unsigned int *)(v18 + 268);
    v75 = v323;
    v73[5] = 0LL;
    v76 = v322;
    *v74 = 0;
    *v76 = 0;
    *v75 = 0;
    goto LABEL_273;
  }
  ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v315 + 267), 8, 0xFFFFFFFF, 0);
  v78 = 1;
  v287 = 1;
  v79 = 0;
  v80 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 80LL) )
  {
    v81 = v301;
    do
    {
      if ( (v80 & v293) != 0 )
      {
        v82 = v302;
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v302, v79, 0LL, &v292) < 0 || v292 == -1 )
        {
          v84 = WdLogNewEntry5_WdAssertion(v83);
          WdLogEvent5_WdAssertion(v84);
        }
        v86 = DMMVIDPNTOPOLOGY::FindPath(v82, v79, v292);
        if ( !v86 )
        {
          v87 = WdLogNewEntry5_WdAssertion(v85);
          WdLogEvent5_WdAssertion(v87);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v18 + 2128), v79);
        v89 = *((_DWORD *)v86 + 29);
        v90 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)v319 = *(_OWORD *)DisplayModeInfo;
        v91 = *((_OWORD *)DisplayModeInfo + 2);
        *(_OWORD *)&v319[16] = v90;
        *(_QWORD *)&v90 = *((_QWORD *)DisplayModeInfo + 6);
        *(_OWORD *)&v319[32] = v91;
        v320 = v90;
        v92 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v89);
        v93 = *((_DWORD *)v86 + 29);
        *(_DWORD *)&v319[28] = v92;
        updated = VIDPN_MGR::UpdateRotationAllClientVidPnPathsFromSource(v300, v79, v93);
        v16 = updated;
        if ( updated < 0 )
        {
          v104 = (_QWORD *)WdLogNewEntry5_WdError(v95);
          v104[3] = v79;
          v104[4] = v81;
          v104[5] = v16;
          WdLogEvent5_WdError(v104);
          v293 &= ~v80;
          v285 |= v80;
        }
        else
        {
          for ( j = 0LL; ; ++j )
          {
            LODWORD(v16) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v81, v79, j, &v292);
            if ( (int)v16 < 0 )
            {
              v98 = WdLogNewEntry5_WdAssertion(v97);
              WdLogEvent5_WdAssertion(v98);
            }
            if ( v292 == -1 )
              break;
            v100 = DMMVIDPNTOPOLOGY::FindPath(v81, v79, v292);
            if ( !v100 )
            {
              v101 = WdLogNewEntry5_WdAssertion(v99);
              WdLogEvent5_WdAssertion(v101);
            }
            DMMVIDPNPRESENTPATH::PinContentRotation(v100, *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v86 + 29));
          }
          v18 = v313;
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v313 + 2128), v79, 0);
          ADAPTER_DISPLAY::SetCddDisplayMode(
            *(DXGADAPTER ***)(v18 + 2128),
            v79,
            (const struct _D3DKMT_DISPLAYMODE *)v319);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(DXGADAPTER ***)(v18 + 2128),
            v79,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v319);
          ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(DXGADAPTER ***)(v18 + 2128), v79, *(int *)&v319[12]);
          OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
            *(OUTPUTDUPL_CONTEXT ***)(*(_QWORD *)(v18 + 2128) + 104LL),
            v79,
            0LL,
            0,
            0,
            1);
          v327 = 11;
          v328 = 0LL;
          v80 = v287;
          if ( (int)DxgkStatusChangeNotify(&v327) < 0 )
          {
            v103 = WdLogNewEntry5_WdAssertion(v102);
            *(_QWORD *)(v103 + 24) = 17198LL;
            WdLogEvent5_WdAssertion(v103);
          }
        }
        v105 = *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 240LL);
        CurrentProcess = PsGetCurrentProcess(v102);
        ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
        VIDPN_MGR::CacheDisplayModeChangeRequest(
          (__int64)v300,
          v79,
          (__int64)v319,
          1u,
          v16,
          4,
          v105,
          ProcessImageFileName);
        v310[v79] = v16;
        v78 = 1;
      }
      v80 *= 2;
      ++v79;
      v287 = v80;
    }
    while ( v79 < *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 80LL) );
    v32 = v308;
    v69 = v296;
  }
  v108 = *(ADAPTER_DISPLAY **)(v18 + 2128);
  v109 = 0LL;
  v110 = 0;
  LODWORD(v303) = 1;
  v111 = 1;
  if ( *((_DWORD *)v108 + 20) )
  {
    v288 = 0;
    do
    {
      IsPrimaryVisible = ADAPTER_DISPLAY::IsPrimaryVisible(v108, v110);
      v115 = v294;
      if ( IsPrimaryVisible )
      {
        if ( ((v69 | v285 | v294) & v111) != 0 )
        {
          v116 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                   *(ADAPTER_DISPLAY **)(v18 + 2128),
                   v110,
                   0LL,
                   2048,
                   (struct _KTHREAD **)v311,
                   1u,
                   0);
          v16 = v116;
          if ( v116 < 0 )
          {
LABEL_166:
            v165 = (_QWORD *)WdLogNewEntry5_WdError(v113);
            v165[3] = v110;
            v165[4] = *(int *)(v18 + 272);
            v165[5] = *(unsigned int *)(v18 + 268);
            v165[6] = v16;
            WdLogEvent5_WdError(v165);
            v166 = v110;
LABEL_167:
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v166, 1);
            goto LABEL_271;
          }
        }
      }
      v117 = v285 | v115;
      if ( ((v69 | v117) & v111) != 0 )
      {
        v113 = *(ADAPTER_DISPLAY **)(v18 + 2128);
        v118 = *(struct DXGDEVICE **)(1016LL * v110 + *((_QWORD *)v113 + 14) + 672);
        if ( v118 )
          ADAPTER_DISPLAY::DisablePrimaryOnDevice(v113, v118, v110);
      }
      v119 = v294 & v111;
      LODWORD(Path) = v294 & v111;
      if ( (v294 & v111) != 0 || *((_BYTE *)v300 + 464) )
      {
        if ( (v117 & v111) == 0 )
        {
          v130 = WdLogNewEntry5_WdAssertion(v113);
          WdLogEvent5_WdAssertion(v130);
        }
        v131 = v301;
        v132 = (char *)v301 + 56;
        if ( !v301 )
          v132 = 0LL;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v330,
          (__int64)v132,
          2u,
          v114,
          v283,
          *((_QWORD *)v301 + 5));
        if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v131, v110) < 0 )
        {
          v134 = WdLogNewEntry5_WdAssertion(v133);
          WdLogEvent5_WdAssertion(v134);
        }
        ADAPTER_DISPLAY::SetPartOfDesktop(*(DXGADAPTER ***)(v18 + 2128), v110, 0);
        ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v18 + 2128), v110, &stru_1C0057508);
        ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v18 + 2128), v110, 0LL);
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
          (ApplyPermissionWithinThisScope *)v330,
          v135,
          v136,
          v137);
      }
      else
      {
        v69 = v296;
        if ( (v111 & (unsigned int)v296) == 0 )
          goto LABEL_146;
        v120 = v301;
        v121 = 0;
        v122 = (unsigned int *)((char *)v312 + 4 * v288);
        do
        {
          if ( *v122 == -1 )
            break;
          v123 = (__int64)v120 + 56;
          if ( !v120 )
            v123 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v329, v123, 2u, v114, v283, 1uLL);
          LODWORD(v16) = DMMVIDPNTOPOLOGY::RemovePath(v120, v110, *v122, 0LL);
          if ( (int)v16 < 0 )
          {
            v128 = WdLogNewEntry5_WdAssertion(v125);
            WdLogEvent5_WdAssertion(v128);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v329,
            v124,
            v126,
            v127);
          ++v121;
          ++v122;
        }
        while ( v121 < 0x10 );
        IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v120, v110);
        v32 = v308;
        v109 = 0LL;
        v18 = v313;
        v111 = v303;
        if ( IsSourceInTopology )
          goto LABEL_144;
        v119 = (int)Path;
        LODWORD(v296) = ~(_DWORD)v303 & v296;
      }
      LODWORD(v297) = v297 & 0xFFFFFF00 | 0x52;
      v138 = v300;
      v298 = *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 240LL);
      BYTE4(v297) = ((BYTE4(v297) & 0xFC | (v119 == 0)) ^ (4 * (v304 != 0))) & 4 ^ (BYTE4(v297) & 0xFC | (v119 == 0));
      v139 = VIDPN_MGR::CommitVidPn(
               (__int64)v300,
               v32,
               0LL,
               v110,
               D3DKMDT_MCC_IGNORE,
               (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v297,
               v314,
               0LL);
      v16 = v139;
      if ( v139 < 0 )
        goto LABEL_166;
      if ( !v119 && !*((_BYTE *)v138 + 464) )
      {
        v69 = v296;
LABEL_146:
        v109 = 0LL;
        goto LABEL_147;
      }
      v140 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 2128), v311, v110);
      v109 = 0LL;
      v16 = v140;
      if ( v140 < 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v141);
        v142[3] = v110;
        v142[4] = *(int *)(v18 + 272);
        v142[5] = *(unsigned int *)(v18 + 268);
        v142[6] = v16;
        WdLogEvent5_WdError(v142);
      }
LABEL_144:
      v69 = v296;
LABEL_147:
      v108 = *(ADAPTER_DISPLAY **)(v18 + 2128);
      v111 *= 2;
      v288 += 16;
      v78 = 1;
      ++v110;
      LODWORD(v303) = v111;
    }
    while ( v110 < *((_DWORD *)v108 + 20) );
  }
  v143 = *(_QWORD *)(v18 + 2128);
  for ( k = 0; k < *(_DWORD *)(v143 + 80); v69 >>= 1 )
  {
    if ( (v69 & 1) != 0 )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v143, k);
      v149 = DisplayedPrimaryAllocation;
      if ( DisplayedPrimaryAllocation && (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
        v149 = 0LL;
      v150 = v300;
      while ( 1 )
      {
        if ( !v149 )
        {
          v151 = (_QWORD *)WdLogNewEntry5_WdTrace(v147, v146, v148, 0LL);
          v153 = (unsigned __int64 *)v301;
          v151[3] = k;
          v154 = (__int64)(v153 + 7);
          v151[4] = *(int *)(v18 + 272);
          v151[5] = *(unsigned int *)(v18 + 268);
          if ( !v153 )
            v154 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v331, v154, 2u, v152, v283, v153[5]);
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v153, k) < 0 )
          {
            v159 = WdLogNewEntry5_WdAssertion(v156);
            WdLogEvent5_WdAssertion(v159);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v331,
            v155,
            v157,
            v158);
        }
        v160 = *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 240LL);
        LODWORD(v297) = ((v297 & 0xF0 | 1) ^ (unsigned __int8)(16 * (5 - (v149 != 0LL)))) & 0xF0 ^ (v297 & 0xFFFFFFF0 | 1);
        v298 = v160;
        BYTE4(v297) = ((BYTE4(v297) & 0xFC | 1) ^ (4 * (v304 != 0))) & 4 ^ (BYTE4(v297) & 0xFC | 1);
        v161 = 0LL;
        if ( *(_QWORD *)(v18 + 2136) && v149 )
          v161 = (void *)*((_QWORD *)v149 + 2);
        v162 = VIDPN_MGR::CommitVidPn(
                 (__int64)v150,
                 v32,
                 v161,
                 k,
                 (enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS)((v149 != 0LL) + 1),
                 (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v297,
                 v314,
                 0LL);
        v16 = v162;
        if ( v162 >= 0 )
          break;
        v164 = (_QWORD *)WdLogNewEntry5_WdError(v163);
        v164[3] = k;
        v164[4] = *(int *)(v18 + 272);
        v164[5] = *(unsigned int *)(v18 + 268);
        v164[6] = v16;
        WdLogEvent5_WdError(v164);
        if ( !v149 )
        {
          v166 = k;
          goto LABEL_167;
        }
        v149 = 0LL;
      }
      v109 = 0LL;
      v78 = 1;
    }
    v143 = *(_QWORD *)(v18 + 2128);
    ++k;
  }
  v167 = *(_QWORD *)(v18 + 2128);
  v168 = 0;
  LODWORD(v303) = 1;
  if ( *(_DWORD *)(v167 + 80) )
  {
    while ( 1 )
    {
      Path = 0LL;
      if ( (v78 & v285) != 0 )
        break;
LABEL_215:
      v234 = *(_QWORD *)(v18 + 2128);
      v78 *= 2;
      ++v168;
      LODWORD(v303) = v78;
      if ( v168 >= *(_DWORD *)(v234 + 80) )
        goto LABEL_216;
    }
    v169 = v301;
    v170 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v301, v168, &v307);
    if ( v170 < 0 )
    {
      if ( v170 == -1071774919 && !v307 )
        goto LABEL_182;
      v173 = WdLogNewEntry5_WdAssertion(v171);
      WdLogEvent5_WdAssertion(v173);
    }
    if ( v307 )
    {
      v174 = (__int64)v169 + 56;
      if ( !v169 )
        v174 = 0LL;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v332, v174, 2u, v172, v283, v307);
      if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v169, v168) < 0 )
      {
        v179 = WdLogNewEntry5_WdAssertion(v176);
        WdLogEvent5_WdAssertion(v179);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v332,
        v175,
        v177,
        v178);
    }
    while ( 1 )
    {
LABEL_182:
      v180 = v302;
      if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v302, v168, v109, &v292) < 0 )
      {
        v182 = WdLogNewEntry5_WdAssertion(v181);
        WdLogEvent5_WdAssertion(v182);
      }
      v183 = v292;
      if ( v292 == -1 )
        break;
      if ( !Path )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v180, v168, v292);
        if ( !Path )
        {
          v185 = WdLogNewEntry5_WdAssertion(v184);
          WdLogEvent5_WdAssertion(v185);
        }
      }
      if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(v316, v183, &v333) < 0 )
      {
        v187 = WdLogNewEntry5_WdAssertion(v186);
        WdLogEvent5_WdAssertion(v187);
      }
      v188 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v300, v169, &v333, D3DKMDT_MCC_ENFORCE);
      v16 = v188;
      if ( v188 < 0 )
      {
        v190 = (_QWORD *)WdLogNewEntry5_WdError(v189);
        v190[3] = v168;
        v190[4] = v183;
        v190[5] = v169;
        v190[6] = v16;
        WdLogEvent5_WdError(v190);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v168, 1);
        m = 0LL;
        goto LABEL_204;
      }
      ++v109;
    }
    for ( m = 0LL; ; ++m )
    {
      if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v169, v168, m, &v292) < 0 )
      {
        v193 = WdLogNewEntry5_WdAssertion(v192);
        WdLogEvent5_WdAssertion(v193);
      }
      v194 = v292;
      if ( v292 == -1 )
        break;
      if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(v316, v292, &v333) < 0 )
      {
        v196 = WdLogNewEntry5_WdAssertion(v195);
        WdLogEvent5_WdAssertion(v196);
      }
      v197 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
               v300,
               v169,
               (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v333);
      v16 = v197;
      if ( v197 < 0 )
      {
        v199 = (_QWORD *)WdLogNewEntry5_WdError(v198);
        v199[3] = v168;
        v199[4] = v194;
        v199[5] = v169;
        v199[6] = v16;
        WdLogEvent5_WdError(v199);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v168, 1);
        goto LABEL_204;
      }
    }
    LODWORD(v16) = 0;
LABEL_204:
    v200 = Path;
    v201 = *((_QWORD *)Path + 11);
    v202 = *(_QWORD *)(v201 + 104);
    if ( v202 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v202 + 96), 1u);
      v203 = *(_QWORD *)(v201 + 104);
      v32 = v308;
    }
    else
    {
      v203 = 0LL;
    }
    v204 = *((_QWORD *)v200 + 12);
    v324 = v203;
    v205 = *(_QWORD *)(v204 + 104);
    if ( v205 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v205 + 96), 1u);
      v206 = *(_QWORD *)(v204 + 104);
      v32 = v308;
    }
    else
    {
      v206 = 0LL;
    }
    v207 = *(DXGADAPTER ***)(v18 + 2128);
    v296 = v206;
    v208 = ADAPTER_DISPLAY::GetDisplayModeInfo(v207, v168);
    v209 = *(_QWORD *)(v203 + 144);
    v210 = *((_OWORD *)v208 + 1);
    *(_OWORD *)v319 = *(_OWORD *)v208;
    v211 = *((_OWORD *)v208 + 2);
    *(_OWORD *)&v319[16] = v210;
    *(_QWORD *)&v210 = *((_QWORD *)v208 + 6);
    *(_QWORD *)v319 = *(_QWORD *)(v209 + 76);
    LODWORD(v208) = *(_DWORD *)(v209 + 96);
    v212 = *(_QWORD *)(v206 + 144);
    *(_OWORD *)&v319[32] = v211;
    *(_DWORD *)&v319[8] = (_DWORD)v208;
    v320 = v210;
    v213 = DmmMapVSyncFromRationalToInteger(
             (const struct _D3DDDI_RATIONAL *)(v212 + 92),
             (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v212 + 120) << 29) >> 29),
             0LL);
    v214 = *(_QWORD *)(v206 + 144);
    *(_DWORD *)&v319[12] = v213;
    *(_QWORD *)&v319[16] = *(_QWORD *)(v214 + 92);
    v215 = *(_DWORD *)(v214 + 120);
    LODWORD(v214) = *((_DWORD *)Path + 29);
    *(_DWORD *)&v319[24] = v215 << 29 >> 29;
    v216 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v214);
    v218 = *(unsigned int *)(v217 + 112);
    *(_DWORD *)&v319[28] = v216;
    ConvertDMMScalingToGdiScaling(v218, &v319[32], v219, v220);
    if ( (int)v16 >= 0 )
    {
      v222 = *(_QWORD *)(v203 + 144);
      v223 = *(_QWORD *)(v206 + 144);
      v224 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path + 29));
      v225 = (const struct _D3DDDI_RATIONAL *)(v223 + 92);
      v226 = v311;
      CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                         *(PERESOURCE ***)(v18 + 2128),
                         v311,
                         v168,
                         *(_DWORD *)(v222 + 76),
                         *(_DWORD *)(v222 + 80),
                         v227,
                         v225,
                         v224,
                         v318);
      v16 = CddAllocations;
      if ( CddAllocations >= 0 )
      {
        CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v18 + 2128), v168, 0);
        v247 = -(m > 1);
        v109 = 0LL;
        v248 = ((v297 & 0xF0 | 1) ^ (unsigned __int8)(16 * (v247 + 3))) & 0xF0 ^ (v297 & 0xFFFFFFF0 | 1);
        v249 = *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 240LL);
        LODWORD(v297) = v248;
        v298 = v249;
        BYTE4(v297) = ((BYTE4(v297) | 3) ^ (4 * (v304 != 0))) & 4 ^ (BYTE4(v297) | 3);
        if ( *(_QWORD *)(v18 + 2136) )
          v250 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
        else
          v250 = 0LL;
        v251 = VIDPN_MGR::CommitVidPn(
                 (__int64)v300,
                 v32,
                 v250,
                 v168,
                 D3DKMDT_MCC_ENFORCE,
                 (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v297,
                 v314,
                 0LL);
        v16 = v251;
        if ( v251 >= 0 )
        {
          ADAPTER_DISPLAY::SetPartOfDesktop(*(DXGADAPTER ***)(v18 + 2128), v168, 1);
          ADAPTER_DISPLAY::SetCddDisplayMode(
            *(DXGADAPTER ***)(v18 + 2128),
            v168,
            (const struct _D3DKMT_DISPLAYMODE *)v319);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(DXGADAPTER ***)(v18 + 2128),
            v168,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v319);
          ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(DXGADAPTER ***)(v18 + 2128), v168, *(int *)&v319[12]);
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v168, 0);
          LODWORD(v16) = 0;
        }
        else
        {
          v253 = (_QWORD *)WdLogNewEntry5_WdError(v252);
          v253[3] = v168;
          v253[4] = *(int *)(v18 + 272);
          v253[5] = *(unsigned int *)(v18 + 268);
          v253[6] = v16;
          WdLogEvent5_WdError(v253);
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v168, 1);
          ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 2128), v226, v168);
        }
        goto LABEL_214;
      }
      v230 = (_QWORD *)WdLogNewEntry5_WdError(v229);
      v230[3] = v168;
      v230[4] = *(int *)(v18 + 272);
      v230[5] = *(unsigned int *)(v18 + 268);
      v230[6] = v16;
      WdLogEvent5_WdError(v230);
    }
    v109 = 0LL;
LABEL_214:
    v231 = *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 240LL);
    v232 = PsGetCurrentProcess(v221);
    v233 = PsGetProcessImageFileName(v232);
    VIDPN_MGR::CacheDisplayModeChangeRequest((__int64)v300, v168, (__int64)v319, 1u, v16, 3, v231, v233);
    v310[v168] = v16;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v296, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v324, 0LL);
    v78 = v303;
    goto LABEL_215;
  }
LABEL_216:
  ADAPTER_DISPLAY::UpdateVidPnTargetList(*(ADAPTER_DISPLAY **)(v18 + 2128));
  v289 = 1;
  v235 = -1;
  v236 = 0;
  v237 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 80LL) )
  {
    v238 = v285 | v294;
    LODWORD(Path) = v285 | v294;
    do
    {
      if ( (v238 & v237) != 0 )
      {
        if ( v290 || (v239 = v235 == -1, v235 = v236, !v239) )
          v235 = -3;
      }
      v240 = 0;
      if ( v310[v236] < 0 )
        goto LABEL_243;
      v241 = v300;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v300 + 9) + 32LL), 1u);
      v242 = *((_QWORD *)v241 + 9);
      v325 = v242;
      if ( v242 )
      {
        v243 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v242 + 96), v236, &v309);
        LODWORD(v16) = v243;
        if ( v243 < 0 && (v243 != -1071774919 || v309) )
        {
          v245 = WdLogNewEntry5_WdAssertion(v244);
          WdLogEvent5_WdAssertion(v245);
        }
      }
      else
      {
        v309 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v325, 0LL);
      if ( !v309 )
      {
LABEL_259:
        if ( *(int *)(v18 + 1792) < 4608 || (*(_DWORD *)(v18 + 1504) & 1) != 0 )
        {
          ADAPTER_DISPLAY::UpdateGdiGammaRamp(*(ADAPTER_DISPLAY **)(v18 + 2128), v236, 0LL);
          if ( v240 )
            ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v18 + 2128), v236, 0LL);
        }
        goto LABEL_243;
      }
      v240 = 1;
      v295 = 1;
      if ( *(_QWORD *)(v18 + 2136) )
      {
        v255 = (unsigned int *)ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v18 + 2128), v236);
        v318 = (struct COREDEVICEACCESS *)v255;
        v256 = v255;
        if ( !v255 )
          goto LABEL_242;
        v257 = v255[1];
        if ( (v257 & 0x10) != 0 )
        {
          v258 = WdLogNewEntry5_WdAssertion(v257);
          WdLogEvent5_WdAssertion(v258);
        }
        v259 = v317;
        memset(v317, 0, 0x840uLL);
        v260 = v318;
        *(_DWORD *)v259 = v236;
        v259[2] = *((_QWORD *)v256 + 2);
        v261 = (_QWORD *)*((_QWORD *)v315 + 267);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(v261[50] + 8LL) + 216LL))(
          v261[51],
          *((_QWORD *)v260 + 1),
          (__int64)v259 + 4,
          v259 + 1);
        *((_DWORD *)v259 + 138) |= 1u;
        v262 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v261[47] + 8LL) + 712LL))(v261[48], v259);
        v16 = v262;
        if ( v262 < 0 )
        {
          v264 = (_QWORD *)WdLogNewEntry5_WdError(v263);
          v264[3] = v18;
          v264[4] = v236;
          v264[5] = v16;
          WdLogEvent5_WdError(v264);
          ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 2128), v311, v236);
          v310[v236] = v16;
LABEL_242:
          v237 = v289;
          goto LABEL_243;
        }
        v240 = v295;
        v237 = v289;
      }
      LOBYTE(v254) = 1;
      v273 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v18 + 2128), v236, v254, 2048, 0LL, 1u, 0);
      v16 = v273;
      if ( v273 >= 0 )
        goto LABEL_259;
      v275 = (_QWORD *)WdLogNewEntry5_WdError(v274);
      v275[3] = v18;
      v275[4] = v236;
      v275[5] = v16;
      WdLogEvent5_WdError(v275);
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 2128), v236, 1);
      ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 2128), v311, v236);
      v310[v236] = v16;
LABEL_243:
      v237 *= 2;
      v289 = v237;
      ++v236;
      v238 = (int)Path;
    }
    while ( v236 < *(_DWORD *)(*(_QWORD *)(v18 + 2128) + 80LL) );
  }
  v265 = *(ADAPTER_DISPLAY **)(v18 + 2128);
  v266 = 0;
  if ( *((_DWORD *)v265 + 20) )
  {
    v267 = v315;
    do
      ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(v265, v266++, v267);
    while ( v266 < *((_DWORD *)v265 + 20) );
    v18 = v313;
  }
  if ( v235 != -1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
      *(PERESOURCE ***)(v18 + 2128),
      v235,
      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v297);
  v268 = v305;
  if ( !v305 )
  {
LABEL_270:
    v277 = v293;
    LODWORD(v16) = 0;
    *v321 = v285 | v293;
    *v322 = v277;
    *v323 = v294;
    goto LABEL_271;
  }
  v269 = *(unsigned int *)(*(_QWORD *)(v18 + 2128) + 80LL);
  if ( !(_DWORD)v269 )
    goto LABEL_281;
  v270 = v310;
  v271 = (unsigned int)v269;
  do
  {
    if ( (v268 & 1) != 0 )
    {
      if ( *v270 < 0 )
      {
        LOBYTE(v269) = 0;
        LODWORD(v16) = *v270;
        v272 = v291;
        v284 = 0;
        goto LABEL_266;
      }
      v272 = 0;
      v291 = 0;
    }
    else
    {
      v272 = v291;
    }
    LOBYTE(v269) = v284;
LABEL_266:
    v268 >>= 1;
    ++v270;
    --v271;
  }
  while ( v271 );
  v18 = v313;
  if ( !v272 )
  {
    if ( !(_BYTE)v269 )
    {
      v276 = WdLogNewEntry5_WdError(v269);
      *(_QWORD *)(v276 + 24) = v18;
      WdLogEvent5_WdError(v276);
    }
    goto LABEL_270;
  }
LABEL_281:
  v282 = WdLogNewEntry5_WdError(v269);
  *(_QWORD *)(v282 + 32) = (int)v16;
  *(_QWORD *)(v282 + 24) = v18;
  WdLogEvent5_WdError(v282);
LABEL_271:
  if ( (int)v16 >= 0 && v284 )
  {
LABEL_273:
    if ( v306 )
    {
      ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v300, v316);
      v16 = ClientCommittedVidPnRef;
      if ( ClientCommittedVidPnRef < 0 )
      {
        v280 = WdLogNewEntry5_WdError(v279);
        *(_QWORD *)(v280 + 24) = v18;
        *(_QWORD *)(v280 + 32) = v16;
        WdLogEvent5_WdError(v280);
        LODWORD(v16) = 0;
      }
    }
  }
  if ( v312 )
    operator delete(v312);
LABEL_278:
  auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>((__int64 *)&v308);
LABEL_279:
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v326);
LABEL_280:
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::~CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v317);
  return (unsigned int)v16;
}
