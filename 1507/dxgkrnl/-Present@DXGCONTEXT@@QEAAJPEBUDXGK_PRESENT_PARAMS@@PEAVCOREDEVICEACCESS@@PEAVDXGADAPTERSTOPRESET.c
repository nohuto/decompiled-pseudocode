/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00
 * Callers:
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 * Callees:
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C0001764 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1C0002E9C (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C000B5D0 (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000E1A4 (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000E354 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000E534 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000E574 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000E590 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F4AC (Template_ppxppttqddddddddq.c)
 *     Template_pqpqtt @ 0x1C001F65C (Template_pqpqtt.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C001F718 (Template_ptqDR2DR2DR2DR2.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005AEBC (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C006B7D4 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00B18A0 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00B1D80 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00B2248 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C00B3900 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B3A64 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z @ 0x1C00B3C78 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C00B6E28 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00D147C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00D1554 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C011E418 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C011ED08 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013633C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01472B0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0147990 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0147CAC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0148358 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0159EE4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 Value; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r12d
  int v17; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r13
  unsigned int i; // edi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int128 v28; // rtt
  D3DKMT_HANDLE v29; // esi
  struct _EX_RUNDOWN_REF *v30; // rbx
  struct DXGALLOCATION *v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // edx
  struct DXGALLOCATION *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  D3DKMT_HANDLE v45; // ebx
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // r9d
  unsigned int v50; // ecx
  __int64 v51; // r8
  int v52; // edx
  struct DXGALLOCATION *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 CurrentProcess; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rsi
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v79; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rax
  HDEV v94; // rcx
  D3DKMT_HANDLE v95; // eax
  __int64 v96; // rcx
  _QWORD *v97; // rax
  int v98; // esi
  unsigned int v99; // r13d
  _QWORD *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rcx
  _QWORD *v103; // rcx
  __int64 v104; // r13
  __int64 v105; // rcx
  __int64 v106; // rax
  D3DKMT_HANDLE v107; // eax
  int v108; // eax
  __int64 v109; // rdx
  RECT *p_SrcRect; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  _QWORD *v113; // rax
  unsigned int v114; // ecx
  __int64 v115; // rcx
  LONG v116; // eax
  unsigned int v117; // r10d
  unsigned int v118; // esi
  UINT v119; // ebx
  __int64 v120; // rsi
  __int64 v121; // rcx
  LONG v122; // eax
  __int64 v123; // rcx
  const RECT *v124; // r11
  int v125; // r10d
  __int64 v126; // rdx
  RECT DstRect; // xmm0
  _QWORD *v128; // rax
  __int64 v129; // rcx
  _QWORD *v130; // rax
  UINT v131; // ecx
  _QWORD *v132; // rax
  __int64 v133; // rdx
  LONG v134; // eax
  UINT k; // ebx
  __int64 v136; // rdi
  __int64 v137; // rcx
  __int64 v138; // rsi
  __int64 v139; // rbx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rax
  CWin32kLocks *v143; // rcx
  __int64 v144; // rax
  DXGGLOBAL **v145; // rdi
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v149; // rcx
  _QWORD *v150; // rax
  __int64 v151; // rcx
  _QWORD *v152; // rax
  ULONG_PTR Count; // rax
  __int64 v154; // rax
  _QWORD *v155; // rax
  ULONG_PTR v156; // rcx
  ULONG_PTR v157; // rax
  struct _EX_RUNDOWN_REF *v158; // rdi
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  _QWORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rsi
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v174; // rdi
  int v175; // ecx
  int v176; // ecx
  int v177; // ecx
  UINT v178; // ecx
  UINT v179; // ecx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int v182; // eax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  _QWORD *v187; // rax
  __int64 FlipInterval; // rcx
  __int64 v189; // rdi
  __int64 v190; // rbx
  __int64 v191; // rax
  __int64 v192; // rcx
  __int64 v193; // r8
  int v194; // r9d
  __int64 v195; // rdi
  struct VIDSCH_SUBMIT_DATA_BASE *v196; // rax
  int v197; // ecx
  __int64 v198; // rax
  int v199; // eax
  __int64 v200; // rax
  _QWORD *v201; // rax
  _QWORD *v202; // rax
  DXGDEVICE *v203; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v204; // rbx
  DXGCONTEXT *v205; // rcx
  __int64 v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rbx
  __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rcx
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rcx
  int v216; // ebx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v217; // eax
  int v218; // eax
  struct DXGPRESENTMUTEX *v219; // r8
  __int64 v220; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v222; // rcx
  struct _ERESOURCE *v223; // rcx
  CWin32kLocks *v224; // rdx
  __int64 v225; // rbx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // r8
  __int64 v229; // rax
  int v230; // eax
  struct DXGPRESENTMUTEX *v231; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v232; // rsi
  __int64 v233; // rax
  __int64 v234; // rax
  _QWORD *v235; // rax
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rax
  __int64 v242; // rax
  _QWORD *v243; // rbx
  __int64 v244; // rcx
  __int64 v245; // rax
  __int64 v246; // rsi
  HDEV v247; // rcx
  __int64 v248; // rax
  __int64 v249; // rax
  struct DXGALLOCATION *v250; // rbx
  __int64 v251; // rcx
  __int64 v252; // rax
  _QWORD *v254; // rax
  _QWORD *v255; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v256; // r10d
  __int64 v257; // rax
  _QWORD *v258; // rax
  struct DXGALLOCATION *v259; // rbx
  __int64 v260; // rax
  _QWORD *v261; // rax
  __int64 v262; // rcx
  int v263; // eax
  __int64 v264; // rax
  __int64 v265; // rcx
  __int64 (__fastcall *v266)(__int64, _QWORD); // rax
  __int64 v267; // r8
  __int64 v268; // rdx
  __int64 v269; // rdx
  __int64 v270; // r8
  const RECT *v271; // rsi
  UINT v272; // r13d
  HWND v273; // r11
  UINT v274; // edi
  struct _EX_RUNDOWN_REF *v275; // rbx
  unsigned int v276; // r11d
  __int64 v277; // r9
  __int64 v278; // rcx
  const RECT *v279; // rcx
  __int64 v280; // rcx
  __int64 v281; // rax
  __int64 v282; // r13
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // r8
  int v286; // r9d
  HDEV v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // r13
  __int64 v293; // rax
  __int64 v294; // rcx
  __int64 v295; // r8
  int v296; // r9d
  struct DXGALLOCATION *v297; // rax
  __int64 v298; // rbx
  __int64 v299; // rdi
  __int64 v300; // rcx
  ULONG BroadcastContextCount; // eax
  D3DKMT_HANDLE *BroadcastContext; // r14
  D3DKMT_HANDLE *v303; // rax
  __int128 v304; // xmm0
  int v305; // eax
  __int64 v306; // rcx
  __int64 v307; // rax
  __int64 v308; // rax
  _QWORD *v309; // rax
  __int64 v310; // rcx
  DXGDEVICE *v311; // rcx
  int v312; // eax
  __int64 v313; // r8
  struct DXGALLOCATION *v314; // rbx
  struct DXGALLOCATION *v315; // rdi
  unsigned int v316; // edx
  _QWORD *v317; // rax
  __int128 v318; // xmm0
  __int64 v319; // rax
  int v320; // eax
  __int64 v321; // rcx
  __int64 v322; // rsi
  _QWORD *v323; // rax
  int v324; // edx
  D3DDDIFORMAT Format; // ecx
  _QWORD *v326; // rax
  _QWORD *v327; // rax
  D3DKMT_PRESENT_MODEL Model; // eax
  __int64 v329; // rdi
  __int64 v330; // rax
  __int64 v331; // rdx
  __int64 v332; // r8
  __int64 v333; // rax
  unsigned int ProcessSessionId; // eax
  unsigned int v335; // r13d
  __int64 v336; // rdx
  DXGGLOBAL **v337; // rcx
  __int64 v338; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v339; // rbx
  __int64 v340; // r9
  __int64 v341; // rax
  __int64 v342; // rax
  COREACCESS *v343; // rdi
  _QWORD *v344; // rax
  struct _KTHREAD **v345; // rcx
  HANDLE PresentLimitSemaphore; // rcx
  NTSTATUS v347; // eax
  PVOID v348; // rbx
  int v349; // eax
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 v352; // r8
  __int64 v353; // r9
  __int64 v354; // rax
  __int64 v355; // rax
  DXGGLOBAL **v356; // rbx
  _QWORD *v357; // rax
  __int64 v358; // rcx
  __int64 v359; // rbx
  __int64 v360; // rax
  __int64 v361; // rdx
  __int64 v362; // r8
  __int64 v363; // r9
  __int64 v364; // rsi
  __int64 v365; // rax
  struct DXGGLOBAL *v366; // rcx
  __int64 v367; // rax
  __int64 v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // rax
  _QWORD *v374; // rax
  PERESOURCE *v375; // rbx
  D3DKMT_HANDLE Reserved; // ebx
  __int64 v377; // rdx
  __int64 v378; // r8
  unsigned int v379; // ecx
  __int64 v380; // r8
  int v381; // edx
  __int64 v382; // rbx
  __int64 v383; // rdx
  __int64 v384; // rcx
  __int64 v385; // r8
  __int64 v386; // r9
  UINT64 FenceValue; // rdi
  __int64 v388; // rax
  _QWORD *v389; // rax
  _QWORD *v390; // rax
  __int64 v391; // rdx
  __int64 v392; // rax
  unsigned int v393; // eax
  __int64 v394; // rax
  __int64 v395; // rcx
  __int64 v396; // rax
  __int64 v397; // rax
  unsigned int j; // r13d
  bool v399; // di
  __int64 v400; // rbx
  __int64 v401; // r8
  __int64 v402; // rdi
  __int64 v403; // rax
  __int64 v404; // rax
  __int64 v405; // rdx
  __int64 v406; // rcx
  __int64 v407; // r8
  __int64 v408; // r9
  __int64 v409; // rax
  __int64 v410; // rcx
  __int64 v411; // rax
  __int64 v412; // rax
  __int64 v413; // rax
  struct _KTHREAD *v414; // rcx
  __int64 v415; // rax
  int v416; // eax
  __int64 v417; // rax
  __int64 v418; // rax
  int v419; // eax
  __int64 v420; // rax
  BOOL v421; // ebx
  __int64 v422; // rcx
  DXGGLOBAL **CurrentThreadId; // rax
  __int64 v424; // rcx
  int v425; // eax
  struct DXGPRESENTMUTEX *v426; // r8
  __int64 v427; // r9
  __int64 v428; // rdx
  DXGGLOBAL **hWindow; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v430; // rbx
  __int64 v431; // r9
  __int64 v432; // rax
  __int64 v433; // rax
  COREACCESS *v434; // r13
  _QWORD *v435; // rax
  struct _KTHREAD **v436; // rcx
  __int64 v437; // rdx
  __int64 v438; // r8
  __int64 v439; // r9
  __int64 v440; // rcx
  __int64 v441; // rax
  __int64 v442; // rbx
  __int64 v443; // rax
  __int64 v444; // rcx
  HDC v445; // r13
  const struct DXGDEVICE *v446; // rax
  HDC v447; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v448; // rbx
  int v449; // eax
  __int64 v450; // rbx
  __int64 v451; // rax
  unsigned __int8 v452; // r13
  int v453; // ebx
  struct DXGPRESENTMUTEX *v454; // r8
  int v455; // ecx
  __int64 v456; // rcx
  __int64 v457; // rax
  __int64 v458; // rcx
  __int64 v459; // rax
  __int64 v460; // rcx
  __int64 v461; // rax
  __int128 *v462; // r13
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v463; // eax
  __int64 v464; // rcx
  unsigned int v465; // r13d
  __int64 v466; // rax
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  int right; // eax
  __int64 v471; // rcx
  __int64 v472; // rax
  __int64 v473; // rax
  struct tagRECT *DdiSubRectList; // rax
  __int64 v475; // rdx
  __int64 v476; // r8
  __int64 v477; // r9
  __int64 SubRectCnt; // rcx
  int v479; // ebx
  __int64 v480; // rdx
  __int64 v481; // r8
  const RECT *pDstSubRects; // rsi
  UINT v483; // r13d
  HWND v484; // r9
  UINT v485; // ebx
  struct _EX_RUNDOWN_REF *v486; // rdi
  unsigned int v487; // r11d
  __int64 v488; // r9
  __int64 v489; // rcx
  const RECT *v490; // rcx
  int v491; // eax
  DXGDEVICE *v492; // rbx
  unsigned __int8 v493; // r13
  char v494; // bl
  __int64 v495; // rcx
  __int64 v496; // rax
  __int64 v497; // rax
  __int64 v498; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v499; // rdi
  int v500; // eax
  __int64 v501; // rdx
  __int64 v502; // rcx
  __int64 v503; // r8
  __int64 v504; // r9
  D3DKMT_HANDLE v505; // ebx
  __int64 v506; // rax
  __int64 v507; // rdx
  __int64 v508; // rcx
  __int64 v509; // r8
  __int64 v510; // r9
  __int64 v511; // rax
  __int64 v512; // rax
  int v513; // eax
  CWin32kLocks *v514; // r13
  __int64 v515; // rdx
  __int64 v516; // rax
  DXGDEVICE *v517; // rcx
  __int64 v518; // rax
  DXGDEVICE *v519; // rbx
  unsigned __int8 v520; // si
  char v521; // bl
  __int64 v522; // rdx
  __int64 v523; // rcx
  __int64 v524; // r8
  __int64 v525; // r9
  __int64 v526; // rax
  CWin32kLocks *v527; // rbx
  __int64 v528; // rdi
  int v529; // eax
  int v530; // eax
  __int64 v531; // rcx
  __int64 v532; // rax
  int v533; // eax
  __int64 v534; // rdx
  __int64 v535; // rcx
  __int64 v536; // r9
  __int64 v537; // rax
  HDC v538; // rdi
  __int64 v539; // rbx
  __int64 v540; // rax
  __int64 v541; // rdx
  __int64 v542; // rax
  __int64 v543; // rax
  __int64 v544; // rbx
  __int64 v545; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v546; // rdi
  __int64 v547; // r9
  __int64 v548; // r13
  __int64 v549; // rax
  COREACCESS *v550; // rdi
  _QWORD *v551; // rax
  struct _KTHREAD **v552; // rcx
  __int64 v553; // r8
  __int64 v554; // r9
  __int64 v555; // rax
  __int64 v556; // rdx
  __int64 v557; // rcx
  __int64 v558; // r8
  __int64 v559; // r9
  DXGADAPTERSTOPRESETLOCKSHARED *v560; // r13
  __int64 v561; // rax
  __int64 v562; // rbx
  struct COREDEVICEACCESS *v563; // r13
  struct DXGALLOCATION *v564; // rbx
  unsigned int v565; // ecx
  __int64 v566; // rax
  __int64 v567; // rdi
  unsigned int v568; // eax
  __int64 v569; // rcx
  const RECT *v570; // rcx
  int CurrentOrientation; // eax
  __int128 *v572; // r8
  _DWORD *v573; // rdx
  __int64 v574; // rdx
  __int64 v575; // r8
  const RECT *v576; // rsi
  UINT v577; // r13d
  HWND v578; // r9
  UINT v579; // edi
  struct _EX_RUNDOWN_REF *v580; // rbx
  unsigned int v581; // r11d
  __int64 v582; // r9
  __int64 v583; // rcx
  const RECT *v584; // rcx
  struct DXGCONTEXT **v585; // r9
  int v586; // eax
  UINT v587; // edx
  __int64 v588; // rcx
  PVOID *Object; // [rsp+20h] [rbp-100h]
  PVOID *Objecta; // [rsp+20h] [rbp-100h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F8h]
  int v593; // [rsp+40h] [rbp-E0h]
  int v594; // [rsp+48h] [rbp-D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v595; // [rsp+50h] [rbp-D0h]
  signed int v596; // [rsp+A0h] [rbp-80h]
  signed int v597; // [rsp+A0h] [rbp-80h]
  unsigned int v598; // [rsp+A0h] [rbp-80h]
  unsigned int v599; // [rsp+A0h] [rbp-80h]
  unsigned int v600; // [rsp+A0h] [rbp-80h]
  COREDEVICEACCESS *v601; // [rsp+A8h] [rbp-78h]
  int v602; // [rsp+B0h] [rbp-70h]
  signed int v603; // [rsp+B0h] [rbp-70h]
  struct DXGALLOCATION *v604; // [rsp+B8h] [rbp-68h] BYREF
  enum _D3DDDIFORMAT v605; // [rsp+C0h] [rbp-60h]
  unsigned int v606[2]; // [rsp+C8h] [rbp-58h]
  unsigned int hSource; // [rsp+D0h] [rbp-50h]
  DXGADAPTERSTOPRESETLOCKSHARED *v608; // [rsp+D8h] [rbp-48h]
  bool v609; // [rsp+E0h] [rbp-40h]
  unsigned int v610; // [rsp+E4h] [rbp-3Ch] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v611; // [rsp+E8h] [rbp-38h]
  CWin32kLocks *v612; // [rsp+F0h] [rbp-30h]
  __int64 v613; // [rsp+F8h] [rbp-28h]
  struct DXGALLOCATION *v614; // [rsp+100h] [rbp-20h] BYREF
  HDEV v615; // [rsp+108h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v616; // [rsp+110h] [rbp-10h] BYREF
  DXGGLOBAL **CurrentIrql; // [rsp+118h] [rbp-8h]
  D3DKMT_HANDLE v618; // [rsp+120h] [rbp+0h]
  char v619[8]; // [rsp+128h] [rbp+8h] BYREF
  __int64 v620; // [rsp+130h] [rbp+10h]
  char v621; // [rsp+138h] [rbp+18h]
  __int128 *v622; // [rsp+140h] [rbp+20h] BYREF
  PERESOURCE *v623; // [rsp+148h] [rbp+28h] BYREF
  char v624; // [rsp+150h] [rbp+30h]
  struct DXGCONTEXT **v625; // [rsp+158h] [rbp+38h]
  __int64 v626; // [rsp+160h] [rbp+40h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+168h] [rbp+48h] BYREF
  char v628[8]; // [rsp+170h] [rbp+50h] BYREF
  __int64 v629; // [rsp+178h] [rbp+58h] BYREF
  __int64 v630; // [rsp+180h] [rbp+60h]
  __int64 v631; // [rsp+188h] [rbp+68h]
  __int64 v632; // [rsp+190h] [rbp+70h]
  __int64 v633; // [rsp+198h] [rbp+78h]
  __int64 v634; // [rsp+1A0h] [rbp+80h]
  char v635[8]; // [rsp+1A8h] [rbp+88h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v636; // [rsp+1B0h] [rbp+90h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v637; // [rsp+1E0h] [rbp+C0h] BYREF
  __int64 v638; // [rsp+210h] [rbp+F0h] BYREF
  PVOID v639; // [rsp+218h] [rbp+F8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+220h] [rbp+100h] BYREF
  _D3DKMT_LOCK v641; // [rsp+228h] [rbp+108h] BYREF
  _D3DKMT_UNLOCK v642; // [rsp+258h] [rbp+138h] BYREF
  _BYTE v643[24]; // [rsp+268h] [rbp+148h] BYREF
  _BYTE v644[24]; // [rsp+280h] [rbp+160h] BYREF
  __int128 v645; // [rsp+298h] [rbp+178h]
  _QWORD v646[68]; // [rsp+2D0h] [rbp+1B0h] BYREF
  struct _DXGKARG_PRESENT v647; // [rsp+4F0h] [rbp+3D0h] BYREF
  __int128 v648; // [rsp+5A0h] [rbp+480h] BYREF
  struct tagRECT Source1; // [rsp+5B0h] [rbp+490h] BYREF
  struct tagRECT v650; // [rsp+5C0h] [rbp+4A0h] BYREF
  __int128 v651; // [rsp+5D0h] [rbp+4B0h] BYREF
  _D3DKMT_OUTPUTDUPLPRESENT v652; // [rsp+5E0h] [rbp+4C0h] BYREF
  _BYTE v654[64]; // [rsp+720h] [rbp+600h] BYREF
  _BYTE v655[64]; // [rsp+760h] [rbp+640h] BYREF
  _BYTE v656[64]; // [rsp+7A0h] [rbp+680h] BYREF
  _BYTE v657[64]; // [rsp+7E0h] [rbp+6C0h] BYREF
  _BYTE v658[64]; // [rsp+820h] [rbp+700h] BYREF
  _BYTE v659[64]; // [rsp+860h] [rbp+740h] BYREF
  _BYTE v660[64]; // [rsp+8A0h] [rbp+780h] BYREF
  _BYTE v661[64]; // [rsp+8E0h] [rbp+7C0h] BYREF
  _BYTE v662[64]; // [rsp+920h] [rbp+800h] BYREF
  _BYTE v663[64]; // [rsp+960h] [rbp+840h] BYREF
  _BYTE v664[64]; // [rsp+9A0h] [rbp+880h] BYREF
  _BYTE v665[64]; // [rsp+9E0h] [rbp+8C0h] BYREF

  v612 = a5;
  v625 = a6;
  v9 = *((_QWORD *)this + 2);
  v608 = a4;
  v601 = a3;
  v611 = a7;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 128)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 2389LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 2390LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Value = a2->Flags.Value;
  if ( (Value & 0x4000) != 0
    || (Value &= 0x12000u,
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
        v613 = *(_QWORD *)(v10 + 80),
        (_DWORD)Value == 73728) )
  {
    v14 = WdLogNewEntry5_WdWarning(v10, Value, a3, a4);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)v15;
  }
  v16 = 0;
  memset(&v647, 0, sizeof(v647));
  v17 = *(_DWORD *)a7 | 0x20040;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v17;
  v19 = (a2->Flags.Value & 0x10000) == 0;
  v610 = hDestination;
  if ( v19 )
    *(_DWORD *)a7 = v17 | 1;
  v20 = *(_DWORD *)a7 | 0x200;
  *(_DWORD *)a7 = v20;
  *(_DWORD *)a7 = v20 ^ (v20 ^ (a2->Flags.Value << 6)) & 0x40000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  v21 = *((_QWORD *)this + 2);
  v22 = *(_QWORD *)(v21 + 18704);
  v23 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( v22 == v23 )
  {
    Value = *(_QWORD *)(v22 + 1976);
    if ( *(_BYTE *)(Value + 256) )
    {
      for ( i = 0; i < *(_DWORD *)(Value + 80); ++i )
      {
        v25 = 1008LL * i;
        v26 = *(_QWORD *)(Value + 112);
        if ( *(_BYTE *)(v25 + v26 + 992) )
        {
          if ( *(_BYTE *)(v25 + v26 + 993) )
          {
            v27 = *(_QWORD *)(v25 + v26 + 1000);
            v28 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v27);
            if ( (__int64)(v28 / PerformanceFrequency.QuadPart) > 1250 )
            {
              ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*(ADAPTER_DISPLAY **)(v22 + 1976), i, 0);
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 1984) + 376LL) + 8LL)
                                                     + 776LL))(
                *(_QWORD *)(*(_QWORD *)(v23 + 1984) + 384LL),
                i);
            }
          }
        }
        Value = *(_QWORD *)(v22 + 1976);
      }
    }
  }
  else
  {
    *((_DWORD *)a7 + 29) = 0;
  }
  v29 = a2->hDestination;
  v30 = 0LL;
  v604 = 0LL;
  v31 = 0LL;
  v606[0] = 0;
  v602 = 0;
  v605 = D3DDDIFMT_UNKNOWN;
  v614 = 0LL;
  v626 = 0LL;
  v618 = 0;
  if ( v29 )
  {
    v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v32 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v35 = *(_DWORD *)(v32 + 208);
        if ( v35 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v33, &EventBlockThread, v34, v35);
      }
      ExAcquirePushLockSharedEx(v32 + 192, 0LL);
    }
    v36 = (v29 >> 6) & 0xFFFFFF;
    if ( v36 < *(_DWORD *)(v32 + 232)
      && (v37 = *(_QWORD *)(v32 + 216),
          v38 = *(_DWORD *)(v37 + 16LL * v36 + 8),
          ((v29 >> 26) & 0x30) == (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0x30))
      && (v38 & 0x1000) == 0
      && (v38 & 0xF) != 0
      && (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0xF) == 5 )
    {
      v39 = *(struct DXGALLOCATION **)(v37 + 16LL * v36);
    }
    else
    {
      v39 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v628, v39);
    ExReleasePushLockSharedEx(v32 + 192, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v614, v628);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v628);
    v31 = v614;
    if ( !v614 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, a3, a4);
      LODWORD(v15) = -1073741811;
      v42[3] = -1073741811LL;
      v42[4] = this;
      v42[5] = a2->hDestination;
      WdLogEvent5_WdWarning(v42);
      goto LABEL_877;
    }
    Value = *(_QWORD *)(*((_QWORD *)v614 + 1) + 16LL);
    v43 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_QWORD *)(Value + 16) != *(_QWORD *)(v43 + 16) )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      LODWORD(v15) = -1073741811;
      v44[3] = *((_QWORD *)this + 2);
      v44[4] = v31;
      v44[5] = -1073741811LL;
      WdLogEvent5_WdError(v44);
      goto LABEL_877;
    }
  }
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v45 = a2->hSource;
    v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v46 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v49 = *(_DWORD *)(v46 + 208);
        if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v47, &EventBlockThread, v48, v49);
      }
      ExAcquirePushLockSharedEx(v46 + 192, 0LL);
    }
    v50 = (v45 >> 6) & 0xFFFFFF;
    if ( v50 < *(_DWORD *)(v46 + 232)
      && (v51 = *(_QWORD *)(v46 + 216),
          v52 = *(_DWORD *)(v51 + 16LL * v50 + 8),
          ((v45 >> 26) & 0x30) == (*(_BYTE *)(v51 + 16LL * v50 + 8) & 0x30))
      && (v52 & 0x1000) == 0
      && (v52 & 0xF) != 0
      && (*(_BYTE *)(v51 + 16LL * v50 + 8) & 0xF) == 5 )
    {
      v53 = *(struct DXGALLOCATION **)(v51 + 16LL * v50);
    }
    else
    {
      v53 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v635, v53);
    ExReleasePushLockSharedEx(v46 + 192, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v604, v635);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v635);
    v30 = (struct _EX_RUNDOWN_REF *)v604;
    if ( !v604 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, a3, a4);
      LODWORD(v15) = -1073741811;
      v56[3] = -1073741811LL;
      v56[4] = this;
      v56[5] = a2->hSource;
      WdLogEvent5_WdWarning(v56);
      goto LABEL_877;
    }
    v629 = 0LL;
    v630 = 0LL;
    v631 = 0LL;
    v632 = 0LL;
    v633 = 0LL;
    v634 = 0LL;
    v615 = (HDEV)((char *)v604 + 48);
    v629 = *(_QWORD *)(*((_QWORD *)v604 + 6) + 16LL);
    if ( (a2->Flags.Value & 0x10000000) != 0 )
    {
      Value = HIDWORD(a2[1].hWindow);
      LODWORD(v630) = Value;
      HIDWORD(v630) = a2[1].VidPnSourceId;
      v605 = a2[1].hSource;
      LODWORD(v631) = v605;
      v606[0] = Value;
      v602 = HIDWORD(v630);
      goto LABEL_110;
    }
    v57 = *((_QWORD *)v604 + 1);
    *(_QWORD *)v606 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v58 = *(_QWORD *)(v57 + 16);
    if ( *(_QWORD *)(v58 + 16) != *(_QWORD *)(*(_QWORD *)v606 + 16LL) )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v58);
      LODWORD(v15) = -1073741811;
      v59[3] = *((_QWORD *)this + 2);
      v59[4] = v30;
      v59[5] = -1073741811LL;
      WdLogEvent5_WdError(v59);
      goto LABEL_877;
    }
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v58, &EventProfilerEnter, (__int64)a3, 5003);
    CurrentProcess = PsGetCurrentProcess();
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( ProcessWin32Process )
    {
      v66 = *(_QWORD *)(ProcessWin32Process + 248);
      if ( v66 )
      {
        v67 = v66 + 96;
        goto LABEL_68;
      }
    }
    else
    {
      v68 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v68 + 24) = CurrentProcess;
      WdLogEvent5_WdEvent(v68);
      v66 = 0LL;
    }
    v67 = 0LL;
