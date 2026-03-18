/*
 * XREFs of ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C00A3CD0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0004B84 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000724C (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007520 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0007570 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007630 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00076BC (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0007710 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0007810 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0007934 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C00079B4 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0007CB4 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007EC4 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0009420 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000C4C8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C008F11C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00922B4 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0099098 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C0099F6C (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C009AC9C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B794 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009BB50 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00A1528 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00A726C (ConvertDMMScalingToGdiScaling.c)
 *     DxgkStatusChangeNotify @ 0x1C00B1110 (DxgkStatusChangeNotify.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0178F54 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 *v19; // rsi
  __int64 v20; // rcx
  int v21; // r12d
  VIDPN_MGR **v22; // rax
  __int64 v23; // rcx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  struct DMMVIDPN *v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // edi
  DMMVIDPNTOPOLOGY *v33; // r13
  int NumPathsFromSource; // eax
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r13d
  int v41; // edx
  __int64 v42; // r8
  __int64 v43; // r9
  DMMVIDPNTOPOLOGY *v44; // r10
  __int64 v45; // rcx
  char v46; // r11
  struct DMMVIDPNPRESENTPATH *v47; // r15
  bool IsVidPnSourceOwnerDwm; // al
  __int16 v49; // cx
  char v50; // al
  int v51; // r13d
  DMMVIDPNPRESENTPATH *v52; // r13
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // r12d
  __int64 v56; // rcx
  unsigned int v57; // r12d
  _QWORD *v58; // rax
  unsigned int *v59; // rdx
  unsigned int *v60; // rcx
  unsigned int *v61; // rax
  __int64 v63; // rax
  int v64; // r13d
  DMMVIDPNTOPOLOGY *v65; // rsi
  __int64 v66; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v68; // rcx
  unsigned int v69; // edi
  int v70; // r13d
  char v71; // r12
  __int64 v72; // rax
  ADAPTER_DISPLAY *v73; // rcx
  unsigned __int8 v74; // r9
  DMMVIDPNPRESENTPATH *v75; // r8
  int v76; // r12d
  struct DXGDEVICE *v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // r12d
  unsigned int v80; // r13d
  __int64 v81; // rax
  int v82; // ecx
  unsigned int v83; // r12d
  __int64 v84; // rbx
  DMMVIDPNPRESENTPATH *v85; // r13
  DMMVIDPNTOPOLOGY *v86; // r15
  int v87; // eax
  __int64 v88; // rcx
  unsigned __int8 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // rdi
  unsigned __int64 j; // r13
  __int64 v93; // rcx
  __int64 v94; // rdi
  DMMVIDPNPRESENTPATH *v95; // rcx
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdi
  DXGADAPTER **v102; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v103; // rax
  __int64 v104; // rcx
  __int128 v105; // xmm1
  __int128 v106; // xmm0
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // rcx
  int v110; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v111; // eax
  __int64 v112; // r10
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rbx
  __int64 v117; // rdi
  enum _D3DDDI_ROTATION v118; // eax
  const struct _D3DDDI_RATIONAL *v119; // rdx
  struct DXGDEVICE *v120; // rdi
  enum _D3DDDIFORMAT v121; // r10d
  int CddAllocations; // eax
  __int64 v123; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r8
  int v125; // ecx
  void *v126; // r8
  int v127; // eax
  __int64 v128; // rcx
  int v129; // edi
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  unsigned int v134; // esi
  unsigned int v135; // r13d
  int v136; // ecx
  int v137; // eax
  bool v138; // zf
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rax
  bool v142; // cf
  ADAPTER_DISPLAY *v143; // rsi
  unsigned int v144; // edi
  struct DXGADAPTER *v145; // rbx
  unsigned int v146; // edi
  __int64 v147; // rcx
  int *v148; // rbx
  __int64 v149; // rdx
  char v150; // r14
  unsigned int v151; // ecx
  __int64 v152; // rcx
  __int64 v153; // rcx
  int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // rcx
  int v157; // eax
  __int64 v158; // rcx
  int *v159; // rdi
  unsigned int *v160; // rax
  unsigned int *v161; // rdi
  __int64 v162; // rcx
  struct COREDEVICEACCESS *v163; // rdx
  _QWORD *v164; // rdi
  int v165; // eax
  __int64 v166; // r8
  int v167; // eax
  __int64 v168; // rcx
  __int64 i; // rcx
  unsigned int PathSourceFromTarget; // r15d
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  _QWORD *v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  _DWORD *v182; // r9
  PVOID v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  _DWORD *v187; // rdi
  unsigned int v188; // edx
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  _QWORD *v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  struct DMMVIDPN *v195; // rdi
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rcx
  struct DMMVIDPNPRESENTPATH *v199; // rdi
  __int64 v200; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v202; // edi
  __int128 v203; // xmm1
  __int128 v204; // xmm0
  int updated; // eax
  __int64 v206; // rcx
  __int64 v207; // rdi
  struct DMMVIDPNPRESENTPATH *v208; // rbx
  __int64 v209; // rcx
  __int64 v210; // rax
  __int64 v211; // rcx
  DMMVIDPNPRESENTPATH *v212; // r15
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // r9
  int v217; // eax
  __int64 v218; // rcx
  __int64 v219; // rax
  _QWORD *v220; // rax
  int v221; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  int v224; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  DMMVIDPNTOPOLOGY *v226; // rbx
  unsigned int *v227; // r12
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rax
  unsigned __int8 IsSourceInTopology; // al
  __int64 v232; // rax
  DMMVIDPNTOPOLOGY *v233; // r15
  char *v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // rax
  int v237; // r12d
  int v238; // eax
  int v239; // eax
  __int64 v240; // rcx
  _QWORD *v241; // rax
  _QWORD *v242; // rax
  unsigned int v243; // edx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  struct DXGADAPTERALLOCATION *v248; // rdi
  _QWORD *v249; // rax
  unsigned __int8 v250; // r9
  unsigned __int64 *v251; // r15
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // rax
  int v255; // ecx
  void *v256; // r8
  int v257; // eax
  __int64 v258; // rcx
  _QWORD *v259; // rax
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // rax
  _QWORD *v265; // rax
  __int64 v266; // rax
  __int64 v267; // rax
  _QWORD *v268; // rax
  _QWORD *v269; // rax
  _QWORD *v270; // rax
  __int64 v271; // rax
  __int64 v272; // rax
  _QWORD *v273; // rax
  struct DXGGLOBAL *v274; // rax
  _QWORD *v275; // rax
  __int64 v276; // rax
  int ClientCommittedVidPnRef; // eax
  __int64 v278; // rcx
  __int64 v279; // rax
  __int64 v280; // [rsp+20h] [rbp-E0h]
  char v281; // [rsp+50h] [rbp-B0h]
  char v282; // [rsp+50h] [rbp-B0h]
  char v283; // [rsp+51h] [rbp-AFh]
  int v284; // [rsp+54h] [rbp-ACh]
  bool v285; // [rsp+58h] [rbp-A8h]
  int v286; // [rsp+5Ch] [rbp-A4h]
  unsigned int v287; // [rsp+5Ch] [rbp-A4h]
  unsigned int v288; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v289; // [rsp+64h] [rbp-9Ch]
  unsigned int v290; // [rsp+68h] [rbp-98h]
  int v291; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *Path; // [rsp+70h] [rbp-90h]
  char v293; // [rsp+78h] [rbp-88h]
  __int64 v294; // [rsp+80h] [rbp-80h] BYREF
  int v295; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v296; // [rsp+90h] [rbp-70h]
  VIDPN_MGR *v297; // [rsp+98h] [rbp-68h]
  __int64 v298; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v299; // [rsp+A8h] [rbp-58h] BYREF
  struct DMMVIDPN *v300; // [rsp+B0h] [rbp-50h]
  struct DMMVIDPN *v301; // [rsp+B8h] [rbp-48h] BYREF
  int v302; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v303; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v304; // [rsp+D0h] [rbp-30h]
  int v305; // [rsp+D4h] [rbp-2Ch]
  struct DMMVIDPNPRESENTPATH *v306; // [rsp+D8h] [rbp-28h]
  void *v307; // [rsp+E0h] [rbp-20h] BYREF
  int *v308; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v309; // [rsp+F0h] [rbp-10h] BYREF
  struct DXGDEVICE *v310; // [rsp+F8h] [rbp-8h]
  void *v311; // [rsp+100h] [rbp+0h]
  __int64 v312; // [rsp+108h] [rbp+8h]
  struct COREDEVICEACCESS *v313; // [rsp+110h] [rbp+10h]
  unsigned __int8 *v314; // [rsp+118h] [rbp+18h]
  _BYTE v315[48]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v316; // [rsp+150h] [rbp+50h]
  unsigned int *v317; // [rsp+158h] [rbp+58h]
  unsigned int *v318; // [rsp+160h] [rbp+60h]
  unsigned int *v319; // [rsp+168h] [rbp+68h]
  struct DXGADAPTER *v320; // [rsp+170h] [rbp+70h]
  __int64 v321; // [rsp+178h] [rbp+78h] BYREF
  int v322; // [rsp+180h] [rbp+80h] BYREF
  __int64 v323; // [rsp+188h] [rbp+88h]
  _BYTE v324[24]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v325[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v326[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v327[24]; // [rsp+1D8h] [rbp+D8h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v328; // [rsp+1F0h] [rbp+F0h] BYREF

  v310 = a1;
  v314 = a7;
  v308 = a8;
  LODWORD(v298) = a3;
  v313 = a9;
  v305 = a3 & 0x10000;
  v285 = (a3 & 0x10000) != 0;
  v293 = 1;
  v283 = 1;
  v317 = a4;
  v318 = a5;
  v319 = a6;
  v311 = 0LL;
  v286 = 0;
  v284 = 0;
  v289 = 0;
  v290 = 0;
  v304 = 0;
  v302 = 0;
  v294 = 0LL;
  v295 = 0;
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
    &v307,
    (unsigned int)a2);
  v16 = v307;
  if ( !v307 )
  {
    v174 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    WdLogEvent5_WdLowResource(v174);
    LODWORD(v29) = -1073741801;
    goto LABEL_56;
  }
  if ( *((_DWORD *)a1 + 70) != 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  v18 = *((_QWORD *)a1 + 354);
  v312 = v18;
  if ( !v18 )
  {
    v175 = WdLogNewEntry5_WdError(v13);
    LODWORD(v29) = -1073741811;
    *(_QWORD *)(v175 + 24) = a1;
    *(_QWORD *)(v175 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v175);
    goto LABEL_56;
  }
  v19 = *(__int64 **)(*((_QWORD *)a1 + 2) + 16LL);
  v320 = (struct DXGADAPTER *)v19;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18)
    || !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v19) )
  {
    v176 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v176);
  }
  ADAPTER_RENDER::FlushScheduler(v19[249], 8, 0xFFFFFFFF, 0);
  v21 = 1;
  ++*(_DWORD *)(*(_QWORD *)(v18 + 1984) + 312LL);
  v297 = *(VIDPN_MGR **)(*(_QWORD *)(v18 + 1984) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v321, (__int64)v297);
  v22 = (VIDPN_MGR **)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v300 = (struct DMMVIDPN *)v22;
  if ( !v22 || v22[6] != v297 )
  {
    v177 = WdLogNewEntry5_WdError(v23);
    LODWORD(v29) = -1073741811;
    *(_QWORD *)(v177 + 24) = a2;
    *(_QWORD *)(v177 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v177);
    goto LABEL_55;
  }
  v301 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             v297,
                                             (__int64 *)&v301);
  v29 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v178 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v178[3] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
    v178[4] = *(unsigned int *)(v18 + 252);
    v178[5] = v29;
    WdLogEvent5_WdError(v178);
    goto LABEL_54;
  }
  v30 = v301;
  v31 = *(_QWORD *)(v18 + 1984);
  v32 = 0;
  LODWORD(v299) = 0;
  v33 = (struct DMMVIDPN *)((char *)v301 + 96);
  v296 = (struct DMMVIDPN *)((char *)v301 + 96);
  if ( *(_DWORD *)(v31 + 104) )
  {
    while ( 1 )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((struct DMMVIDPN *)((char *)v300 + 96), v32, &v309);
      if ( NumPathsFromSource < 0 && (NumPathsFromSource != -1071774919 || v309) )
      {
        v179 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v179);
      }
      v35 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v33, v32, &v303);
      LODWORD(v29) = v35;
      if ( v35 >= 0 )
        goto LABEL_58;
      if ( v35 != -1071774919 )
        break;
      v37 = v303;
      if ( v303 )
        break;
LABEL_17:
      if ( v309 )
      {
        v304 |= v21;
        if ( v309 != v37 )
        {
          v284 |= v21;
          v285 = 1;
        }
        v38 = 0LL;
        while ( 2 )
        {
          v306 = (struct DMMVIDPNPRESENTPATH *)v38;
          LODWORD(v29) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                           (struct DMMVIDPN *)((char *)v300 + 96),
                           v32,
                           v38,
                           &v288);
          if ( (int)v29 < 0 )
          {
            v181 = WdLogNewEntry5_WdAssertion(v39);
            WdLogEvent5_WdAssertion(v181);
          }
          v40 = v288;
          if ( v288 == -1 )
          {
            v33 = v296;
            goto LABEL_42;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v296, v32, v288);
          if ( !Path )
          {
            v284 |= v21;
            v285 = 1;
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v44, v40, v42, v43);
            if ( PathSourceFromTarget != -1 )
            {
              v182 = v311;
              if ( !v311 )
              {
                v183 = operator new[](0x400uLL, 0x4E506456u, PagedPool);
                v311 = v183;
                v182 = v183;
                if ( !v183 )
                {
                  LODWORD(v29) = -1073741801;
                  v192 = (_QWORD *)WdLogNewEntry5_WdLowResource(v185, v184, v186, 0LL);
                  v192[3] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
                  v192[4] = *(unsigned int *)(v18 + 252);
                  v192[5] = -1073741801LL;
                  WdLogEvent5_WdLowResource(v192);
                  goto LABEL_54;
                }
                v187 = v183;
                for ( i = 256LL; i; --i )
                  *v187++ = -1;
                v32 = v299;
              }
              v188 = 0;
              while ( v182[16 * PathSourceFromTarget + v188] != -1 )
              {
                if ( ++v188 >= 0x10 )
                  goto LABEL_195;
              }
              i = PathSourceFromTarget;
              v182[16 * PathSourceFromTarget + v188] = v40;
              v286 |= 1 << PathSourceFromTarget;
LABEL_195:
              if ( v188 >= 0x10 )
              {
                v189 = WdLogNewEntry5_WdAssertion(i);
                WdLogEvent5_WdAssertion(v189);
              }
            }
            goto LABEL_39;
          }
          v47 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v300 + 96), v41, v42);
          if ( !v47 )
          {
            v190 = WdLogNewEntry5_WdAssertion(v45);
            WdLogEvent5_WdAssertion(v190);
            v46 = 0;
          }
          if ( *(_BYTE *)(v18 + 1857) == v46 && *(_BYTE *)(*(_QWORD *)(v18 + 1984) + 157LL) == v46 )
          {
            v49 = v298;
            goto LABEL_166;
          }
          IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*(DXGADAPTER ***)(v18 + 1984), v32);
          v49 = v298;
          v46 = 0;
          if ( IsVidPnSourceOwnerDwm && (*(_BYTE *)(*(_QWORD *)(v18 + 1984) + 157LL) || (v298 & 0x400000) != 0) )
            v50 = 1;
          else
LABEL_166:
            v50 = v46;
          v51 = v284;
          v281 = v50;
          if ( (v21 & v284) == 0 )
          {
            if ( (v49 & 0x4000) == 0 )
            {
              v52 = Path;
              if ( DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path, v47, v50) )
              {
                if ( *((_DWORD *)v52 + 29) == *((_DWORD *)v47 + 29) )
                {
                  if ( *((_BYTE *)v297 + 465)
                    || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 1984), v32) )
                  {
                    v284 |= v21;
                  }
                  else if ( *((_DWORD *)v52 + 26) != *((_DWORD *)v47 + 26)
                         || *((_WORD *)v52 + 54) != *((_WORD *)v47 + 54) )
                  {
                    v302 |= v21;
                  }
                }
                else
                {
                  if ( !v281 )
                  {
                    v191 = WdLogNewEntry5_WdAssertion(v53);
                    WdLogEvent5_WdAssertion(v191);
                  }
                  v289 |= v21;
                }
                goto LABEL_39;
              }
              v51 = v284;
            }
            v284 = v21 | v51;
          }
LABEL_39:
          v38 = (__int64)v306 + 1;
          continue;
        }
      }
      if ( v37 )
        v290 |= v21;
LABEL_42:
      v54 = *(_QWORD *)(v18 + 1984);
      ++v32;
      v21 *= 2;
      LODWORD(v299) = v32;
      if ( v32 >= *(_DWORD *)(v54 + 104) )
        goto LABEL_43;
    }
    v180 = WdLogNewEntry5_WdAssertion(v36);
    WdLogEvent5_WdAssertion(v180);
LABEL_58:
    v37 = v303;
    goto LABEL_17;
  }
LABEL_43:
  v55 = v290;
  v287 = ~v290 & v286;
  if ( (v287 & v284) != v287 )
  {
    v193 = WdLogNewEntry5_WdAssertion(v287);
    WdLogEvent5_WdAssertion(v193);
  }
  v56 = ~v284 & v289;
  v289 = v56;
  if ( (v55 & (unsigned int)v56) != 0 )
  {
    v194 = WdLogNewEntry5_WdAssertion(v56);
    WdLogEvent5_WdAssertion(v194);
    v56 = v289;
  }
  if ( v284 || v55 )
  {
    v57 = 0;
  }
  else
  {
    v57 = 0;
    if ( !(_DWORD)v56 )
    {
      LODWORD(v29) = 0;
      v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v56, v25, v27, v28);
      v59 = v317;
      v58[3] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
      v58[4] = *(unsigned int *)(v18 + 252);
      v60 = v319;
      v58[5] = 0LL;
      v61 = v318;
      *v59 = 0;
      *v61 = 0;
      *v60 = 0;
LABEL_51:
      if ( v302 )
      {
        ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v297, v300);
        v29 = ClientCommittedVidPnRef;
        if ( ClientCommittedVidPnRef < 0 )
        {
          v279 = WdLogNewEntry5_WdError(v278);
          *(_QWORD *)(v279 + 24) = v18;
          *(_QWORD *)(v279 + 32) = v29;
          WdLogEvent5_WdError(v279);
          LODWORD(v29) = 0;
        }
      }
      goto LABEL_52;
    }
  }
  v63 = *(_QWORD *)(v18 + 1984);
  v64 = 1;
  LODWORD(v299) = 1;
  if ( *(_DWORD *)(v63 + 104) )
  {
    v65 = v296;
    do
    {
      if ( (v64 & (unsigned int)v56) != 0 )
      {
        v195 = v300;
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((struct DMMVIDPN *)((char *)v300 + 96), v57, 0LL, &v288) < 0
          || v288 == -1 )
        {
          v197 = WdLogNewEntry5_WdAssertion(v196);
          WdLogEvent5_WdAssertion(v197);
        }
        v306 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v195 + 96), v57, v288);
        v199 = v306;
        if ( !v306 )
        {
          v200 = WdLogNewEntry5_WdAssertion(v198);
          WdLogEvent5_WdAssertion(v200);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v18 + 1984), v57);
        v202 = *((_DWORD *)v199 + 29);
        v203 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)v315 = *(_OWORD *)DisplayModeInfo;
        v204 = *((_OWORD *)DisplayModeInfo + 2);
        *(_OWORD *)&v315[16] = v203;
        *(_QWORD *)&v203 = *((_QWORD *)DisplayModeInfo + 6);
        *(_OWORD *)&v315[32] = v204;
        v316 = v203;
        *(_DWORD *)&v315[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v202);
        updated = VIDPN_MGR::UpdateRotationAllClientVidPnPathsFromSource(v297, v57, v202);
        v29 = updated;
        if ( updated < 0 )
        {
          v220 = (_QWORD *)WdLogNewEntry5_WdError(v206);
          v220[3] = v57;
          v220[4] = v65;
          v220[5] = v29;
          WdLogEvent5_WdError(v220);
          v289 &= ~v64;
          v284 |= v64;
        }
        else
        {
          v207 = 0LL;
          v208 = v306;
          while ( 1 )
          {
            LODWORD(v29) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v65, v57, v207, &v288);
            if ( (int)v29 < 0 )
            {
              v210 = WdLogNewEntry5_WdAssertion(v209);
              WdLogEvent5_WdAssertion(v210);
            }
            if ( v288 == -1 )
              break;
            v212 = DMMVIDPNTOPOLOGY::FindPath(v65, v57, v288);
            if ( !v212 )
            {
              v213 = WdLogNewEntry5_WdAssertion(v211);
              WdLogEvent5_WdAssertion(v213);
            }
            DMMVIDPNPRESENTPATH::PinContentRotation(v212, *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v208 + 29));
            ++v207;
          }
          v18 = v312;
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v312 + 1984), v57, 0);
          ADAPTER_DISPLAY::SetCddDisplayMode(
            *(PERESOURCE ***)(v18 + 1984),
            v57,
            (const struct _D3DKMT_DISPLAYMODE *)v315);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(PERESOURCE ***)(v18 + 1984),
            v57,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v315);
          ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(DXGADAPTER ***)(v18 + 1984), v57, *(int *)&v315[12]);
          OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
            *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v18 + 1984) + 128LL),
            v57,
            0LL,
            0,
            0,
            1);
          v322 = 11;
          v323 = 0LL;
          v217 = DxgkStatusChangeNotify(&v322, v214, v215, v216);
          v64 = v299;
          if ( v217 < 0 )
          {
            v219 = WdLogNewEntry5_WdAssertion(v218);
            *(_QWORD *)(v219 + 24) = 17117LL;
            WdLogEvent5_WdAssertion(v219);
          }
        }
        v221 = *(_DWORD *)(*(_QWORD *)(v18 + 1984) + 312LL);
        CurrentProcess = PsGetCurrentProcess();
        ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
        VIDPN_MGR::CacheDisplayModeChangeRequest(
          (__int64)v297,
          v57,
          (__int64)v315,
          1u,
          v29,
          4,
          v221,
          ProcessImageFileName);
        v308[v57] = v29;
        v56 = v289;
      }
      v66 = *(_QWORD *)(v18 + 1984);
      v64 *= 2;
      ++v57;
      LODWORD(v299) = v64;
    }
    while ( v57 < *(_DWORD *)(v66 + 104) );
    v16 = v307;
    v30 = v301;
  }
  v282 = 0;
  Global = DXGGLOBAL::GetGlobal(v56);
  v68 = *(_QWORD *)(v18 + 1984);
  v69 = 0;
  LODWORD(v306) = *((_DWORD *)Global + 266);
  v70 = 1;
  v291 = 1;
  if ( *(_DWORD *)(v68 + 104) )
  {
    LODWORD(v298) = 0;
    do
    {
      v71 = 0;
      v72 = *(_QWORD *)(v68 + 136);
      Path = (DMMVIDPNPRESENTPATH *)(1016LL * v69);
      if ( *((_BYTE *)Path + v72 + 1000) && *(_QWORD *)(v18 + 1992) )
      {
        v282 = 1;
        v71 = 1;
      }
      if ( !ADAPTER_DISPLAY::IsPrimaryVisible((ADAPTER_DISPLAY *)v68, v69) || !v71 && ((v287 | v284 | v290) & v70) == 0 )
        goto LABEL_69;
      v224 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v18 + 1984), v69, 0LL, 2048, v310, 1u);
      v29 = v224;
      if ( v224 < 0 )
        goto LABEL_254;
      if ( v71 )
      {
        ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*(ADAPTER_DISPLAY **)(v18 + 1984), v69, 1);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v73 = *(ADAPTER_DISPLAY **)(v18 + 1984);
        v75 = Path;
        *(LARGE_INTEGER *)((char *)Path + *((_QWORD *)v73 + 17) + 1008) = PerformanceCounter;
      }
      else
      {
LABEL_69:
        v75 = Path;
      }
      v76 = v284 | v290;
      if ( ((v287 | v284 | v290) & v70) != 0 )
      {
        v73 = *(ADAPTER_DISPLAY **)(v18 + 1984);
        v77 = *(struct DXGDEVICE **)((char *)v75 + *((_QWORD *)v73 + 17) + 672);
        if ( v77 )
          ADAPTER_DISPLAY::DisablePrimaryOnDevice(v73, v77, v69);
      }
      LODWORD(Path) = v290 & v70;
      if ( (v290 & v70) != 0 || *((_BYTE *)v297 + 465) )
      {
        if ( (v76 & v70) == 0 )
        {
          v232 = WdLogNewEntry5_WdAssertion(v73);
          WdLogEvent5_WdAssertion(v232);
        }
        v233 = v296;
        v234 = (char *)v296 + 56;
        if ( !v296 )
          v234 = 0LL;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v326,
          (__int64)v234,
          2u,
          v74,
          v280,
          *((_QWORD *)v296 + 5));
        if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v233, v69) < 0 )
        {
          v236 = WdLogNewEntry5_WdAssertion(v235);
          WdLogEvent5_WdAssertion(v236);
        }
        ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v18 + 1984), v69, 0);
        ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v18 + 1984), v69, &stru_1C0047FD8);
        ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v18 + 1984), v69, 0LL);
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v326);
      }
      else
      {
        if ( (v70 & v287) == 0 )
          goto LABEL_76;
        v226 = v296;
        LODWORD(v299) = 0;
        v227 = (unsigned int *)((char *)v311 + 4 * (unsigned int)v298);
        do
        {
          if ( *v227 == -1 )
            break;
          v228 = (__int64)v226 + 56;
          if ( !v226 )
            v228 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v324, v228, 2u, v74, v280, 1uLL);
          LODWORD(v29) = DMMVIDPNTOPOLOGY::RemovePath(v226, v69, *v227, 0LL);
          if ( (int)v29 < 0 )
          {
            v230 = WdLogNewEntry5_WdAssertion(v229);
            WdLogEvent5_WdAssertion(v230);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v324);
          ++v227;
          LODWORD(v299) = v299 + 1;
        }
        while ( (unsigned int)v299 < 0x10 );
        IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v226, v69);
        v16 = v307;
        v30 = v301;
        v18 = v312;
        v70 = v291;
        if ( IsSourceInTopology )
          goto LABEL_76;
        v287 &= ~v291;
      }
      v237 = (int)Path;
      LODWORD(v294) = v294 & 0xFFFFFF00 | 0x52;
      v295 = *(_DWORD *)(*(_QWORD *)(v18 + 1984) + 312LL);
      BYTE4(v294) = ((((_DWORD)Path == 0) | BYTE4(v294) & 0xFC) ^ (4 * (v305 != 0))) & 4 ^ (((_DWORD)Path == 0) | BYTE4(v294) & 0xFC);
      v238 = VIDPN_MGR::CommitVidPn(
               (__int64)v297,
               v30,
               0LL,
               v69,
               D3DKMDT_MCC_IGNORE,
               (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v294,
               v314,
               0LL);
      v29 = v238;
      if ( v238 < 0 )
      {
LABEL_254:
        v242 = (_QWORD *)WdLogNewEntry5_WdError(v73);
        v242[3] = v69;
        v242[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
        v242[5] = *(unsigned int *)(v18 + 252);
        v242[6] = v29;
        WdLogEvent5_WdError(v242);
        v243 = v69;
        goto LABEL_256;
      }
      if ( v237 || *((_BYTE *)v297 + 465) )
      {
        v239 = ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v18 + 1984), v310, v69);
        v29 = v239;
        if ( v239 < 0 )
        {
          v241 = (_QWORD *)WdLogNewEntry5_WdError(v240);
          v241[3] = v69;
          v241[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
          v241[5] = *(unsigned int *)(v18 + 252);
          v241[6] = v29;
          WdLogEvent5_WdError(v241);
        }
      }
LABEL_76:
      v68 = *(_QWORD *)(v18 + 1984);
      v70 *= 2;
      LODWORD(v298) = v298 + 16;
      ++v69;
      v291 = v70;
    }
    while ( v69 < *(_DWORD *)(v68 + 104) );
  }
  v78 = *(_QWORD *)(v18 + 1984);
  v79 = 0;
  if ( *(_DWORD *)(v78 + 104) )
  {
    v80 = v287;
    while ( (v80 & 1) == 0 )
    {
LABEL_80:
      v78 = *(_QWORD *)(v18 + 1984);
      ++v79;
      v80 >>= 1;
      if ( v79 >= *(_DWORD *)(v78 + 104) )
        goto LABEL_81;
    }
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v78, v79);
    v248 = DisplayedPrimaryAllocation;
    if ( DisplayedPrimaryAllocation )
    {
      LOBYTE(v246) = *((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10;
      if ( (_BYTE)v246 )
        v248 = 0LL;
    }
    while ( 1 )
    {
      if ( !v248 )
      {
        v249 = (_QWORD *)WdLogNewEntry5_WdTrace(v246, v245, v247, 0LL);
        v251 = (unsigned __int64 *)v296;
        v249[3] = v79;
        v252 = (__int64)(v251 + 7);
        v249[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
        v249[5] = *(unsigned int *)(v18 + 252);
        if ( !v251 )
          v252 = 0LL;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v327, v252, 2u, v250, v280, v251[5]);
        if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v251, v79) < 0 )
        {
          v254 = WdLogNewEntry5_WdAssertion(v253);
          WdLogEvent5_WdAssertion(v254);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v327);
      }
      v255 = *(_DWORD *)(*(_QWORD *)(v18 + 1984) + 312LL);
      LODWORD(v294) = ((v294 & 0xF0 | 1) ^ (unsigned __int8)(16 * (5 - (v248 != 0LL)))) & 0xF0 ^ (v294 & 0xFFFFFFF0 | 1);
      v295 = v255;
      BYTE4(v294) = ((BYTE4(v294) & 0xFC | 1) ^ (4 * (v305 != 0))) & 4 ^ (BYTE4(v294) & 0xFC | 1);
      v256 = 0LL;
      if ( *(_QWORD *)(v18 + 1992) && v248 )
        v256 = (void *)*((_QWORD *)v248 + 2);
      v257 = VIDPN_MGR::CommitVidPn(
               (__int64)v297,
               v30,
               v256,
               v79,
               (enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS)((v248 != 0LL) + 1),
               (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v294,
               v314,
               0LL);
      v29 = v257;
      if ( v257 >= 0 )
        goto LABEL_80;
      v259 = (_QWORD *)WdLogNewEntry5_WdError(v258);
      v259[3] = v79;
      v259[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
      v259[5] = *(unsigned int *)(v18 + 252);
      v259[6] = v29;
      WdLogEvent5_WdError(v259);
      if ( !v248 )
        break;
      v248 = 0LL;
    }
    v243 = v79;
LABEL_256:
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1984), v243, 1);
    goto LABEL_135;
  }
LABEL_81:
  v81 = *(_QWORD *)(v18 + 1984);
  v82 = 1;
  v83 = 0;
  v291 = 1;
  if ( *(_DWORD *)(v81 + 104) )
  {
    v84 = 0LL;
    do
    {
      v85 = 0LL;
      Path = 0LL;
      if ( (v82 & v284) != 0 )
      {
        v86 = v296;
        v87 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v296, v83, &v303);
        if ( v87 < 0 )
        {
          if ( v87 == -1071774919 && !v303 )
            goto LABEL_87;
          v260 = WdLogNewEntry5_WdAssertion(v88);
          WdLogEvent5_WdAssertion(v260);
        }
        if ( v303 )
        {
          v171 = (__int64)v86 + 56;
          if ( !v86 )
            v171 = 0LL;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v325, v171, 2u, v89, v280, v303);
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v86, v83) < 0 )
          {
            v261 = WdLogNewEntry5_WdAssertion(v172);
            WdLogEvent5_WdAssertion(v261);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v325);
        }
        while ( 1 )
        {
LABEL_87:
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((struct DMMVIDPN *)((char *)v300 + 96), v83, v84, &v288) < 0 )
          {
            v262 = WdLogNewEntry5_WdAssertion(v90);
            WdLogEvent5_WdAssertion(v262);
          }
          v91 = v288;
          if ( v288 == -1 )
            break;
          if ( !v85 )
          {
            Path = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v300 + 96), v83, v288);
            v85 = Path;
            if ( !Path )
            {
              v263 = WdLogNewEntry5_WdAssertion(v152);
              WdLogEvent5_WdAssertion(v263);
            }
          }
          if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(v300, v91, &v328) < 0 )
          {
            v264 = WdLogNewEntry5_WdAssertion(v153);
            WdLogEvent5_WdAssertion(v264);
          }
          v154 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology((struct _KTHREAD ***)v297, v86, &v328, D3DKMDT_MCC_ENFORCE);
          v29 = v154;
          if ( v154 < 0 )
          {
            v265 = (_QWORD *)WdLogNewEntry5_WdError(v155);
            v265[3] = v83;
            v265[5] = v296;
            v265[4] = v91;
            v265[6] = v29;
            WdLogEvent5_WdError(v265);
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1984), v83, 1);
            j = 0LL;
            goto LABEL_95;
          }
          v86 = v296;
          ++v84;
        }
        for ( j = 0LL; ; ++j )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v86, v83, j, &v288) < 0 )
          {
            v266 = WdLogNewEntry5_WdAssertion(v93);
            WdLogEvent5_WdAssertion(v266);
          }
          v94 = v288;
          if ( v288 == -1 )
          {
            LODWORD(v29) = 0;
            goto LABEL_95;
          }
          if ( (int)DMMVIDPN::SerializeFunctionalPathDrivingTarget(v300, v288, &v328) < 0 )
          {
            v267 = WdLogNewEntry5_WdAssertion(v156);
            WdLogEvent5_WdAssertion(v267);
          }
          v157 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                   (struct _KTHREAD ***)v297,
                   v86,
                   (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v328);
          v29 = v157;
          if ( v157 < 0 )
            break;
          v86 = v296;
        }
        v268 = (_QWORD *)WdLogNewEntry5_WdError(v158);
        v268[3] = v83;
        v268[5] = v296;
        v268[4] = v94;
        v268[6] = v29;
        WdLogEvent5_WdError(v268);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1984), v83, 1);
LABEL_95:
        v95 = Path;
        v96 = *((_QWORD *)Path + 11);
        v97 = *(_QWORD *)(v96 + 104);
        if ( v97 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v97 + 96), 1u);
          v98 = *(_QWORD *)(v96 + 104);
          v30 = v301;
        }
        else
        {
          v98 = 0LL;
        }
        v99 = *((_QWORD *)v95 + 12);
        v298 = v98;
        v100 = *(_QWORD *)(v99 + 104);
        if ( v100 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v100 + 96), 1u);
          v101 = *(_QWORD *)(v99 + 104);
          v30 = v301;
        }
        else
        {
          v101 = 0LL;
        }
        v102 = *(DXGADAPTER ***)(v18 + 1984);
        v299 = v101;
        v103 = ADAPTER_DISPLAY::GetDisplayModeInfo(v102, v83);
        v104 = *(_QWORD *)(v98 + 144);
        v105 = *((_OWORD *)v103 + 1);
        *(_OWORD *)v315 = *(_OWORD *)v103;
        v106 = *((_OWORD *)v103 + 2);
        *(_OWORD *)&v315[16] = v105;
        *(_QWORD *)&v105 = *((_QWORD *)v103 + 6);
        *(_QWORD *)v315 = *(_QWORD *)(v104 + 76);
        LODWORD(v103) = *(_DWORD *)(v104 + 96);
        v107 = *(_QWORD *)(v101 + 144);
        *(_OWORD *)&v315[32] = v106;
        *(_DWORD *)&v315[8] = (_DWORD)v103;
        v316 = v105;
        v108 = DmmMapVSyncFromRationalToInteger(
                 (const struct _D3DDDI_RATIONAL *)(v107 + 92),
                 (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v107 + 120) << 29) >> 29),
                 0LL);
        v109 = *(_QWORD *)(v101 + 144);
        *(_DWORD *)&v315[12] = v108;
        *(_QWORD *)&v315[16] = *(_QWORD *)(v109 + 92);
        v110 = *(_DWORD *)(v109 + 120);
        LODWORD(v109) = *((_DWORD *)Path + 29);
        *(_DWORD *)&v315[24] = v110 << 29 >> 29;
        v111 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v109);
        v113 = *(unsigned int *)(v112 + 112);
        *(_DWORD *)&v315[28] = v111;
        ConvertDMMScalingToGdiScaling(v113, &v315[32], v114, v115);
        if ( (int)v29 < 0 )
        {
          v84 = 0LL;
        }
        else
        {
          v116 = *(_QWORD *)(v98 + 144);
          v117 = *(_QWORD *)(v101 + 144);
          v118 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path + 29));
          v119 = (const struct _D3DDDI_RATIONAL *)(v117 + 92);
          v120 = v310;
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *(PERESOURCE ***)(v18 + 1984),
                             v310,
                             v83,
                             *(_DWORD *)(v116 + 76),
                             *(_DWORD *)(v116 + 80),
                             v121,
                             v119,
                             v118,
                             v313);
          v84 = 0LL;
          v29 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v269 = (_QWORD *)WdLogNewEntry5_WdError(v123);
            v269[3] = v83;
            v269[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
            v269[5] = *(unsigned int *)(v18 + 252);
            v269[6] = v29;
            WdLogEvent5_WdError(v269);
          }
          else
          {
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v18 + 1984), v83);
            v125 = *(_DWORD *)(*(_QWORD *)(v18 + 1984) + 312LL);
            LODWORD(v294) = ((v294 & 0xF0 | 1) ^ (unsigned __int8)(16 * (3 - (j > 1)))) & 0xF0 ^ (v294 & 0xFFFFFFF0 | 1);
            v295 = v125;
            BYTE4(v294) = ((BYTE4(v294) | 3) ^ (4 * (v305 != 0))) & 4 ^ (BYTE4(v294) | 3);
            if ( *(_QWORD *)(v18 + 1992) )
              v126 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
            else
              v126 = 0LL;
            v127 = VIDPN_MGR::CommitVidPn(
                     (__int64)v297,
                     v30,
                     v126,
                     v83,
                     D3DKMDT_MCC_ENFORCE,
                     (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v294,
                     v314,
                     0LL);
            v29 = v127;
            if ( v127 < 0 )
            {
              v270 = (_QWORD *)WdLogNewEntry5_WdError(v128);
              v270[3] = v83;
              v270[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
              v270[5] = *(unsigned int *)(v18 + 252);
              v270[6] = v29;
              WdLogEvent5_WdError(v270);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1984), v83, 1);
              ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v18 + 1984), v120, v83);
            }
            else
            {
              ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v18 + 1984), v83, 1);
              ADAPTER_DISPLAY::SetCddDisplayMode(
                *(PERESOURCE ***)(v18 + 1984),
                v83,
                (const struct _D3DKMT_DISPLAYMODE *)v315);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v18 + 1984),
                v83,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v315);
              ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(DXGADAPTER ***)(v18 + 1984), v83, *(int *)&v315[12]);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1984), v83, 0);
              LODWORD(v29) = 0;
            }
          }
        }
        v129 = *(_DWORD *)(*(_QWORD *)(v18 + 1984) + 312LL);
        v130 = PsGetCurrentProcess();
        v131 = PsGetProcessImageFileName(v130);
        VIDPN_MGR::CacheDisplayModeChangeRequest((__int64)v297, v83, (__int64)v315, 1u, v29, 3, v129, v131);
        v308[v83] = v29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v299, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v298, 0LL);
        v82 = v291;
      }
      v132 = *(_QWORD *)(v18 + 1984);
      v82 *= 2;
      ++v83;
      v291 = v82;
    }
    while ( v83 < *(_DWORD *)(v132 + 104) );
    v16 = v307;
  }
  ADAPTER_DISPLAY::UpdateVidPnTargetList(*(ADAPTER_DISPLAY **)(v18 + 1984));
  v133 = *(_QWORD *)(v18 + 1984);
  v134 = 0;
  v135 = -1;
  v136 = 1;
  v291 = 1;
  if ( *(_DWORD *)(v133 + 104) )
  {
    v137 = v284 | v290;
    LODWORD(Path) = v284 | v290;
    do
    {
      if ( (v137 & v136) != 0 )
      {
        if ( v285 || (v138 = v135 == -1, v135 = v134, !v138) )
          v135 = -3;
      }
      v139 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v296, v134, &v309);
      LODWORD(v29) = v139;
      if ( v139 < 0 )
      {
        if ( v139 == -1071774919 && !v309 )
          goto LABEL_116;
        v271 = WdLogNewEntry5_WdAssertion(v140);
        WdLogEvent5_WdAssertion(v271);
      }
      if ( v309 )
      {
        v159 = v308;
        if ( v308[v134] >= 0 )
        {
          if ( !*(_QWORD *)(v18 + 1992) )
            goto LABEL_158;
          v160 = (unsigned int *)ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v18 + 1984), v134);
          v313 = (struct COREDEVICEACCESS *)v160;
          v161 = v160;
          if ( v160 )
          {
            v162 = v160[1];
            if ( (v162 & 0x10) != 0 )
            {
              v272 = WdLogNewEntry5_WdAssertion(v162);
              WdLogEvent5_WdAssertion(v272);
            }
            memset(v16, 0, 0x840uLL);
            v163 = v313;
            *v16 = v134;
            *((_QWORD *)v16 + 2) = *((_QWORD *)v161 + 2);
            v164 = (_QWORD *)*((_QWORD *)v320 + 249);
            (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)(v164[53] + 8LL) + 208LL))(
              v164[54],
              *((_QWORD *)v163 + 1),
              v16 + 1,
              v16 + 2);
            v16[138] |= 1u;
            v165 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v164[50] + 8LL) + 712LL))(v164[51], v16);
            v29 = v165;
            if ( v165 >= 0 )
            {
              v159 = v308;
LABEL_158:
              if ( v282
                && (v274 = DXGGLOBAL::GetGlobal(v140), (unsigned int)v306 < *((_DWORD *)v274 + 266))
                && *(_BYTE *)(1016LL * v134 + *(_QWORD *)(*(_QWORD *)(v18 + 1984) + 136LL) + 1001)
                || (ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*(ADAPTER_DISPLAY **)(v18 + 1984), v134, 0),
                    LOBYTE(v166) = v166 + 1,
                    v167 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                             *(ADAPTER_DISPLAY **)(v18 + 1984),
                             v134,
                             v166,
                             2048,
                             0LL,
                             v166),
                    v29 = v167,
                    v167 >= 0) )
              {
                if ( *(int *)(v18 + 1656) < 4608 || (*(_DWORD *)(v18 + 1368) & 1) != 0 )
                {
                  ADAPTER_DISPLAY::UpdateGdiGammaRamp(*(ADAPTER_DISPLAY **)(v18 + 1984), v134, 0LL);
                  ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v18 + 1984), v134, 0LL);
                }
              }
              else
              {
                v275 = (_QWORD *)WdLogNewEntry5_WdError(v168);
                v275[3] = v18;
                v275[4] = v134;
                v275[5] = v29;
                WdLogEvent5_WdError(v275);
                ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1984), v134, 1);
                ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v18 + 1984), v310, v134);
                v159[v134] = v29;
              }
              goto LABEL_116;
            }
            v273 = (_QWORD *)WdLogNewEntry5_WdError(v140);
            v273[3] = v18;
            v273[4] = v134;
            v273[5] = v29;
            WdLogEvent5_WdError(v273);
            ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v18 + 1984), v310, v134);
            v308[v134] = v29;
          }
        }
      }
LABEL_116:
      v141 = *(_QWORD *)(v18 + 1984);
      ++v134;
      v136 = 2 * v291;
      v291 *= 2;
      v142 = v134 < *(_DWORD *)(v141 + 104);
      v137 = (int)Path;
    }
    while ( v142 );
  }
  v143 = *(ADAPTER_DISPLAY **)(v18 + 1984);
  v144 = 0;
  if ( *((_DWORD *)v143 + 26) )
  {
    v145 = v320;
    do
      ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(v143, v144++, v145);
    while ( v144 < *((_DWORD *)v143 + 26) );
    v16 = v307;
  }
  if ( v135 != -1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
      *(PERESOURCE ***)(v18 + 1984),
      v135,
      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v294);
  v146 = v304;
  if ( !v304 )
  {
LABEL_134:
    v151 = v289;
    LODWORD(v29) = 0;
    *v317 = v284 | v289;
    *v318 = v151;
    *v319 = v290;
    goto LABEL_135;
  }
  v147 = *(unsigned int *)(*(_QWORD *)(v18 + 1984) + 104LL);
  if ( !(_DWORD)v147 )
    goto LABEL_175;
  v148 = v308;
  v149 = (unsigned int)v147;
  v150 = v293;
  do
  {
    if ( (v146 & 1) == 0 )
      goto LABEL_129;
    if ( *v148 >= 0 )
    {
      v150 = 0;
LABEL_129:
      LOBYTE(v147) = v283;
      goto LABEL_130;
    }
    LOBYTE(v147) = 0;
    LODWORD(v29) = *v148;
    v283 = 0;
LABEL_130:
    v146 >>= 1;
    ++v148;
    --v149;
  }
  while ( v149 );
  v16 = v307;
  v138 = v150 == 0;
  v18 = v312;
  if ( v138 )
  {
    if ( !(_BYTE)v147 )
    {
      v276 = WdLogNewEntry5_WdError(v147);
      *(_QWORD *)(v276 + 24) = v18;
      WdLogEvent5_WdError(v276);
    }
    goto LABEL_134;
  }
LABEL_175:
  v173 = WdLogNewEntry5_WdError(v147);
  *(_QWORD *)(v173 + 32) = (int)v29;
  *(_QWORD *)(v173 + 24) = v18;
  WdLogEvent5_WdError(v173);
LABEL_135:
  if ( (int)v29 >= 0 && v283 )
    goto LABEL_51;
LABEL_52:
  if ( v311 )
    operator delete(v311);
LABEL_54:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v301, 0LL);
LABEL_55:
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v321 + 40));
LABEL_56:
  operator delete(v16);
  return (unsigned int)v29;
}
