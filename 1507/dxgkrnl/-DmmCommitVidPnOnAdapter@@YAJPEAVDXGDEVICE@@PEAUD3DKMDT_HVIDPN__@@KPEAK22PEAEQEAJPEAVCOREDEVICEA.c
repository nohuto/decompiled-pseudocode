/*
 * XREFs of ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000620C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00064DC (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0006528 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00065E0 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006668 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00066BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006930 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00099FC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000ADEC (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C000B738 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000E1A4 (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000E214 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C000E290 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C000E398 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00951B4 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C009BD2C (ConvertDMMScalingToGdiScaling.c)
 *     DxgkStatusChangeNotify @ 0x1C00ACF40 (DxgkStatusChangeNotify.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00B57D8 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6B20 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6BDC (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBA5C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00CD224 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00CEC74 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00CF958 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFA64 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0174978 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edx
  int v25; // r12d
  VIDPN_MGR **v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r15
  struct DMMVIDPN *v36; // rsi
  __int64 v37; // rax
  unsigned int v38; // edi
  DMMVIDPNTOPOLOGY *v39; // r13
  int NumPathsFromSource; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // r13d
  int v52; // edx
  __int64 v53; // r8
  __int64 v54; // r9
  DMMVIDPNTOPOLOGY *v55; // r10
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  char v60; // r11
  struct DMMVIDPNPRESENTPATH *v61; // r15
  bool IsVidPnSourceOwnerDwm; // al
  __int16 v63; // cx
  char v64; // al
  int v65; // r13d
  DMMVIDPNPRESENTPATH *v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned int v74; // r12d
  _QWORD *v75; // rax
  unsigned int *v76; // rdx
  unsigned int *v77; // rcx
  unsigned int *v78; // rax
  __int64 v80; // rax
  int v81; // r13d
  DMMVIDPNTOPOLOGY *v82; // rsi
  __int64 v83; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v85; // rcx
  unsigned int v86; // edi
  int v87; // r13d
  char v88; // r12
  __int64 v89; // rax
  struct DXGDEVICE *v90; // rdx
  ADAPTER_DISPLAY *v91; // rcx
  __int64 v92; // r9
  DMMVIDPNPRESENTPATH *v93; // r8
  __int64 v94; // r8
  ADAPTER_DISPLAY *v95; // rax
  unsigned int v96; // r12d
  unsigned int v97; // r13d
  __int64 v98; // rax
  int v99; // ecx
  unsigned int v100; // r12d
  __int64 v101; // rbx
  DMMVIDPNPRESENTPATH *v102; // r13
  DMMVIDPNTOPOLOGY *v103; // r15
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdi
  unsigned __int64 i; // r13
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdi
  DMMVIDPNPRESENTPATH *v120; // rcx
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdi
  DXGADAPTER **v127; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v128; // rax
  __int64 v129; // rcx
  __int128 v130; // xmm1
  __int128 v131; // xmm0
  __int64 v132; // rcx
  __int64 v133; // r9
  int v134; // eax
  __int64 v135; // rcx
  int v136; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v137; // eax
  __int64 v138; // r10
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // rbx
  __int64 v144; // rdi
  enum _D3DDDI_ROTATION v145; // eax
  const struct _D3DDDI_RATIONAL *v146; // rdx
  struct DXGDEVICE *v147; // rdi
  _D3DDDIFORMAT v148; // r10d
  int CddAllocations; // eax
  __int64 v150; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r8
  int v152; // ecx
  void *v153; // r8
  int v154; // eax
  __int64 v155; // rcx
  int v156; // edi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  unsigned int v161; // esi
  unsigned int v162; // r13d
  int v163; // ecx
  int v164; // eax
  int v165; // eax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rax
  bool v171; // cf
  ADAPTER_DISPLAY *v172; // rsi
  unsigned int v173; // edi
  struct DXGADAPTER *v174; // rbx
  unsigned int v175; // edi
  __int64 v176; // rcx
  int *v177; // rbx
  __int64 v178; // rdx
  char v179; // r14
  bool v180; // zf
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  int v195; // eax
  __int64 v196; // rcx
  int *v197; // rdi
  unsigned int *v198; // rax
  __int64 v199; // rdx
  __int64 v200; // r8
  __int64 v201; // r9
  unsigned int *v202; // rdi
  __int64 v203; // rcx
  struct COREDEVICEACCESS *v204; // rdx
  _QWORD *v205; // rdi
  int v206; // eax
  char v207; // r8
  int v208; // eax
  __int64 v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // r8
  unsigned int PathSourceFromTarget; // r15d
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rax
  _QWORD *v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rax
  _DWORD *v227; // r9
  __int64 v228; // rcx
  _DWORD *v229; // rdi
  __int64 v230; // rdx
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rax
  _QWORD *v234; // rax
  __int64 v235; // rax
  __int64 v236; // rax
  struct DMMVIDPN *v237; // rdi
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  struct DMMVIDPNPRESENTPATH *v247; // rdi
  __int64 v248; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v250; // edi
  __int128 v251; // xmm1
  __int128 v252; // xmm0
  int updated; // eax
  __int64 v254; // rcx
  __int64 v255; // rdi
  struct DMMVIDPNPRESENTPATH *v256; // rbx
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rax
  __int64 v262; // rdx
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  DMMVIDPNPRESENTPATH *v266; // r15
  __int64 v267; // rax
  int v268; // eax
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rax
  _QWORD *v274; // rax
  int v275; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  int v278; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  DMMVIDPNTOPOLOGY *v280; // rbx
  unsigned int *v281; // r12
  __int64 v282; // rdx
  __int64 v283; // rdx
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v287; // rax
  unsigned __int8 IsSourceInTopology; // al
  __int64 v289; // rax
  DMMVIDPNTOPOLOGY *v290; // r15
  char *v291; // rdx
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // rax
  int v297; // r12d
  int v298; // eax
  int v299; // eax
  __int64 v300; // rcx
  _QWORD *v301; // rax
  _QWORD *v302; // rax
  unsigned int v303; // edx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  struct DXGADAPTERALLOCATION *v308; // rdi
  _QWORD *v309; // rax
  __int64 v310; // r8
  __int64 v311; // r9
  unsigned __int64 *v312; // r15
  __int64 v313; // rdx
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 v317; // r9
  __int64 v318; // rax
  int v319; // ecx
  void *v320; // r8
  int v321; // eax
  __int64 v322; // rcx
  _QWORD *v323; // rax
  __int64 v324; // rax
  __int64 v325; // rax
  __int64 v326; // rax
  __int64 v327; // rax
  __int64 v328; // rax
  _QWORD *v329; // rax
  __int64 v330; // rax
  __int64 v331; // rax
  _QWORD *v332; // rax
  _QWORD *v333; // rax
  _QWORD *v334; // rax
  __int64 v335; // rax
  __int64 v336; // rax
  _QWORD *v337; // rax
  struct DXGGLOBAL *v338; // rax
  _QWORD *v339; // rax
  __int64 v340; // rax
  int ClientCommittedVidPnRef; // eax
  __int64 v342; // rcx
  __int64 v343; // rax
  __int64 v344; // [rsp+20h] [rbp-E0h]
  char v345; // [rsp+50h] [rbp-B0h]
  char v346; // [rsp+50h] [rbp-B0h]
  char v347; // [rsp+51h] [rbp-AFh]
  int v348; // [rsp+54h] [rbp-ACh]
  bool v349; // [rsp+58h] [rbp-A8h]
  unsigned int v350; // [rsp+5Ch] [rbp-A4h]
  int v351; // [rsp+60h] [rbp-A0h]
  unsigned int v352; // [rsp+60h] [rbp-A0h]
  unsigned int v353; // [rsp+64h] [rbp-9Ch]
  unsigned int v354; // [rsp+64h] [rbp-9Ch]
  unsigned int v355; // [rsp+68h] [rbp-98h] BYREF
  int v356; // [rsp+6Ch] [rbp-94h]
  char v357; // [rsp+70h] [rbp-90h]
  DMMVIDPNPRESENTPATH *Path; // [rsp+78h] [rbp-88h]
  __int64 v359; // [rsp+80h] [rbp-80h] BYREF
  int v360; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v361; // [rsp+90h] [rbp-70h]
  VIDPN_MGR *v362; // [rsp+98h] [rbp-68h]
  __int64 v363; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v364; // [rsp+A8h] [rbp-58h] BYREF
  struct DMMVIDPN *v365; // [rsp+B0h] [rbp-50h]
  struct DMMVIDPN *v366; // [rsp+B8h] [rbp-48h] BYREF
  int v367; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v368; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v369; // [rsp+D0h] [rbp-30h]
  int v370; // [rsp+D4h] [rbp-2Ch]
  struct DMMVIDPNPRESENTPATH *v371; // [rsp+D8h] [rbp-28h]
  void *v372; // [rsp+E0h] [rbp-20h] BYREF
  int *v373; // [rsp+E8h] [rbp-18h]
  struct DXGDEVICE *v374; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v375; // [rsp+F8h] [rbp-8h] BYREF
  void *v376; // [rsp+100h] [rbp+0h]
  __int64 v377; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v378; // [rsp+110h] [rbp+10h]
  DXGADAPTER *v379; // [rsp+118h] [rbp+18h]
  struct COREDEVICEACCESS *v380; // [rsp+120h] [rbp+20h]
  _BYTE v381[48]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v382; // [rsp+158h] [rbp+58h]
  unsigned int *v383; // [rsp+160h] [rbp+60h]
  unsigned int *v384; // [rsp+168h] [rbp+68h]
  unsigned int *v385; // [rsp+170h] [rbp+70h]
  __int64 v386; // [rsp+178h] [rbp+78h] BYREF
  int v387; // [rsp+180h] [rbp+80h] BYREF
  __int64 v388; // [rsp+188h] [rbp+88h]
  _BYTE v389[24]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v390[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v391[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v392[24]; // [rsp+1D8h] [rbp+D8h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v393; // [rsp+1F0h] [rbp+F0h] BYREF

  v374 = a1;
  v378 = a7;
  v373 = a8;
  LODWORD(v364) = a3;
  v380 = a9;
  v370 = a3 & 0x10000;
  v349 = (a3 & 0x10000) != 0;
  v357 = 1;
  v347 = 1;
  v383 = a4;
  v385 = a5;
  v384 = a6;
  v376 = 0LL;
  v351 = 0;
  v348 = 0;
  v353 = 0;
  v350 = 0;
  v369 = 0;
  v367 = 0;
  v359 = 0LL;
  v360 = 0;
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
    &v372,
    (unsigned int)a2);
  v16 = v372;
  if ( !v372 )
  {
    v219 = WdLogNewEntry5_WdLowResource(v13);
    WdLogEvent5_WdLowResource(v219);
    LODWORD(v35) = -1073741801;
    goto LABEL_63;
  }
  if ( *((_DWORD *)a1 + 70) != 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  v18 = *((_QWORD *)a1 + 2338);
  v377 = v18;
  if ( !v18 )
  {
    v220 = WdLogNewEntry5_WdError(v13);
    LODWORD(v35) = -1073741811;
    *(_QWORD *)(v220 + 24) = a1;
    *(_QWORD *)(v220 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v220);
    goto LABEL_63;
  }
  v19 = *(__int64 **)(*((_QWORD *)a1 + 2) + 16LL);
  v379 = (DXGADAPTER *)v19;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18)
    || !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v19) )
  {
    v221 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    WdLogEvent5_WdAssertion(v221);
  }
  if ( *(_QWORD *)(v18 + 1984) && !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v19) )
    ADAPTER_RENDER::FlushScheduler(v19[248], 8, v24, 0);
  v25 = 1;
  ++*(_DWORD *)(*(_QWORD *)(v18 + 1976) + 240LL);
  v362 = *(VIDPN_MGR **)(*(_QWORD *)(v18 + 1976) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v386, (__int64)v362);
  v26 = (VIDPN_MGR **)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v365 = (struct DMMVIDPN *)v26;
  if ( !v26 || v26[6] != v362 )
  {
    v222 = WdLogNewEntry5_WdError(v27);
    LODWORD(v35) = -1073741811;
    *(_QWORD *)(v222 + 24) = a2;
    *(_QWORD *)(v222 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v222);
    goto LABEL_62;
  }
  v366 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             v362,
                                             (__int64 *)&v366,
                                             v28,
                                             v29);
  v35 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v223 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v223[3] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
    v223[4] = *(unsigned int *)(v18 + 252);
    v223[5] = v35;
    WdLogEvent5_WdError(v223);
    goto LABEL_61;
  }
  v36 = v366;
  v37 = *(_QWORD *)(v18 + 1976);
  v38 = 0;
  LODWORD(v363) = 0;
  v39 = (struct DMMVIDPN *)((char *)v366 + 96);
  v361 = (struct DMMVIDPN *)((char *)v366 + 96);
  if ( *(_DWORD *)(v37 + 80) )
  {
    while ( 1 )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((struct DMMVIDPN *)((char *)v365 + 96), v38, &v375);
      if ( NumPathsFromSource < 0 && (NumPathsFromSource != -1071774919 || v375) )
      {
        v224 = WdLogNewEntry5_WdAssertion(0LL, v41, v42, v43);
        WdLogEvent5_WdAssertion(v224);
      }
      v44 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v39, v38, &v368);
      LODWORD(v35) = v44;
      if ( v44 >= 0 )
        goto LABEL_65;
      if ( v44 != -1071774919 )
        break;
      v47 = v368;
      if ( v368 )
        break;
LABEL_20:
      if ( v375 )
      {
        v369 |= v25;
        if ( v375 != v47 )
        {
          v348 |= v25;
          v349 = 1;
        }
        v48 = 0LL;
        while ( 2 )
        {
          v371 = (struct DMMVIDPNPRESENTPATH *)v48;
          LODWORD(v35) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                           (struct DMMVIDPN *)((char *)v365 + 96),
                           v38,
                           v48,
                           &v355);
          if ( (int)v35 < 0 )
          {
            v226 = WdLogNewEntry5_WdAssertion(v50, v49, v33, v34);
            WdLogEvent5_WdAssertion(v226);
          }
          v51 = v355;
          if ( v355 == -1 )
          {
            v39 = v361;
            v31 = v350;
            goto LABEL_47;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v361, v38, v355);
          if ( !Path )
          {
            v348 |= v25;
            v349 = 1;
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v55, v51, v53, v54);
            if ( PathSourceFromTarget != -1 )
            {
              v227 = v376;
              if ( !v376 )
              {
                v376 = operator new[](0x100uLL, 0x4E506456u, PagedPool);
                v227 = v376;
                if ( !v376 )
                {
                  LODWORD(v35) = -1073741801;
                  v234 = (_QWORD *)WdLogNewEntry5_WdLowResource(v228);
                  v234[3] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
                  v234[4] = *(unsigned int *)(v18 + 252);
                  v234[5] = -1073741801LL;
                  WdLogEvent5_WdLowResource(v234);
                  goto LABEL_61;
                }
                v210 = 64LL;
                v229 = v376;
                while ( v210 )
                {
                  *v229++ = -1;
                  --v210;
                }
                v38 = v363;
              }
              v230 = 0LL;
              while ( v227[4 * PathSourceFromTarget + (unsigned int)v230] != -1 )
              {
                v230 = (unsigned int)(v230 + 1);
                if ( (unsigned int)v230 >= 4 )
                  goto LABEL_203;
              }
              v210 = PathSourceFromTarget;
              v227[4 * PathSourceFromTarget + (unsigned int)v230] = v51;
              v351 |= 1 << PathSourceFromTarget;
LABEL_203:
              if ( (unsigned int)v230 >= 4 )
              {
                v231 = WdLogNewEntry5_WdAssertion(v210, v230, v211, v227);
                WdLogEvent5_WdAssertion(v231);
              }
            }
            goto LABEL_44;
          }
          v61 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v365 + 96), v52, v53);
          if ( !v61 )
          {
            v232 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
            WdLogEvent5_WdAssertion(v232);
            v60 = 0;
          }
          if ( *(_BYTE *)(v18 + 1849) == v60 )
          {
            v63 = v364;
            goto LABEL_34;
          }
          IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*(DXGADAPTER ***)(v18 + 1976), v38);
          v63 = v364;
          v60 = 0;
          if ( IsVidPnSourceOwnerDwm && (*(_BYTE *)(*(_QWORD *)(v18 + 1976) + 133LL) || (v364 & 0x400000) != 0) )
            v64 = 1;
          else
LABEL_34:
            v64 = v60;
          v65 = v348;
          v345 = v64;
          if ( (v25 & v348) == 0 )
          {
            if ( (v63 & 0x4000) == 0 )
            {
              v66 = Path;
              if ( DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path, v61, v64) )
              {
                if ( *((_DWORD *)v66 + 29) == *((_DWORD *)v61 + 29) )
                {
                  if ( *((_BYTE *)v362 + 465)
                    || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v18 + 1976), v38)
                    || *((_QWORD *)v374 + 2338) != *(_QWORD *)(*((_QWORD *)v374 + 2) + 16LL) )
                  {
                    v348 |= v25;
                  }
                  else if ( *((_DWORD *)v66 + 26) != *((_DWORD *)v61 + 26)
                         || *((_WORD *)v66 + 54) != *((_WORD *)v61 + 54) )
                  {
                    v367 |= v25;
                  }
                }
                else
                {
                  if ( !v345 )
                  {
                    v233 = WdLogNewEntry5_WdAssertion(v68, v67, v69, v70);
                    WdLogEvent5_WdAssertion(v233);
                  }
                  v353 |= v25;
                }
                goto LABEL_44;
              }
              v65 = v348;
            }
            v348 = v25 | v65;
          }
LABEL_44:
          v48 = (__int64)v371 + 1;
          continue;
        }
      }
      v31 = v350;
      if ( v47 )
      {
        v31 = v25 | v350;
        v350 |= v25;
      }
LABEL_47:
      if ( *(_QWORD *)(v18 + 1984) && DXGADAPTER::IsDxgmms2(v379) && ((v348 | v353 | (unsigned int)v31) & v25) != 0 )
        ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v71 + 1984), 8, v38, 0);
      v72 = *(_QWORD *)(v18 + 1976);
      ++v38;
      v25 *= 2;
      LODWORD(v363) = v38;
      if ( v38 >= *(_DWORD *)(v72 + 80) )
        goto LABEL_50;
    }
    v225 = WdLogNewEntry5_WdAssertion(v46, v45, v33, v34);
    WdLogEvent5_WdAssertion(v225);
LABEL_65:
    v47 = v368;
    goto LABEL_20;
  }
LABEL_50:
  v352 = ~v350 & v351;
  if ( (v352 & v348) != v352 )
  {
    v235 = WdLogNewEntry5_WdAssertion(v352, v31, v33, v34);
    WdLogEvent5_WdAssertion(v235);
  }
  v73 = ~v348 & v353;
  v354 = v73;
  if ( (v350 & (unsigned int)v73) != 0 )
  {
    v236 = WdLogNewEntry5_WdAssertion(v73, v31, v33, v34);
    WdLogEvent5_WdAssertion(v236);
    v73 = v354;
  }
  if ( v348 || v350 )
  {
    v74 = 0;
  }
  else
  {
    v74 = 0;
    if ( !(_DWORD)v73 )
    {
      LODWORD(v35) = 0;
      v75 = (_QWORD *)WdLogNewEntry5_WdTrace(v73, v31, v33, v34);
      v76 = v383;
      v75[3] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
      v75[4] = *(unsigned int *)(v18 + 252);
      v77 = v384;
      v75[5] = 0LL;
      v78 = v385;
      *v76 = 0;
      *v78 = 0;
      *v77 = 0;
LABEL_58:
      if ( v367 )
      {
        ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v362, v365);
        v35 = ClientCommittedVidPnRef;
        if ( ClientCommittedVidPnRef < 0 )
        {
          v343 = WdLogNewEntry5_WdError(v342);
          *(_QWORD *)(v343 + 24) = v18;
          *(_QWORD *)(v343 + 32) = v35;
          WdLogEvent5_WdError(v343);
          LODWORD(v35) = 0;
        }
      }
      goto LABEL_59;
    }
  }
  v80 = *(_QWORD *)(v18 + 1976);
  v81 = 1;
  LODWORD(v363) = 1;
  if ( *(_DWORD *)(v80 + 80) )
  {
    v82 = v361;
    do
    {
      if ( (v81 & (unsigned int)v73) != 0 )
      {
        v237 = v365;
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((struct DMMVIDPN *)((char *)v365 + 96), v74, 0LL, &v355) < 0
          || v355 == -1 )
        {
          v242 = WdLogNewEntry5_WdAssertion(v239, v238, v240, v241);
          WdLogEvent5_WdAssertion(v242);
        }
        v371 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v237 + 96), v74, v355);
        v247 = v371;
        if ( !v371 )
        {
          v248 = WdLogNewEntry5_WdAssertion(v244, v243, v245, v246);
          WdLogEvent5_WdAssertion(v248);
        }
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v18 + 1976), v74);
        v250 = *((_DWORD *)v247 + 29);
        v251 = *((_OWORD *)DisplayModeInfo + 1);
        *(_OWORD *)v381 = *(_OWORD *)DisplayModeInfo;
        v252 = *((_OWORD *)DisplayModeInfo + 2);
        *(_OWORD *)&v381[16] = v251;
        *(_QWORD *)&v251 = *((_QWORD *)DisplayModeInfo + 6);
        *(_OWORD *)&v381[32] = v252;
        v382 = v251;
        *(_DWORD *)&v381[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v250);
        updated = VIDPN_MGR::UpdateRotationAllClientVidPnPathsFromSource(v362, v74, v250);
        v35 = updated;
        if ( updated < 0 )
        {
          v274 = (_QWORD *)WdLogNewEntry5_WdError(v254);
          v274[3] = v74;
          v274[4] = v82;
          v274[5] = v35;
          WdLogEvent5_WdError(v274);
          v354 &= ~v81;
          v348 |= v81;
        }
        else
        {
          v255 = 0LL;
          v256 = v371;
          while ( 1 )
          {
            LODWORD(v35) = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v82, v74, v255, &v355);
            if ( (int)v35 < 0 )
            {
              v261 = WdLogNewEntry5_WdAssertion(v258, v257, v259, v260);
              WdLogEvent5_WdAssertion(v261);
            }
            if ( v355 == -1 )
              break;
            v266 = DMMVIDPNTOPOLOGY::FindPath(v82, v74, v355);
            if ( !v266 )
            {
              v267 = WdLogNewEntry5_WdAssertion(v263, v262, v264, v265);
              WdLogEvent5_WdAssertion(v267);
            }
            DMMVIDPNPRESENTPATH::PinContentRotation(v266, *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v256 + 29));
            ++v255;
          }
          v18 = v377;
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v377 + 1976), v74, 0);
          ADAPTER_DISPLAY::SetCddDisplayMode(
            *(PERESOURCE ***)(v18 + 1976),
            v74,
            (const struct _D3DKMT_DISPLAYMODE *)v381);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(PERESOURCE ***)(v18 + 1976),
            v74,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v381);
          ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(DXGADAPTER ***)(v18 + 1976), v74, *(int *)&v381[12]);
          OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
            *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v18 + 1976) + 104LL),
            v74,
            0LL,
            0,
            0,
            1);
          v387 = 11;
          v388 = 0LL;
          v268 = DxgkStatusChangeNotify(&v387);
          v81 = v363;
          if ( v268 < 0 )
          {
            v273 = WdLogNewEntry5_WdAssertion(v270, v269, v271, v272);
            *(_QWORD *)(v273 + 24) = 17066LL;
            WdLogEvent5_WdAssertion(v273);
          }
        }
        v275 = *(_DWORD *)(*(_QWORD *)(v18 + 1976) + 240LL);
        CurrentProcess = PsGetCurrentProcess(v270);
        ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
        VIDPN_MGR::CacheDisplayModeChangeRequest(
          (__int64)v362,
          v74,
          (__int64)v381,
          1u,
          v35,
          4,
          v275,
          ProcessImageFileName);
        v373[v74] = v35;
        v73 = v354;
      }
      v83 = *(_QWORD *)(v18 + 1976);
      v81 *= 2;
      ++v74;
      LODWORD(v363) = v81;
    }
    while ( v74 < *(_DWORD *)(v83 + 80) );
    v16 = v372;
    v36 = v366;
  }
  v346 = 0;
  Global = DXGGLOBAL::GetGlobal(v73, 0LL, v33, v34);
  v85 = *(_QWORD *)(v18 + 1976);
  v86 = 0;
  LODWORD(v371) = *((_DWORD *)Global + 224);
  v87 = 1;
  v356 = 1;
  if ( *(_DWORD *)(v85 + 80) )
  {
    LODWORD(v364) = 0;
    while ( 1 )
    {
      v88 = 0;
      v89 = *(_QWORD *)(v85 + 112);
      Path = (DMMVIDPNPRESENTPATH *)(1008LL * v86);
      if ( *((_BYTE *)Path + v89 + 992) && *(_QWORD *)(v18 + 1984) )
      {
        v346 = 1;
        v88 = 1;
      }
      if ( !ADAPTER_DISPLAY::IsPrimaryVisible((ADAPTER_DISPLAY *)v85, v86) || !v88 && ((v352 | v348 | v350) & v87) == 0 )
        goto LABEL_76;
      v278 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v18 + 1976), v86, 0, 0x800u, v374, 1u);
      v35 = v278;
      if ( v278 < 0 )
        goto LABEL_261;
      if ( v88 )
      {
        ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*(ADAPTER_DISPLAY **)(v18 + 1976), v86, 1);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v91 = *(ADAPTER_DISPLAY **)(v18 + 1976);
        v93 = Path;
        v90 = (struct DXGDEVICE *)*((_QWORD *)v91 + 14);
        *(LARGE_INTEGER *)((char *)Path + (_QWORD)v90 + 1000) = PerformanceCounter;
      }
      else
      {
LABEL_76:
        v93 = Path;
      }
      if ( ((v352 | v348 | v350) & v87) == 0 )
        goto LABEL_80;
      v91 = *(ADAPTER_DISPLAY **)(v18 + 1976);
      v90 = *(struct DXGDEVICE **)((char *)v93 + *((_QWORD *)v91 + 14) + 672);
      v94 = 0LL;
      if ( v90 )
        break;
LABEL_81:
      LODWORD(Path) = v350 & v87;
      if ( (v350 & v87) != 0 || *((_BYTE *)v362 + 465) )
      {
        if ( ((v348 | v350) & v87) == 0 )
        {
          v289 = WdLogNewEntry5_WdAssertion(v91, v90, 0LL, v92);
          WdLogEvent5_WdAssertion(v289);
        }
        v290 = v361;
        v291 = (char *)v361 + 56;
        if ( !v361 )
          v291 = 0LL;
        LOBYTE(v94) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v389,
          (__int64)v291,
          v94,
          v92,
          v344,
          *((_QWORD *)v361 + 5));
        if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v290, v86) < 0 )
        {
          v296 = WdLogNewEntry5_WdAssertion(v293, v292, v294, v295);
          WdLogEvent5_WdAssertion(v296);
        }
        ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v18 + 1976), v86, 0);
        ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v18 + 1976), v86, &stru_1C0047F58);
        ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v18 + 1976), v86, 0LL);
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v389);
      }
      else
      {
        if ( (v87 & v352) == 0 )
          goto LABEL_84;
        v280 = v361;
        LODWORD(v363) = 0;
        v281 = (unsigned int *)((char *)v376 + 4 * (unsigned int)v364);
        do
        {
          if ( *v281 == -1 )
            break;
          v282 = (__int64)v280 + 56;
          if ( !v280 )
            v282 = 0LL;
          LOBYTE(v94) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v391, v282, v94, v92, v344, 1uLL);
          LODWORD(v35) = DMMVIDPNTOPOLOGY::RemovePath(v280, v86, *v281, 0LL);
          if ( (int)v35 < 0 )
          {
            v287 = WdLogNewEntry5_WdAssertion(v284, v283, v285, v286);
            WdLogEvent5_WdAssertion(v287);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v391);
          ++v281;
          LODWORD(v363) = v363 + 1;
        }
        while ( (unsigned int)v363 < 4 );
        IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v280, v86);
        v16 = v372;
        v36 = v366;
        v18 = v377;
        v87 = v356;
        if ( IsSourceInTopology )
          goto LABEL_84;
        v352 &= ~v356;
      }
      v297 = (int)Path;
      LODWORD(v359) = v359 & 0xFFFFFF00 | 0x52;
      v360 = *(_DWORD *)(*(_QWORD *)(v18 + 1976) + 240LL);
      BYTE4(v359) = ((((_DWORD)Path == 0) | BYTE4(v359) & 0xFC) ^ (4 * (v370 != 0))) & 4 ^ (((_DWORD)Path == 0) | BYTE4(v359) & 0xFC);
      v298 = VIDPN_MGR::CommitVidPn(
               v362,
               v36,
               0LL,
               v86,
               D3DKMDT_MCC_IGNORE,
               (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v359,
               v378,
               0LL);
      v35 = v298;
      if ( v298 < 0 )
      {
LABEL_261:
        v302 = (_QWORD *)WdLogNewEntry5_WdError(v91);
        v302[3] = v86;
        v302[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
        v302[5] = *(unsigned int *)(v18 + 252);
        v302[6] = v35;
        WdLogEvent5_WdError(v302);
        v303 = v86;
        goto LABEL_263;
      }
      if ( v297 || *((_BYTE *)v362 + 465) )
      {
        v299 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 1976), v374, v86);
        v35 = v299;
        if ( v299 < 0 )
        {
          v301 = (_QWORD *)WdLogNewEntry5_WdError(v300);
          v301[3] = v86;
          v301[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
          v301[5] = *(unsigned int *)(v18 + 252);
          v301[6] = v35;
          WdLogEvent5_WdError(v301);
        }
      }
LABEL_84:
      v85 = *(_QWORD *)(v18 + 1976);
      v87 *= 2;
      LODWORD(v364) = v364 + 4;
      ++v86;
      v356 = v87;
      if ( v86 >= *(_DWORD *)(v85 + 80) )
        goto LABEL_85;
    }
    ADAPTER_DISPLAY::DisablePrimaryOnDevice(v91, v90, v86);
LABEL_80:
    v94 = 0LL;
    goto LABEL_81;
  }
LABEL_85:
  v95 = *(ADAPTER_DISPLAY **)(v18 + 1976);
  v96 = 0;
  if ( *((_DWORD *)v95 + 20) )
  {
    v97 = v352;
    while ( (v97 & 1) == 0 )
    {
LABEL_88:
      v95 = *(ADAPTER_DISPLAY **)(v18 + 1976);
      ++v96;
      v97 >>= 1;
      if ( v96 >= *((_DWORD *)v95 + 20) )
        goto LABEL_89;
    }
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v95, v96);
    v308 = DisplayedPrimaryAllocation;
    if ( DisplayedPrimaryAllocation )
    {
      LOBYTE(v306) = *((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10;
      if ( (_BYTE)v306 )
        v308 = 0LL;
    }
    while ( 1 )
    {
      if ( !v308 )
      {
        v309 = (_QWORD *)WdLogNewEntry5_WdTrace(v306, v305, v307, 0LL);
        v312 = (unsigned __int64 *)v361;
        v309[3] = v96;
        v313 = (__int64)(v312 + 7);
        v309[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
        v309[5] = *(unsigned int *)(v18 + 252);
        if ( !v312 )
          v313 = 0LL;
        LOBYTE(v310) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v392, v313, v310, v311, v344, v312[5]);
        if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v312, v96) < 0 )
        {
          v318 = WdLogNewEntry5_WdAssertion(v315, v314, v316, v317);
          WdLogEvent5_WdAssertion(v318);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v392);
      }
      v319 = *(_DWORD *)(*(_QWORD *)(v18 + 1976) + 240LL);
      LODWORD(v359) = ((v359 & 0xF0 | 1) ^ (unsigned __int8)(16 * (5 - (v308 != 0LL)))) & 0xF0 ^ (v359 & 0xFFFFFFF0 | 1);
      v360 = v319;
      BYTE4(v359) = ((BYTE4(v359) & 0xFC | 1) ^ (4 * (v370 != 0))) & 4 ^ (BYTE4(v359) & 0xFC | 1);
      v320 = 0LL;
      if ( *(_QWORD *)(v18 + 1984) && v308 )
        v320 = (void *)*((_QWORD *)v308 + 2);
      v321 = VIDPN_MGR::CommitVidPn(
               v362,
               v36,
               v320,
               v96,
               (enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS)((v308 != 0LL) + 1),
               (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v359,
               v378,
               0LL);
      v35 = v321;
      if ( v321 >= 0 )
        goto LABEL_88;
      v323 = (_QWORD *)WdLogNewEntry5_WdError(v322);
      v323[3] = v96;
      v323[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
      v323[5] = *(unsigned int *)(v18 + 252);
      v323[6] = v35;
      WdLogEvent5_WdError(v323);
      if ( !v308 )
        break;
      v308 = 0LL;
    }
    v303 = v96;
LABEL_263:
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v303, 1);
    goto LABEL_143;
  }
LABEL_89:
  v98 = *(_QWORD *)(v18 + 1976);
  v99 = 1;
  v100 = 0;
  v356 = 1;
  if ( *(_DWORD *)(v98 + 80) )
  {
    v101 = 0LL;
    do
    {
      v102 = 0LL;
      Path = 0LL;
      if ( (v99 & v348) != 0 )
      {
        v103 = v361;
        v104 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v361, v100, &v368);
        if ( v104 < 0 )
        {
          if ( v104 == -1071774919 && !v368 )
            goto LABEL_95;
          v324 = WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
          WdLogEvent5_WdAssertion(v324);
        }
        if ( v368 )
        {
          v214 = (__int64)v103 + 56;
          if ( !v103 )
            v214 = 0LL;
          LOBYTE(v107) = 2;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v390, v214, v107, v108, v344, v368);
          if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v103, v100) < 0 )
          {
            v325 = WdLogNewEntry5_WdAssertion(v216, v215, v217, v218);
            WdLogEvent5_WdAssertion(v325);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v390);
        }
        while ( 1 )
        {
LABEL_95:
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                      (struct DMMVIDPN *)((char *)v365 + 96),
                      v100,
                      v101,
                      &v355) < 0 )
          {
            v326 = WdLogNewEntry5_WdAssertion(v110, v109, v111, v112);
            WdLogEvent5_WdAssertion(v326);
          }
          v113 = v355;
          if ( v355 == -1 )
            break;
          if ( !v102 )
          {
            Path = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v365 + 96), v100, v355);
            v102 = Path;
            if ( !Path )
            {
              v327 = WdLogNewEntry5_WdAssertion(v182, v181, v183, v184);
              WdLogEvent5_WdAssertion(v327);
            }
          }
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                 v365,
                 v113,
                 (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v393) < 0 )
          {
            v328 = WdLogNewEntry5_WdAssertion(v186, v185, v187, v188);
            WdLogEvent5_WdAssertion(v328);
          }
          v189 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v362, v103, &v393, D3DKMDT_MCC_ENFORCE);
          v35 = v189;
          if ( v189 < 0 )
          {
            v329 = (_QWORD *)WdLogNewEntry5_WdError(v190);
            v329[3] = v100;
            v329[5] = v361;
            v329[4] = v113;
            v329[6] = v35;
            WdLogEvent5_WdError(v329);
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v100, 1);
            i = 0LL;
            goto LABEL_103;
          }
          v103 = v361;
          ++v101;
        }
        for ( i = 0LL; ; ++i )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v103, v100, i, &v355) < 0 )
          {
            v330 = WdLogNewEntry5_WdAssertion(v116, v115, v117, v118);
            WdLogEvent5_WdAssertion(v330);
          }
          v119 = v355;
          if ( v355 == -1 )
          {
            LODWORD(v35) = 0;
            goto LABEL_103;
          }
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                 v365,
                 v355,
                 (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v393) < 0 )
          {
            v331 = WdLogNewEntry5_WdAssertion(v192, v191, v193, v194);
            WdLogEvent5_WdAssertion(v331);
          }
          v195 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                   v362,
                   v103,
                   (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v393);
          v35 = v195;
          if ( v195 < 0 )
            break;
          v103 = v361;
        }
        v332 = (_QWORD *)WdLogNewEntry5_WdError(v196);
        v332[3] = v100;
        v332[5] = v361;
        v332[4] = v119;
        v332[6] = v35;
        WdLogEvent5_WdError(v332);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v100, 1);
LABEL_103:
        v120 = Path;
        v121 = *((_QWORD *)Path + 11);
        v122 = *(_QWORD *)(v121 + 104);
        if ( v122 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v122 + 96), 1u);
          v123 = *(_QWORD *)(v121 + 104);
          v36 = v366;
        }
        else
        {
          v123 = 0LL;
        }
        v124 = *((_QWORD *)v120 + 12);
        v364 = v123;
        v125 = *(_QWORD *)(v124 + 104);
        if ( v125 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v125 + 96), 1u);
          v126 = *(_QWORD *)(v124 + 104);
          v36 = v366;
        }
        else
        {
          v126 = 0LL;
        }
        v127 = *(DXGADAPTER ***)(v18 + 1976);
        v363 = v126;
        v128 = ADAPTER_DISPLAY::GetDisplayModeInfo(v127, v100);
        v129 = *(_QWORD *)(v123 + 144);
        v130 = *((_OWORD *)v128 + 1);
        *(_OWORD *)v381 = *(_OWORD *)v128;
        v131 = *((_OWORD *)v128 + 2);
        *(_OWORD *)&v381[16] = v130;
        *(_QWORD *)&v130 = *((_QWORD *)v128 + 6);
        *(_QWORD *)v381 = *(_QWORD *)(v129 + 76);
        LODWORD(v128) = *(_DWORD *)(v129 + 96);
        v132 = *(_QWORD *)(v126 + 144);
        *(_OWORD *)&v381[32] = v131;
        *(_DWORD *)&v381[8] = (_DWORD)v128;
        v382 = v130;
        v134 = DmmMapVSyncFromRationalToInteger(
                 (const struct _D3DDDI_RATIONAL *)(v132 + 92),
                 (unsigned int)((int)(*(_DWORD *)(v132 + 120) << 29) >> 29),
                 0LL,
                 v133);
        v135 = *(_QWORD *)(v126 + 144);
        *(_DWORD *)&v381[12] = v134;
        *(_QWORD *)&v381[16] = *(_QWORD *)(v135 + 92);
        v136 = *(_DWORD *)(v135 + 120);
        LODWORD(v135) = *((_DWORD *)Path + 29);
        *(_DWORD *)&v381[24] = v136 << 29 >> 29;
        v137 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v135);
        v139 = *(unsigned int *)(v138 + 112);
        *(_DWORD *)&v381[28] = v137;
        ConvertDMMScalingToGdiScaling(v139, &v381[32], v140, v141);
        if ( (int)v35 < 0 )
        {
          v101 = 0LL;
        }
        else
        {
          v143 = *(_QWORD *)(v123 + 144);
          v144 = *(_QWORD *)(v126 + 144);
          v145 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Path + 29));
          v146 = (const struct _D3DDDI_RATIONAL *)(v144 + 92);
          v147 = v374;
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *(ADAPTER_DISPLAY **)(v18 + 1976),
                             v374,
                             v100,
                             *(_DWORD *)(v143 + 76),
                             *(_DWORD *)(v143 + 80),
                             v148,
                             v146,
                             v145,
                             v380);
          v101 = 0LL;
          v35 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v333 = (_QWORD *)WdLogNewEntry5_WdError(v150);
            v333[3] = v100;
            v333[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
            v333[5] = *(unsigned int *)(v18 + 252);
            v333[6] = v35;
            WdLogEvent5_WdError(v333);
          }
          else
          {
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v18 + 1976), v100);
            v152 = *(_DWORD *)(*(_QWORD *)(v18 + 1976) + 240LL);
            LODWORD(v359) = ((v359 & 0xF0 | 1) ^ (unsigned __int8)(16 * (3 - (i > 1)))) & 0xF0 ^ (v359 & 0xFFFFFFF0 | 1);
            v360 = v152;
            BYTE4(v359) = ((BYTE4(v359) | 3) ^ (4 * (v370 != 0))) & 4 ^ (BYTE4(v359) | 3);
            if ( *(_QWORD *)(v18 + 1984) )
              v153 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
            else
              v153 = 0LL;
            v154 = VIDPN_MGR::CommitVidPn(
                     v362,
                     v36,
                     v153,
                     v100,
                     D3DKMDT_MCC_ENFORCE,
                     (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v359,
                     v378,
                     0LL);
            v35 = v154;
            if ( v154 < 0 )
            {
              v334 = (_QWORD *)WdLogNewEntry5_WdError(v155);
              v334[3] = v100;
              v334[4] = (int)HIDWORD(*(_QWORD *)(v18 + 252));
              v334[5] = *(unsigned int *)(v18 + 252);
              v334[6] = v35;
              WdLogEvent5_WdError(v334);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v100, 1);
              ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 1976), v147, v100);
            }
            else
            {
              ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v18 + 1976), v100, 1);
              ADAPTER_DISPLAY::SetCddDisplayMode(
                *(PERESOURCE ***)(v18 + 1976),
                v100,
                (const struct _D3DKMT_DISPLAYMODE *)v381);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v18 + 1976),
                v100,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v381);
              ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(DXGADAPTER ***)(v18 + 1976), v100, *(int *)&v381[12]);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v100, 0);
              LODWORD(v35) = 0;
            }
          }
        }
        v156 = *(_DWORD *)(*(_QWORD *)(v18 + 1976) + 240LL);
        v157 = PsGetCurrentProcess(v142);
        v158 = PsGetProcessImageFileName(v157);
        VIDPN_MGR::CacheDisplayModeChangeRequest((__int64)v362, v100, (__int64)v381, 1u, v35, 3, v156, v158);
        v373[v100] = v35;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v363, 0LL);
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v364, 0LL);
        v99 = v356;
      }
      v159 = *(_QWORD *)(v18 + 1976);
      v99 *= 2;
      ++v100;
      v356 = v99;
    }
    while ( v100 < *(_DWORD *)(v159 + 80) );
    v16 = v372;
  }
  ADAPTER_DISPLAY::UpdateVidPnTargetList(*(ADAPTER_DISPLAY **)(v18 + 1976));
  v160 = *(_QWORD *)(v18 + 1976);
  v161 = 0;
  v162 = -1;
  v163 = 1;
  v356 = 1;
  if ( *(_DWORD *)(v160 + 80) )
  {
    v164 = v348 | v350;
    LODWORD(Path) = v348 | v350;
    do
    {
      if ( (v164 & v163) != 0 )
      {
        if ( v349 || (v180 = v162 == -1, v162 = v161, !v180) )
          v162 = -3;
      }
      v165 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v361, v161, &v375);
      LODWORD(v35) = v165;
      if ( v165 < 0 )
      {
        if ( v165 == -1071774919 && !v375 )
          goto LABEL_124;
        v335 = WdLogNewEntry5_WdAssertion(v167, v166, v168, v169);
        WdLogEvent5_WdAssertion(v335);
      }
      if ( v375 )
      {
        v197 = v373;
        if ( v373[v161] >= 0 )
        {
          if ( !*(_QWORD *)(v18 + 1984) )
            goto LABEL_165;
          v198 = (unsigned int *)ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(ADAPTER_DISPLAY **)(v18 + 1976), v161);
          v380 = (struct COREDEVICEACCESS *)v198;
          v202 = v198;
          if ( v198 )
          {
            v203 = v198[1];
            if ( (v203 & 0x10) != 0 )
            {
              v336 = WdLogNewEntry5_WdAssertion(v203, v199, v200, v201);
              WdLogEvent5_WdAssertion(v336);
            }
            memset(v16, 0, 0x840uLL);
            v204 = v380;
            *v16 = v161;
            *((_QWORD *)v16 + 2) = *((_QWORD *)v202 + 2);
            v205 = (_QWORD *)*((_QWORD *)v379 + 248);
            (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)(v205[50] + 8LL) + 208LL))(
              v205[51],
              *((_QWORD *)v204 + 1),
              v16 + 1,
              v16 + 2);
            v16[138] |= 1u;
            v206 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v205[47] + 8LL) + 712LL))(v205[48], v16);
            v35 = v206;
            if ( v206 >= 0 )
            {
              v197 = v373;
LABEL_165:
              if ( v346
                && (v338 = DXGGLOBAL::GetGlobal(v167, v166, v168, v169), (unsigned int)v371 < *((_DWORD *)v338 + 224))
                && *(_BYTE *)(1008LL * v161 + *(_QWORD *)(*(_QWORD *)(v18 + 1976) + 112LL) + 993)
                || (ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*(ADAPTER_DISPLAY **)(v18 + 1976), v161, 0),
                    v208 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                             *(ADAPTER_DISPLAY **)(v18 + 1976),
                             v161,
                             v207 + 1,
                             0x800u,
                             0LL,
                             v207 + 1),
                    v35 = v208,
                    v208 >= 0) )
              {
                if ( *(int *)(v18 + 1648) < 4608 || (*(_DWORD *)(v18 + 1360) & 1) != 0 )
                {
                  ADAPTER_DISPLAY::UpdateGdiGammaRamp(*(ADAPTER_DISPLAY **)(v18 + 1976), v161, 0LL);
                  ADAPTER_DISPLAY::SetGammaRamp(*(ADAPTER_DISPLAY **)(v18 + 1976), v161, 0LL);
                }
              }
              else
              {
                v339 = (_QWORD *)WdLogNewEntry5_WdError(v209);
                v339[3] = v18;
                v339[4] = v161;
                v339[5] = v35;
                WdLogEvent5_WdError(v339);
                ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v18 + 1976), v161, 1);
                ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 1976), v374, v161);
                v197[v161] = v35;
              }
              goto LABEL_124;
            }
            v337 = (_QWORD *)WdLogNewEntry5_WdError(v167);
            v337[3] = v18;
            v337[4] = v161;
            v337[5] = v35;
            WdLogEvent5_WdError(v337);
            ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v18 + 1976), v374, v161);
            v373[v161] = v35;
          }
        }
      }
LABEL_124:
      v170 = *(_QWORD *)(v18 + 1976);
      ++v161;
      v163 = 2 * v356;
      v356 *= 2;
      v171 = v161 < *(_DWORD *)(v170 + 80);
      v164 = (int)Path;
    }
    while ( v171 );
  }
  v172 = *(ADAPTER_DISPLAY **)(v18 + 1976);
  v173 = 0;
  if ( *((_DWORD *)v172 + 20) )
  {
    v174 = v379;
    do
      ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(v172, v173++, v174);
    while ( v173 < *((_DWORD *)v172 + 20) );
    v16 = v372;
  }
  if ( v162 != -1 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
      *(ADAPTER_DISPLAY **)(v18 + 1976),
      v162,
      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const)&v359);
  v175 = v369;
  if ( !v369 )
  {
LABEL_142:
    LODWORD(v35) = 0;
    *v383 = v348 | v354;
    *v385 = v354;
    *v384 = v350;
    goto LABEL_143;
  }
  v176 = *(unsigned int *)(*(_QWORD *)(v18 + 1976) + 80LL);
  if ( !(_DWORD)v176 )
    goto LABEL_173;
  v177 = v373;
  v178 = (unsigned int)v176;
  v179 = v357;
  do
  {
    if ( (v175 & 1) == 0 )
      goto LABEL_137;
    if ( *v177 >= 0 )
    {
      v179 = 0;
LABEL_137:
      LOBYTE(v176) = v347;
      goto LABEL_138;
    }
    LOBYTE(v176) = 0;
    LODWORD(v35) = *v177;
    v347 = 0;
LABEL_138:
    v175 >>= 1;
    ++v177;
    --v178;
  }
  while ( v178 );
  v16 = v372;
  v180 = v179 == 0;
  v18 = v377;
  if ( v180 )
  {
    if ( !(_BYTE)v176 )
    {
      v340 = WdLogNewEntry5_WdError(v176);
      *(_QWORD *)(v340 + 24) = v18;
      WdLogEvent5_WdError(v340);
    }
    goto LABEL_142;
  }
LABEL_173:
  v213 = WdLogNewEntry5_WdError(v176);
  *(_QWORD *)(v213 + 32) = (int)v35;
  *(_QWORD *)(v213 + 24) = v18;
  WdLogEvent5_WdError(v213);
LABEL_143:
  if ( (int)v35 >= 0 && v347 )
    goto LABEL_58;
LABEL_59:
  if ( v376 )
    operator delete(v376);
LABEL_61:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v366, 0LL);
LABEL_62:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v386 + 40));
LABEL_63:
  operator delete(v16);
  return (unsigned int)v35;
}