LABEL_68:
    v605 = D3DDDIFMT_UNKNOWN;
    if ( v67 )
    {
      if ( *(struct _KTHREAD **)(v67 + 8) == KeGetCurrentThread() )
      {
        v69 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
        *(_QWORD *)(v69 + 24) = 1135LL;
        WdLogEvent5_WdAssertion(v69);
      }
      v31 = v614;
      v30 = (struct _EX_RUNDOWN_REF *)v604;
    }
    if ( v66 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v67, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v72 = *(_DWORD *)(v67 + 16);
          if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v70, &EventBlockThread, v71, v72);
        }
        ExAcquirePushLockExclusiveEx(v67, 0LL);
      }
      v30 = (struct _EX_RUNDOWN_REF *)v604;
      v31 = v614;
      *(_QWORD *)(v67 + 8) = KeGetCurrentThread();
      v605 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(*(_QWORD *)v606 + 16LL), 1);
    CurrentIrql = (DXGGLOBAL **)KeGetCurrentIrql();
    v77 = 0LL;
    if ( (unsigned __int8)CurrentIrql >= 2u )
      goto LABEL_91;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v79 = WdLogNewEntry5_WdAssertion(v74, v73, v75, v76);
      *(_QWORD *)(v79 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v79);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v74, v73, v75, v76);
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread && *(_QWORD *)ThreadWin32Thread )
      {
        v77 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        v30 = (struct _EX_RUNDOWN_REF *)v604;
        v31 = v614;
        if ( v77 )
        {
          v596 = *(_DWORD *)(v77 + 136);
          goto LABEL_92;
        }
LABEL_91:
        v596 = 0;
LABEL_92:
        v603 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)v606 + 16LL) + 328LL))(
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v606 + 16LL) + 224LL),
                 &v629);
        v85 = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql != (_BYTE)v85 )
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85, v82, v83);
          v87 = *(_QWORD *)v606;
          v86[3] = 275LL;
          v86[4] = 16LL;
          v86[5] = v87;
          v86[6] = (unsigned __int8)CurrentIrql;
          LOBYTE(v87) = KeGetCurrentIrql();
          v86[7] = (unsigned __int8)v87;
          WdLogEvent5_WdCriticalError(v86);
        }
        if ( v77 && *(_DWORD *)(v77 + 136) != v596 )
        {
          v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85, v82, v83);
          v88[3] = 275LL;
          v88[4] = 25LL;
          v88[5] = *(int *)(v77 + 136);
          v88[6] = v596;
          v88[7] = 0LL;
          WdLogEvent5_WdCriticalError(v88);
        }
        v89 = (_QWORD *)WdLogNewEntry5_WdTrace(v85, v82, v83, v84);
        LODWORD(v15) = v603;
        v89[3] = v603;
        v89[4] = v629;
        v89[5] = (unsigned int)v630;
        v89[6] = HIDWORD(v630);
        v90 = (int)v631;
        v89[7] = (int)v631;
        if ( v603 )
        {
          v91 = WdLogNewEntry5_WdError(v90);
          *(_QWORD *)(v91 + 24) = v603;
          WdLogEvent5_WdError(v91);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(*(_QWORD *)v606 + 16LL));
        if ( v605 == 1 )
        {
          ExReleasePushLockSharedEx(v67, 0LL);
        }
        else
        {
          if ( v605 != 2 )
            goto LABEL_104;
          *(_QWORD *)(v67 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v67, 0LL);
        }
        KeLeaveCriticalRegion();
LABEL_104:
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v92, &EventProfilerExit, (__int64)a3, 5003);
        if ( v603 < 0 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdError(v92);
          v94 = v615;
          v93[3] = v603;
          v93[4] = this;
          v93[5] = *(_QWORD *)(*(_QWORD *)v94 + 16LL);
          v93[6] = v30;
          WdLogEvent5_WdError(v93);
          goto LABEL_877;
        }
        v605 = (int)v631;
        v602 = HIDWORD(v630);
        v606[0] = v630;
        goto LABEL_110;
      }
      v77 = 0LL;
    }
    v31 = v614;
    v30 = (struct _EX_RUNDOWN_REF *)v604;
    goto LABEL_91;
  }
LABEL_110:
  v95 = a2->hDestination;
  if ( !v95 || (v96 = a2->Flags.Value, (v96 & 0x10000) != 0) )
  {
    v96 = a2->Flags.Value;
    if ( (v96 & 4) == 0 )
    {
      if ( (v96 & 3) == 0 )
      {
        if ( (v96 & 0x8000) == 0 )
        {
          v390 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, Value, a3, a4);
          LODWORD(v15) = -1073741811;
          v390[3] = -1073741811LL;
          v390[4] = this;
          v390[5] = a2->pSrcSubRects;
          v390[6] = a2->SubRectCnt;
          v390[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v390);
          goto LABEL_414;
        }
        if ( (v96 & 0x2F) == 0 && (v96 & 0x6C0) == 0 && (v96 & 0x2100) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
            {
LABEL_464:
              v329 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
              if ( v329 != -592 && *(struct _KTHREAD **)(v329 + 600) == KeGetCurrentThread() )
              {
                v330 = WdLogNewEntry5_WdAssertion(v96, Value, a3, a4);
                *(_QWORD *)(v330 + 24) = 1135LL;
                WdLogEvent5_WdAssertion(v330);
              }
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v329 + 592, 0LL) )
              {
                DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v329 + 592), v331, v332);
                ExAcquirePushLockSharedEx(v329 + 592, 0LL);
              }
              v333 = PsGetCurrentProcess();
              ProcessSessionId = PsGetProcessSessionId(v333);
              if ( ProcessSessionId >= *(_DWORD *)(v329 + 616)
                || (v335 = 1, !*(_QWORD *)(*(_QWORD *)(v329 + 624) + 8LL * ProcessSessionId)) )
              {
                v335 = 0;
              }
              ExReleasePushLockSharedEx(v329 + 592, 0LL);
              KeLeaveCriticalRegion();
              v339 = v608;
              if ( *((_BYTE *)v608 + 8) )
              {
                *((_BYTE *)v608 + 8) = 0;
                ExReleasePushLockSharedEx(*(_QWORD *)v339 + 104LL, 0LL);
                KeLeaveCriticalRegion();
                v337 = *(DXGGLOBAL ***)v339;
                v341 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v339 + 24LL));
                if ( v341 )
                {
                  if ( v341 < 0 )
                  {
                    v342 = WdLogNewEntry5_WdAssertion(v337, v336, v338, v340);
                    *(_QWORD *)(v342 + 24) = 1067LL;
                    WdLogEvent5_WdAssertion(v342);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(v337[2], (struct DXGADAPTER *)v337);
                }
              }
              if ( *((_BYTE *)v601 + 64) )
                COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
              v343 = (COREDEVICEACCESS *)((char *)v601 + 8);
              if ( !*((_BYTE *)v601 + 24) )
              {
                v344 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v337, v336, v338);
                v344[3] = 275LL;
                v344[4] = 4LL;
                v344[5] = v343;
                v344[6] = 0LL;
                v344[7] = 0LL;
                WdLogEvent5_WdCriticalError(v344);
              }
              *((_BYTE *)v601 + 24) = 0;
              v345 = (struct _KTHREAD **)*((_QWORD *)v601 + 2);
              if ( KeGetCurrentThread() != v345[18] )
                DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v345);
              PresentLimitSemaphore = a2->PresentLimitSemaphore;
              if ( PresentLimitSemaphore )
              {
                v347 = ObReferenceObjectByHandle(
                         PresentLimitSemaphore,
                         2u,
                         (POBJECT_TYPE)ExSemaphoreObjectType,
                         1,
                         &v639,
                         0LL);
                v348 = v639;
                v15 = v347;
                if ( v347 < 0 )
                  goto LABEL_493;
                if ( (a2->Flags.Value & 0x10) != 0 )
                {
                  Timeout.QuadPart = 0LL;
                  if ( KeWaitForSingleObject(v639, Executive, 0, 1u, &Timeout) == 258 )
                  {
                    ObfDereferenceObject(v348);
                    LODWORD(v15) = -1071775486;
                    goto LABEL_877;
                  }
                }
                else
                {
                  Timeout.QuadPart = -20000000LL;
                  KeWaitForSingleObject(v639, Executive, 0, 1u, &Timeout);
                }
                ObfDereferenceObject(v348);
                v339 = v608;
              }
              v349 = (*(__int64 (__fastcall **)(_QWORD, D3DKMT_PRESENTHISTORYTOKEN *))(v613 + 320))(
                       v335,
                       &a2->PresentHistoryToken);
              v15 = v349;
              if ( v349 >= 0 )
              {
                if ( !*((_BYTE *)v339 + 8) )
                {
                  if ( _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v339 + 24LL), 1uLL) <= 0 )
                  {
                    v355 = WdLogNewEntry5_WdAssertion(v351, v350, v352, v353);
                    *(_QWORD *)(v355 + 24) = 1050LL;
                    WdLogEvent5_WdAssertion(v355);
                  }
                  v356 = *(DXGGLOBAL ***)v339;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v356 + 13, 0LL);
                  *((_BYTE *)v608 + 8) = 1;
                }
                if ( *((_BYTE *)v601 + 24) )
                {
                  v357 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v351, v350, v352);
                  v357[3] = 275LL;
                  v357[4] = 4LL;
                  v357[5] = v343;
                  v357[6] = 0LL;
                  v357[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v357);
                }
                v358 = *((_QWORD *)v601 + 2);
                if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v358 + 144) )
                {
                  if ( !KeReadStateEvent((PRKEVENT)(v358 + 32)) )
                    KeWaitForSingleObject((PVOID)(*((_QWORD *)v601 + 2) + 32LL), Executive, 0, 0, 0LL);
                  DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)v601 + 2));
                }
                *((_BYTE *)v601 + 24) = 1;
                if ( *(_DWORD *)(*((_QWORD *)v601 + 7) + 352LL) == 1 )
                {
                  if ( !*((_BYTE *)v601 + 64)
                    || (COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v601 + 32)),
                        *(_DWORD *)(*((_QWORD *)v601 + 5) + 160LL) == 1) )
                  {
                    if ( a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_FLIP )
                    {
                      v359 = PsGetCurrentProcess();
                      v360 = PsGetProcessWin32Process(v359);
                      if ( v360 )
                      {
                        v364 = *(_QWORD *)(v360 + 248);
                      }
                      else
                      {
                        v365 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                        *(_QWORD *)(v365 + 24) = v359;
                        WdLogEvent5_WdEvent(v365);
                        v364 = 0LL;
                      }
                      v366 = DXGGLOBAL::m_pGlobal;
                      if ( !DXGGLOBAL::m_pGlobal )
                      {
                        v367 = WdLogNewEntry5_WdAssertion(0LL, v361, v362, v363);
                        *(_QWORD *)(v367 + 24) = 1038LL;
                        WdLogEvent5_WdAssertion(v367);
                        v366 = DXGGLOBAL::m_pGlobal;
                      }
                      v623 = (PERESOURCE *)v366;
                      v624 = 0;
                      if ( !v366 )
                      {
                        v368 = WdLogNewEntry5_WdAssertion(0LL, v361, v362, v363);
                        *(_QWORD *)(v368 + 24) = 1277LL;
                        WdLogEvent5_WdAssertion(v368);
                        v366 = (struct DXGGLOBAL *)v623;
                      }
                      if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v366 + 39)) )
                      {
                        v373 = WdLogNewEntry5_WdAssertion(v370, v369, v371, v372);
                        *(_QWORD *)(v373 + 24) = 1282LL;
                        WdLogEvent5_WdAssertion(v373);
                      }
                      if ( v624 )
                      {
                        v374 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v370, v369, v371);
                        v374[3] = 275LL;
                        v374[4] = 4LL;
                        v374[5] = &v623;
                        v374[6] = 0LL;
                        v374[7] = 0LL;
                        WdLogEvent5_WdCriticalError(v374);
                      }
                      v375 = v623;
                      KeEnterCriticalRegion();
                      ExAcquireResourceSharedLite(v375[39], 1u);
                      v624 = 1;
                      Reserved = a2->PresentHistoryToken.Token.Flip.Reserved;
                      KeEnterCriticalRegion();
                      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v364 + 192, 0LL) )
                      {
                        DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v364 + 192), v377, v378);
                        ExAcquirePushLockSharedEx(v364 + 192, 0LL);
                      }
                      v379 = (Reserved >> 6) & 0xFFFFFF;
                      if ( v379 < *(_DWORD *)(v364 + 232)
                        && (v380 = *(_QWORD *)(v364 + 216),
                            v381 = *(_DWORD *)(v380 + 16LL * v379 + 8),
                            ((Reserved >> 26) & 0x30) == (*(_BYTE *)(v380 + 16LL * v379 + 8) & 0x30))
                        && (v381 & 0x1000) == 0
                        && (v381 & 0xF) != 0
                        && (*(_BYTE *)(v380 + 16LL * v379 + 8) & 0xF) == 8 )
                      {
                        v382 = *(_QWORD *)(v380 + 16LL * v379);
                      }
                      else
                      {
                        v382 = 0LL;
                      }
                      ExReleasePushLockSharedEx(v364 + 192, 0LL);
                      KeLeaveCriticalRegion();
                      if ( v382 )
                      {
                        FenceValue = a2->PresentHistoryToken.Token.Flip.FenceValue;
                        if ( *(_DWORD *)(v382 + 128) != 3 )
                        {
                          v388 = WdLogNewEntry5_WdAssertion(v384, v383, v385, v386);
                          *(_QWORD *)(v388 + 24) = 263LL;
                          WdLogEvent5_WdAssertion(v388);
                        }
                        if ( *(_QWORD *)(v382 + 80) > FenceValue )
                          FenceValue = *(_QWORD *)(v382 + 80);
                        *(_QWORD *)(v382 + 80) = FenceValue;
                        a2->PresentHistoryToken.Token.Flip.Reserved = *(_DWORD *)(v382 + 72);
                      }
                      if ( v624 )
                      {
                        v624 = 0;
                        ExReleaseResourceLite(v623[39]);
                        KeLeaveCriticalRegion();
                      }
                    }
                    LODWORD(v15) = DXGCONTEXT::SubmitPresentHistoryToken(
                                     this,
                                     &a2->PresentHistoryToken,
                                     v601,
                                     v612,
                                     1,
                                     0LL,
                                     (struct DXGK_PRESENT_PARAMS *)a2,
                                     v611);
LABEL_403:
                    v243 = (_QWORD *)((char *)this + 288);
LABEL_404:
                    if ( (int)v15 < 0 )
                      goto LABEL_415;
                    v298 = v626;
                    if ( v626 )
                    {
                      if ( (a2->Flags.Value & 0x10000000) == 0 )
                      {
                        v299 = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
                        if ( v299 )
                        {
                          if ( !(*(unsigned int (**)(void))(v613 + 216))() )
                          {
                            memset(&v652, 0, sizeof(v652));
                            v652.hContext = a2->hDevice;
                            v652.hSource = v618;
                            v652.VidPnSourceId = (*(_DWORD *)(*(_QWORD *)(v298 + 48) + 4LL) >> 6) & 0xF;
                            v300 = 2LL;
                            BroadcastContextCount = a2->BroadcastContextCount;
                            BroadcastContext = a2->BroadcastContext;
                            v652.BroadcastContextCount = BroadcastContextCount;
                            v303 = v652.BroadcastContext;
                            do
                            {
                              v303 += 32;
                              v304 = *(_OWORD *)BroadcastContext;
                              BroadcastContext += 32;
                              *((_OWORD *)v303 - 8) = v304;
                              *((_OWORD *)v303 - 7) = *((_OWORD *)BroadcastContext - 7);
                              *((_OWORD *)v303 - 6) = *((_OWORD *)BroadcastContext - 6);
                              *((_OWORD *)v303 - 5) = *((_OWORD *)BroadcastContext - 5);
                              *((_OWORD *)v303 - 4) = *((_OWORD *)BroadcastContext - 4);
                              *((_OWORD *)v303 - 3) = *((_OWORD *)BroadcastContext - 3);
                              *((_OWORD *)v303 - 2) = *((_OWORD *)BroadcastContext - 2);
                              *((_OWORD *)v303 - 1) = *((_OWORD *)BroadcastContext - 1);
                              --v300;
                            }
                            while ( v300 );
                            v652.PresentRegions.DirtyRectCount = 0;
                            v652.PresentRegions.MoveRectCount = 0;
                            v652.Flags.Value = 4;
                            v305 = OUTPUTDUPL_MGR::ProcessPresent(
                                     *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v299 + 1976) + 104LL),
                                     this,
                                     &v652,
                                     (*(_DWORD *)(*(_QWORD *)(v298 + 48) + 4LL) >> 6) & 0xF,
                                     v625);
                            if ( v305 == 259 )
                              v305 = 0;
                            LODWORD(v15) = v305;
                          }
                        }
                      }
                    }
LABEL_414:
                    v243 = (_QWORD *)((char *)this + 288);
                    goto LABEL_415;
                  }
                  COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
                }
                COREACCESS::Release(v343);
                LODWORD(v15) = -1073741130;
                goto LABEL_877;
              }
              if ( v349 == -1071775733 || v349 == -1071775730 )
                goto LABEL_877;
LABEL_493:
              v354 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v354 + 24) = v15;
              *(_QWORD *)(v354 + 32) = this;
              WdLogEvent5_WdEvent(v354);
              goto LABEL_877;
            }
          }
          else if ( Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
          {
            goto LABEL_464;
          }
        }
        v389 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, Value, a3, a4);
        LODWORD(v15) = -1073741811;
        v389[3] = this;
        v389[4] = a2->Flags.Value;
        v389[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v389);
        goto LABEL_877;
      }
      v391 = ((unsigned int)v96 >> 8) & 1;
      if ( (((unsigned int)v96 >> 8) & 1) != 0 )
      {
        a3 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
        if ( !*((_QWORD *)a3 + 2338) )
        {
          v235 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, v391, a3, a4);
          LODWORD(v232) = -1073741811;
          v235[3] = *((_QWORD *)this + 2);
          v235[4] = -1073741811LL;
LABEL_874:
          WdLogEvent5_WdWarning(v235);
          goto LABEL_875;
        }
        if ( *((_DWORD *)a3 + 4678) <= a2->VidPnSourceId )
        {
          v392 = WdLogNewEntry5_WdWarning(v96, v391, a3, a4);
          *(_QWORD *)(v392 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v392 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 18712LL);
          WdLogEvent5_WdWarning(v392);
          LODWORD(v232) = -1073741811;
          goto LABEL_875;
        }
      }
      if ( (v96 & 2) != 0 )
      {
        if ( a2->pSrcSubRects && a2->SubRectCnt && (v96 & 0x1D) == 0 && (v96 & 0x8620) == 0 && (v96 & 0x80u) == 0LL )
        {
          hSource = 0;
          goto LABEL_565;
        }
      }
      else if ( a2->pSrcSubRects && a2->SubRectCnt && v606[0] && v602 && (v96 & 0x2E) == 0 && (v96 & 0x8000) == 0 )
      {
        v393 = ((unsigned int)v96 >> 9) & 1;
        if ( !v393 && (v96 & 0x400) == 0 )
          goto LABEL_565;
        v96 = ((unsigned int)v96 >> 10) & 1;
        if ( v393 == (_DWORD)v96 )
        {
          v235 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, v391, a3, a4);
          LODWORD(v232) = -1073741811;
          v235[3] = -1073741811LL;
          v235[4] = this;
          v235[5] = a2->pSrcSubRects;
          v235[6] = a2->SubRectCnt;
          v235[7] = a2->Flags.Value;
          goto LABEL_874;
        }
        if ( (_DWORD)v391
          && ADAPTER_DISPLAY::IsVidPnSourceOwner(
               *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
               *((const struct DXGDEVICE **)this + 2),
               a2->VidPnSourceId) )
        {
LABEL_565:
          v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 2;
          v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 1;
          v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
          v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
          v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
          v647.Color = a2->Color;
          LODWORD(v15) = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 17), a2, v606[0], v602);
          if ( (int)v15 < 0 )
            goto LABEL_414;
          if ( (*(_DWORD *)(*((_QWORD *)this + 17) + 4LL) & 4) != 0 )
            goto LABEL_403;
          v394 = *((_QWORD *)this + 2);
          v395 = *(_QWORD *)(v394 + 18704);
          if ( v395 && *(_QWORD *)(v395 + 1984) )
          {
            if ( v395 != *(_QWORD *)(*(_QWORD *)(v394 + 16) + 16LL) )
            {
              v396 = WdLogNewEntry5_WdAssertion(v395, v224, v226, v227);
              *(_QWORD *)(v396 + 24) = 3562LL;
              WdLogEvent5_WdAssertion(v396);
            }
            v397 = *((_QWORD *)this + 2);
            for ( j = 0; j < *(_DWORD *)(v397 + 18712); ++j )
            {
              v399 = (*(_BYTE *)&a2->Flags.0 & 0x10) == 0;
              ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v397 + 80));
              LODWORD(v400) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                            + 8LL)
                                                                                + 184LL))(
                                *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                                j,
                                0LL);
              if ( (_DWORD)v400 == -1071775486 )
              {
                if ( !v399 )
                  goto LABEL_579;
                if ( *((_BYTE *)v601 + 64) )
                  COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
                COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 8));
                LOBYTE(v401) = 1;
                v400 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 376LL)
                                                                                  + 8LL)
                                                                      + 184LL))(
                         *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                         j,
                         v401);
                LODWORD(v402) = COREDEVICEACCESS::AcquireShared(v601);
                if ( (int)v402 < 0 )
                {
                  v403 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                  *(_QWORD *)(v403 + 24) = v400;
                  WdLogEvent5_WdEvent(v403);
                  goto LABEL_584;
                }
              }
              if ( (int)v400 < 0 )
              {
LABEL_579:
                v404 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v404 + 24) = (int)v400;
                *(_QWORD *)(v404 + 32) = this;
                WdLogEvent5_WdEvent(v404);
                if ( (_DWORD)v400 != -1071775486 && (_DWORD)v400 != -1073741130 && (_DWORD)v400 != -1071775232 )
                {
                  v409 = WdLogNewEntry5_WdAssertion(v406, v405, v407, v408);
                  *(_QWORD *)(v409 + 24) = 2054LL;
                  WdLogEvent5_WdAssertion(v409);
                }
              }
              LODWORD(v402) = v400;
LABEL_584:
              if ( (int)v402 < 0 )
              {
                v418 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v418 + 24) = (int)v402;
                *(_QWORD *)(v418 + 32) = this;
                WdLogEvent5_WdEvent(v418);
                goto LABEL_876;
              }
              v397 = *((_QWORD *)this + 2);
            }
          }
          else
          {
            v419 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v601);
            v402 = v419;
            if ( v419 < 0 )
            {
              v420 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v420 + 24) = v402;
              *(_QWORD *)(v420 + 32) = this;
              WdLogEvent5_WdEvent(v420);
              goto LABEL_876;
            }
          }
          v243 = (_QWORD *)((char *)this + 288);
          LODWORD(v15) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 36, v601, 0);
          if ( (int)v15 < 0 )
            goto LABEL_415;
          if ( !*v243 )
          {
            v411 = WdLogNewEntry5_WdAssertion(v410, v224, v226, v227);
            *(_QWORD *)(v411 + 24) = 3600LL;
            WdLogEvent5_WdAssertion(v411);
          }
          v412 = *((_QWORD *)this + 2);
          v621 = 0;
          v620 = *(_QWORD *)(v412 + 16);
          if ( !v620 )
          {
            v413 = WdLogNewEntry5_WdAssertion(0LL, v224, v226, v227);
            *(_QWORD *)(v413 + 24) = 5005LL;
            WdLogEvent5_WdAssertion(v413);
          }
          v414 = KeGetCurrentThread();
          if ( *(struct _KTHREAD **)(v620 + 424) == v414 )
          {
            v415 = WdLogNewEntry5_WdAssertion(v414, v224, v226, v227);
            *(_QWORD *)(v415 + 24) = 5010LL;
            WdLogEvent5_WdAssertion(v415);
          }
          if ( (a2->Flags.Value & 0x10000) != 0 )
          {
            if ( a2->hDestination )
            {
              v422 = *((_QWORD *)v614 + 6);
              v421 = (*(_DWORD *)(v422 + 4) & 0x400) == 0;
              *(_DWORD *)(v422 + 4) |= 0x400u;
            }
            else
            {
              v421 = v618;
            }
          }
          else
          {
            COREDEVICEACCESS::Release(v601);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v608);
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v619);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v608);
            v416 = COREDEVICEACCESS::AcquireShared(v601);
            v15 = v416;
            if ( v416 < 0 )
            {
              v417 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v417 + 24) = v15;
              *(_QWORD *)(v417 + 32) = this;
              WdLogEvent5_WdEvent(v417);
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v619);
              goto LABEL_877;
            }
            v421 = 0;
          }
          v599 = (*(__int64 (**)(void))(v613 + 8))();
          CurrentThreadId = (DXGGLOBAL **)PsGetCurrentThreadId();
          v424 = *((_QWORD *)this + 2);
          CurrentIrql = CurrentThreadId;
          v425 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v424 + 16) + 376LL) + 8LL)
                                                   + 440LL))(*(_QWORD *)(*(_QWORD *)(v424 + 16) + 384LL));
          v428 = *((_QWORD *)this + 17);
          hWindow = (DXGGLOBAL **)v599;
          if ( *(_DWORD *)(v428 + 8) == v599 )
          {
            hWindow = CurrentIrql;
            if ( *(DXGGLOBAL ***)(v428 + 56) == CurrentIrql )
            {
              hWindow = (DXGGLOBAL **)a2->hWindow;
              if ( *(DXGGLOBAL ***)(v428 + 48) == hWindow && *(_DWORD *)(v428 + 64) == v425 && !v421 )
              {
                hWindow = (DXGGLOBAL **)*(unsigned int *)(v428 + 4);
                if ( (*(_DWORD *)(v428 + 4) & 8) == 0 )
                {
                  if ( ((unsigned __int8)hWindow & 1) != 0 )
                  {
                    LODWORD(v15) = -1071775738;
                  }
                  else if ( (a2->Flags.Value & 0x10000) == 0 && ((unsigned __int8)hWindow & 0x10) == 0 )
                  {
                    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v426, 0);
                  }
                  goto LABEL_660;
                }
              }
            }
          }
          if ( v621 )
          {
            v621 = 0;
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v620 + 416));
          }
          v430 = v608;
          if ( *((_BYTE *)v608 + 8) )
          {
            *((_BYTE *)v608 + 8) = 0;
            ExReleasePushLockSharedEx(*(_QWORD *)v430 + 104LL, 0LL);
            KeLeaveCriticalRegion();
            hWindow = *(DXGGLOBAL ***)v430;
            v432 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v430 + 24LL));
            if ( v432 )
            {
              if ( v432 < 0 )
              {
                v433 = WdLogNewEntry5_WdAssertion(hWindow, v428, v426, v431);
                *(_QWORD *)(v433 + 24) = 1067LL;
                WdLogEvent5_WdAssertion(v433);
              }
            }
            else
            {
              DXGGLOBAL::DestroyAdapter(hWindow[2], (struct DXGADAPTER *)hWindow);
            }
          }
          if ( *((_BYTE *)v601 + 64) )
            COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
          v434 = (COREDEVICEACCESS *)((char *)v601 + 8);
          if ( !*((_BYTE *)v601 + 24) )
          {
            v435 = (_QWORD *)WdLogNewEntry5_WdCriticalError(hWindow, v428, v426);
            v435[3] = 275LL;
            v435[4] = 4LL;
            v435[5] = v434;
            v435[6] = 0LL;
            v435[7] = 0LL;
            WdLogEvent5_WdCriticalError(v435);
          }
          *((_BYTE *)v601 + 24) = 0;
          v436 = (struct _KTHREAD **)*((_QWORD *)v601 + 2);
          if ( KeGetCurrentThread() != v436[18] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v436);
          LODWORD(v15) = CWin32kLocks::Lock(v612, a2->hWindow, HIWORD(a2->Flags.Value) & 1, 1, 0);
          if ( (a2->Flags.Value & 0x10000) == 0
            || ((*(void (__fastcall **)(_QWORD, __int64 *))(v613 + 232))(*(_QWORD *)v612, &v638),
                v440 = *((_QWORD *)this + 17),
                *(_QWORD *)(v440 + 432) = v638,
                (a2->Flags.Value & 0x10000) == 0) )
          {
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v619);
          }
          if ( !*((_BYTE *)v430 + 8) )
          {
            if ( _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v430 + 24LL), 1uLL) <= 0 )
            {
              v441 = WdLogNewEntry5_WdAssertion(v440, v437, v438, v439);
              *(_QWORD *)(v441 + 24) = 1050LL;
              WdLogEvent5_WdAssertion(v441);
            }
            v442 = *(_QWORD *)v430;
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx(v442 + 104, 0LL);
            *((_BYTE *)v608 + 8) = 1;
          }
          COREACCESS::AcquireShared(v434);
          v428 = *(unsigned int *)(*((_QWORD *)v601 + 7) + 352LL);
          if ( (_DWORD)v428 == 1 )
          {
            if ( !*((_BYTE *)v601 + 64)
              || (COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v601 + 32)),
                  v428 = *(unsigned int *)(*((_QWORD *)v601 + 5) + 160LL),
                  (_DWORD)v428 == 1) )
            {
              if ( (int)v15 >= 0 )
              {
                if ( (a2->Flags.Value & 0x10000) != 0
                  && a2->hDestination
                  && !*(_QWORD *)(*((_QWORD *)this + 17) + 432LL) )
                {
                  v443 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                  *(_QWORD *)(v443 + 24) = 0LL;
                  *(_QWORD *)(v443 + 32) = this;
                  WdLogEvent5_WdEvent(v443);
                  v444 = *((_QWORD *)this + 36);
                  if ( v444 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 400LL)
                                                                        + 8LL)
                                                            + 480LL))(
                      v444,
                      0LL);
                    *((_QWORD *)this + 36) = 0LL;
                  }
                  LODWORD(v15) = 0;
                  DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v619);
                  goto LABEL_877;
                }
                v445 = *(HDC *)v612;
                v446 = (const struct DXGDEVICE *)*((_QWORD *)this + 2);
                v447 = *(HDC *)v612;
                v615 = (HDEV)*((_QWORD *)v612 + 2);
                LODWORD(v15) = DXGPRESENT::CheckVisRgn(
                                 *((DXGPRESENT **)this + 17),
                                 a2,
                                 v447,
                                 v615,
                                 v446,
                                 v606[0],
                                 v602,
                                 v605,
                                 1);
                if ( (_DWORD)v15 == 261 )
                {
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v619);
                  COREDEVICEACCESS::Release(v601);
                  v448 = v608;
                  DXGADAPTERSTOPRESETLOCKSHARED::Release(v608);
                  if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
                    LODWORD(v15) = -1071775738;
                  if ( (a2->Flags.Value & 0x10000) == 0 )
                    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v619);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v448);
                  v449 = COREDEVICEACCESS::AcquireShared(v601);
                  v450 = v449;
                  if ( v449 < 0 )
                  {
                    v451 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                    *(_QWORD *)(v451 + 24) = v450;
LABEL_821:
                    WdLogEvent5_WdEvent(v451);
                    LODWORD(v15) = v450;
                    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v619);
                    goto LABEL_877;
                  }
                  if ( (_DWORD)v15 != -1071775738 )
                    LODWORD(v15) = DXGPRESENT::CheckVisRgn(
                                     *((DXGPRESENT **)this + 17),
                                     a2,
                                     v445,
                                     v615,
                                     *((const struct DXGDEVICE **)this + 2),
                                     v606[0],
                                     v602,
                                     v605,
                                     0);
                }
                if ( (int)v15 < 0 )
                {
                  v458 = *((_QWORD *)this + 17);
                  if ( (*(_BYTE *)(v458 + 4) & 1) != 0 )
                  {
                    *(_QWORD *)(v458 + 56) = CurrentIrql;
                    *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v599;
                  }
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)this + 17) + 56LL) = CurrentIrql;
                  if ( (a2->Flags.Value & 0x10000) == 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v599;
                    DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL);
                    v452 = 0;
                    v453 = *(_DWORD *)(*((_QWORD *)this + 17) + 8LL);
                    if ( v453 != (*(unsigned int (**)(void))(v613 + 8))() )
                    {
                      *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v599;
                      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3LL, 0xFFFFFFFFLL, 0LL);
                      v452 = 1;
                    }
                    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v454, v452);
                  }
                }
              }
LABEL_660:
              v455 = *(_DWORD *)(*((_QWORD *)this + 17) + 4LL);
              if ( (v455 & 0x10) != 0 )
              {
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v619);
                if ( a2->BroadcastContextCount )
                {
                  v457 = WdLogNewEntry5_WdError(v456);
                  *(_QWORD *)(v457 + 24) = 3859LL;
                  WdLogEvent5_WdError(v457);
                  LODWORD(v15) = -1073741811;
                  goto LABEL_725;
                }
                if ( (int)v15 < 0 )
                  goto LABEL_725;
                v459 = *((_QWORD *)this + 17);
                v460 = *(_DWORD *)(v459 + 4) >> 1;
                if ( (*(_DWORD *)(v459 + 4) & 2) != 0 )
                  goto LABEL_725;
                if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                {
                  v461 = WdLogNewEntry5_WdAssertion(v460, v428, v426, v427);
                  *(_QWORD *)(v461 + 24) = 3865LL;
                  WdLogEvent5_WdAssertion(v461);
                }
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v460, &EventPerformanceWarning, (__int64)v426, 0);
                if ( (a2->Flags.Value & 0x100) != 0 )
                {
                  v462 = &v651;
                  v428 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL);
                  v651 = *(_OWORD *)(1008LL * a2->VidPnSourceId + *(_QWORD *)(v428 + 112) + 628);
                }
                else
                {
                  v462 = 0LL;
                }
                v463 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                v622 = v462;
                if ( (*(_BYTE *)&v463 & 1) != 0 )
                {
                  LODWORD(v15) = DXGPRESENT::PrepareStagingBuffer(
                                   *((DXGPRESENT **)this + 17),
                                   *((struct DXGDEVICE **)this + 2),
                                   a2->hSource,
                                   v601,
                                   &v610);
                  if ( (int)v15 < 0 )
                    goto LABEL_725;
                  v465 = v610;
                  if ( !v610 )
                  {
                    v466 = WdLogNewEntry5_WdAssertion(v464, v428, v426, v427);
                    *(_QWORD *)(v466 + 24) = 3895LL;
                    WdLogEvent5_WdAssertion(v466);
                  }
                  if ( *(_BYTE *)&a2->Flags.0 >= 0 )
                  {
                    v647.SrcRect.bottom = v602;
                    right = v606[0];
                    *(_QWORD *)&v647.SrcRect.left = 0LL;
                  }
                  else
                  {
                    top = a2->SrcRect.top;
                    if ( top < 0 )
                      top = 0;
                    v647.SrcRect.top = top;
                    left = a2->SrcRect.left;
                    if ( left < 0 )
                      left = 0;
                    v647.SrcRect.left = left;
                    bottom = a2->SrcRect.bottom;
                    if ( v602 < bottom )
                      bottom = v602;
                    v647.SrcRect.bottom = bottom;
                    right = a2->SrcRect.right;
                    if ( (int)v606[0] < right )
                      right = v606[0];
                  }
                  v647.SrcRect.right = right;
                  v647.DstRect = v647.SrcRect;
                  v471 = (*(_WORD *)&v647.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
                  v647.Flags.Value ^= v471;
                  if ( !a2->SubRectCnt )
                  {
                    v472 = WdLogNewEntry5_WdAssertion(v471, v428, v426, v427);
                    *(_QWORD *)(v472 + 24) = 3921LL;
                    WdLogEvent5_WdAssertion(v472);
                  }
                  if ( !a2->pSrcSubRects )
                  {
                    v473 = WdLogNewEntry5_WdAssertion(v471, v428, v426, v427);
                    *(_QWORD *)(v473 + 24) = 3922LL;
                    WdLogEvent5_WdAssertion(v473);
                  }
                  LODWORD(v15) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 17), a2->SubRectCnt);
                  if ( (int)v15 < 0 )
                    goto LABEL_725;
                  DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 17), 0);
                  SubRectCnt = 0LL;
                  v479 = 0;
                  v647.SubRectCnt = 0;
                  v647.pDstSubRects = DdiSubRectList;
                  if ( a2->SubRectCnt <= (unsigned int)v475 )
                    goto LABEL_761;
                  while ( 1 )
                  {
                    if ( DXGPRESENT::IntersectRect(&DdiSubRectList[SubRectCnt], &a2->pSrcSubRects[v479], &v647.SrcRect) )
                      SubRectCnt = ++v647.SubRectCnt;
                    else
                      SubRectCnt = v647.SubRectCnt;
                    if ( ++v479 >= a2->SubRectCnt )
                      break;
                    DdiSubRectList = (struct tagRECT *)v647.pDstSubRects;
                  }
                  if ( !(_DWORD)SubRectCnt )
                  {
LABEL_761:
                    v518 = WdLogNewEntry5_WdWarning(SubRectCnt, v475, v476, v477);
                    *(_QWORD *)(v518 + 24) = -1071775738LL;
                    *(_QWORD *)(v518 + 32) = this;
                    WdLogEvent5_WdWarning(v518);
                    goto LABEL_724;
                  }
                  if ( bTracingEnabled )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 400LL)
                                                                       + 8LL)
                                                           + 320LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                      v465);
                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 400LL)
                                                                       + 8LL)
                                                           + 320LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                      hSource);
                    pDstSubRects = v647.pDstSubRects;
                    v483 = v647.SubRectCnt;
                    v484 = a2->hWindow;
                    v616 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 36);
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      Template_ppxppttqddddddddq(
                        HIDWORD(*(_QWORD *)&v647.DstRect.left),
                        HIDWORD(*(_QWORD *)&v647.DstRect.right),
                        HIDWORD(*(_QWORD *)&v647.SrcRect.left),
                        v484,
                        v616);
                    v485 = 0;
                    if ( v483 )
                    {
                      v486 = v616;
                      while ( v483 - v485 <= 0x10 )
                      {
                        v487 = v483 - v485;
                        if ( v483 != v485 )
                          goto LABEL_711;
LABEL_713:
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        {
                          LODWORD(HandleInformation) = v487;
                          LODWORD(Objecta) = v483 - v485 <= 0x10;
                          Template_ptqDR2DR2DR2DR2(
                            (__int64)v662,
                            v480,
                            v481,
                            v486,
                            Objecta,
                            HandleInformation,
                            v662,
                            v658,
                            v664,
                            v656);
                        }
                        v485 += 16;
                        if ( v485 >= v483 )
                          goto LABEL_716;
                      }
                      v487 = 16;
LABEL_711:
                      LODWORD(v481) = v485;
                      v488 = v487;
                      v480 = 0LL;
                      do
                      {
                        v480 += 4LL;
                        v489 = (unsigned int)v481;
                        v481 = (unsigned int)(v481 + 1);
                        v490 = &pDstSubRects[v489];
                        *(_DWORD *)&v661[v480 + 60] = v490->left;
                        *(_DWORD *)&v657[v480 + 60] = v490->right;
                        *(_DWORD *)&v663[v480 + 60] = v490->top;
                        *(_DWORD *)&v655[v480 + 60] = v490->bottom;
                        --v488;
                      }
                      while ( v488 );
                      goto LABEL_713;
                    }
                  }
LABEL_716:
                  v491 = DXGCONTEXT::SubmitPresent(
                           this,
                           a2,
                           a2->BroadcastContextCount,
                           v625,
                           v604,
                           hSource,
                           v610,
                           &v647,
                           0LL,
                           *((struct _VIDMM_DMA_BUFFER **)this + 36),
                           v611,
                           v601);
                  *((_QWORD *)this + 36) = 0LL;
                  LODWORD(v15) = v491;
                  if ( v491 < 0 )
                    goto LABEL_725;
                  v492 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  v493 = 0;
                  if ( (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v492 + 2338) + 1976LL),
                         *((const struct DXGDEVICE **)this + 2),
                         a2->VidPnSourceId) )
                  {
                    v493 = 1;
                  }
                  else if ( !DXGDEVICE::AllowLegacyPresent(v492, v428) )
                  {
                    v494 = 0;
LABEL_721:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(v608);
                    COREDEVICEACCESS::Release(v601);
                    if ( v494 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
                    {
                      CWin32kLocks::Unlock(v612);
                      v499 = v608;
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v608);
                      v500 = COREDEVICEACCESS::AcquireShared(v601);
                      if ( v500 < 0 )
                        goto LABEL_757;
                      v505 = v610;
                      memset(&v641, 0, sizeof(v641));
                      if ( !v610 )
                      {
                        v506 = WdLogNewEntry5_WdAssertion(v502, v501, v503, v504);
                        *(_QWORD *)(v506 + 24) = 4005LL;
                        WdLogEvent5_WdAssertion(v506);
                      }
                      v641.hAllocation = v505;
                      LODWORD(v15) = DXGDEVICE::Lock(*((DXGDEVICE **)this + 2), &v641, v601);
                      if ( (int)v15 < 0 )
                        goto LABEL_725;
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
                      COREDEVICEACCESS::Release(v601);
                      if ( !v641.pData )
                      {
                        v511 = WdLogNewEntry5_WdAssertion(v508, v507, v509, v510);
                        *(_QWORD *)(v511 + 24) = 4020LL;
                        WdLogEvent5_WdAssertion(v511);
                      }
                      if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                      {
                        v512 = WdLogNewEntry5_WdAssertion(v508, v507, v509, v510);
                        *(_QWORD *)(v512 + 24) = 4021LL;
                        WdLogEvent5_WdAssertion(v512);
                      }
                      v19 = (*(unsigned int (__fastcall **)(_QWORD))(v613 + 312))(0LL) == 0;
                      v513 = v493;
                      if ( v19 )
                        v513 = 0;
                      v514 = v612;
                      LODWORD(v15) = CWin32kLocks::Lock(v612, a2->hWindow, 0, 0, v513);
                      if ( (int)v15 >= 0 )
                      {
                        v515 = *((_QWORD *)v514 + 1);
                        if ( !v515 )
                          v515 = *(_QWORD *)v514;
                        LOBYTE(v594) = (a2->Flags.Value & 0x200) != 0;
                        LOBYTE(v593) = 0;
                        if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, __int64, __int128 *, const RECT *, void *, _DWORD, unsigned int, int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v613 + 144))(
                                a2,
                                v515,
                                v622,
                                v647.pDstSubRects,
                                v641.pData,
                                *(_DWORD *)(*((_QWORD *)this + 17) + 424LL),
                                v606[0],
                                v602,
                                v593,
                                v594,
                                a2->Color,
                                DXGPRESENT::XformRect,
                                DXGPRESENT::ClipRects) )
                        {
                          v516 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                          *(_QWORD *)(v516 + 24) = -1071775737LL;
                          *(_QWORD *)(v516 + 32) = this;
                          WdLogEvent5_WdEvent(v516);
                          LODWORD(v15) = -1071775737;
                        }
                      }
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
                      v500 = COREDEVICEACCESS::AcquireShared(v601);
                      if ( v500 < 0 )
                      {
LABEL_757:
                        LODWORD(v15) = v500;
                        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v619);
                        goto LABEL_877;
                      }
                      v517 = (DXGDEVICE *)*((_QWORD *)this + 2);
                      v642.phAllocations = &v641.hAllocation;
                      v642.hDevice = 0;
                      v642.NumAllocations = 1;
                      DXGDEVICE::Unlock(v517, &v642, 0);
                      if ( (int)v15 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                      {
                        a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                        a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 17) + 432LL);
                        a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                        a2->PresentHistoryToken.TokenSize = 48;
                        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v619);
                        LODWORD(v15) = DXGCONTEXT::SubmitPresentHistoryToken(
                                         this,
                                         &a2->PresentHistoryToken,
                                         v601,
                                         v514,
                                         0,
                                         0LL,
                                         0LL,
                                         0LL);
                      }
LABEL_725:
                      if ( v621 )
                      {
                        v621 = 0;
                        DXGFASTMUTEX::Release((struct _KTHREAD **)(v620 + 416));
                      }
                      v243 = (_QWORD *)((char *)this + 288);
                      if ( *((_QWORD *)this + 36) )
                      {
                        if ( (int)v15 >= 0 )
                        {
                          v495 = *(unsigned int *)(*((_QWORD *)this + 17) + 4LL);
                          LOBYTE(v495) = v495 & 0x12;
                          if ( (_BYTE)v495 == 16 && (a2->Flags.Value & 2) == 0 )
                          {
                            v496 = WdLogNewEntry5_WdAssertion(v495, v428, v426, v427);
                            *(_QWORD *)(v496 + 24) = 4342LL;
                            WdLogEvent5_WdAssertion(v496);
                          }
                        }
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 480LL))(
                          *v243,
                          0LL);
                        *v243 = 0LL;
                      }
                      v497 = *((_QWORD *)this + 17);
                      if ( (*(_DWORD *)(v497 + 4) & 0x80) != 0 )
                      {
                        if ( (unsigned int)(v15 + 1071775738) > 1 )
                        {
                          v498 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v497 + 4) >> 7, v428, v426, v427);
                          *(_QWORD *)(v498 + 24) = 4350LL;
                          WdLogEvent5_WdAssertion(v498);
                        }
                        LODWORD(v15) = 0;
                      }
                      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v619);
                      goto LABEL_404;
                    }
                    COREDEVICEACCESS::AcquireSharedUncheck(v601);
LABEL_724:
                    LODWORD(v15) = -1071775738;
                    goto LABEL_725;
                  }
                  v494 = 1;
                  goto LABEL_721;
                }
                if ( (*(_BYTE *)&v463 & 2) == 0 )
                  goto LABEL_725;
                v519 = (DXGDEVICE *)*((_QWORD *)this + 2);
                v520 = 0;
                if ( (*(_WORD *)&v463 & 0x100) != 0
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                       *(DXGADAPTER ***)(*((_QWORD *)v519 + 2338) + 1976LL),
                       *((const struct DXGDEVICE **)this + 2),
                       a2->VidPnSourceId) )
                {
                  v520 = 1;
                }
                else if ( !DXGDEVICE::AllowLegacyPresent(v519, v428) )
                {
                  v521 = 0;
LABEL_767:
                  DXGADAPTERSTOPRESETLOCKSHARED::Release(v608);
                  COREDEVICEACCESS::Release(v601);
                  if ( v521 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
                  {
                    if ( (a2->Flags.Value & 0x10000) != 0 )
                    {
                      v526 = WdLogNewEntry5_WdAssertion(v523, v522, v524, v525);
                      *(_QWORD *)(v526 + 24) = 4121LL;
                      WdLogEvent5_WdAssertion(v526);
                    }
                    v527 = v612;
                    CWin32kLocks::Unlock(v612);
                    v528 = v613;
                    v19 = (*(unsigned int (__fastcall **)(_QWORD))(v613 + 312))(0LL) == 0;
                    v529 = v520;
                    if ( v19 )
                      v529 = 0;
                    v530 = CWin32kLocks::Lock(v527, a2->hWindow, 0, 0, v529);
                    v531 = *((_QWORD *)v527 + 1);
                    LODWORD(v15) = v530;
                    if ( !v531 )
                      v531 = *(_QWORD *)v527;
                    if ( !(*(unsigned int (__fastcall **)(__int64, __int128 *, const RECT *, _QWORD, UINT))(v528 + 152))(
                            v531,
                            v462,
                            a2->pSrcSubRects,
                            a2->SubRectCnt,
                            a2->Color) )
                    {
                      v532 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                      *(_QWORD *)(v532 + 24) = -1071775737LL;
                      *(_QWORD *)(v532 + 32) = this;
                      WdLogEvent5_WdEvent(v532);
                      LODWORD(v15) = -1071775737;
                    }
                  }
                  else
                  {
                    LODWORD(v15) = -1071775738;
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v608);
                  v533 = COREDEVICEACCESS::AcquireShared(v601);
                  v450 = v533;
                  if ( v533 >= 0 )
                    goto LABEL_725;
                  v451 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                  goto LABEL_820;
                }
                v521 = 1;
                goto LABEL_767;
              }
              if ( (int)v15 < 0 || (v455 & 2) != 0 )
                goto LABEL_725;
              if ( (*(unsigned int (__fastcall **)(_QWORD))(v613 + 224))(0LL) )
              {
                if ( (a2->Flags.Value & 0x12100) == 0x10000 )
                  goto LABEL_791;
                v537 = WdLogNewEntry5_WdAssertion(v535, v534, v426, v536);
                *(_QWORD *)(v537 + 24) = 4158LL;
              }
              else
              {
                if ( *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) || (a2->Flags.Value & 0x4000000) != 0 )
                {
LABEL_791:
                  if ( (a2->Flags.Value & 0x10000) == 0 )
                    goto LABEL_823;
                  v538 = *(HDC *)v612;
                  v615 = *(HDEV *)v612;
                  v539 = PsGetCurrentProcess();
                  v540 = PsGetProcessWin32Process(v539);
                  if ( v540 )
                  {
                    v542 = *(_QWORD *)(v540 + 248);
                  }
                  else
                  {
                    v543 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                    *(_QWORD *)(v543 + 24) = v539;
                    WdLogEvent5_WdEvent(v543);
                    v542 = 0LL;
                  }
                  v544 = *(_QWORD *)(v542 + 80);
                  if ( v538
                    && v544
                    && (v545 = *((_QWORD *)this + 17),
                        *(_DWORD *)(v545 + 432) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags) )
                  {
                    v546 = v608;
                    if ( *((_BYTE *)v608 + 8) )
                    {
                      *((_BYTE *)v608 + 8) = 0;
                      ExReleasePushLockSharedEx(*(_QWORD *)v546 + 104LL, 0LL);
                      KeLeaveCriticalRegion();
                      v545 = *(_QWORD *)v546;
                      v548 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v546 + 24LL));
                      if ( v548 )
                      {
                        if ( v548 < 0 )
                        {
                          v549 = WdLogNewEntry5_WdAssertion(v545, v541, v426, v547);
                          *(_QWORD *)(v549 + 24) = 1067LL;
                          WdLogEvent5_WdAssertion(v549);
                        }
                      }
                      else
                      {
                        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v545 + 16), (struct DXGADAPTER *)v545);
                      }
                    }
                    if ( *((_BYTE *)v601 + 64) )
                      COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
                    v550 = (COREDEVICEACCESS *)((char *)v601 + 8);
                    if ( !*((_BYTE *)v601 + 24) )
                    {
                      v551 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v545, v541, v426);
                      v551[3] = 275LL;
                      v551[4] = 4LL;
                      v551[5] = v550;
                      v551[6] = 0LL;
                      v551[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v551);
                    }
                    *((_BYTE *)v601 + 24) = 0;
                    v552 = (struct _KTHREAD **)*((_QWORD *)v601 + 2);
                    if ( KeGetCurrentThread() != v552[18] )
                      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v552);
                    LODWORD(v646[0]) = 0;
                    memset(&v646[1], 0, 0x218uLL);
                    v553 = 1LL;
                    v554 = 0LL;
                    LODWORD(v646[0]) = *(_DWORD *)(*((_QWORD *)this + 17) + 352LL);
                    v646[1] = *(_QWORD *)(*((_QWORD *)this + 17) + 224LL);
                    v646[3] = *((unsigned int *)this + 6);
                    for ( LODWORD(v646[2]) = 1; (unsigned int)v554 < a2->BroadcastContextCount; ++LODWORD(v646[2]) )
                    {
                      v555 = (unsigned int)v554;
                      v554 = (unsigned int)(v554 + 1);
                      v646[(unsigned int)v553 + 3] = a2->BroadcastContext[v555];
                      v553 = (unsigned int)(LODWORD(v646[2]) + 1);
                    }
                    (*(void (__fastcall **)(HDEV, _QWORD *, __int64, __int64))(v544 + 240))(v615, v646, v553, v554);
                    v560 = v608;
                    if ( !*((_BYTE *)v608 + 8) )
                    {
                      if ( _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v608 + 24LL), 1uLL) <= 0 )
                      {
                        v561 = WdLogNewEntry5_WdAssertion(v557, v556, v558, v559);
                        *(_QWORD *)(v561 + 24) = 1050LL;
                        WdLogEvent5_WdAssertion(v561);
                      }
                      v562 = *(_QWORD *)v560;
                      KeEnterCriticalRegion();
                      ExAcquirePushLockSharedEx(v562 + 104, 0LL);
                      *((_BYTE *)v560 + 8) = 1;
                    }
                    COREACCESS::AcquireShared(v550);
                    v563 = v601;
                    if ( *(_DWORD *)(*((_QWORD *)v601 + 7) + 352LL) != 1 )
                      goto LABEL_819;
                    if ( *((_BYTE *)v601 + 64) )
                    {
                      COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v601 + 32));
                      if ( *(_DWORD *)(*((_QWORD *)v601 + 5) + 160LL) != 1 )
                      {
                        COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
LABEL_819:
                        COREACCESS::Release(v550);
                        v451 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                        v450 = -1073741130LL;
LABEL_820:
                        *(_QWORD *)(v451 + 24) = v450;
                        *(_QWORD *)(v451 + 32) = this;
                        goto LABEL_821;
                      }
                    }
                  }
                  else
                  {
LABEL_823:
                    v563 = v601;
                  }
                  v427 = v610;
                  v428 = 0LL;
                  v564 = v604;
                  v600 = v610;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v19 = (a2->Flags.Value & 0x10000) == 0;
                      v605 = (int)v428;
                      if ( v19 )
                        v565 = *(_DWORD *)(*((_QWORD *)this + 2) + 18712LL);
                      else
                        v565 = 1;
                      if ( (unsigned int)v428 >= v565 )
                        goto LABEL_725;
                      v566 = *((_QWORD *)this + 17);
                      if ( (unsigned int)v428 < *(_DWORD *)(v566 + 68) || !(_DWORD)v428 )
                        break;
                      v647.SubRectCnt = 0;
                      v428 = (unsigned int)(v428 + 1);
                    }
                    v567 = (unsigned int)v428;
                    v647.SubRectCnt = *(_DWORD *)(v566 + 4LL * (unsigned int)v428 + 352);
                    if ( v647.SubRectCnt )
                    {
                      if ( (a2->Flags.Value & 0x10000) == 0 )
                      {
                        v568 = DXGDEVICE::OpenCddPrimaryHandle(
                                 *((DXGDEVICE **)this + 2),
                                 v428,
                                 *((_BYTE *)this + 352),
                                 *((_DWORD *)this + 82));
                        LODWORD(v428) = v605;
                        v427 = v568;
                        v600 = v568;
                      }
                      if ( (_DWORD)v427 )
                      {
                        v569 = *((_QWORD *)this + 17);
                        if ( (unsigned int)v428 >= *(_DWORD *)(v569 + 68) && (_DWORD)v428 )
                          v570 = 0LL;
                        else
                          v570 = *(const RECT **)(v569 + 8 * v567 + 224);
                        v647.pDstSubRects = v570;
                        if ( (a2->Flags.Value & 0x2000) != 0 )
                        {
                          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
                                                 v428,
                                                 1);
                          LODWORD(v427) = v600;
                          v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)((CurrentOrientation != 1) << 7)) & 0x80;
                        }
                        v648 = 0LL;
                        if ( (a2->Flags.Value & 0x10000) != 0 )
                          v572 = &v648;
                        else
                          v572 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL)
                                                                    + 1976LL)
                                                        + 112LL)
                                            + 628LL
                                            + 1008 * v567);
                        v647.SrcRect = *(RECT *)(*((_QWORD *)this + 17) + 144LL);
                        v573 = (_DWORD *)*((_QWORD *)this + 17);
                        v647.DstRect.top = v573[33] - *((_DWORD *)v572 + 1);
                        v647.DstRect.bottom = v573[35] - *((_DWORD *)v572 + 1);
                        v647.DstRect.left = v573[32] - *(_DWORD *)v572;
                        v647.DstRect.right = v573[34] - *(_DWORD *)v572;
                        if ( bTracingEnabled && *((_QWORD *)this + 36) )
                        {
                          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 320LL))(
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                            (unsigned int)v427);
                          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 320LL))(
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                            hSource);
                          v576 = v647.pDstSubRects;
                          v577 = v647.SubRectCnt;
                          v578 = a2->hWindow;
                          v616 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 36);
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            Template_ppxppttqddddddddq(
                              HIDWORD(*(_QWORD *)&v647.DstRect.left),
                              HIDWORD(*(_QWORD *)&v647.DstRect.right),
                              HIDWORD(*(_QWORD *)&v647.SrcRect.left),
                              v578,
                              v616);
                          v579 = 0;
                          if ( v577 )
                          {
                            v580 = v616;
                            while ( v577 - v579 <= 0x10 )
                            {
                              v581 = v577 - v579;
                              if ( v577 != v579 )
                                goto LABEL_854;
LABEL_856:
                              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                              {
                                LODWORD(HandleInformation) = v581;
                                LODWORD(Object) = v577 - v579 <= 0x10;
                                Template_ptqDR2DR2DR2DR2(
                                  (__int64)v659,
                                  v574,
                                  v575,
                                  v580,
                                  Object,
                                  HandleInformation,
                                  v659,
                                  v657,
                                  v655,
                                  v660);
                              }
                              v579 += 16;
                              if ( v579 >= v577 )
                              {
                                v564 = v604;
                                goto LABEL_860;
                              }
                            }
                            v581 = 16;
LABEL_854:
                            LODWORD(v575) = v579;
                            v582 = v581;
                            v574 = 0LL;
                            do
                            {
                              v574 += 4LL;
                              v583 = (unsigned int)v575;
                              v575 = (unsigned int)(v575 + 1);
                              v584 = &v576[v583];
                              *(_DWORD *)&v658[v574 + 60] = v584->left;
                              *(_DWORD *)&v656[v574 + 60] = v584->right;
                              *(_DWORD *)&v654[v574 + 60] = v584->top;
                              *(_DWORD *)&v659[v574 + 60] = v584->bottom;
                              --v582;
                            }
                            while ( v582 );
                            goto LABEL_856;
                          }
LABEL_860:
                          v563 = v601;
                        }
                        v585 = v625;
                        v595 = v611;
                        *((_DWORD *)v611 + 29) = v605;
                        v586 = DXGCONTEXT::SubmitPresent(
                                 this,
                                 a2,
                                 a2->BroadcastContextCount,
                                 v585,
                                 v564,
                                 hSource,
                                 v600,
                                 &v647,
                                 0LL,
                                 *((struct _VIDMM_DMA_BUFFER **)this + 36),
                                 v595,
                                 v563);
                        *((_QWORD *)this + 36) = 0LL;
                        LODWORD(v15) = v586;
                        if ( (a2->Flags.Value & 0x10000) != 0
                          && *(_DWORD *)(*((_QWORD *)this + 17) + 432LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                        {
                          a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                          a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 17) + 432LL);
                          if ( v647.SubRectCnt <= 0x10 )
                          {
                            v587 = 0;
                            for ( a2->PresentHistoryToken.Token.Flip.VidPnSourceId = v647.SubRectCnt;
                                  v587 < v647.SubRectCnt;
                                  *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 16 * v588 + 28) = v647.pDstSubRects[v588] )
                            {
                              v588 = v587++;
                            }
                          }
                          else
                          {
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                            *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 28) = v647.DstRect;
                          }
                          a2->PresentHistoryToken.TokenSize = 16
                                                            * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                          if ( v621 )
                          {
                            v621 = 0;
                            DXGFASTMUTEX::Release((struct _KTHREAD **)(v620 + 416));
                          }
                          LODWORD(v15) = DXGCONTEXT::SubmitPresentHistoryToken(
                                           this,
                                           &a2->PresentHistoryToken,
                                           v563,
                                           v612,
                                           0,
                                           0LL,
                                           0LL,
                                           0LL);
                        }
                        if ( (int)v15 < 0 )
                          goto LABEL_725;
                        LODWORD(v428) = v605;
                        v427 = v600;
                      }
                    }
                    v428 = (unsigned int)(v428 + 1);
                  }
                }
                v537 = WdLogNewEntry5_WdAssertion(v535, v534, v426, v536);
                *(_QWORD *)(v537 + 24) = 4163LL;
              }
              WdLogEvent5_WdAssertion(v537);
              goto LABEL_791;
            }
            COREACCESS::Release((COREDEVICEACCESS *)((char *)v601 + 32));
          }
          COREACCESS::Release(v434);
          LODWORD(v15) = -1073741130;
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v619);
          goto LABEL_877;
        }
      }
      v235 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, v391, a3, a4);
      LODWORD(v232) = -1073741811;
      v235[3] = this;
      v235[4] = a2->pSrcSubRects;
      v235[5] = a2->SubRectCnt;
      v235[6] = a2->Flags.Value;
      v235[7] = -1073741811LL;
      goto LABEL_874;
    }
  }
  if ( !v95 )
  {
    if ( (v96 & 0x108203) != 0 || (v96 & 0x24C0) != 0 || (v96 & 0x100) != 0 )
    {
      v187 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, Value, a3, a4);
      v187[3] = this;
      FlipInterval = a2->Flags.Value;
      goto LABEL_453;
    }
    if ( (v96 & 0x10000000) != 0 )
    {
      Count = v30[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        v154 = WdLogNewEntry5_WdError(v96);
        *(_QWORD *)(v154 + 24) = 2892LL;
LABEL_210:
        WdLogEvent5_WdError(v154);
        LODWORD(v15) = -1073741811;
        goto LABEL_877;
      }
    }
    else if ( (*(_DWORD *)(v30[6].Count + 4) & 0x2003) == 0 )
    {
      v155 = (_QWORD *)WdLogNewEntry5_WdError(v96);
      LODWORD(v15) = -1073741811;
      v155[3] = -1073741811LL;
      v155[4] = this;
      v155[5] = v30;
      v156 = v30[6].Count;
LABEL_213:
      v155[6] = v156;
      v155[7] = a2->hSource;
      WdLogEvent5_WdError(v155);
      goto LABEL_877;
    }
    v157 = v30[6].Count;
    v158 = v30 + 6;
    v615 = (HDEV)&v30[6];
    v616 = v30;
    v104 = (*(_DWORD *)(v157 + 4) >> 6) & 0xF;
    if ( !ExAcquireRundownProtection(v30 + 11) )
    {
      v162 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v160, v159, v161);
      v162[3] = 275LL;
      v162[4] = 25LL;
      v162[5] = v30;
      v162[6] = 0LL;
      v162[7] = 0LL;
      WdLogEvent5_WdCriticalError(v162);
    }
    DXGALLOCATIONREFERENCE::MoveAssign(&v626, &v616);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v616);
    v618 = a2->hSource;
    v166 = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
    if ( v166 )
    {
      v167 = *(_QWORD *)(v166 + 1976);
      if ( v167 )
      {
        v164 = *(_QWORD *)(v167 + 16);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v164 + 144)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v164 + 128)) )
        {
          v30 = (struct _EX_RUNDOWN_REF *)v604;
          goto LABEL_222;
        }
        v30 = (struct _EX_RUNDOWN_REF *)v604;
      }
    }
    v168 = WdLogNewEntry5_WdAssertion(v164, v163, v165, v112);
    *(_QWORD *)(v168 + 24) = 2914LL;
    WdLogEvent5_WdAssertion(v168);
LABEL_222:
    v169 = v613;
    if ( (*(_DWORD *)(v158->Count + 4) & 0x2000) != 0 && !(*(unsigned int (**)(void))(v613 + 216))() )
    {
      v155 = (_QWORD *)WdLogNewEntry5_WdError(v164);
      LODWORD(v15) = -1073741811;
      v155[3] = -1073741811LL;
      v155[4] = this;
      v155[5] = v30;
      v156 = v158->Count;
      goto LABEL_213;
    }
    v111 = a2->Flags.Value;
    if ( (a2->Flags.Value & 0x60000) != 0 )
    {
      if ( (a2->Flags.Value & 0x60000) == 0x60000 )
      {
        v154 = WdLogNewEntry5_WdError(v164);
        *(_QWORD *)(v154 + 24) = 2933LL;
        goto LABEL_210;
      }
      if ( (*(_DWORD *)(v158->Count + 4) & 0x1000) == 0 )
      {
        v154 = WdLogNewEntry5_WdError(v164);
        *(_QWORD *)(v154 + 24) = 2939LL;
        goto LABEL_210;
      }
      v171 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
                                 v104)
             + 10);
      if ( (v171 & 0x10) == 0 )
      {
        v173 = WdLogNewEntry5_WdWarning(v171, v170, v172, v112);
        *(_QWORD *)(v173 + 24) = 2946LL;
LABEL_233:
        WdLogEvent5_WdWarning(v173);
        LODWORD(v15) = -1071775739;
        goto LABEL_877;
      }
      v111 = a2->Flags.Value;
      if ( (v111 & 0x40000) != 0 && (v171 & 0x20) == 0 )
      {
        v173 = WdLogNewEntry5_WdWarning(v171, v170, v111, v112);
        *(_QWORD *)(v173 + 24) = 2952LL;
        goto LABEL_233;
      }
      if ( (v111 & 0xC0000) == 0xC0000 )
      {
        v154 = WdLogNewEntry5_WdError(v171);
        *(_QWORD *)(v154 + 24) = 2958LL;
        goto LABEL_210;
      }
    }
    v109 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(v109 + 18704) != *(_QWORD *)(*(_QWORD *)(v109 + 16) + 16LL) )
      goto LABEL_193;
    v174 = v611;
    v175 = *(_DWORD *)v611 ^ (*(_DWORD *)v611 ^ (2 * v111)) & 8;
    *(_DWORD *)v611 = v175;
    v176 = ((unsigned __int8)v175 ^ (unsigned __int8)(2 * a2->Flags.Value)) & 0x10 ^ v175;
    *(_DWORD *)v174 = v176;
    v177 = ((unsigned __int8)v176 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 0x20 ^ v176;
    *(_DWORD *)v174 = v177;
    v178 = (v177 ^ (8 * a2->Flags.Value)) & 0x100000 ^ v177;
    *(_DWORD *)v174 = v178;
    v179 = (v178 ^ (8 * a2->Flags.Value)) & 0x200000 ^ v178;
    *(_DWORD *)v174 = v179;
    *(_DWORD *)v174 = v179 ^ (v179 ^ (8 * a2->Flags.Value)) & 0x400000;
    if ( (a2->Flags.Value & 0x8000000) != 0 )
      Duration = a2->Duration;
    else
      Duration = 0;
    *((_DWORD *)v174 + 36) = Duration;
    v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 4;
    v647.Flags.Value ^= (*(_WORD *)&v647.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x100;
    v647.Flags.Value ^= (*(_WORD *)&v647.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x200;
    v647.Flags.Value ^= (*(_WORD *)&v647.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x400;
    pPresentRegions = a2->pPresentRegions;
    if ( pPresentRegions && !pPresentRegions->MoveRectCount && (*(unsigned int (**)(void))(v169 + 216))() )
    {
      v647.SubRectCnt = a2->pPresentRegions->DirtyRectCount;
      v647.pDstSubRects = a2->pPresentRegions->pDirtyRects;
    }
    v182 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                             + 8LL)
                                                                                 + 424LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
             (unsigned int)v104,
             &a2->FlipInterval);
    *((_DWORD *)v174 + 30) = v182;
    if ( !v182 )
    {
      v187 = (_QWORD *)WdLogNewEntry5_WdWarning(v184, v183, v185, v186);
      v187[3] = this;
      FlipInterval = a2->FlipInterval;
LABEL_453:
      v187[4] = FlipInterval;
      v187[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v187);
      v16 = -1073741811;
      goto LABEL_454;
    }
    if ( ((v182 - 1) & 0xFFFFFFFD) != 0 )
    {
      v647.FlipInterval = a2->FlipInterval;
      if ( *((_DWORD *)v174 + 30) == 2 )
        goto LABEL_254;
    }
    else
    {
      v647.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
    }
    v647.Flags.Value |= 8u;
LABEL_254:
    *((_DWORD *)v174 + 31) = a2->FlipInterval;
    *((_DWORD *)v174 + 29) = v104;
    v189 = *((_QWORD *)this + 2);
    v190 = v189 + 208;
    if ( v189 != -208 && *(struct _KTHREAD **)(v189 + 216) == KeGetCurrentThread() )
    {
      v191 = WdLogNewEntry5_WdAssertion(v184, v183, v185, v186);
      *(_QWORD *)(v191 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v191);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v189 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v194 = *(_DWORD *)(v189 + 224);
        if ( v194 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v192, &EventBlockThread, v193, v194);
      }
      ExAcquirePushLockSharedEx(v189 + 208, 0LL);
    }
    v195 = *(_QWORD *)(v189 + 8 * v104 + 4560);
    ExReleasePushLockSharedEx(v190, 0LL);
    KeLeaveCriticalRegion();
    v109 = (*(_DWORD *)(*(_QWORD *)v615 + 4LL) >> 13) & 1;
    if ( ((*(_DWORD *)(*(_QWORD *)v615 + 4LL) >> 13) & 1) != 0
      && v195
      && (*(_DWORD *)(*(_QWORD *)(v195 + 48) + 4LL) & 0x2000) == 0 )
    {
      v196 = v611;
      *(_DWORD *)v611 |= 0x800000u;
    }
    else if ( !(_DWORD)v109 && v195 && (*(_DWORD *)(*(_QWORD *)(v195 + 48) + 4LL) & 0x2000) != 0 )
    {
      v196 = v611;
      *(_DWORD *)v611 |= 0x800000u;
    }
    else
    {
      v196 = v611;
      *(_DWORD *)v611 &= ~0x800000u;
    }
    v197 = *((_DWORD *)v196 + 30);
    if ( !v197 )
      goto LABEL_193;
    if ( v197 == *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v104 + 18640) )
      goto LABEL_193;
    v198 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v198 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v198);
    COREDEVICEACCESS::Release(v601);
    DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL);
    v199 = COREDEVICEACCESS::AcquireShared(v601);
    v15 = v199;
    if ( v199 >= 0 )
      goto LABEL_193;
    v200 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v200 + 24) = v15;
    WdLogEvent5_WdEvent(v200);
    goto LABEL_877;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (v96 & 3) == 0 || (v96 & 0x3C) != 0 || (v96 & 0xE8000) != 0 )
    goto LABEL_122;
  if ( (v96 & 2) != 0 )
  {
    if ( (v96 & 0x100601) != 0 || (v96 & 0x80u) != 0LL )
    {
LABEL_122:
      v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, Value, a3, a4);
      v98 = -1073741811;
      v97[3] = this;
      v97[4] = a2->pSrcSubRects;
      v97[5] = a2->SubRectCnt;
      v97[6] = a2->Flags.Value;
      v97[7] = -1073741811LL;
LABEL_123:
      WdLogEvent5_WdWarning(v97);
LABEL_124:
      v16 = v98;
LABEL_125:
      LODWORD(v15) = v16;
      goto LABEL_877;
    }
  }
  else
  {
    if ( !v606[0] || !v602 || (v96 & 0x80u) == 0LL )
      goto LABEL_122;
    v96 &= 0x600u;
    if ( (_DWORD)v96 == 1536 )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, Value, a3, a4);
      v98 = -1073741811;
      v97[3] = -1073741811LL;
      v97[4] = this;
      v97[5] = a2->pSrcSubRects;
      v97[6] = a2->SubRectCnt;
      v97[7] = a2->Flags.Value;
      goto LABEL_123;
    }
  }
  v99 = *(_DWORD *)(*((_QWORD *)v31 + 6) + 4LL);
  if ( (v99 & 3) == 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v96);
    LODWORD(v15) = -1073741811;
    v100[3] = -1073741811LL;
    v100[4] = this;
    v100[5] = v31;
    v101 = *((_QWORD *)v31 + 6);
LABEL_133:
    v100[6] = v101;
    v102 = a2->hDestination;
LABEL_134:
    v100[7] = v102;
    v103 = v100;
LABEL_135:
    WdLogEvent5_WdError(v103);
    goto LABEL_877;
  }
  v104 = (v99 >> 6) & 0xF;
  v105 = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
  if ( !v105
    || (v105 = *(_QWORD *)(v105 + 1976)) == 0
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v105 + 16)) )
  {
    v106 = WdLogNewEntry5_WdAssertion(v105, Value, a3, a4);
    *(_QWORD *)(v106 + 24) = 2628LL;
    WdLogEvent5_WdAssertion(v106);
  }
  *((_DWORD *)v611 + 29) = v104;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v622, v31);
  DXGALLOCATIONREFERENCE::MoveAssign(&v626, &v622);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v622);
  v107 = a2->hDestination;
  memset(&v636, 0, sizeof(v636));
  v618 = v107;
  v636.hAllocation = *(HANDLE *)(*((_QWORD *)v31 + 6) + 16LL);
  v108 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v636);
  v15 = v108;
  if ( v108 < 0 )
  {
    v113 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    v113[3] = v15;
    v113[4] = this;
    v113[5] = *(_QWORD *)(*((_QWORD *)v31 + 6) + 16LL);
    v113[6] = v31;
    WdLogEvent5_WdError(v113);
    goto LABEL_877;
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    v647.DstRect.right = v636.Width;
    v647.DstRect.bottom = v636.Height;
    *(_QWORD *)&v647.DstRect.left = 0LL;
    if ( (a2->Flags.Value & 0x40) != 0 )
    {
      v134 = a2->DstRect.right;
      if ( v134 <= a2->DstRect.left )
        goto LABEL_174;
      p_SrcRect = (RECT *)(unsigned int)a2->DstRect.bottom;
      if ( (int)p_SrcRect <= a2->DstRect.top || v134 <= 0 || (int)p_SrcRect <= 0 )
        goto LABEL_174;
      if ( !DXGPRESENT::IntersectRect(&v647.DstRect, &a2->DstRect, &v647.DstRect) )
        goto LABEL_125;
    }
    for ( k = 0; k < a2->SubRectCnt; ++k )
    {
      v136 = k;
      if ( !DXGPRESENT::IntersectRect(&v650, &a2->pSrcSubRects[v136], &v647.DstRect)
        || RtlCompareMemory(&v650, &a2->pSrcSubRects[v136], 0x10uLL) != 16 )
      {
        v150 = (_QWORD *)WdLogNewEntry5_WdError(v137);
        LODWORD(v15) = -1073741811;
        v150[3] = -1073741811LL;
        v150[4] = a2->DstRect.left;
        v150[5] = a2->DstRect.top;
        v150[6] = a2->DstRect.right;
        v150[7] = a2->DstRect.bottom;
        WdLogEvent5_WdError(v150);
        v152 = (_QWORD *)WdLogNewEntry5_WdError(v151);
        v152[3] = k;
        v152[4] = a2->pSrcSubRects[k].left;
        v152[5] = a2->pSrcSubRects[k].top;
        v152[6] = a2->pSrcSubRects[k].right;
        v152[7] = a2->pSrcSubRects[k].bottom;
        WdLogEvent5_WdError(v152);
        goto LABEL_877;
      }
    }
    v131 = v647.Flags.Value;
    v647.SrcRect = v647.DstRect;
    v647.pDstSubRects = a2->pSrcSubRects;
    goto LABEL_192;
  }
  if ( v31 == (struct DXGALLOCATION *)v30 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    LODWORD(v15) = -1073741811;
    v100[3] = -1073741811LL;
    v100[4] = this;
    v100[5] = v30;
    v101 = a2->hSource;
    goto LABEL_133;
  }
  v114 = *(_DWORD *)(v30[6].Count + 4);
  if ( (v114 & 3) != 0 )
  {
    v115 = (v114 >> 6) & 0xF;
    if ( (_DWORD)v115 != (_DWORD)v104 )
    {
      v100 = (_QWORD *)WdLogNewEntry5_WdError(v115);
      LODWORD(v15) = -1073741811;
      v100[3] = -1073741811LL;
      v100[4] = this;
      v100[5] = v30;
      v102 = (unsigned int)v104;
      v100[6] = (*(_DWORD *)(v30[6].Count + 4) >> 6) & 0xF;
      goto LABEL_134;
    }
  }
  v116 = a2->SrcRect.left;
  p_SrcRect = &a2->SrcRect;
  v111 = (unsigned int)a2->SrcRect.right;
  if ( (int)v111 <= v116
    || (v112 = (unsigned int)a2->SrcRect.bottom, v109 = (unsigned int)a2->SrcRect.top, (int)v112 <= (int)v109)
    || (v117 = v606[0], v116 >= (int)v606[0])
    || (v118 = v602, (int)v109 >= v602)
    || (int)v111 <= 0
    || (int)v112 <= 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    LODWORD(v15) = -1073741811;
    v100[3] = -1073741811LL;
    v100[4] = a2->SrcRect.left;
    v100[5] = a2->SrcRect.top;
    v100[6] = a2->SrcRect.right;
    v102 = a2->SrcRect.bottom;
    goto LABEL_134;
  }
  v119 = 0;
  if ( !a2->SubRectCnt )
    goto LABEL_159;
  do
  {
    v120 = v119;
    if ( !DXGPRESENT::IntersectRect(&Source1, &a2->pSrcSubRects[v120], p_SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v120], 0x10uLL) != 16 )
    {
      v128 = (_QWORD *)WdLogNewEntry5_WdError(v121);
      LODWORD(v15) = -1073741811;
      v128[3] = -1073741811LL;
      v128[4] = a2->SrcRect.left;
      v128[5] = a2->SrcRect.top;
      v128[6] = a2->SrcRect.right;
      v128[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v128);
      v130 = (_QWORD *)WdLogNewEntry5_WdError(v129);
      v130[3] = v119;
      v130[4] = a2->pSrcSubRects[v119].left;
      v130[5] = a2->pSrcSubRects[v119].top;
      v130[6] = a2->pSrcSubRects[v119].right;
      v103 = v130;
      v130[7] = a2->pSrcSubRects[v119].bottom;
      goto LABEL_135;
    }
    ++v119;
    p_SrcRect = &a2->SrcRect;
  }
  while ( v119 < a2->SubRectCnt );
  v118 = v602;
  p_SrcRect = &a2->SrcRect;
  v117 = v606[0];
LABEL_159:
  if ( (a2->Flags.Value & 0x40) == 0 )
  {
    if ( v636.Width == v117 && v636.Height == v118 )
    {
      v647.DstRect = *p_SrcRect;
      v647.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_178;
    }
    v132 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v109, v111, v112);
    v133 = v606[0];
    v132[3] = this;
    v132[4] = v636.Width;
    v132[5] = v636.Height;
    v132[6] = v133;
    v132[7] = v118;
    WdLogEvent5_WdWarning(v132);
    LODWORD(v15) = -1073741811;
    goto LABEL_877;
  }
  v111 = (unsigned int)a2->DstRect.right;
  v122 = a2->DstRect.left;
  if ( (int)v111 <= v122
    || (v109 = (unsigned int)a2->DstRect.bottom, v112 = (unsigned int)a2->DstRect.top, (int)v109 <= (int)v112)
    || v122 >= (int)v636.Width
    || (int)v112 >= (int)v636.Height
    || (int)v111 <= 0
    || (int)v109 <= 0 )
  {
LABEL_174:
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v109, v111, v112);
    v98 = -1073741811;
    v97[3] = -1073741811LL;
    v97[4] = a2->DstRect.left;
    v97[5] = a2->DstRect.top;
    v97[6] = a2->DstRect.right;
    v97[7] = a2->DstRect.bottom;
    goto LABEL_123;
  }
  v123 = (unsigned int)(a2->SrcRect.right - p_SrcRect->left);
  if ( (_DWORD)v123 != (_DWORD)v111 - v122
    || (v123 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top), (_DWORD)v123 != (_DWORD)v109 - (_DWORD)v112) )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdError(v123);
    LODWORD(v15) = -1073741811;
    v100[3] = -1073741811LL;
    v100[4] = this;
    v100[5] = a2->Flags.Value;
    v100[6] = v31;
    v102 = (unsigned int)v104;
    goto LABEL_134;
  }
  v98 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 17), a2->SubRectCnt);
  if ( v98 < 0 )
    goto LABEL_124;
  v124 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 17), 0);
  v111 = 0LL;
  v112 = (unsigned int)(a2->DstRect.left - a2->SrcRect.left);
  v125 = a2->DstRect.top - a2->SrcRect.top;
  if ( a2->SubRectCnt > (unsigned int)v109 )
  {
    do
    {
      v126 = (unsigned int)v111;
      v111 = (unsigned int)(v111 + 1);
      v109 = 2 * v126;
      *(&v124->left + 2 * v109) = v112 + *(&a2->pSrcSubRects->left + 2 * v109);
      *(&v124->right + 2 * v109) = v112 + *(&a2->pSrcSubRects->right + 2 * v109);
      *(&v124->top + 2 * v109) = v125 + *(&a2->pSrcSubRects->top + 2 * v109);
      *(&v124->bottom + 2 * v109) = v125 + *(&a2->pSrcSubRects->bottom + 2 * v109);
    }
    while ( (unsigned int)v111 < a2->SubRectCnt );
  }
  DstRect = a2->DstRect;
  v647.pDstSubRects = v124;
  p_SrcRect = &a2->SrcRect;
  v647.DstRect = DstRect;
LABEL_178:
  v647.SrcRect = *p_SrcRect;
  v131 = (*(_WORD *)&v647.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800 ^ v647.Flags.Value;
  v647.Flags.Value = v131;
LABEL_192:
  v647.SubRectCnt = a2->SubRectCnt;
  v647.Flags.Value = ((unsigned __int8)v131 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 1 ^ v131;
  v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 2;
  v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
  v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
  v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
  v647.Color = a2->Color;
  v647.Flags.Value ^= (*(_WORD *)&v647.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
LABEL_193:
  v138 = *((_QWORD *)this + 2);
  v139 = *(_QWORD *)(*(_QWORD *)(v138 + 18704) + 1976LL);
  v140 = *(_QWORD *)(v139 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v140 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v140 + 128)) )
  {
    v141 = WdLogNewEntry5_WdAssertion(v140, v109, v111, v112);
    *(_QWORD *)(v141 + 24) = 3953LL;
    WdLogEvent5_WdAssertion(v141);
  }
  if ( (unsigned int)v104 >= *(_DWORD *)(v139 + 80) )
  {
    v142 = WdLogNewEntry5_WdAssertion(v140, v109, v111, v112);
    *(_QWORD *)(v142 + 24) = 3954LL;
    WdLogEvent5_WdAssertion(v142);
    if ( (unsigned int)v104 >= *(_DWORD *)(v139 + 80) )
      goto LABEL_451;
  }
  v144 = *(_QWORD *)(v139 + 112);
  v145 = (DXGGLOBAL **)(unsigned int)v104;
  v143 = (CWin32kLocks *)(1008LL * (unsigned int)v104);
  CurrentIrql = (DXGGLOBAL **)(unsigned int)v104;
  v612 = v143;
  if ( v138 != *(_QWORD *)((char *)v143 + v144 + 672) )
  {
LABEL_451:
    v327 = (_QWORD *)WdLogNewEntry5_WdWarning(v143, v109, v111, v112);
    v327[3] = -1071775744LL;
    v327[4] = this;
    v327[5] = a2->hSource;
    v327[6] = v604;
    v327[7] = (unsigned int)v104;
    WdLogEvent5_WdWarning(v327);
    LODWORD(v15) = -1071775744;
    goto LABEL_877;
  }
  v146 = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
  if ( v146 )
  {
    v147 = *(_QWORD *)(v146 + 1984);
    if ( !(v147
         ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v147 + 376) + 8LL) + 448LL))(
             *(_QWORD *)(v147 + 384),
             (unsigned int)v104)
         : (unsigned __int8)DmmIsSourceInActiveVidPnTopology(v146, (unsigned int)v104, v111, v112)) )
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 1 )
      {
        v201 = (_QWORD *)WdLogNewEntry5_WdEvent(v149, v109, v111, v112);
        LODWORD(v15) = -1071775738;
        v201[3] = -1071775738LL;
        v201[4] = this;
        v201[5] = (unsigned int)v104;
        WdLogEvent5_WdEvent(v201);
        goto LABEL_877;
      }
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v202 = (_QWORD *)WdLogNewEntry5_WdEvent(v149, v109, v111, v112);
        v202[3] = 0LL;
        v202[4] = this;
        v202[5] = (unsigned int)v104;
        WdLogEvent5_WdEvent(v202);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v203 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( *((_QWORD *)v203 + 2338) == *(_QWORD *)(*((_QWORD *)v203 + 2) + 16LL) )
          {
            DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(v203, v104);
            v204 = v611;
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v104, v604, *((_DWORD *)v611 + 34));
            LODWORD(v15) = 0;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v104 + 18640) = *((_DWORD *)v204 + 30);
          }
          else
          {
            DXGDEVICE::SetDisplayedPrimary(v203, v104, v604, 0);
            LODWORD(v15) = 0;
          }
          goto LABEL_877;
        }
LABEL_454:
        LODWORD(v15) = v16;
        goto LABEL_877;
      }
    }
  }
  v205 = (DXGCONTEXT *)a2->Flags.Value;
  if ( ((unsigned int)v205 & 0x10000000) == 0 )
  {
    v206 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v206 + 280) == 1 && (*(_DWORD *)(v206 + 4 * v104 + 4752) & 0x20) == 0 )
    {
      v207 = (_QWORD *)WdLogNewEntry5_WdEvent(v205, v109, v111, v112);
      LODWORD(v15) = -1071775739;
      v207[3] = -1071775739LL;
      v207[4] = this;
      v207[5] = a2->hSource;
      v207[6] = v604;
      v207[7] = (unsigned int)v104;
      WdLogEvent5_WdEvent(v207);
      goto LABEL_877;
    }
  }
  if ( ((unsigned __int8)v205 & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v15) = DXGCONTEXT::ValidatePresentRegions(v205, a2, v606[0], v602);
      if ( (int)v15 < 0 )
        goto LABEL_877;
    }
  }
  v208 = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
  v209 = *(_QWORD *)(v208 + 1976);
  if ( (unsigned int)v104 >= *(_DWORD *)(v209 + 80) )
  {
    v210 = WdLogNewEntry5_WdAssertion(v208, v109, v111, v112);
    *(_QWORD *)(v210 + 24) = 10609LL;
    WdLogEvent5_WdAssertion(v210);
  }
  v211 = *(_QWORD *)(v209 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v211 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v211 + 128)) )
  {
    v213 = WdLogNewEntry5_WdAssertion(v212, v109, v111, v112);
    *(_QWORD *)(v213 + 24) = 10610LL;
    WdLogEvent5_WdAssertion(v213);
  }
  v214 = *(_QWORD *)((char *)v612 + *(_QWORD *)(v209 + 112) + 88);
  if ( !v214 || (v215 = *(_QWORD *)(v214 + 48), (*(_DWORD *)(v215 + 4) & 0x10) != 0) || !v215 )
  {
    v234 = *((_QWORD *)this + 2);
    if ( (*(_DWORD *)(v234 + 4 * v104 + 4752) & 0x40) != 0 || (a2->Flags.Value & 0x10000000) != 0 )
      goto LABEL_307;
    v235 = (_QWORD *)WdLogNewEntry5_WdWarning(*(_DWORD *)(v234 + 4 * v104 + 4752) >> 6, v109, v111, v112);
    LODWORD(v232) = -1071775739;
    v235[3] = -1071775739LL;
    v235[4] = this;
    v235[5] = a2->hSource;
    v235[6] = v604;
    v235[7] = (unsigned int)v104;
    goto LABEL_874;
  }
  v216 = *(_DWORD *)(*((_QWORD *)this + 17) + 8LL);
  v19 = v216 == (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(v613 + 8))(v215, v109, v111, v112);
  v217 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( v19 )
  {
    if ( (*(_BYTE *)&v217 & 4) != 0 )
      goto LABEL_307;
    COREDEVICEACCESS::Release(v601);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v608);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v643,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v643);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v608);
    v230 = COREDEVICEACCESS::AcquireShared(v601);
    v232 = (struct VIDSCH_SUBMIT_DATA_BASE *)v230;
    if ( v230 >= 0 )
    {
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v231, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v643);
      goto LABEL_307;
    }
    v233 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v233 + 24) = v232;
    *(_QWORD *)(v233 + 32) = this;
    WdLogEvent5_WdEvent(v233);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v643);
    goto LABEL_875;
  }
  if ( (*(_BYTE *)&v217 & 4) == 0 )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v608);
    COREDEVICEACCESS::Release(v601);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v644,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v644);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v608);
    v218 = COREDEVICEACCESS::AcquireShared(v601);
    v15 = v218;
    if ( v218 < 0 )
    {
      v220 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v220 + 24) = v15;
      *(_QWORD *)(v220 + 32) = this;
      WdLogEvent5_WdEvent(v220);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v644);
      goto LABEL_877;
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v219, 1u);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v644);
  }
  *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = (*(__int64 (**)(void))(v613 + 8))();
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
                   v104);
  if ( CddInterface )
    (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
LABEL_307:
  v222 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v222 + 18704) != *(_QWORD *)(*(_QWORD *)(v222 + 16) + 16LL) )
  {
    v313 = *(_QWORD *)(v222 + 18704);
    if ( v313 )
    {
      v314 = v604;
      if ( !*(_DWORD *)(v222 + 280) )
      {
        v315 = v614;
        if ( (*(_BYTE *)&a2->Flags.0 & 4) != 0 )
          v315 = v604;
        v316 = *(_DWORD *)(*((_QWORD *)v315 + 6) + 4LL);
        if ( (v316 & 0x10) != 0 )
        {
          v317 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
          v317[3] = -1071775482LL;
          v317[4] = this;
          v317[5] = v315;
          WdLogEvent5_WdEvent(v317);
          LODWORD(v232) = -1071775482;
          goto LABEL_875;
        }
        v318 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v313 + 1976), (v316 >> 6) & 0xF);
        memset(&v637, 0, 40);
        v637.Flags.Value = 1;
        v637.Rotation = -1;
        v319 = *((_QWORD *)v315 + 6);
        v645 = v318;
        v637.hAllocation = *(HANDLE *)(v319 + 16);
        v320 = ADAPTER_RENDER::DdiDescribeAllocation(
                 *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1984LL),
                 &v637);
        v322 = v320;
        if ( v320 < 0 )
        {
          v323 = (_QWORD *)WdLogNewEntry5_WdError(v321);
          v323[3] = v322;
          v323[4] = this;
          v323[5] = *((unsigned int *)v315 + 4);
          v323[6] = v315;
          v323[7] = (*(_DWORD *)(*((_QWORD *)v315 + 6) + 4LL) >> 6) & 0xF;
LABEL_450:
          WdLogEvent5_WdError(v323);
          LODWORD(v232) = -1073741811;
          goto LABEL_875;
        }
        if ( *(_QWORD *)&v637.Width != (_QWORD)v645 )
          goto LABEL_444;
        v324 = 22;
        Format = D3DDDIFMT_X8R8G8B8;
        if ( v637.Format != D3DDDIFMT_A8R8G8B8 )
          Format = v637.Format;
        if ( DWORD2(v645) != 21 )
          v324 = DWORD2(v645);
        if ( Format != v324 )
        {
LABEL_444:
          v326 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
          v326[3] = -1071775482LL;
          v326[4] = this;
          v326[5] = v315;
          WdLogEvent5_WdEvent(v326);
          LODWORD(v232) = -1071775739;
          goto LABEL_875;
        }
        v145 = (DXGGLOBAL **)(unsigned int)v104;
      }
      LODWORD(v15) = BLTQUEUE::Present(
                       (BLTQUEUE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL)
                                                                      + 1976LL)
                                                          + 248LL)
                                              + 8LL)
                                  + 2384LL * (_QWORD)v145),
                       this,
                       a2,
                       &v647,
                       v601);
      if ( (int)v15 < 0 )
        goto LABEL_414;
      if ( (a2->Flags.Value & 4) != 0 )
      {
        DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), v104);
        DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v104, v314, 0);
      }
      goto LABEL_403;
    }
    v323 = (_QWORD *)WdLogNewEntry5_WdError(v222);
    v323[3] = *((_QWORD *)this + 2);
    v323[4] = -1073741822LL;
    goto LABEL_450;
  }
  v223 = *(struct _ERESOURCE **)(v222 + 80);
  v609 = (*(_BYTE *)&a2->Flags.0 & 0x10) == 0;
  ExIsResourceAcquiredSharedLite(v223);
  LODWORD(v225) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 376LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                    (unsigned int)v104,
                    0LL);
  if ( (_DWORD)v225 != -1071775486 )
    goto LABEL_319;
  if ( !v609 )
    goto LABEL_320;
  COREDEVICEACCESS::Release(v601);
  LOBYTE(v228) = 1;
  v225 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 376LL)
                                                                    + 8LL)
                                                        + 184LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
           (unsigned int)v104,
           v228);
  v597 = COREDEVICEACCESS::AcquireShared(v601);
  if ( v597 < 0 )
  {
    v229 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v229 + 24) = v225;
    WdLogEvent5_WdEvent(v229);
    LODWORD(v225) = v597;
    goto LABEL_324;
  }
LABEL_319:
  if ( (int)v225 < 0 )
  {
LABEL_320:
    v236 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v236 + 24) = (int)v225;
    *(_QWORD *)(v236 + 32) = this;
    WdLogEvent5_WdEvent(v236);
    if ( (_DWORD)v225 != -1071775486 && (_DWORD)v225 != -1073741130 && (_DWORD)v225 != -1071775232 )
    {
      v241 = WdLogNewEntry5_WdAssertion(v238, v237, v239, v240);
      *(_QWORD *)(v241 + 24) = 2054LL;
      WdLogEvent5_WdAssertion(v241);
    }
LABEL_324:
    v242 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v242 + 24) = (int)v225;
    *(_QWORD *)(v242 + 32) = this;
    WdLogEvent5_WdEvent(v242);
    LODWORD(v232) = v225;
    goto LABEL_875;
  }
  if ( ((*((_DWORD *)v611 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
LABEL_329:
    v615 = (HDEV)*((_QWORD *)this + 2);
    v246 = *(_QWORD *)(*((_QWORD *)v615 + 2338) + 1976LL);
    v247 = *(HDEV *)(v246 + 16);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v247 + 18)
      && !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v247 + 16)) )
    {
      v248 = WdLogNewEntry5_WdAssertion(v247, v224, v226, v227);
      *(_QWORD *)(v248 + 24) = 3953LL;
      WdLogEvent5_WdAssertion(v248);
    }
    if ( (unsigned int)v104 >= *(_DWORD *)(v246 + 80) )
    {
      v249 = WdLogNewEntry5_WdAssertion(v247, v224, v226, v227);
      *(_QWORD *)(v249 + 24) = 3954LL;
      WdLogEvent5_WdAssertion(v249);
    }
    v250 = v604;
    if ( (unsigned int)v104 >= *(_DWORD *)(v246 + 80)
      || (v224 = v612, v247 = v615, v615 != *(HDEV *)((char *)v612 + *(_QWORD *)(v246 + 112) + 672)) )
    {
      v309 = (_QWORD *)WdLogNewEntry5_WdWarning(v247, v224, v226, v227);
      v309[3] = -1071775744LL;
      v309[4] = this;
      v309[5] = a2->hSource;
      v309[6] = v250;
      v309[7] = (unsigned int)v104;
      WdLogEvent5_WdWarning(v309);
      LODWORD(v15) = -1071775744;
LABEL_422:
      v310 = *((_QWORD *)this + 36);
      if ( v310 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 400LL)
                                                            + 8LL)
                                                + 480LL))(
          v310,
          0LL);
        *((_QWORD *)this + 36) = 0LL;
      }
      if ( (_DWORD)v15 == -1071774920 )
      {
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v311 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( *((_QWORD *)v311 + 2338) == *(_QWORD *)(*((_QWORD *)v311 + 2) + 16LL) )
          {
            DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(v311, v104);
            v232 = v611;
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v104, v250, *((_DWORD *)v611 + 34));
            v312 = *((_DWORD *)v232 + 30);
            LODWORD(v232) = 0;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v104 + 18640) = v312;
            goto LABEL_875;
          }
          DXGDEVICE::SetDisplayedPrimary(v311, v104, v250, 0);
        }
        LODWORD(v232) = 0;
LABEL_875:
        LODWORD(v402) = (_DWORD)v232;
LABEL_876:
        LODWORD(v15) = v402;
        goto LABEL_877;
      }
      goto LABEL_403;
    }
    v251 = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
    if ( v251 )
    {
      v252 = *(_QWORD *)(v251 + 1984);
      if ( !(v252
           ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v252 + 376) + 8LL) + 448LL))(
               *(_QWORD *)(v252 + 384),
               (unsigned int)v104)
           : (unsigned __int8)DmmIsSourceInActiveVidPnTopology(v251, (unsigned int)v104, v226, v227)) )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 1 )
        {
          v254 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
          LODWORD(v15) = -1071775738;
          v254[3] = -1071775738LL;
          v254[4] = this;
          v254[5] = (unsigned int)v104;
          WdLogEvent5_WdEvent(v254);
          goto LABEL_422;
        }
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v255 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
          v255[3] = 0LL;
          v255[4] = this;
          v255[5] = (unsigned int)v104;
          WdLogEvent5_WdEvent(v255);
          LODWORD(v15) = -1071774920;
          goto LABEL_422;
        }
      }
    }
    v256 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_DWORD *)&v256 & 0x10000000) == 0 )
    {
      v257 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v257 + 280) == 1 && (*(_DWORD *)(v257 + 4 * v104 + 4752) & 0x20) == 0 )
      {
        v258 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
        LODWORD(v15) = -1071775739;
        v258[3] = -1071775739LL;
        v258[4] = this;
        v258[5] = a2->hSource;
        v258[6] = v250;
        v258[7] = (unsigned int)v104;
        WdLogEvent5_WdEvent(v258);
        goto LABEL_422;
      }
    }
    v259 = v604;
    if ( (*(_BYTE *)&v256 & 4) != 0 )
    {
      if ( v604 )
      {
        v260 = *((_QWORD *)v604 + 6);
        if ( v260 )
        {
          if ( (*(_DWORD *)(v260 + 4) & 0x2000) != 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v604) )
          {
            v261 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            LODWORD(v232) = -1071775739;
            v261[3] = -1071775739LL;
            v261[4] = this;
            v261[5] = v259;
            WdLogEvent5_WdEvent(v261);
            v262 = *((_QWORD *)this + 36);
            if ( v262 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 480LL))(
                v262,
                0LL);
              *((_QWORD *)this + 36) = 0LL;
            }
            goto LABEL_875;
          }
        }
      }
    }
    if ( (*(_WORD *)&v256 & 0x2000) != 0 )
    {
      v263 = ADAPTER_DISPLAY::GetCurrentOrientation(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
               v104,
               1);
      v647.Flags.Value ^= (*(_BYTE *)&v647.Flags.0 ^ (unsigned __int8)((v263 != 1) << 7)) & 0x80;
    }
    if ( bTracingEnabled )
    {
      v264 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v265 = *(_QWORD *)(v264 + 408);
      v266 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v264 + 400) + 8LL) + 320LL);
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v267 = v266(v265, hSource);
        v268 = v647.Flags.Value >> 3;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LOBYTE(v268) = (*(_BYTE *)&v647.Flags.0 & 8) != 0;
          Template_pqpqtt(*((_QWORD *)this + 36) == 0LL, v268, v267);
        }
        goto LABEL_376;
      }
      v266(v265, v610);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                         + 8LL)
                                             + 320LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
        hSource);
      v271 = v647.pDstSubRects;
      v272 = v647.SubRectCnt;
      v273 = a2->hWindow;
      v616 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 36);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppxppttqddddddddq(
          HIDWORD(*(_QWORD *)&v647.DstRect.left),
          HIDWORD(*(_QWORD *)&v647.DstRect.right),
          HIDWORD(*(_QWORD *)&v647.SrcRect.left),
          v273,
          v616);
      v274 = 0;
      if ( v272 )
      {
        v275 = v616;
        while ( v272 - v274 <= 0x10 )
        {
          v276 = v272 - v274;
          if ( v272 != v274 )
            goto LABEL_369;
LABEL_371:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(HandleInformation) = v276;
            LODWORD(Object) = v272 - v274 <= 0x10;
            Template_ptqDR2DR2DR2DR2((__int64)v665, v269, v270, v275, Object, HandleInformation, v665, v663, v654, v661);
          }
          v274 += 16;
          if ( v274 >= v272 )
          {
            v259 = v604;
            goto LABEL_375;
          }
        }
        v276 = 16;
LABEL_369:
        LODWORD(v270) = v274;
        v277 = v276;
        v269 = 0LL;
        do
        {
          v269 += 4LL;
          v278 = (unsigned int)v270;
          v270 = (unsigned int)(v270 + 1);
          v279 = &v271[v278];
          *(_DWORD *)&v664[v269 + 60] = v279->left;
          *(_DWORD *)&v662[v269 + 60] = v279->right;
          *(_DWORD *)&v654[v269 - 4] = v279->top;
          *(_DWORD *)&v660[v269 + 60] = v279->bottom;
          --v277;
        }
        while ( v277 );
        goto LABEL_371;
      }
LABEL_375:
      v145 = CurrentIrql;
    }
LABEL_376:
    LODWORD(v15) = DXGCONTEXT::SubmitPresent(
                     this,
                     a2,
                     a2->BroadcastContextCount,
                     v625,
                     v259,
                     hSource,
                     v610,
                     &v647,
                     a2->pPresentRegions,
                     *((struct _VIDMM_DMA_BUFFER **)this + 36),
                     v611,
                     v601);
    if ( (int)v15 >= 0 )
    {
      v280 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL) + 112LL);
      if ( *(_DWORD *)((char *)v612 + v280 + 956) == -1 )
      {
        v281 = WdLogNewEntry5_WdAssertion(v280, v224, v226, v227);
        *(_QWORD *)(v281 + 24) = 3344LL;
        WdLogEvent5_WdAssertion(v281);
      }
    }
    v243 = (_QWORD *)((char *)this + 288);
    *((_QWORD *)this + 36) = 0LL;
    if ( (int)v15 < 0 )
      goto LABEL_415;
    if ( (a2->Flags.Value & 4) == 0 )
      goto LABEL_404;
    v282 = *((_QWORD *)this + 2);
    if ( v282 != -208 && *(struct _KTHREAD **)(v282 + 216) == KeGetCurrentThread() )
    {
      v283 = WdLogNewEntry5_WdAssertion(v280, v224, v226, v227);
      *(_QWORD *)(v283 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v283);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v282 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v286 = *(_DWORD *)(v282 + 224);
        if ( v286 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v284, &EventBlockThread, v285, v286);
      }
      ExAcquirePushLockExclusiveEx(v282 + 208, 0LL);
    }
    v287 = (HDEV)((_QWORD)v145 << 6);
    v615 = v287;
    *(_QWORD *)((char *)v287 + v282 + 17168) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17176) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17184) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17192) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17200) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17208) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17216) = 0LL;
    *(_QWORD *)((char *)v287 + v282 + 17224) = 0LL;
    *(_DWORD *)(v282 + 4LL * (_QWORD)v145 + 18192) = 0;
    *(_QWORD *)(v282 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v282 + 208, 0LL);
    KeLeaveCriticalRegion();
    v292 = *((_QWORD *)this + 2);
    v598 = *((_DWORD *)v611 + 34);
    if ( v292 != -208 && *(struct _KTHREAD **)(v292 + 216) == KeGetCurrentThread() )
    {
      v293 = WdLogNewEntry5_WdAssertion(v289, v288, v290, v291);
      *(_QWORD *)(v293 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v293);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v292 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v296 = *(_DWORD *)(v292 + 224);
        if ( v296 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v294, &EventBlockThread, v295, v296);
      }
      ExAcquirePushLockExclusiveEx(v292 + 208, 0LL);
    }
    *(_QWORD *)(v292 + 216) = KeGetCurrentThread();
    v297 = v604;
    *(_QWORD *)(v292 + 8LL * (_QWORD)v145 + 4560) = v604;
    *(_DWORD *)(v292 + 4LL * (_QWORD)v145 + 4688) = v598;
    if ( !*(_DWORD *)(v292 + 4LL * (_QWORD)v145 + 18192) && v297 )
      *(_QWORD *)((char *)v615 + v292 + 17168) = v297;
    *(_QWORD *)(v292 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v292 + 208, 0LL);
    KeLeaveCriticalRegion();
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (_QWORD)v145 + 18640) = *((_DWORD *)v611 + 30);
    goto LABEL_403;
  }
  v243 = (_QWORD *)((char *)this + 288);
  LODWORD(v15) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 36, v601, 0);
  if ( (int)v15 >= 0 )
  {
    if ( !*v243 )
    {
      v245 = WdLogNewEntry5_WdAssertion(v244, v224, v226, v227);
      *(_QWORD *)(v245 + 24) = 3232LL;
      WdLogEvent5_WdAssertion(v245);
    }
    goto LABEL_329;
  }
LABEL_415:
  v306 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v306 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v306 + 128))
    && (_DWORD)v15 != -1073741130 )
  {
    v307 = WdLogNewEntry5_WdAssertion(v306, v224, v226, v227);
    *(_QWORD *)(v307 + 24) = 4553LL;
    WdLogEvent5_WdAssertion(v307);
  }
  if ( *v243 )
  {
    v308 = WdLogNewEntry5_WdAssertion(v306, v224, v226, v227);
    *(_QWORD *)(v308 + 24) = 4554LL;
    WdLogEvent5_WdAssertion(v308);
  }
LABEL_877:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v626);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v614);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v604);
  return (unsigned int)v15;
}
