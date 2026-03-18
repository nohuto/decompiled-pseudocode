/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400
 * Callers:
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1C0001C14 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C00023AC (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000724C (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0007C34 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000C200 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000C240 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000C264 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F398 (Template_ppxppttqddddddddq.c)
 *     Template_pqpqtt @ 0x1C001F548 (Template_pqpqtt.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C001F604 (Template_ptqDR2DR2DR2DR2.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005BE80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C006C644 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006DBF8 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C007DA74 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0097CD8 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00B375C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00C6C68 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00C70DC (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00C7A84 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C00C8DC0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00C8FA4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C0123BF8 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0124880 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013AC1C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C014B044 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C014B6AC (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C014B9C8 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C014C074 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015E204 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
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
  struct _D3DKMT_PRESENT *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 Value; // rdx
  __int64 v15; // rax
  unsigned int v17; // edi
  int v18; // ecx
  unsigned int hDestination; // eax
  bool v20; // zf
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int128 v28; // rtt
  D3DKMT_HANDLE v29; // ebx
  unsigned int v30; // r12d
  unsigned int VidPnSourceId; // r13d
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // edx
  struct _EX_RUNDOWN_REF *v39; // rdx
  struct _EX_RUNDOWN_REF *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // esi
  D3DKMT_HANDLE v49; // ebx
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  unsigned int v54; // ecx
  __int64 v55; // r8
  int v56; // edx
  int v57; // r12d
  struct _EX_RUNDOWN_REF *v58; // rdx
  struct _EX_RUNDOWN_REF *v59; // rcx
  struct _EX_RUNDOWN_REF *v60; // rbx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  struct DXGGLOBAL *v63; // rax
  __int64 v64; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v66; // rax
  int CurrentProcessSessionId; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v69; // rax
  struct _KTHREAD *v70; // rbx
  __int64 v71; // rax
  int v72; // edi
  __int64 v73; // rax
  __int64 v74; // rbx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r15
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r9d
  __int64 v89; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v91; // rbx
  struct _KTHREAD *v92; // rbx
  __int64 v93; // rax
  int v94; // r15d
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r15
  __int64 v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // rcx
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  _QWORD *v108; // rax
  struct _EX_RUNDOWN_REF *v109; // rcx
  D3DKMT_HANDLE v110; // eax
  __int64 v111; // rcx
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  struct DXGALLOCATION *v114; // rbx
  char *v115; // r12
  unsigned int v116; // r15d
  _QWORD *v117; // rax
  __int64 v118; // r15
  __int64 v119; // rcx
  __int64 v120; // rax
  struct DXGALLOCATION *v121; // rbx
  struct DXGALLOCATION *v122; // rdx
  D3DKMT_HANDLE v123; // eax
  __int64 v124; // r8
  int v125; // eax
  __int64 v126; // rdx
  __int64 bottom; // rcx
  __int64 v128; // r8
  __int64 top; // r9
  __int64 v130; // rdi
  _QWORD *v131; // rax
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  int left; // eax
  unsigned int v135; // edi
  __int64 v136; // rbx
  __int64 v137; // rdi
  int v138; // eax
  __int64 v139; // rcx
  __int64 v140; // rdi
  const RECT *DdiSubRectList; // rax
  int v142; // r10d
  __int64 v143; // rdx
  RECT DstRect; // xmm0
  _QWORD *v145; // rax
  __int64 v146; // rcx
  _QWORD *v147; // rax
  __int64 v148; // rcx
  __int64 v149; // r8
  _QWORD *v150; // rax
  _QWORD *v151; // rax
  UINT v152; // ecx
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  int right; // eax
  unsigned int v156; // ebx
  __int64 v157; // rdi
  __int64 v158; // rcx
  __int64 v159; // rdi
  __int64 v160; // rbx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // r13
  __int64 v166; // r12
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v170; // rcx
  _QWORD *v171; // rax
  __int64 v172; // rcx
  ULONG_PTR v173; // rcx
  __int64 v174; // rax
  _QWORD *v175; // rax
  ULONG_PTR v176; // rcx
  struct _EX_RUNDOWN_REF *v177; // r13
  struct _EX_RUNDOWN_REF *v178; // rdi
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  _QWORD *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  _QWORD *v186; // rax
  __int64 v187; // rcx
  struct DXGGLOBAL *v188; // rax
  __int64 v189; // rax
  struct _KTHREAD *v190; // rbx
  __int64 v191; // rax
  int v192; // edi
  __int64 *v193; // rax
  __int64 v194; // rcx
  __int64 v195; // rax
  struct _KTHREAD *v196; // rbx
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  int v200; // edi
  __int64 v201; // r8
  __int64 v202; // rax
  __int64 v203; // rbx
  _QWORD *v204; // rax
  __int64 v205; // rcx
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rbx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v213; // rdi
  int v214; // r8d
  int v215; // r8d
  int v216; // r8d
  int v217; // r8d
  int v218; // r8d
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int v221; // eax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  _QWORD *v226; // rax
  __int64 FlipInterval; // rcx
  __int64 v228; // rdi
  __int64 v229; // rbx
  __int64 v230; // rax
  __int64 v231; // rcx
  __int64 v232; // r8
  int v233; // r9d
  __int64 v234; // rdi
  struct VIDSCH_SUBMIT_DATA_BASE *v235; // rax
  int v236; // ecx
  __int64 v237; // rax
  int v238; // eax
  __int64 v239; // rdi
  __int64 v240; // rax
  _QWORD *v241; // rax
  _QWORD *v242; // rax
  DXGDEVICE *v243; // rcx
  DXGCONTEXT *v244; // rcx
  __int64 v245; // rax
  _QWORD *v246; // rax
  int v247; // edi
  __int64 v248; // rcx
  __int64 v249; // rbx
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 v252; // rcx
  __int64 v253; // rax
  __int64 v254; // rcx
  __int64 v255; // rcx
  int v256; // ebx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v257; // eax
  int v258; // edi
  struct DXGPRESENTMUTEX *v259; // r8
  __int64 v260; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v262; // rcx
  bool v263; // r12
  __int64 v264; // rdx
  __int64 v265; // rbx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // r8
  int v269; // r12d
  __int64 v270; // rax
  int v271; // eax
  struct DXGPRESENTMUTEX *v272; // r8
  __int64 v273; // rdi
  __int64 v274; // rax
  __int64 v275; // rax
  _QWORD *v276; // rax
  __int64 v277; // rax
  __int64 v278; // rcx
  __int64 v279; // rax
  __int64 v280; // rax
  _QWORD *v281; // r12
  __int64 v282; // rcx
  __int64 v283; // rax
  __int64 v284; // rdi
  __int64 v285; // rbx
  __int64 v286; // rcx
  __int64 v287; // rax
  __int64 v288; // rax
  __int64 v289; // r12
  __int64 v290; // rcx
  __int64 v291; // rax
  _QWORD *v293; // rax
  _QWORD *v294; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v295; // edi
  __int64 v296; // rax
  _QWORD *v297; // rax
  ULONG_PTR Count; // rax
  _QWORD *v299; // rax
  int CurrentOrientation; // eax
  __int64 v301; // rax
  __int64 v302; // rcx
  __int64 (__fastcall *v303)(__int64, _QWORD); // rax
  __int64 v304; // r8
  __int64 v305; // rdx
  __int64 v306; // rdx
  __int64 v307; // r8
  const RECT *pDstSubRects; // rdi
  UINT SubRectCnt; // r15d
  __int64 v310; // r12
  UINT v311; // ebx
  unsigned int v312; // r11d
  __int64 v313; // r9
  __int64 v314; // rcx
  const RECT *v315; // rcx
  __int64 v316; // rcx
  __int64 v317; // rax
  __int64 v318; // r15
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // r8
  int v322; // r9d
  __int64 v323; // r12
  __int64 v324; // rcx
  __int64 v325; // r15
  __int64 v326; // rax
  __int64 v327; // rcx
  __int64 v328; // r8
  int v329; // r9d
  int v330; // ecx
  struct COREDEVICEACCESS *v331; // r13
  struct _EX_RUNDOWN_REF *v332; // rbx
  __int64 v333; // r15
  __int64 v334; // rcx
  ULONG BroadcastContextCount; // eax
  D3DKMT_HANDLE *BroadcastContext; // rsi
  D3DKMT_HANDLE *v337; // rax
  __int128 v338; // xmm0
  int v339; // eax
  _QWORD *v340; // rax
  DXGDEVICE *v341; // rcx
  __int64 v342; // r8
  struct DXGALLOCATION *v343; // rbx
  unsigned int v344; // edx
  _QWORD *v345; // rax
  __int128 v346; // xmm0
  __int64 v347; // rax
  __int64 v348; // r8
  int v349; // eax
  __int64 v350; // rcx
  __int64 v351; // rdi
  _QWORD *v352; // rax
  int v353; // edx
  D3DDDIFORMAT Format; // ecx
  _QWORD *v355; // rax
  _QWORD *v356; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *p_PresentHistoryToken; // r12
  D3DKMT_PRESENT_MODEL Model; // eax
  __int64 v359; // rdi
  __int64 v360; // rax
  __int64 v361; // rdx
  __int64 v362; // r8
  __int64 v363; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v365; // r13d
  __int64 v366; // rdx
  DXGGLOBAL **v367; // rcx
  __int64 v368; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v369; // rbx
  __int64 v370; // r12
  __int64 v371; // rax
  COREACCESS *v372; // r15
  _QWORD *v373; // rax
  __int64 v374; // rcx
  HANDLE PresentLimitSemaphore; // rcx
  NTSTATUS v376; // eax
  PVOID v377; // rbx
  __int64 v378; // rdi
  __int64 v379; // rax
  int v380; // eax
  __int64 v381; // rax
  DXGGLOBAL **v382; // rbx
  __int64 v383; // rbx
  __int64 v384; // rax
  __int64 v385; // rdi
  __int64 v386; // rax
  struct DXGGLOBAL *v387; // rcx
  __int64 v388; // rax
  __int64 v389; // rax
  __int64 v390; // rdx
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 v393; // rax
  _QWORD *v394; // rax
  PERESOURCE *v395; // rbx
  D3DKMT_HANDLE Reserved; // ebx
  __int64 v397; // rdx
  __int64 v398; // r8
  unsigned int v399; // ecx
  __int64 v400; // r8
  int v401; // edx
  __int64 v402; // rbx
  __int64 v403; // rcx
  UINT64 FenceValue; // rdi
  __int64 v405; // rax
  _QWORD *v406; // rax
  _QWORD *v407; // rax
  __int64 v408; // rax
  __int64 v409; // rax
  __int64 v410; // rdx
  __int64 v411; // rax
  unsigned int v412; // eax
  __int64 v413; // rax
  __int64 v414; // rcx
  __int64 v415; // rax
  __int64 v416; // rax
  unsigned int v417; // r12d
  bool v418; // r15
  __int64 v419; // rbx
  __int64 v420; // r8
  __int64 v421; // r15
  __int64 v422; // rax
  __int64 v423; // rax
  __int64 v424; // rcx
  __int64 v425; // rax
  __int64 v426; // rcx
  __int64 v427; // rax
  int v428; // eax
  __int64 v429; // rax
  __int64 v430; // rax
  int v431; // eax
  __int64 v432; // rax
  BOOL v433; // ebx
  __int64 v434; // rcx
  struct _EX_RUNDOWN_REF *CurrentThreadId; // rax
  __int64 v436; // rcx
  struct _EX_RUNDOWN_REF *v437; // r13
  int v438; // eax
  struct DXGPRESENTMUTEX *v439; // r8
  __int64 v440; // rdx
  int v441; // ecx
  DXGADAPTERSTOPRESETLOCKSHARED *v442; // r13
  DXGGLOBAL **v443; // rcx
  __int64 v444; // rax
  __int64 v445; // rax
  CWin32kLocks *v446; // rbx
  __int64 v447; // rcx
  __int64 v448; // rax
  DXGGLOBAL **v449; // rbx
  int v450; // eax
  unsigned int v451; // edi
  __int64 v452; // rax
  __int64 v453; // rcx
  HDC v454; // r13
  const struct DXGDEVICE *v455; // rax
  HDC v456; // r8
  int v457; // eax
  __int64 v458; // rbx
  __int64 v459; // rax
  char v460; // r13
  int v461; // ebx
  struct DXGPRESENTMUTEX *v462; // r8
  __int64 v463; // rcx
  int v464; // ecx
  __int64 v465; // rdx
  __int64 v466; // r8
  __int64 v467; // rax
  __int64 v468; // rcx
  __int64 v469; // rax
  __int64 v470; // rcx
  __int64 v471; // rax
  __int64 v472; // rax
  __int64 v473; // rax
  __int64 v474; // rax
  struct _EX_RUNDOWN_REF *v475; // r12
  int v476; // ebx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v477; // eax
  __int64 v478; // rcx
  unsigned int v479; // r13d
  __int64 v480; // rax
  LONG v481; // eax
  LONG v482; // eax
  LONG v483; // eax
  LONG v484; // eax
  __int64 v485; // rcx
  __int64 v486; // rax
  __int64 v487; // rax
  struct tagRECT *v488; // rax
  __int64 v489; // rdx
  __int64 v490; // r8
  __int64 v491; // r9
  __int64 v492; // rcx
  __int64 v493; // rdx
  __int64 v494; // r8
  const RECT *v495; // rdi
  UINT v496; // r12d
  __int64 v497; // r13
  UINT v498; // ebx
  unsigned int v499; // r11d
  __int64 v500; // r9
  __int64 v501; // rcx
  const RECT *v502; // rcx
  unsigned __int8 v503; // r12
  int v504; // eax
  unsigned int v505; // edx
  DXGDEVICE *v506; // rbx
  char v507; // bl
  CWin32kLocks *v508; // r15
  DXGADAPTERSTOPRESETLOCKSHARED *v509; // rbx
  int v510; // eax
  __int64 v511; // rcx
  __int64 v512; // r9
  unsigned int v513; // edi
  __int64 v514; // rax
  __int64 v515; // rcx
  __int64 v516; // rax
  __int64 v517; // rax
  int v518; // eax
  __int64 v519; // rdx
  __int64 v520; // rax
  __int64 v521; // r9
  DXGDEVICE *v522; // rcx
  __int64 v523; // rax
  DXGDEVICE *v524; // rbx
  unsigned __int8 v525; // di
  char v526; // bl
  __int64 v527; // rcx
  __int64 v528; // rax
  int v529; // eax
  int v530; // eax
  __int64 v531; // rcx
  __int64 v532; // rax
  int v533; // eax
  __int64 v534; // rcx
  __int64 v535; // rax
  __int64 v536; // r15
  __int64 v537; // rbx
  DXGGLOBAL **v538; // rcx
  __int64 v539; // r12
  __int64 v540; // rax
  __int64 v541; // r8
  __int64 v542; // r9
  __int64 v543; // rax
  __int64 v544; // rcx
  __int64 v545; // rax
  DXGGLOBAL **v546; // rbx
  int v547; // eax
  unsigned int i; // r12d
  unsigned int v549; // ecx
  __int64 v550; // rax
  __int64 v551; // rax
  const RECT *v552; // rax
  int v553; // eax
  __int128 *v554; // r8
  _DWORD *v555; // rdx
  __int64 v556; // rdx
  __int64 v557; // r8
  const RECT *v558; // rdi
  UINT v559; // r15d
  __int64 v560; // r13
  UINT v561; // ebx
  unsigned int v562; // r11d
  __int64 v563; // r9
  __int64 v564; // rcx
  const RECT *v565; // rcx
  struct DXGCONTEXT **v566; // r9
  int v567; // eax
  UINT j; // edx
  __int64 v569; // rcx
  __int64 v570; // rax
  struct _KTHREAD *v571; // rbx
  __int64 v572; // rax
  int v573; // edi
  __int64 *v574; // rax
  __int64 v575; // rax
  struct _KTHREAD *v576; // rbx
  __int64 v577; // rax
  __int64 v578; // rdx
  int v579; // edi
  __int64 v580; // r8
  __int64 v581; // rax
  __int64 v582; // rbx
  _QWORD *v583; // rax
  __int64 v584; // rax
  struct _KTHREAD *v585; // rbx
  __int64 v586; // rax
  int v587; // edi
  __int64 *v588; // rax
  __int64 v589; // rax
  struct _KTHREAD *v590; // rbx
  __int64 v591; // rax
  __int64 v592; // rdx
  int v593; // edi
  __int64 v594; // r8
  __int64 v595; // rax
  __int64 v596; // rbx
  _QWORD *v597; // rax
  __int64 v598; // rax
  struct _KTHREAD *v599; // rbx
  __int64 v600; // rax
  int v601; // edi
  __int64 *v602; // rax
  __int64 v603; // rcx
  __int64 v604; // rax
  struct _KTHREAD *v605; // rbx
  __int64 v606; // rax
  __int64 v607; // rdx
  __int64 v608; // rcx
  int v609; // edi
  __int64 v610; // r8
  __int64 v611; // rax
  __int64 v612; // rbx
  _QWORD *v613; // rax
  PVOID *Object; // [rsp+20h] [rbp-100h]
  PVOID *Objecta; // [rsp+20h] [rbp-100h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F8h]
  int v617; // [rsp+40h] [rbp-E0h]
  int v618; // [rsp+48h] [rbp-D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v619; // [rsp+50h] [rbp-D0h]
  COREDEVICEACCESS *v620; // [rsp+A0h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v621; // [rsp+A8h] [rbp-78h]
  signed int v622; // [rsp+B0h] [rbp-70h]
  unsigned int v623; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int hSource; // [rsp+B8h] [rbp-68h]
  unsigned int v625; // [rsp+BCh] [rbp-64h]
  DXGADAPTERSTOPRESETLOCKSHARED *v626; // [rsp+C0h] [rbp-60h]
  struct VIDSCH_SUBMIT_DATA_BASE *v627; // [rsp+C8h] [rbp-58h]
  __int64 v628; // [rsp+D0h] [rbp-50h]
  __int64 v629; // [rsp+D8h] [rbp-48h]
  CWin32kLocks *v630; // [rsp+E0h] [rbp-40h]
  D3DKMT_HANDLE v631; // [rsp+E8h] [rbp-38h]
  struct DXGALLOCATION *v632; // [rsp+F0h] [rbp-30h]
  enum _D3DDDIFORMAT v633[2]; // [rsp+F8h] [rbp-28h]
  struct _EX_RUNDOWN_REF *v634; // [rsp+100h] [rbp-20h]
  char v635[8]; // [rsp+108h] [rbp-18h] BYREF
  __int64 v636; // [rsp+110h] [rbp-10h]
  char v637; // [rsp+118h] [rbp-8h]
  struct _EX_RUNDOWN_REF *v638; // [rsp+120h] [rbp+0h] BYREF
  struct DXGCONTEXT **v639; // [rsp+128h] [rbp+8h]
  PERESOURCE *v640; // [rsp+130h] [rbp+10h] BYREF
  char v641; // [rsp+138h] [rbp+18h]
  union _LARGE_INTEGER Timeout; // [rsp+140h] [rbp+20h] BYREF
  struct _D3DKMT_PRESENT *v643; // [rsp+148h] [rbp+28h]
  struct _EX_RUNDOWN_REF *v644; // [rsp+150h] [rbp+30h] BYREF
  struct DXGALLOCATION *v645; // [rsp+158h] [rbp+38h] BYREF
  struct _EX_RUNDOWN_REF *v646; // [rsp+160h] [rbp+40h] BYREF
  __int64 v647; // [rsp+168h] [rbp+48h] BYREF
  __int64 v648; // [rsp+170h] [rbp+50h]
  __int64 v649; // [rsp+178h] [rbp+58h]
  __int64 v650; // [rsp+180h] [rbp+60h]
  __int64 v651; // [rsp+188h] [rbp+68h]
  __int64 v652; // [rsp+190h] [rbp+70h]
  struct _DXGKARG_DESCRIBEALLOCATION v653; // [rsp+198h] [rbp+78h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v654; // [rsp+1C8h] [rbp+A8h] BYREF
  struct _D3DKMT_UNLOCK v655; // [rsp+1F8h] [rbp+D8h] BYREF
  HDEV v656; // [rsp+208h] [rbp+E8h]
  __int64 v657; // [rsp+210h] [rbp+F0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_LOCK v659; // [rsp+220h] [rbp+100h] BYREF
  PVOID v660; // [rsp+250h] [rbp+130h] BYREF
  _BYTE v661[24]; // [rsp+258h] [rbp+138h] BYREF
  _BYTE v662[24]; // [rsp+270h] [rbp+150h] BYREF
  __int128 v663; // [rsp+288h] [rbp+168h]
  _QWORD v664[68]; // [rsp+2C0h] [rbp+1A0h] BYREF
  struct _DXGKARG_PRESENT v665; // [rsp+4E0h] [rbp+3C0h] BYREF
  __int128 v666; // [rsp+590h] [rbp+470h] BYREF
  struct tagRECT Source1; // [rsp+5A0h] [rbp+480h] BYREF
  struct tagRECT v668; // [rsp+5B0h] [rbp+490h] BYREF
  __int128 v669; // [rsp+5C0h] [rbp+4A0h] BYREF
  _D3DKMT_OUTPUTDUPLPRESENT v670; // [rsp+5D0h] [rbp+4B0h] BYREF
  _BYTE v672[64]; // [rsp+710h] [rbp+5F0h] BYREF
  _BYTE v673[64]; // [rsp+750h] [rbp+630h] BYREF
  _BYTE v674[64]; // [rsp+790h] [rbp+670h] BYREF
  _BYTE v675[64]; // [rsp+7D0h] [rbp+6B0h] BYREF
  _BYTE v676[64]; // [rsp+810h] [rbp+6F0h] BYREF
  _BYTE v677[64]; // [rsp+850h] [rbp+730h] BYREF
  _BYTE v678[64]; // [rsp+890h] [rbp+770h] BYREF
  _BYTE v679[64]; // [rsp+8D0h] [rbp+7B0h] BYREF
  _BYTE v680[64]; // [rsp+910h] [rbp+7F0h] BYREF
  _BYTE v681[64]; // [rsp+950h] [rbp+830h] BYREF
  _BYTE v682[64]; // [rsp+990h] [rbp+870h] BYREF
  _BYTE v683[64]; // [rsp+9D0h] [rbp+8B0h] BYREF

  v8 = a2;
  v630 = a5;
  v639 = a6;
  v9 = *((_QWORD *)this + 2);
  v626 = a4;
  v620 = a3;
  v643 = a2;
  v10 = *(_QWORD *)(v9 + 16);
  v627 = a7;
  v11 = *(_QWORD *)(v10 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 128)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2384LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 2385LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Value = v8->Flags.Value;
  if ( (Value & 0x4000) != 0
    || (Value &= 0x12000u,
        v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
        v629 = *(_QWORD *)(v11 + 80),
        (_DWORD)Value == 73728) )
  {
    v15 = WdLogNewEntry5_WdWarning(v11, Value, a3, a4);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  v17 = 0;
  memset(&v665, 0, sizeof(v665));
  v18 = *(_DWORD *)a7 | 0x10020;
  hSource = v8->hSource;
  hDestination = v8->hDestination;
  *(_DWORD *)a7 = v18;
  v20 = (v8->Flags.Value & 0x10000) == 0;
  v623 = hDestination;
  if ( v20 )
    *(_DWORD *)a7 = v18 | 1;
  v21 = *(_DWORD *)a7 | 0x100;
  *(_DWORD *)a7 = v21;
  *(_DWORD *)a7 = v21 ^ (v21 ^ (32 * v8->Flags.Value)) & 0x20000;
  if ( (v8->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = v8->PresentCount;
  v22 = *((_QWORD *)this + 2);
  v23 = *(_QWORD *)(v22 + 2832);
  v24 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( v23 == v24 )
  {
    Value = *(_QWORD *)(v23 + 1984);
    if ( *(_BYTE *)(Value + 328) && *(_DWORD *)(Value + 104) )
    {
      do
      {
        v25 = 1016LL * v17;
        v26 = *(_QWORD *)(Value + 136);
        if ( *(_BYTE *)(v25 + v26 + 1000) )
        {
          if ( *(_BYTE *)(v25 + v26 + 1001) )
          {
            v27 = *(_QWORD *)(v25 + v26 + 1008);
            v28 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v27);
            if ( (__int64)(v28 / PerformanceFrequency.QuadPart) > 1250 )
            {
              ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*(ADAPTER_DISPLAY **)(v23 + 1984), v17, 0);
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 1992) + 400LL) + 8LL)
                                                     + 776LL))(
                *(_QWORD *)(*(_QWORD *)(v24 + 1992) + 408LL),
                v17);
            }
          }
        }
        Value = *(_QWORD *)(v23 + 1984);
        ++v17;
      }
      while ( v17 < *(_DWORD *)(Value + 104) );
    }
  }
  else
  {
    *((_DWORD *)a7 + 29) = 0;
  }
  v29 = v8->hDestination;
  v30 = 0;
  v622 = 0;
  VidPnSourceId = 0;
  v625 = 0;
  v633[0] = D3DDDIFMT_UNKNOWN;
  v621 = 0LL;
  v632 = 0LL;
  v638 = 0LL;
  v631 = 0;
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
      v39 = *(struct _EX_RUNDOWN_REF **)(v37 + 16LL * v36);
    }
    else
    {
      v39 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v644, v39);
    ExReleasePushLockSharedEx(v32 + 192, 0LL);
    KeLeaveCriticalRegion();
    v40 = v644;
    v632 = (struct DXGALLOCATION *)v644;
    if ( v644 && !ExAcquireRundownProtection(v644 + 11) )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41, v43);
      v44[3] = 275LL;
      v44[4] = 25LL;
      v44[5] = v40;
      v44[6] = 0LL;
      v44[7] = 0LL;
      WdLogEvent5_WdCriticalError(v44);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v644);
    if ( !v632 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, Value, a3, a4);
      v46[3] = -1073741811LL;
      v46[4] = this;
      v46[5] = v8->hDestination;
      WdLogEvent5_WdWarning(v46);
      v48 = -1073741811;
      goto LABEL_894;
    }
  }
  if ( (v8->Flags.Value & 0x8002) == 0 )
  {
    v49 = v8->hSource;
    v50 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v50 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v50 + 208);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v51, &EventBlockThread, v52, v53);
      }
      ExAcquirePushLockSharedEx(v50 + 192, 0LL);
    }
    v54 = (v49 >> 6) & 0xFFFFFF;
    if ( v54 < *(_DWORD *)(v50 + 232)
      && (v55 = *(_QWORD *)(v50 + 216),
          v56 = *(_DWORD *)(v55 + 16LL * v54 + 8),
          ((v49 >> 26) & 0x30) == (*(_BYTE *)(v55 + 16LL * v54 + 8) & 0x30))
      && (v56 & 0x1000) == 0
      && (v56 & 0xF) != 0 )
    {
      v57 = 0;
      if ( (*(_BYTE *)(v55 + 16LL * v54 + 8) & 0xF) == 5 )
      {
        v58 = *(struct _EX_RUNDOWN_REF **)(v55 + 16LL * v54);
        goto LABEL_56;
      }
    }
    else
    {
      v57 = 0;
    }
    v58 = 0LL;
LABEL_56:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v646, v58);
    ExReleasePushLockSharedEx(v50 + 192, 0LL);
    KeLeaveCriticalRegion();
    v60 = v646;
    v621 = v646;
    if ( v646 )
    {
      if ( !ExAcquireRundownProtection(v646 + 11) )
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, Value, a3);
        v62[3] = 275LL;
        v62[4] = 25LL;
        v62[5] = v60;
        v62[6] = 0LL;
        v62[7] = 0LL;
        WdLogEvent5_WdCriticalError(v62);
      }
      v59 = v646;
      if ( v646 )
        ExReleaseRundownProtection(v646 + 11);
    }
    v63 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v64 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v64 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v64);
      v63 = DXGGLOBAL::m_pGlobal;
    }
    if ( *((_DWORD *)v63 + 231) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v66 = WdLogNewEntry5_WdAssertion(v59);
        *(_QWORD *)(v66 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v66);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId )
      {
        if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v69 = *ThreadWin32Thread;
            if ( v69 )
            {
              if ( *(_QWORD *)(v69 + 80) )
              {
                v70 = KeGetCurrentThread();
                if ( !v70 )
                {
                  v71 = WdLogNewEntry5_WdAssertion(v59);
                  *(_QWORD *)(v71 + 24) = 92LL;
                  WdLogEvent5_WdAssertion(v71);
                }
                v72 = PsGetCurrentProcessSessionId();
                if ( v72
                  && (unsigned int)PsGetThreadSessionId(v70) == v72
                  && (v73 = PsGetThreadWin32Thread(v70)) != 0
                  && *(_QWORD *)v73 )
                {
                  v74 = *(_QWORD *)(*(_QWORD *)v73 + 80LL);
                }
                else
                {
                  v74 = 0LL;
                }
                if ( *(_DWORD *)(v74 + 136) )
                {
                  v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, Value, a3);
                  v75[3] = 275LL;
                  v75[4] = 25LL;
                  v75[5] = *(int *)(v74 + 136);
                  v75[6] = 0LL;
                  v75[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v75);
                }
              }
            }
          }
        }
      }
    }
    if ( !v621 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, Value, a3, a4);
      v76[3] = -1073741811LL;
      v76[4] = this;
      v76[5] = v8->hSource;
      WdLogEvent5_WdWarning(v76);
      v48 = -1073741811;
      goto LABEL_894;
    }
    v647 = 0LL;
    v648 = 0LL;
    v649 = 0LL;
    v650 = 0LL;
    v651 = 0LL;
    v652 = 0LL;
    v634 = v621;
    v77 = *(_QWORD *)(v621[6].Count + 16);
    v647 = v77;
    if ( (v8->Flags.Value & 0x10000000) != 0 )
    {
      LODWORD(v648) = HIDWORD(v8[1].hWindow);
      VidPnSourceId = v8[1].VidPnSourceId;
      HIDWORD(v648) = VidPnSourceId;
      v633[0] = (enum _D3DDDIFORMAT)v8[1].hSource;
      SLODWORD(v649) = v633[0];
      v30 = v648;
      v622 = v648;
LABEL_132:
      v625 = VidPnSourceId;
      goto LABEL_133;
    }
    v78 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    *(_QWORD *)v633 = v78;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v77, &EventProfilerEnter, (__int64)a3, 5003);
    CurrentProcess = PsGetCurrentProcess();
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( ProcessWin32Process )
    {
      v82 = *(_QWORD *)(ProcessWin32Process + 248);
      if ( v82 )
      {
        v83 = v82 + 96;
LABEL_93:
        LODWORD(v628) = 0;
        if ( v83 && *(struct _KTHREAD **)(v83 + 8) == KeGetCurrentThread() )
        {
          v85 = WdLogNewEntry5_WdAssertion(v81);
          *(_QWORD *)(v85 + 24) = 1155LL;
          WdLogEvent5_WdAssertion(v85);
        }
        if ( v82 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v83, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v88 = *(_DWORD *)(v83 + 16);
              if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v86, &EventBlockThread, v87, v88);
            }
            ExAcquirePushLockExclusiveEx(v83, 0LL);
          }
          *(_QWORD *)(v83 + 8) = KeGetCurrentThread();
          LODWORD(v628) = 2;
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v78 + 16), 1);
        CurrentIrql = KeGetCurrentIrql();
        v91 = 0LL;
        if ( CurrentIrql < 2u )
        {
          v92 = KeGetCurrentThread();
          if ( !v92 )
          {
            v93 = WdLogNewEntry5_WdAssertion(v89);
            *(_QWORD *)(v93 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v93);
          }
          v94 = PsGetCurrentProcessSessionId();
          if ( v94
            && (unsigned int)PsGetThreadSessionId(v92) == v94
            && (v95 = PsGetThreadWin32Thread(v92)) != 0
            && *(_QWORD *)v95 )
          {
            v91 = *(_QWORD *)(*(_QWORD *)v95 + 80LL);
            if ( v91 )
              v57 = *(_DWORD *)(v91 + 136);
          }
          else
          {
            v91 = 0LL;
          }
        }
        v99 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)v633 + 16LL) + 328LL))(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v633 + 16LL) + 224LL),
                &v647);
        v100 = KeGetCurrentIrql();
        if ( CurrentIrql != (_BYTE)v100 )
        {
          v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v100, v96, v97);
          v102 = *(_QWORD *)v633;
          v101[3] = 275LL;
          v101[4] = 16LL;
          v101[5] = v102;
          v101[6] = CurrentIrql;
          LOBYTE(v102) = KeGetCurrentIrql();
          v101[7] = (unsigned __int8)v102;
          WdLogEvent5_WdCriticalError(v101);
        }
        if ( v91 && *(_DWORD *)(v91 + 136) != v57 )
        {
          v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v100, v96, v97);
          v103[3] = 275LL;
          v103[4] = 25LL;
          v103[5] = *(int *)(v91 + 136);
          v103[6] = v57;
          v103[7] = 0LL;
          WdLogEvent5_WdCriticalError(v103);
        }
        v104 = (_QWORD *)WdLogNewEntry5_WdTrace(v100, v96, v97, v98);
        v104[3] = v99;
        v104[4] = v647;
        v104[5] = (unsigned int)v648;
        v104[6] = HIDWORD(v648);
        v105 = (int)v649;
        v104[7] = (int)v649;
        if ( (_DWORD)v99 )
        {
          v106 = WdLogNewEntry5_WdError(v105);
          *(_QWORD *)(v106 + 24) = v99;
          WdLogEvent5_WdError(v106);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(*(_QWORD *)v633 + 16LL));
        if ( (_DWORD)v628 == 1 )
        {
          ExReleasePushLockSharedEx(v83, 0LL);
        }
        else
        {
          if ( (_DWORD)v628 != 2 )
            goto LABEL_126;
          *(_QWORD *)(v83 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v83, 0LL);
        }
        KeLeaveCriticalRegion();
LABEL_126:
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v107, &EventProfilerExit, (__int64)a3, 5003);
        if ( (int)v99 < 0 )
        {
          v108 = (_QWORD *)WdLogNewEntry5_WdError(v107);
          v109 = v634;
          v108[3] = v99;
          v108[4] = this;
          v108[5] = *(_QWORD *)(v109[6].Count + 16);
          v108[6] = v621;
          WdLogEvent5_WdError(v108);
          v48 = v99;
          goto LABEL_894;
        }
        v30 = v648;
        VidPnSourceId = HIDWORD(v648);
        v633[0] = v649;
        v622 = v648;
        goto LABEL_132;
      }
    }
    else
    {
      v84 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v84 + 24) = CurrentProcess;
      WdLogEvent5_WdEvent(v84);
      v82 = 0LL;
    }
    v83 = 0LL;
    goto LABEL_93;
  }
LABEL_133:
  v110 = v8->hDestination;
  if ( v110 && (v111 = v8->Flags.Value, (v111 & 0x10000) == 0) || (v111 = v8->Flags.Value, (v111 & 4) != 0) )
  {
    if ( v110 )
    {
      if ( !v8->pSrcSubRects || !v8->SubRectCnt || (v111 & 3) == 0 || (v111 & 0x3C) != 0 || (v111 & 0xE8000) != 0 )
        goto LABEL_145;
      if ( (v111 & 2) != 0 )
      {
        if ( (v111 & 0x100601) != 0 || (v111 & 0x80u) != 0LL )
        {
LABEL_145:
          v112 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, Value, a3, a4);
          v112[3] = this;
          v112[4] = v8->pSrcSubRects;
          v112[5] = v8->SubRectCnt;
          v112[6] = v8->Flags.Value;
          v112[7] = -1073741811LL;
          WdLogEvent5_WdWarning(v112);
          v48 = -1073741811;
          goto LABEL_894;
        }
      }
      else
      {
        if ( !v30 || !VidPnSourceId || (v111 & 0x80u) == 0LL )
          goto LABEL_145;
        v111 &= 0x600u;
        if ( (_DWORD)v111 == 1536 )
        {
          v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, Value, a3, a4);
          v113[3] = -1073741811LL;
          v113[4] = this;
          v113[5] = v8->pSrcSubRects;
          v113[6] = v8->SubRectCnt;
          v113[7] = v8->Flags.Value;
          WdLogEvent5_WdWarning(v113);
          v48 = -1073741811;
          goto LABEL_894;
        }
      }
      v114 = v632;
      v115 = (char *)v632 + 48;
      v116 = *(_DWORD *)(*((_QWORD *)v632 + 6) + 4LL);
      if ( (v116 & 3) == 0 )
      {
        v117 = (_QWORD *)WdLogNewEntry5_WdError(v111);
        v117[3] = -1073741811LL;
        v117[4] = this;
        v117[5] = v114;
        v117[6] = *(_QWORD *)v115;
        v117[7] = v8->hDestination;
        WdLogEvent5_WdError(v117);
        v48 = -1073741811;
        goto LABEL_894;
      }
      v118 = (v116 >> 6) & 0xF;
      v119 = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
      if ( !v119
        || (v119 = *(_QWORD *)(v119 + 1984)) == 0
        || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v119 + 16)) )
      {
        v120 = WdLogNewEntry5_WdAssertion(v119);
        *(_QWORD *)(v120 + 24) = 2602LL;
        WdLogEvent5_WdAssertion(v120);
      }
      v121 = v632;
      v122 = v632;
      *((_DWORD *)v627 + 29) = v118;
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v645, (struct _EX_RUNDOWN_REF *)v122);
      DXGALLOCATIONREFERENCE::Assign(&v638, &v645);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v645);
      v123 = v8->hDestination;
      memset(&v653, 0, sizeof(v653));
      v631 = v123;
      v653.hAllocation = *(HANDLE *)(*(_QWORD *)v115 + 16LL);
      v125 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v653, v124);
      v130 = v125;
      if ( v125 < 0 )
      {
        v131 = (_QWORD *)WdLogNewEntry5_WdError(bottom);
        v131[3] = v130;
        v131[4] = this;
        v131[5] = *(_QWORD *)(*(_QWORD *)v115 + 16LL);
        v131[6] = v121;
        WdLogEvent5_WdError(v131);
        v48 = v130;
        goto LABEL_894;
      }
      if ( (v8->Flags.Value & 1) == 0 )
      {
        LODWORD(v140) = 0;
        v665.DstRect.right = v653.Width;
        v665.DstRect.bottom = v653.Height;
        *(_QWORD *)&v665.DstRect.left = 0LL;
        if ( (v8->Flags.Value & 0x40) != 0 )
        {
          right = v8->DstRect.right;
          if ( right <= v8->DstRect.left
            || (bottom = (unsigned int)v8->DstRect.bottom, (int)bottom <= v8->DstRect.top)
            || right <= 0
            || (int)bottom <= 0 )
          {
LABEL_191:
            v151 = (_QWORD *)WdLogNewEntry5_WdWarning(bottom, v126, v128, top);
            v151[3] = -1073741811LL;
            v151[4] = v8->DstRect.left;
            v151[5] = v8->DstRect.top;
            v151[6] = v8->DstRect.right;
            v151[7] = v8->DstRect.bottom;
            WdLogEvent5_WdWarning(v151);
            v48 = -1073741811;
            goto LABEL_894;
          }
          if ( !DXGPRESENT::IntersectRect(&v665.DstRect, &v8->DstRect, &v665.DstRect) )
            goto LABEL_485;
        }
        v156 = 0;
        if ( !v8->SubRectCnt )
        {
LABEL_208:
          v152 = v665.Flags.Value;
          v665.SrcRect = v665.DstRect;
          v665.pDstSubRects = v8->pSrcSubRects;
          goto LABEL_209;
        }
        while ( 1 )
        {
          v157 = v156;
          if ( !DXGPRESENT::IntersectRect(&v668, &v8->pSrcSubRects[v157], &v665.DstRect)
            || RtlCompareMemory(&v668, &v8->pSrcSubRects[v157], 0x10uLL) != 16 )
          {
            break;
          }
          if ( ++v156 >= v8->SubRectCnt )
            goto LABEL_208;
        }
        v171 = (_QWORD *)WdLogNewEntry5_WdError(v158);
        v171[3] = -1073741811LL;
        v171[4] = v8->DstRect.left;
        v171[5] = v8->DstRect.top;
        v171[6] = v8->DstRect.right;
        v171[7] = v8->DstRect.bottom;
        WdLogEvent5_WdError(v171);
        v147 = (_QWORD *)WdLogNewEntry5_WdError(v172);
        v148 = v156;
        v149 = v156;
LABEL_220:
        v147[3] = v148;
        v147[4] = v8->pSrcSubRects[v149].left;
        v147[5] = v8->pSrcSubRects[v149].top;
        v147[6] = v8->pSrcSubRects[v149].right;
        v147[7] = v8->pSrcSubRects[v149].bottom;
        WdLogEvent5_WdError(v147);
        v48 = -1073741811;
        goto LABEL_894;
      }
      if ( v632 == (struct DXGALLOCATION *)v621 )
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdError(bottom);
        v132[3] = -1073741811LL;
        v132[4] = this;
        v132[5] = v621;
        v132[6] = v8->hSource;
        v132[7] = v8->hDestination;
        WdLogEvent5_WdError(v132);
        v48 = -1073741811;
        goto LABEL_894;
      }
      bottom = *(unsigned int *)(v621[6].Count + 4);
      if ( (bottom & 3) != 0 )
      {
        bottom = ((unsigned int)bottom >> 6) & 0xF;
        if ( (_DWORD)bottom != (_DWORD)v118 )
        {
          v133 = (_QWORD *)WdLogNewEntry5_WdError(bottom);
          v133[3] = -1073741811LL;
          v133[4] = this;
          v133[5] = v621;
          v133[6] = (*(_DWORD *)(v621[6].Count + 4) >> 6) & 0xF;
          v133[7] = (unsigned int)v118;
          WdLogEvent5_WdError(v133);
          v48 = -1073741811;
          goto LABEL_894;
        }
      }
      v126 = (unsigned int)v8->SrcRect.right;
      left = v8->SrcRect.left;
      if ( (int)v126 > left )
      {
        v128 = (unsigned int)v8->SrcRect.bottom;
        bottom = (unsigned int)v8->SrcRect.top;
        if ( (int)v128 > (int)bottom )
        {
          v135 = v622;
          if ( left < v622 && (int)bottom < (int)VidPnSourceId && (int)v126 > 0 && (int)v128 > 0 )
          {
            v136 = 0LL;
            if ( !v8->SubRectCnt )
              goto LABEL_176;
            do
            {
              v137 = (unsigned int)v136;
              if ( !DXGPRESENT::IntersectRect(&Source1, &v8->pSrcSubRects[v137], &v8->SrcRect)
                || RtlCompareMemory(&Source1, &v8->pSrcSubRects[v137], 0x10uLL) != 16 )
              {
                v145 = (_QWORD *)WdLogNewEntry5_WdError(bottom);
                v145[3] = -1073741811LL;
                v145[4] = v8->SrcRect.left;
                v145[5] = v8->SrcRect.top;
                v145[6] = v8->SrcRect.right;
                v145[7] = v8->SrcRect.bottom;
                WdLogEvent5_WdError(v145);
                v147 = (_QWORD *)WdLogNewEntry5_WdError(v146);
                v148 = (unsigned int)v136;
                v149 = v136;
                goto LABEL_220;
              }
              v136 = (unsigned int)(v136 + 1);
            }
            while ( (unsigned int)v136 < v8->SubRectCnt );
            v135 = v622;
LABEL_176:
            if ( (v8->Flags.Value & 0x40) == 0 )
            {
              if ( v653.Width == v135 && v653.Height == VidPnSourceId )
              {
                v665.DstRect = v8->SrcRect;
                v665.pDstSubRects = v8->pSrcSubRects;
                goto LABEL_195;
              }
              v153 = (_QWORD *)WdLogNewEntry5_WdWarning(bottom, v126, v128, top);
              v153[3] = this;
              v153[4] = v653.Width;
              v153[5] = v653.Height;
              v153[6] = v135;
              v153[7] = VidPnSourceId;
              WdLogEvent5_WdWarning(v153);
              v48 = -1073741811;
              goto LABEL_894;
            }
            v128 = (unsigned int)v8->DstRect.right;
            v138 = v8->DstRect.left;
            if ( (int)v128 > v138 )
            {
              v126 = (unsigned int)v8->DstRect.bottom;
              top = (unsigned int)v8->DstRect.top;
              if ( (int)v126 > (int)top
                && v138 < (int)v653.Width
                && (int)top < (int)v653.Height
                && (int)v128 > 0
                && (int)v126 > 0 )
              {
                v139 = (unsigned int)(v8->SrcRect.right - v8->SrcRect.left);
                if ( (_DWORD)v139 == (_DWORD)v128 - v138 )
                {
                  v139 = (unsigned int)(v8->SrcRect.bottom - v8->SrcRect.top);
                  if ( (_DWORD)v139 == (_DWORD)v126 - (_DWORD)top )
                  {
                    LODWORD(v140) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 17), v8->SubRectCnt);
                    if ( (int)v140 >= 0 )
                    {
                      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 17), 0);
                      v128 = 0LL;
                      top = (unsigned int)(v8->DstRect.left - v8->SrcRect.left);
                      v142 = v8->DstRect.top - v8->SrcRect.top;
                      if ( v8->SubRectCnt > (unsigned int)v126 )
                      {
                        do
                        {
                          v143 = (unsigned int)v128;
                          v128 = (unsigned int)(v128 + 1);
                          v126 = 2 * v143;
                          *(&DdiSubRectList->left + 2 * v126) = top + *(&v8->pSrcSubRects->left + 2 * v126);
                          *(&DdiSubRectList->right + 2 * v126) = top + *(&v8->pSrcSubRects->right + 2 * v126);
                          *(&DdiSubRectList->top + 2 * v126) = v142 + *(&v8->pSrcSubRects->top + 2 * v126);
                          *(&DdiSubRectList->bottom + 2 * v126) = v142 + *(&v8->pSrcSubRects->bottom + 2 * v126);
                        }
                        while ( (unsigned int)v128 < v8->SubRectCnt );
                      }
                      DstRect = v8->DstRect;
                      v665.pDstSubRects = DdiSubRectList;
                      v665.DstRect = DstRect;
LABEL_195:
                      v665.SrcRect = v8->SrcRect;
                      v152 = (*(_WORD *)&v665.Flags.0 ^ (unsigned __int16)(v8->Flags.Value >> 9)) & 0x800 ^ v665.Flags.Value;
                      v665.Flags.Value = v152;
LABEL_209:
                      v665.SubRectCnt = v8->SubRectCnt;
                      v665.Flags.Value = (v8->Flags.Value ^ v152) & 1 ^ v152;
                      v665.Flags.Value ^= (v8->Flags.Value ^ v665.Flags.Value) & 2;
                      v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)(v8->Flags.Value >> 5)) & 0x10;
                      v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)(v8->Flags.Value >> 5)) & 0x20;
                      v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)(v8->Flags.Value >> 5)) & 0x40;
                      v665.Color = v8->Color;
                      v665.Flags.Value ^= (*(_WORD *)&v665.Flags.0 ^ (unsigned __int16)(v8->Flags.Value >> 9)) & 0x800;
LABEL_210:
                      v159 = *((_QWORD *)this + 2);
                      v160 = *(_QWORD *)(*(_QWORD *)(v159 + 2832) + 1984LL);
                      v161 = *(_QWORD *)(v160 + 16);
                      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v161 + 144)
                        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v161 + 128)) )
                      {
                        v162 = WdLogNewEntry5_WdAssertion(v161);
                        *(_QWORD *)(v162 + 24) = 4092LL;
                        WdLogEvent5_WdAssertion(v162);
                      }
                      if ( (unsigned int)v118 >= *(_DWORD *)(v160 + 104)
                        && (v163 = WdLogNewEntry5_WdAssertion(v161),
                            *(_QWORD *)(v163 + 24) = 4093LL,
                            WdLogEvent5_WdAssertion(v163),
                            (unsigned int)v118 >= *(_DWORD *)(v160 + 104))
                        || (v164 = *(_QWORD *)(v160 + 136),
                            v165 = (unsigned int)v118,
                            v166 = 1016LL * (unsigned int)v118,
                            v628 = v166,
                            v159 != *(_QWORD *)(v164 + v166 + 672)) )
                      {
                        v356 = (_QWORD *)WdLogNewEntry5_WdWarning(v161, v126, v128, top);
                        v356[3] = -1071775744LL;
                        v356[4] = this;
                        v356[5] = v8->hSource;
                        v356[6] = v621;
                        v356[7] = (unsigned int)v118;
                        WdLogEvent5_WdWarning(v356);
                        v48 = -1071775744;
                        goto LABEL_894;
                      }
                      v167 = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
                      if ( v167 )
                      {
                        v168 = *(_QWORD *)(v167 + 1992);
                        if ( !(v168
                             ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v168 + 400) + 8LL)
                                                                         + 448LL))(
                                 *(_QWORD *)(v168 + 408),
                                 (unsigned int)v118)
                             : (unsigned __int8)DmmIsSourceInActiveVidPnTopology(v167, (unsigned int)v118)) )
                        {
                          if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 1 )
                          {
                            v241 = (_QWORD *)WdLogNewEntry5_WdEvent(v170, v126, v128, top);
                            v48 = -1071775738;
                            v241[3] = -1071775738LL;
                            v241[4] = this;
                            v241[5] = (unsigned int)v118;
                            WdLogEvent5_WdEvent(v241);
                            goto LABEL_894;
                          }
                          if ( (v8->Flags.Value & 4) != 0 )
                          {
                            v242 = (_QWORD *)WdLogNewEntry5_WdEvent(v170, v126, v128, top);
                            LODWORD(v140) = 0;
                            v242[3] = 0LL;
                            v242[4] = this;
                            v242[5] = (unsigned int)v118;
                            WdLogEvent5_WdEvent(v242);
                            if ( (v8->Flags.Value & 4) != 0 )
                            {
                              v243 = (DXGDEVICE *)*((_QWORD *)this + 2);
                              if ( *((_QWORD *)v243 + 354) == *(_QWORD *)(*((_QWORD *)v243 + 2) + 16LL) )
                              {
                                DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(v243, v118);
                                DXGDEVICE::SetDisplayedPrimary(
                                  *((DXGDEVICE **)this + 2),
                                  v118,
                                  (const struct DXGALLOCATION *)v621,
                                  *((_DWORD *)v627 + 34),
                                  1);
                                v47 = *((_QWORD *)this + 2);
                                v48 = 0;
                                *(_DWORD *)(v47 + 4 * v118 + 2768) = *((_DWORD *)v627 + 30);
                              }
                              else
                              {
                                DXGDEVICE::SetDisplayedPrimary(v243, v118, (const struct DXGALLOCATION *)v621, 0, 1);
                                v48 = 0;
                              }
                              goto LABEL_894;
                            }
                            goto LABEL_485;
                          }
                        }
                      }
                      v244 = (DXGCONTEXT *)v8->Flags.Value;
                      if ( ((unsigned int)v244 & 0x10000000) == 0 )
                      {
                        v245 = *((_QWORD *)this + 2);
                        if ( *(_DWORD *)(v245 + 280) == 1 && (*(_DWORD *)(v245 + 4 * v118 + 976) & 0x100) == 0 )
                        {
                          v246 = (_QWORD *)WdLogNewEntry5_WdEvent(v244, v126, v128, top);
                          v246[3] = -1071775739LL;
                          v246[4] = this;
                          v246[5] = v8->hSource;
                          v246[6] = v621;
                          v246[7] = (unsigned int)v118;
                          WdLogEvent5_WdEvent(v246);
                          v48 = -1071775739;
                          goto LABEL_894;
                        }
                      }
                      if ( ((unsigned __int8)v244 & 4) != 0 )
                      {
                        if ( v8->pPresentRegions )
                        {
                          v247 = DXGCONTEXT::ValidatePresentRegions(v244, v8, v622, v625);
                          v630 = (CWin32kLocks *)(unsigned int)v247;
                          if ( v247 < 0 )
                          {
                            v48 = v247;
                            goto LABEL_894;
                          }
                        }
                      }
                      v248 = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
                      v249 = *(_QWORD *)(v248 + 1984);
                      if ( (unsigned int)v118 >= *(_DWORD *)(v249 + 104) )
                      {
                        v250 = WdLogNewEntry5_WdAssertion(v248);
                        *(_QWORD *)(v250 + 24) = 10954LL;
                        WdLogEvent5_WdAssertion(v250);
                      }
                      v251 = *(_QWORD *)(v249 + 16);
                      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v251 + 144)
                        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v251 + 128)) )
                      {
                        v253 = WdLogNewEntry5_WdAssertion(v252);
                        *(_QWORD *)(v253 + 24) = 10955LL;
                        WdLogEvent5_WdAssertion(v253);
                      }
                      v254 = *(_QWORD *)(*(_QWORD *)(v249 + 136) + v166 + 88);
                      if ( v254 )
                      {
                        v255 = *(_QWORD *)(v254 + 48);
                        if ( (*(_DWORD *)(v255 + 4) & 0x10) == 0 )
                        {
                          if ( v255 )
                          {
                            v256 = *(_DWORD *)(*((_QWORD *)this + 17) + 8LL);
                            v20 = v256 == (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(v629 + 8))(
                                            v255,
                                            v126,
                                            v128,
                                            top);
                            v257 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v8->Flags.Value;
                            if ( v20 )
                            {
                              if ( (*(_BYTE *)&v257 & 4) != 0 )
                                goto LABEL_346;
                              COREDEVICEACCESS::Release(v620);
                              DXGADAPTERSTOPRESETLOCKSHARED::Release(v626);
                              DXGPRESENTMUTEX::DXGPRESENTMUTEX(
                                (DXGPRESENTMUTEX *)v661,
                                *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
                              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v661);
                              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v626);
                              v271 = COREDEVICEACCESS::AcquireShared(v620);
                              v273 = v271;
                              if ( v271 >= 0 )
                              {
                                DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v272, 0);
                                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v661);
                                goto LABEL_346;
                              }
                              v274 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                              *(_QWORD *)(v274 + 24) = v273;
                              *(_QWORD *)(v274 + 32) = this;
                              WdLogEvent5_WdEvent(v274);
                              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v661);
                              goto LABEL_892;
                            }
                            if ( (*(_BYTE *)&v257 & 4) == 0 )
                            {
                              DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2);
                              DXGADAPTERSTOPRESETLOCKSHARED::Release(v626);
                              COREDEVICEACCESS::Release(v620);
                              DXGPRESENTMUTEX::DXGPRESENTMUTEX(
                                (DXGPRESENTMUTEX *)v662,
                                *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
                              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v662);
                              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v626);
                              v258 = COREDEVICEACCESS::AcquireShared(v620);
                              v630 = (CWin32kLocks *)(unsigned int)v258;
                              if ( v258 < 0 )
                              {
                                v260 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                v48 = v258;
                                *(_QWORD *)(v260 + 24) = v258;
                                *(_QWORD *)(v260 + 32) = this;
                                WdLogEvent5_WdEvent(v260);
                                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v662);
                                goto LABEL_894;
                              }
                              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v259, 1);
                              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v662);
                            }
                            *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = (*(__int64 (**)(void))(v629 + 8))();
                            CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                                             *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL),
                                             v118);
                            if ( CddInterface )
                              (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
LABEL_346:
                            v262 = *((_QWORD *)this + 2);
                            if ( *(_QWORD *)(v262 + 2832) == *(_QWORD *)(*(_QWORD *)(v262 + 16) + 16LL) )
                            {
                              v263 = (*(_BYTE *)&v8->Flags.0 & 0x10) == 0;
                              ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v262 + 80));
                              LODWORD(v265) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                                + 184LL))(
                                                *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                                                (unsigned int)v118,
                                                0LL);
                              if ( (_DWORD)v265 != -1071775486 )
                                goto LABEL_358;
                              if ( !v263 )
                                goto LABEL_359;
                              COREDEVICEACCESS::Release(v620);
                              LOBYTE(v268) = 1;
                              v265 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                                + 8LL)
                                                                                    + 184LL))(
                                       *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                                       (unsigned int)v118,
                                       v268);
                              v269 = COREDEVICEACCESS::AcquireShared(v620);
                              if ( v269 < 0 )
                              {
                                v270 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                *(_QWORD *)(v270 + 24) = v265;
                                WdLogEvent5_WdEvent(v270);
                                goto LABEL_364;
                              }
LABEL_358:
                              if ( (int)v265 < 0 )
                              {
LABEL_359:
                                v277 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                *(_QWORD *)(v277 + 24) = (int)v265;
                                *(_QWORD *)(v277 + 32) = this;
                                WdLogEvent5_WdEvent(v277);
                                if ( (_DWORD)v265 != -1071775486
                                  && (_DWORD)v265 != -1073741130
                                  && (_DWORD)v265 != -1071775232 )
                                {
                                  v279 = WdLogNewEntry5_WdAssertion(v278);
                                  *(_QWORD *)(v279 + 24) = 2049LL;
                                  WdLogEvent5_WdAssertion(v279);
                                }
                              }
                              v269 = v265;
LABEL_364:
                              if ( v269 < 0 )
                              {
                                v280 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                *(_QWORD *)(v280 + 24) = v269;
                                *(_QWORD *)(v280 + 32) = this;
                                WdLogEvent5_WdEvent(v280);
                                LODWORD(v273) = v269;
                                goto LABEL_892;
                              }
                              if ( ((*((_DWORD *)v627 + 30) - 3) & 0xFFFFFFFD) != 0 )
                              {
                                v281 = (_QWORD *)((char *)this + 288);
                                LODWORD(v140) = DXGCONTEXT::AcquireDmaBuffer(
                                                  this,
                                                  (struct _VIDMM_DMA_BUFFER **)this + 36,
                                                  v620,
                                                  0);
                                if ( (int)v140 >= 0 )
                                {
                                  if ( !*v281 )
                                  {
                                    v283 = WdLogNewEntry5_WdAssertion(v282);
                                    *(_QWORD *)(v283 + 24) = 3207LL;
                                    WdLogEvent5_WdAssertion(v283);
                                  }
                                  goto LABEL_370;
                                }
LABEL_570:
                                v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                                if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 144)
                                  && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v47 + 128))
                                  && (_DWORD)v140 != -1073741130 )
                                {
                                  v408 = WdLogNewEntry5_WdAssertion(v47);
                                  *(_QWORD *)(v408 + 24) = 4535LL;
                                  WdLogEvent5_WdAssertion(v408);
                                }
                                if ( *v281 )
                                {
                                  v409 = WdLogNewEntry5_WdAssertion(v47);
                                  *(_QWORD *)(v409 + 24) = 4536LL;
                                  WdLogEvent5_WdAssertion(v409);
                                  v48 = v140;
                                  goto LABEL_894;
                                }
                                goto LABEL_485;
                              }
LABEL_370:
                              v284 = *((_QWORD *)this + 2);
                              v285 = *(_QWORD *)(*(_QWORD *)(v284 + 2832) + 1984LL);
                              v286 = *(_QWORD *)(v285 + 16);
                              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v286 + 144)
                                && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v286 + 128)) )
                              {
                                v287 = WdLogNewEntry5_WdAssertion(v286);
                                *(_QWORD *)(v287 + 24) = 4092LL;
                                WdLogEvent5_WdAssertion(v287);
                              }
                              if ( (unsigned int)v118 < *(_DWORD *)(v285 + 104)
                                || (v288 = WdLogNewEntry5_WdAssertion(v286),
                                    *(_QWORD *)(v288 + 24) = 4093LL,
                                    WdLogEvent5_WdAssertion(v288),
                                    (unsigned int)v118 < *(_DWORD *)(v285 + 104)) )
                              {
                                v289 = v628;
                                if ( v284 == *(_QWORD *)(*(_QWORD *)(v285 + 136) + v628 + 672) )
                                {
                                  v290 = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
                                  if ( v290 )
                                  {
                                    v291 = *(_QWORD *)(v290 + 1992);
                                    if ( !(v291
                                         ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v291 + 400)
                                                                                                 + 8LL)
                                                                                     + 448LL))(
                                             *(_QWORD *)(v291 + 408),
                                             (unsigned int)v118)
                                         : (unsigned __int8)DmmIsSourceInActiveVidPnTopology(v290, (unsigned int)v118)) )
                                    {
                                      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 280LL) == 1 )
                                      {
                                        v293 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                        LODWORD(v140) = -1071775738;
                                        v293[3] = -1071775738LL;
                                        v293[4] = this;
                                        v293[5] = (unsigned int)v118;
                                        WdLogEvent5_WdEvent(v293);
                                        goto LABEL_454;
                                      }
                                      if ( (v8->Flags.Value & 4) != 0 )
                                      {
                                        v294 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                        v294[3] = 0LL;
                                        v294[4] = this;
                                        v294[5] = (unsigned int)v118;
                                        WdLogEvent5_WdEvent(v294);
                                        LODWORD(v140) = -1071774920;
                                        goto LABEL_454;
                                      }
                                    }
                                  }
                                  v295 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v8->Flags.Value;
                                  if ( (*(_DWORD *)&v295 & 0x10000000) == 0 )
                                  {
                                    v296 = *((_QWORD *)this + 2);
                                    if ( *(_DWORD *)(v296 + 280) == 1
                                      && (*(_DWORD *)(v296 + 4 * v118 + 976) & 0x100) == 0 )
                                    {
                                      v297 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                      LODWORD(v140) = -1071775739;
                                      v297[3] = -1071775739LL;
                                      v297[4] = this;
                                      v297[5] = v8->hSource;
                                      v297[6] = v621;
                                      v297[7] = (unsigned int)v118;
                                      WdLogEvent5_WdEvent(v297);
                                      goto LABEL_454;
                                    }
                                  }
                                  if ( (*(_BYTE *)&v295 & 4) != 0 )
                                  {
                                    if ( v621 )
                                    {
                                      Count = v621[6].Count;
                                      if ( Count )
                                      {
                                        if ( (*(_DWORD *)(Count + 4) & 0x2000) != 0
                                          && !DXGDEVICE::IsDirectFlipAllocationPinned(
                                                *((DXGDEVICE **)this + 2),
                                                (const struct DXGALLOCATION *)v621) )
                                        {
                                          v299 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                          LODWORD(v273) = -1071775739;
                                          v299[3] = -1071775739LL;
                                          v299[4] = this;
                                          v299[5] = v621;
                                          WdLogEvent5_WdEvent(v299);
                                          v47 = *((_QWORD *)this + 36);
                                          if ( v47 )
                                          {
                                            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                                + 8LL)
                                                                                    + 480LL))(
                                              v47,
                                              0LL);
                                            *((_QWORD *)this + 36) = 0LL;
                                          }
                                          goto LABEL_892;
                                        }
                                      }
                                    }
                                  }
                                  if ( (*(_WORD *)&v295 & 0x2000) != 0 )
                                  {
                                    CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL)
                                                                     + 1984LL),
                                                           (unsigned int)v118,
                                                           1LL);
                                    v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)((CurrentOrientation != 1) << 7)) & 0x80;
                                  }
                                  if ( bTracingEnabled )
                                  {
                                    v301 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                                    v302 = *(_QWORD *)(v301 + 432);
                                    v303 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v301 + 424)
                                                                                                 + 8LL)
                                                                                     + 320LL);
                                    if ( (v8->Flags.Value & 4) != 0 )
                                    {
                                      v304 = v303(v302, hSource);
                                      v305 = v665.Flags.Value >> 3;
                                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                                      {
                                        LOBYTE(v305) = (*(_BYTE *)&v665.Flags.0 & 8) != 0;
                                        Template_pqpqtt(*((_QWORD *)this + 36) == 0LL, v305, v304);
                                      }
                                      goto LABEL_415;
                                    }
                                    v303(v302, v623);
                                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                       + 8LL)
                                                                           + 320LL))(
                                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                                      hSource);
                                    pDstSubRects = v665.pDstSubRects;
                                    SubRectCnt = v665.SubRectCnt;
                                    v310 = *((_QWORD *)this + 36);
                                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                      Template_ppxppttqddddddddq(
                                        HIDWORD(*(_QWORD *)&v665.DstRect.left),
                                        HIDWORD(*(_QWORD *)&v665.DstRect.right),
                                        HIDWORD(*(_QWORD *)&v665.SrcRect.left),
                                        v8->hWindow,
                                        v310);
                                    v311 = 0;
                                    if ( !SubRectCnt )
                                    {
LABEL_414:
                                      v289 = v628;
                                      goto LABEL_415;
                                    }
                                    while ( 2 )
                                    {
                                      if ( SubRectCnt - v311 <= 0x10 )
                                      {
                                        v312 = SubRectCnt - v311;
                                        if ( SubRectCnt != v311 )
                                          goto LABEL_408;
                                      }
                                      else
                                      {
                                        v312 = 16;
LABEL_408:
                                        LODWORD(v307) = v311;
                                        v313 = v312;
                                        v306 = 0LL;
                                        do
                                        {
                                          v306 += 4LL;
                                          v314 = (unsigned int)v307;
                                          v307 = (unsigned int)(v307 + 1);
                                          v315 = &pDstSubRects[v314];
                                          *(_DWORD *)&v682[v306 + 60] = v315->left;
                                          *(_DWORD *)&v680[v306 + 60] = v315->right;
                                          *(_DWORD *)&v672[v306 - 4] = v315->top;
                                          *(_DWORD *)&v678[v306 + 60] = v315->bottom;
                                          --v313;
                                        }
                                        while ( v313 );
                                      }
                                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                      {
                                        LODWORD(HandleInformation) = v312;
                                        LODWORD(Object) = SubRectCnt - v311 <= 0x10;
                                        Template_ptqDR2DR2DR2DR2(
                                          (__int64)v683,
                                          v306,
                                          v307,
                                          v310,
                                          Object,
                                          HandleInformation,
                                          v683,
                                          v681,
                                          v672,
                                          v679);
                                      }
                                      v311 += 16;
                                      if ( v311 >= SubRectCnt )
                                      {
                                        v8 = v643;
                                        goto LABEL_414;
                                      }
                                      continue;
                                    }
                                  }
LABEL_415:
                                  LODWORD(v140) = DXGCONTEXT::SubmitPresent(
                                                    this,
                                                    v8,
                                                    v8->BroadcastContextCount,
                                                    v639,
                                                    (struct DXGALLOCATION *)v621,
                                                    hSource,
                                                    v623,
                                                    &v665,
                                                    v8->pPresentRegions,
                                                    *((struct _VIDMM_DMA_BUFFER **)this + 36),
                                                    v627,
                                                    v620);
                                  if ( (int)v140 >= 0 )
                                  {
                                    v316 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL)
                                                     + 136LL);
                                    if ( *(_DWORD *)(v316 + v289 + 956) == -1 )
                                    {
                                      v317 = WdLogNewEntry5_WdAssertion(v316);
                                      *(_QWORD *)(v317 + 24) = 3319LL;
                                      WdLogEvent5_WdAssertion(v317);
                                    }
                                  }
                                  v281 = (_QWORD *)((char *)this + 288);
                                  *((_QWORD *)this + 36) = 0LL;
                                  if ( (int)v140 < 0 )
                                    goto LABEL_570;
                                  if ( (v8->Flags.Value & 4) != 0 )
                                  {
                                    v318 = *((_QWORD *)this + 2);
                                    if ( v318 != -208 && *(struct _KTHREAD **)(v318 + 216) == KeGetCurrentThread() )
                                    {
                                      v319 = WdLogNewEntry5_WdAssertion(v316);
                                      *(_QWORD *)(v319 + 24) = 1155LL;
                                      WdLogEvent5_WdAssertion(v319);
                                    }
                                    KeEnterCriticalRegion();
                                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v318 + 208, 0LL) )
                                    {
                                      if ( bTracingEnabled )
                                      {
                                        v322 = *(_DWORD *)(v318 + 224);
                                        if ( v322 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                                          Template_q(v320, &EventBlockThread, v321, v322);
                                      }
                                      ExAcquirePushLockExclusiveEx(v318 + 208, 0LL);
                                    }
                                    v323 = v165 << 6;
                                    *(_QWORD *)(v318 + v323 + 1296) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1304) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1312) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1320) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1328) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1336) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1344) = 0LL;
                                    *(_QWORD *)(v318 + v323 + 1352) = 0LL;
                                    *(_DWORD *)(v318 + 4 * v165 + 2320) = 0;
                                    *(_QWORD *)(v318 + 216) = 0LL;
                                    ExReleasePushLockExclusiveEx(v318 + 208, 0LL);
                                    KeLeaveCriticalRegion();
                                    v325 = *((_QWORD *)this + 2);
                                    LODWORD(v628) = *((_DWORD *)v627 + 34);
                                    if ( v325 != -208 && *(struct _KTHREAD **)(v325 + 216) == KeGetCurrentThread() )
                                    {
                                      v326 = WdLogNewEntry5_WdAssertion(v324);
                                      *(_QWORD *)(v326 + 24) = 1155LL;
                                      WdLogEvent5_WdAssertion(v326);
                                    }
                                    KeEnterCriticalRegion();
                                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v325 + 208, 0LL) )
                                    {
                                      if ( bTracingEnabled )
                                      {
                                        v329 = *(_DWORD *)(v325 + 224);
                                        if ( v329 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                                          Template_q(v327, &EventBlockThread, v328, v329);
                                      }
                                      ExAcquirePushLockExclusiveEx(v325 + 208, 0LL);
                                    }
                                    v330 = v628;
                                    *(_QWORD *)(v325 + 216) = KeGetCurrentThread();
                                    *(_QWORD *)(v325 + 8 * v165 + 784) = v621;
                                    *(_DWORD *)(v325 + 4 * v165 + 912) = v330;
                                    if ( v621 )
                                    {
                                      *(_QWORD *)(v325 + v323 + 1304) = 0LL;
                                      *(_QWORD *)(v325 + v323 + 1312) = 0LL;
                                      *(_QWORD *)(v325 + v323 + 1320) = 0LL;
                                      *(_QWORD *)(v325 + v323 + 1328) = 0LL;
                                      *(_QWORD *)(v325 + v323 + 1336) = 0LL;
                                      *(_QWORD *)(v325 + v323 + 1344) = 0LL;
                                      *(_QWORD *)(v325 + v323 + 1352) = 0LL;
                                      *(_DWORD *)(v325 + 4 * v165 + 2320) = 0;
                                      *(_QWORD *)(v325 + v323 + 1296) = v621;
                                    }
                                    *(_QWORD *)(v325 + 216) = 0LL;
                                    ExReleasePushLockExclusiveEx(v325 + 208, 0LL);
                                    KeLeaveCriticalRegion();
                                    *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v165 + 2768) = *((_DWORD *)v627 + 30);
                                    goto LABEL_441;
                                  }
                                  goto LABEL_442;
                                }
                              }
                              v340 = (_QWORD *)WdLogNewEntry5_WdWarning(v286, v264, v266, v267);
                              v340[3] = -1071775744LL;
                              v340[4] = this;
                              v340[5] = v8->hSource;
                              v340[6] = v621;
                              v340[7] = (unsigned int)v118;
                              WdLogEvent5_WdWarning(v340);
                              LODWORD(v140) = -1071775744;
LABEL_454:
                              v281 = (_QWORD *)((char *)this + 288);
                              v47 = *((_QWORD *)this + 36);
                              if ( v47 )
                              {
                                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 424LL)
                                                                                    + 8LL)
                                                                        + 480LL))(
                                  v47,
                                  0LL);
                                *v281 = 0LL;
                              }
                              if ( (_DWORD)v140 != -1071774920 )
                                goto LABEL_442;
                              if ( (v8->Flags.Value & 4) != 0 )
                              {
                                v341 = (DXGDEVICE *)*((_QWORD *)this + 2);
                                if ( *((_QWORD *)v341 + 354) == *(_QWORD *)(*((_QWORD *)v341 + 2) + 16LL) )
                                {
                                  DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(v341, v118);
                                  DXGDEVICE::SetDisplayedPrimary(
                                    *((DXGDEVICE **)this + 2),
                                    v118,
                                    (const struct DXGALLOCATION *)v621,
                                    *((_DWORD *)v627 + 34),
                                    1);
                                  v47 = *((_QWORD *)this + 2);
                                  LODWORD(v273) = 0;
                                  *(_DWORD *)(v47 + 4 * v118 + 2768) = *((_DWORD *)v627 + 30);
                                  goto LABEL_892;
                                }
                                DXGDEVICE::SetDisplayedPrimary(v341, v118, (const struct DXGALLOCATION *)v621, 0, 1);
                              }
                              LODWORD(v273) = 0;
LABEL_892:
                              LODWORD(v421) = v273;
LABEL_893:
                              v48 = v421;
                              goto LABEL_894;
                            }
                            v342 = *(_QWORD *)(v262 + 2832);
                            if ( !v342 )
                            {
                              v352 = (_QWORD *)WdLogNewEntry5_WdError(v262);
                              v352[3] = *((_QWORD *)this + 2);
                              v352[4] = -1073741822LL;
                              goto LABEL_481;
                            }
                            if ( !*(_DWORD *)(v262 + 280) )
                            {
                              v343 = v632;
                              if ( (*(_BYTE *)&v8->Flags.0 & 4) != 0 )
                                v343 = (struct DXGALLOCATION *)v621;
                              v344 = *(_DWORD *)(*((_QWORD *)v343 + 6) + 4LL);
                              if ( (v344 & 0x10) != 0 )
                              {
                                v345 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                v345[3] = -1071775482LL;
                                v345[4] = this;
                                v345[5] = v343;
                                WdLogEvent5_WdEvent(v345);
                                LODWORD(v273) = -1071775482;
                                goto LABEL_892;
                              }
                              v346 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                  *(DXGADAPTER ***)(v342 + 1984),
                                                  (v344 >> 6) & 0xF);
                              memset(&v654, 0, 40);
                              v654.Flags.Value = 1;
                              v654.Rotation = -1;
                              v347 = *((_QWORD *)v343 + 6);
                              v663 = v346;
                              v654.hAllocation = *(HANDLE *)(v347 + 16);
                              v349 = ADAPTER_RENDER::DdiDescribeAllocation(
                                       *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                          + 1992LL),
                                       &v654,
                                       v348);
                              v351 = v349;
                              if ( v349 < 0 )
                              {
                                v352 = (_QWORD *)WdLogNewEntry5_WdError(v350);
                                v352[3] = v351;
                                v352[4] = this;
                                v352[5] = *((unsigned int *)v343 + 4);
                                v352[6] = v343;
                                v352[7] = (*(_DWORD *)(*((_QWORD *)v343 + 6) + 4LL) >> 6) & 0xF;
LABEL_481:
                                WdLogEvent5_WdError(v352);
                                LODWORD(v273) = -1073741811;
                                goto LABEL_892;
                              }
                              if ( *(_QWORD *)&v654.Width != (_QWORD)v663 )
                                goto LABEL_476;
                              v353 = 22;
                              Format = D3DDDIFMT_X8R8G8B8;
                              if ( v654.Format != D3DDDIFMT_A8R8G8B8 )
                                Format = v654.Format;
                              if ( DWORD2(v663) != 21 )
                                v353 = DWORD2(v663);
                              if ( Format != v353 )
                              {
LABEL_476:
                                v355 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                                v355[3] = -1071775482LL;
                                v355[4] = this;
                                v355[5] = v343;
                                WdLogEvent5_WdEvent(v355);
                                LODWORD(v273) = -1071775739;
                                goto LABEL_892;
                              }
                            }
                            LODWORD(v140) = BLTQUEUE::Present(
                                              (BLTQUEUE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL)
                                                                                             + 1984LL)
                                                                                 + 320LL)
                                                                     + 8LL)
                                                         + 2408LL * (unsigned int)v118),
                                              this,
                                              v8,
                                              &v665,
                                              v620);
                            if ( (int)v140 >= 0 )
                            {
                              if ( (v8->Flags.Value & 4) != 0 )
                              {
                                DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), v118);
                                DXGDEVICE::SetDisplayedPrimary(
                                  *((DXGDEVICE **)this + 2),
                                  v118,
                                  (const struct DXGALLOCATION *)v621,
                                  0,
                                  1);
                              }
LABEL_441:
                              v281 = (_QWORD *)((char *)this + 288);
LABEL_442:
                              v331 = v620;
LABEL_443:
                              if ( (int)v140 >= 0 )
                              {
                                v332 = v638;
                                if ( v638 )
                                {
                                  if ( (v8->Flags.Value & 0x10000000) == 0 )
                                  {
                                    v333 = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
                                    if ( v333 )
                                    {
                                      if ( !(*(unsigned int (**)(void))(v629 + 216))() )
                                      {
                                        memset(&v670, 0, sizeof(v670));
                                        v670.hContext = v8->hDevice;
                                        v670.hSource = v631;
                                        v670.VidPnSourceId = (*(_DWORD *)(v332[6].Count + 4) >> 6) & 0xF;
                                        v334 = 2LL;
                                        BroadcastContextCount = v8->BroadcastContextCount;
                                        BroadcastContext = v8->BroadcastContext;
                                        v670.BroadcastContextCount = BroadcastContextCount;
                                        v337 = v670.BroadcastContext;
                                        do
                                        {
                                          v337 += 32;
                                          v338 = *(_OWORD *)BroadcastContext;
                                          BroadcastContext += 32;
                                          *((_OWORD *)v337 - 8) = v338;
                                          *((_OWORD *)v337 - 7) = *((_OWORD *)BroadcastContext - 7);
                                          *((_OWORD *)v337 - 6) = *((_OWORD *)BroadcastContext - 6);
                                          *((_OWORD *)v337 - 5) = *((_OWORD *)BroadcastContext - 5);
                                          *((_OWORD *)v337 - 4) = *((_OWORD *)BroadcastContext - 4);
                                          *((_OWORD *)v337 - 3) = *((_OWORD *)BroadcastContext - 3);
                                          *((_OWORD *)v337 - 2) = *((_OWORD *)BroadcastContext - 2);
                                          *((_OWORD *)v337 - 1) = *((_OWORD *)BroadcastContext - 1);
                                          --v334;
                                        }
                                        while ( v334 );
                                        v670.PresentRegions.DirtyRectCount = 0;
                                        v670.PresentRegions.MoveRectCount = 0;
                                        v670.Flags.Value = 4;
                                        v339 = OUTPUTDUPL_MGR::ProcessPresent(
                                                 *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v333 + 1984) + 128LL),
                                                 this,
                                                 &v670,
                                                 (*(_DWORD *)(v332[6].Count + 4) >> 6) & 0xF,
                                                 v639,
                                                 v331);
                                        if ( v339 == 259 )
                                          v339 = 0;
                                        LODWORD(v140) = v339;
                                      }
                                    }
                                  }
                                }
                              }
                              goto LABEL_570;
                            }
LABEL_569:
                            v281 = (_QWORD *)((char *)this + 288);
                            goto LABEL_570;
                          }
                        }
                      }
                      v275 = *((_QWORD *)this + 2);
                      if ( (*(_DWORD *)(v275 + 4 * v118 + 976) & 0x200) != 0 || (v8->Flags.Value & 0x10000000) != 0 )
                        goto LABEL_346;
                      v276 = (_QWORD *)WdLogNewEntry5_WdWarning(
                                         *(_DWORD *)(v275 + 4 * v118 + 976) >> 9,
                                         v126,
                                         v128,
                                         top);
                      LODWORD(v273) = -1071775739;
                      v276[3] = -1071775739LL;
                      v276[4] = this;
                      v276[5] = v8->hSource;
                      v276[6] = v621;
                      v276[7] = (unsigned int)v118;
LABEL_891:
                      WdLogEvent5_WdWarning(v276);
                      goto LABEL_892;
                    }
LABEL_485:
                    v48 = v140;
                    goto LABEL_894;
                  }
                }
                v150 = (_QWORD *)WdLogNewEntry5_WdError(v139);
                v150[3] = -1073741811LL;
                v150[4] = this;
                v150[5] = v8->Flags.Value;
                v150[6] = v632;
                v150[7] = (unsigned int)v118;
                WdLogEvent5_WdError(v150);
                v48 = -1073741811;
                goto LABEL_894;
              }
            }
            goto LABEL_191;
          }
        }
      }
      v154 = (_QWORD *)WdLogNewEntry5_WdError(bottom);
      v154[3] = -1073741811LL;
      v154[4] = v8->SrcRect.left;
      v154[5] = v8->SrcRect.top;
      v154[6] = v8->SrcRect.right;
      v154[7] = v8->SrcRect.bottom;
      WdLogEvent5_WdError(v154);
      v48 = -1073741811;
LABEL_894:
      if ( v638 )
        ExReleaseRundownProtection(v638 + 11);
      goto LABEL_896;
    }
    if ( (v111 & 0x108203) != 0 || (v111 & 0x24C0) != 0 || (v111 & 0x100) != 0 )
    {
      v226 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, Value, a3, a4);
      v226[3] = this;
      FlipInterval = v8->Flags.Value;
      goto LABEL_484;
    }
    if ( (v111 & 0x10000000) != 0 )
    {
      v173 = v621[5].Count;
      if ( !v173 || !*(_QWORD *)(v173 + 56) )
      {
        v174 = WdLogNewEntry5_WdError(v173);
        *(_QWORD *)(v174 + 24) = 2866LL;
LABEL_228:
        WdLogEvent5_WdError(v174);
        v48 = -1073741811;
        goto LABEL_894;
      }
    }
    else if ( (*(_DWORD *)(v621[6].Count + 4) & 0x2003) == 0 )
    {
      v175 = (_QWORD *)WdLogNewEntry5_WdError(v111);
      v175[3] = -1073741811LL;
      v175[4] = this;
      v175[5] = v621;
      v176 = v621[6].Count;
LABEL_231:
      v175[6] = v176;
      v175[7] = v8->hSource;
      WdLogEvent5_WdError(v175);
      v48 = -1073741811;
      goto LABEL_894;
    }
    v177 = v621 + 6;
    v178 = v621 + 11;
    v118 = (*(_DWORD *)(v621[6].Count + 4) >> 6) & 0xF;
    if ( !ExAcquireRundownProtection(v621 + 11) )
    {
      v182 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v180, v179, v181);
      v182[3] = 275LL;
      v182[4] = 25LL;
      v182[5] = v621;
      v182[6] = 0LL;
      v182[7] = 0LL;
      WdLogEvent5_WdCriticalError(v182);
    }
    v638 = v621;
    if ( !ExAcquireRundownProtection(v178) )
    {
      v186 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v184, v183, v185);
      v186[3] = 275LL;
      v186[4] = 25LL;
      v186[5] = v621;
      v186[6] = 0LL;
      v186[7] = 0LL;
      WdLogEvent5_WdCriticalError(v186);
    }
    ExReleaseRundownProtection(v178);
    v188 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v189 = WdLogNewEntry5_WdAssertion(v187);
      *(_QWORD *)(v189 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v189);
      v188 = DXGGLOBAL::m_pGlobal;
    }
    if ( *((_DWORD *)v188 + 231) )
    {
      v190 = KeGetCurrentThread();
      if ( !v190 )
      {
        v191 = WdLogNewEntry5_WdAssertion(v187);
        *(_QWORD *)(v191 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v191);
      }
      v192 = PsGetCurrentProcessSessionId();
      if ( v192 )
      {
        if ( (unsigned int)PsGetThreadSessionId(v190) == v192 )
        {
          v193 = (__int64 *)PsGetThreadWin32Thread(v190);
          if ( v193 )
          {
            v195 = *v193;
            if ( v195 )
            {
              if ( *(_QWORD *)(v195 + 80) )
              {
                v196 = KeGetCurrentThread();
                if ( !v196 )
                {
                  v197 = WdLogNewEntry5_WdAssertion(v194);
                  *(_QWORD *)(v197 + 24) = 92LL;
                  WdLogEvent5_WdAssertion(v197);
                }
                v200 = PsGetCurrentProcessSessionId();
                if ( v200
                  && (unsigned int)PsGetThreadSessionId(v196) == v200
                  && (v202 = PsGetThreadWin32Thread(v196)) != 0
                  && *(_QWORD *)v202 )
                {
                  v203 = *(_QWORD *)(*(_QWORD *)v202 + 80LL);
                }
                else
                {
                  v203 = 0LL;
                }
                if ( *(_DWORD *)(v203 + 136) )
                {
                  v204 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v199, v198, v201);
                  v204[3] = 275LL;
                  v204[4] = 25LL;
                  v204[5] = *(int *)(v203 + 136);
                  v204[6] = 0LL;
                  v204[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v204);
                }
              }
            }
          }
        }
      }
    }
    v631 = v8->hSource;
    v205 = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
    if ( !v205
      || (v206 = *(_QWORD *)(v205 + 1984)) == 0
      || (v205 = *(_QWORD *)(v206 + 16), KeGetCurrentThread() != *(struct _KTHREAD **)(v205 + 144))
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v205 + 128)) )
    {
      v207 = WdLogNewEntry5_WdAssertion(v205);
      *(_QWORD *)(v207 + 24) = 2888LL;
      WdLogEvent5_WdAssertion(v207);
    }
    v208 = v629;
    if ( (*(_DWORD *)(v177->Count + 4) & 0x2000) != 0 && !(*(unsigned int (**)(void))(v629 + 216))() )
    {
      v175 = (_QWORD *)WdLogNewEntry5_WdError(v205);
      v175[3] = -1073741811LL;
      v175[4] = this;
      v175[5] = v621;
      v176 = v177->Count;
      goto LABEL_231;
    }
    v128 = v8->Flags.Value;
    if ( (v8->Flags.Value & 0x60000) != 0 )
    {
      if ( (v8->Flags.Value & 0x60000) == 0x60000 )
      {
        v174 = WdLogNewEntry5_WdError(v205);
        *(_QWORD *)(v174 + 24) = 2907LL;
        goto LABEL_228;
      }
      if ( (*(_DWORD *)(v177->Count + 4) & 0x1000) == 0 )
      {
        v174 = WdLogNewEntry5_WdError(v205);
        *(_QWORD *)(v174 + 24) = 2913LL;
        goto LABEL_228;
      }
      v210 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL),
                                 v118)
             + 10);
      if ( (v210 & 0x10) == 0 )
      {
        v212 = WdLogNewEntry5_WdWarning(v210, v209, v211, top);
        *(_QWORD *)(v212 + 24) = 2920LL;
LABEL_271:
        WdLogEvent5_WdWarning(v212);
        v48 = -1071775739;
        goto LABEL_894;
      }
      v128 = v8->Flags.Value;
      if ( (v128 & 0x40000) != 0 && (v210 & 0x20) == 0 )
      {
        v212 = WdLogNewEntry5_WdWarning(v210, v209, v128, top);
        *(_QWORD *)(v212 + 24) = 2926LL;
        goto LABEL_271;
      }
      if ( (v128 & 0xC0000) == 0xC0000 )
      {
        v174 = WdLogNewEntry5_WdError(v210);
        *(_QWORD *)(v174 + 24) = 2932LL;
        goto LABEL_228;
      }
    }
    v126 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(v126 + 2832) != *(_QWORD *)(*(_QWORD *)(v126 + 16) + 16LL) )
      goto LABEL_210;
    v213 = v627;
    v214 = *(_DWORD *)v627 ^ (*(_DWORD *)v627 ^ v128) & 4;
    *(_DWORD *)v627 = v214;
    v215 = ((unsigned __int8)v214 ^ (unsigned __int8)*(_DWORD *)&v8->Flags.0) & 8 ^ v214;
    *(_DWORD *)v213 = v215;
    v216 = ((unsigned __int8)v215 ^ (unsigned __int8)(v8->Flags.Value >> 1)) & 0x10 ^ v215;
    *(_DWORD *)v213 = v216;
    v217 = (v216 ^ (4 * v8->Flags.Value)) & 0x80000 ^ v216;
    *(_DWORD *)v213 = v217;
    v218 = (v217 ^ (4 * v8->Flags.Value)) & 0x100000 ^ v217;
    *(_DWORD *)v213 = v218;
    *(_DWORD *)v213 = v218 ^ (v218 ^ (4 * v8->Flags.Value)) & 0x200000;
    if ( (v8->Flags.Value & 0x8000000) != 0 )
      Duration = v8->Duration;
    else
      Duration = 0;
    *((_DWORD *)v213 + 36) = Duration;
    *(_DWORD *)v213 ^= (v8->Flags.Value ^ *(_DWORD *)v213) & 0x20000000;
    v665.Flags.Value ^= (v8->Flags.Value ^ v665.Flags.Value) & 4;
    v665.Flags.Value ^= (*(_WORD *)&v665.Flags.0 ^ (unsigned __int16)(v8->Flags.Value >> 9)) & 0x100;
    v665.Flags.Value ^= (*(_WORD *)&v665.Flags.0 ^ (unsigned __int16)(v8->Flags.Value >> 9)) & 0x200;
    v665.Flags.Value ^= (*(_WORD *)&v665.Flags.0 ^ (unsigned __int16)(v8->Flags.Value >> 9)) & 0x400;
    pPresentRegions = v8->pPresentRegions;
    if ( pPresentRegions && !pPresentRegions->MoveRectCount && (*(unsigned int (**)(void))(v208 + 216))() )
    {
      v665.SubRectCnt = v8->pPresentRegions->DirtyRectCount;
      v665.pDstSubRects = v8->pPresentRegions->pDirtyRects;
    }
    v221 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                             + 8LL)
                                                                                 + 424LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
             (unsigned int)v118,
             &v8->FlipInterval);
    *((_DWORD *)v213 + 30) = v221;
    if ( !v221 )
    {
      v226 = (_QWORD *)WdLogNewEntry5_WdWarning(v223, v222, v224, v225);
      v226[3] = this;
      FlipInterval = v8->FlipInterval;
LABEL_484:
      v226[4] = FlipInterval;
      LODWORD(v140) = -1073741811;
      v226[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v226);
      goto LABEL_485;
    }
    if ( ((v221 - 1) & 0xFFFFFFFD) != 0 )
    {
      v665.FlipInterval = v8->FlipInterval;
      if ( *((_DWORD *)v213 + 30) == 2 )
        goto LABEL_292;
    }
    else
    {
      v665.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
    }
    v665.Flags.Value |= 8u;
LABEL_292:
    *((_DWORD *)v213 + 31) = v8->FlipInterval;
    *((_DWORD *)v213 + 29) = v118;
    v228 = *((_QWORD *)this + 2);
    v229 = v228 + 208;
    if ( v228 != -208 && *(struct _KTHREAD **)(v228 + 216) == KeGetCurrentThread() )
    {
      v230 = WdLogNewEntry5_WdAssertion(v223);
      *(_QWORD *)(v230 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v230);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v228 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v233 = *(_DWORD *)(v228 + 224);
        if ( v233 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v231, &EventBlockThread, v232, v233);
      }
      ExAcquirePushLockSharedEx(v228 + 208, 0LL);
    }
    v234 = *(_QWORD *)(v228 + 8 * v118 + 784);
    ExReleasePushLockSharedEx(v229, 0LL);
    KeLeaveCriticalRegion();
    v126 = (*(_DWORD *)(v177->Count + 4) >> 13) & 1;
    if ( ((*(_DWORD *)(v177->Count + 4) >> 13) & 1) != 0
      && v234
      && (*(_DWORD *)(*(_QWORD *)(v234 + 48) + 4LL) & 0x2000) == 0 )
    {
      v235 = v627;
      *(_DWORD *)v627 |= 0x400000u;
    }
    else if ( !(_DWORD)v126 && v234 && (*(_DWORD *)(*(_QWORD *)(v234 + 48) + 4LL) & 0x2000) != 0 )
    {
      v235 = v627;
      *(_DWORD *)v627 |= 0x400000u;
    }
    else
    {
      v235 = v627;
      *(_DWORD *)v627 &= ~0x400000u;
    }
    v236 = *((_DWORD *)v235 + 30);
    if ( !v236 )
      goto LABEL_210;
    if ( v236 == *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v118 + 2768) )
      goto LABEL_210;
    v237 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v237 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v237);
    COREDEVICEACCESS::Release(v620);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v238 = COREDEVICEACCESS::AcquireShared(v620);
    v239 = v238;
    if ( v238 >= 0 )
      goto LABEL_210;
    v240 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v240 + 24) = v239;
    WdLogEvent5_WdEvent(v240);
    v48 = v239;
    goto LABEL_894;
  }
  if ( (v111 & 3) != 0 )
  {
    v410 = ((unsigned int)v111 >> 8) & 1;
    if ( (((unsigned int)v111 >> 8) & 1) != 0 )
    {
      a3 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
      if ( !*((_QWORD *)a3 + 354) )
      {
        v276 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, v410, a3, a4);
        LODWORD(v273) = -1073741811;
        v276[3] = *((_QWORD *)this + 2);
        v276[4] = -1073741811LL;
        goto LABEL_891;
      }
      if ( *((_DWORD *)a3 + 710) <= v8->VidPnSourceId )
      {
        v411 = WdLogNewEntry5_WdWarning(v111, v410, a3, a4);
        *(_QWORD *)(v411 + 24) = v8->VidPnSourceId;
        *(_QWORD *)(v411 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 2840LL);
        WdLogEvent5_WdWarning(v411);
        LODWORD(v273) = -1073741811;
        goto LABEL_892;
      }
    }
    if ( (v111 & 2) != 0 )
    {
      if ( v8->pSrcSubRects && v8->SubRectCnt && (v111 & 0x1D) == 0 && (v111 & 0x8620) == 0 && (v111 & 0x80u) == 0LL )
      {
        hSource = 0;
        goto LABEL_600;
      }
    }
    else if ( v8->pSrcSubRects && v8->SubRectCnt && v30 && VidPnSourceId && (v111 & 0x2E) == 0 && (v111 & 0x8000) == 0 )
    {
      v412 = ((unsigned int)v111 >> 9) & 1;
      if ( !v412 && (v111 & 0x400) == 0 )
        goto LABEL_600;
      v111 = ((unsigned int)v111 >> 10) & 1;
      if ( v412 == (_DWORD)v111 )
      {
        v276 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, v410, a3, a4);
        LODWORD(v273) = -1073741811;
        v276[3] = -1073741811LL;
        v276[4] = this;
        v276[5] = v8->pSrcSubRects;
        v276[6] = v8->SubRectCnt;
        v276[7] = v8->Flags.Value;
        goto LABEL_891;
      }
      if ( (_DWORD)v410
        && ADAPTER_DISPLAY::IsVidPnSourceOwner(
             *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL),
             *((const struct DXGDEVICE **)this + 2),
             v8->VidPnSourceId) )
      {
LABEL_600:
        v665.Flags.Value ^= (v8->Flags.Value ^ v665.Flags.Value) & 2;
        v665.Flags.Value ^= (v8->Flags.Value ^ v665.Flags.Value) & 1;
        v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)(v8->Flags.Value >> 5)) & 0x10;
        v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)(v8->Flags.Value >> 5)) & 0x20;
        v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)(v8->Flags.Value >> 5)) & 0x40;
        v665.Color = v8->Color;
        LODWORD(v140) = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 17), v8, v30, VidPnSourceId);
        if ( (int)v140 < 0 )
          goto LABEL_569;
        if ( (*(_DWORD *)(*((_QWORD *)this + 17) + 4LL) & 4) != 0 )
          goto LABEL_441;
        v413 = *((_QWORD *)this + 2);
        v414 = *(_QWORD *)(v413 + 2832);
        if ( v414 && *(_QWORD *)(v414 + 1992) )
        {
          if ( v414 != *(_QWORD *)(*(_QWORD *)(v413 + 16) + 16LL) )
          {
            v415 = WdLogNewEntry5_WdAssertion(v414);
            *(_QWORD *)(v415 + 24) = 3537LL;
            WdLogEvent5_WdAssertion(v415);
          }
          v416 = *((_QWORD *)this + 2);
          v417 = 0;
          if ( *(_DWORD *)(v416 + 2840) )
          {
            while ( 1 )
            {
              v418 = (*(_BYTE *)&v8->Flags.0 & 0x10) == 0;
              ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v416 + 80));
              LODWORD(v419) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                            + 8LL)
                                                                                + 184LL))(
                                *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                                v417,
                                0LL);
              if ( (_DWORD)v419 != -1071775486 )
                break;
              if ( !v418 )
                goto LABEL_614;
              if ( *((_BYTE *)v620 + 64) )
                COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 32));
              COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 8));
              LOBYTE(v420) = 1;
              v419 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                       *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                       v417,
                       v420);
              LODWORD(v421) = COREDEVICEACCESS::AcquireShared(v620);
              if ( (int)v421 >= 0 )
                break;
              v422 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v422 + 24) = v419;
              WdLogEvent5_WdEvent(v422);
LABEL_619:
              if ( (int)v421 < 0 )
              {
                v430 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v430 + 24) = (int)v421;
                *(_QWORD *)(v430 + 32) = this;
                WdLogEvent5_WdEvent(v430);
                goto LABEL_893;
              }
              v416 = *((_QWORD *)this + 2);
              if ( ++v417 >= *(_DWORD *)(v416 + 2840) )
                goto LABEL_621;
            }
            if ( (int)v419 < 0 )
            {
LABEL_614:
              v423 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v423 + 24) = (int)v419;
              *(_QWORD *)(v423 + 32) = this;
              WdLogEvent5_WdEvent(v423);
              if ( (_DWORD)v419 != -1071775486 && (_DWORD)v419 != -1073741130 && (_DWORD)v419 != -1071775232 )
              {
                v425 = WdLogNewEntry5_WdAssertion(v424);
                *(_QWORD *)(v425 + 24) = 2049LL;
                WdLogEvent5_WdAssertion(v425);
              }
            }
            LODWORD(v421) = v419;
            goto LABEL_619;
          }
        }
        else
        {
          v431 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (*(_BYTE *)&v8->Flags.0 & 0x10) == 0, v620);
          v421 = v431;
          if ( v431 < 0 )
          {
            v432 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            *(_QWORD *)(v432 + 24) = v421;
            *(_QWORD *)(v432 + 32) = this;
            WdLogEvent5_WdEvent(v432);
            goto LABEL_893;
          }
        }
LABEL_621:
        v281 = (_QWORD *)((char *)this + 288);
        LODWORD(v140) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 36, v620, 0);
        if ( (int)v140 < 0 )
          goto LABEL_570;
        if ( !*v281 )
        {
          v427 = WdLogNewEntry5_WdAssertion(v426);
          *(_QWORD *)(v427 + 24) = 3575LL;
          WdLogEvent5_WdAssertion(v427);
        }
        DXGPRESENTMUTEX::DXGPRESENTMUTEX(
          (DXGPRESENTMUTEX *)v635,
          *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
        if ( (v8->Flags.Value & 0x10000) != 0 )
        {
          if ( v8->hDestination )
          {
            v434 = *((_QWORD *)v632 + 6);
            v433 = (*(_DWORD *)(v434 + 4) & 0x400) == 0;
            *(_DWORD *)(v434 + 4) |= 0x400u;
          }
          else
          {
            v433 = v631;
          }
        }
        else
        {
          COREDEVICEACCESS::Release(v620);
          DXGADAPTERSTOPRESETLOCKSHARED::Release(v626);
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v635);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v626);
          v428 = COREDEVICEACCESS::AcquireShared(v620);
          v140 = v428;
          if ( v428 < 0 )
          {
            v429 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            *(_QWORD *)(v429 + 24) = v140;
            *(_QWORD *)(v429 + 32) = this;
            WdLogEvent5_WdEvent(v429);
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
            v48 = v140;
            goto LABEL_896;
          }
          v433 = 0;
        }
        LODWORD(v628) = (*(__int64 (**)(void))(v629 + 8))();
        CurrentThreadId = (struct _EX_RUNDOWN_REF *)PsGetCurrentThreadId();
        v436 = *((_QWORD *)this + 2);
        v437 = CurrentThreadId;
        v634 = CurrentThreadId;
        v438 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v436 + 16) + 400LL) + 8LL) + 440LL))(*(_QWORD *)(*(_QWORD *)(v436 + 16) + 408LL));
        v440 = *((_QWORD *)this + 17);
        if ( *(_DWORD *)(v440 + 8) == (_DWORD)v628
          && *(struct _EX_RUNDOWN_REF **)(v440 + 56) == v437
          && *(HWND *)(v440 + 48) == v8->hWindow
          && *(_DWORD *)(v440 + 64) == v438
          && !v433
          && (v441 = *(_DWORD *)(v440 + 4), (v441 & 8) == 0) )
        {
          if ( (v441 & 1) != 0 )
          {
            LODWORD(v140) = -1071775738;
          }
          else if ( (v8->Flags.Value & 0x10000) == 0 && (v441 & 0x10) == 0 )
          {
            DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v439, 0);
          }
        }
        else
        {
          if ( v637 )
          {
            v637 = 0;
            DXGFASTMUTEX::Release((DXGFASTMUTEX *)(v636 + 440));
          }
          v442 = v626;
          if ( *((_BYTE *)v626 + 8) )
          {
            *((_BYTE *)v626 + 8) = 0;
            ExReleasePushLockSharedEx(*(_QWORD *)v442 + 104LL, 0LL);
            KeLeaveCriticalRegion();
            v443 = *(DXGGLOBAL ***)v442;
            v444 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v442 + 24LL));
            if ( v444 )
            {
              if ( v444 < 0 )
              {
                v445 = WdLogNewEntry5_WdAssertion(v443);
                *(_QWORD *)(v445 + 24) = 1158LL;
                WdLogEvent5_WdAssertion(v445);
              }
            }
            else
            {
              DXGGLOBAL::DestroyAdapter(v443[2], (struct DXGADAPTER *)v443);
            }
          }
          if ( *((_BYTE *)v620 + 64) )
            COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 32));
          COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 8));
          v446 = v630;
          LODWORD(v140) = CWin32kLocks::Lock(v630, v8->hWindow, HIWORD(v8->Flags.Value) & 1, 1, 0);
          if ( (v8->Flags.Value & 0x10000) == 0
            || ((*(void (__fastcall **)(_QWORD, __int64 *))(v629 + 232))(*(_QWORD *)v630, &v657),
                v447 = *((_QWORD *)this + 17),
                *(_QWORD *)(v447 + 432) = v657,
                (v8->Flags.Value & 0x10000) == 0) )
          {
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v635);
          }
          if ( !*((_BYTE *)v442 + 8) )
          {
            if ( _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v442 + 24LL), 1uLL) <= 0 )
            {
              v448 = WdLogNewEntry5_WdAssertion(v447);
              *(_QWORD *)(v448 + 24) = 1141LL;
              WdLogEvent5_WdAssertion(v448);
            }
            v449 = *(DXGGLOBAL ***)v442;
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx(v449 + 13, 0LL);
            v446 = v630;
            *((_BYTE *)v442 + 8) = 1;
          }
          v450 = COREDEVICEACCESS::AcquireShared(v620);
          if ( v450 < 0 )
          {
            v451 = v450;
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
            v48 = v451;
            goto LABEL_896;
          }
          if ( (int)v140 < 0 )
          {
LABEL_686:
            v464 = *(_DWORD *)(*((_QWORD *)this + 17) + 4LL);
            if ( (v464 & 0x10) != 0 )
            {
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
              if ( (int)v140 < 0 )
              {
LABEL_691:
                v331 = v620;
                goto LABEL_692;
              }
              v467 = *((_QWORD *)this + 17);
              v468 = *(_DWORD *)(v467 + 4) >> 1;
              LOBYTE(v468) = (*(_DWORD *)(v467 + 4) & 2) != 0;
              if ( (*(_DWORD *)(v467 + 4) & 2) == 0 && v8->BroadcastContextCount )
              {
                v469 = WdLogNewEntry5_WdError(v468);
                *(_QWORD *)(v469 + 24) = 3841LL;
                WdLogEvent5_WdError(v469);
                LODWORD(v140) = -1071774910;
                goto LABEL_691;
              }
              if ( (*(_DWORD *)(v467 + 4) & 2) != 0 )
                goto LABEL_691;
              if ( (v8->Flags.Value & 0x10000) != 0 && v8->hDestination )
              {
                v474 = WdLogNewEntry5_WdAssertion(v468);
                *(_QWORD *)(v474 + 24) = 3847LL;
                WdLogEvent5_WdAssertion(v474);
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v468, &EventPerformanceWarning, v466, 0);
              if ( (v8->Flags.Value & 0x100) != 0 )
              {
                v475 = (struct _EX_RUNDOWN_REF *)&v669;
                v465 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL);
                v476 = 0;
                v669 = *(_OWORD *)(1016LL * v8->VidPnSourceId + *(_QWORD *)(v465 + 136) + 628);
              }
              else
              {
                v476 = 0;
                v475 = 0LL;
              }
              v477 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v8->Flags.Value;
              v634 = v475;
              if ( (*(_BYTE *)&v477 & 1) != 0 )
              {
                v331 = v620;
                LODWORD(v140) = DXGPRESENT::PrepareStagingBuffer(
                                  *((DXGPRESENT **)this + 17),
                                  *((struct DXGDEVICE **)this + 2),
                                  v8->hSource,
                                  v620,
                                  &v623);
                if ( (int)v140 < 0 )
                  goto LABEL_692;
                v479 = v623;
                if ( !v623 )
                {
                  v480 = WdLogNewEntry5_WdAssertion(v478);
                  *(_QWORD *)(v480 + 24) = 3877LL;
                  WdLogEvent5_WdAssertion(v480);
                }
                if ( *(_BYTE *)&v8->Flags.0 >= 0 )
                {
                  v665.SrcRect.bottom = v625;
                  v484 = v622;
                  *(_QWORD *)&v665.SrcRect.left = 0LL;
                }
                else
                {
                  v481 = v8->SrcRect.top;
                  if ( v481 < 0 )
                    v481 = 0;
                  v665.SrcRect.top = v481;
                  v482 = v8->SrcRect.left;
                  if ( v482 < 0 )
                    v482 = 0;
                  v665.SrcRect.left = v482;
                  v483 = v8->SrcRect.bottom;
                  if ( (int)v625 < v483 )
                    v483 = v625;
                  v665.SrcRect.bottom = v483;
                  v484 = v8->SrcRect.right;
                  if ( v622 < v484 )
                    v484 = v622;
                }
                v665.SrcRect.right = v484;
                v665.DstRect = v665.SrcRect;
                v485 = (*(_WORD *)&v665.Flags.0 ^ (unsigned __int16)(v8->Flags.Value >> 9)) & 0x800;
                v665.Flags.Value ^= v485;
                if ( !v8->SubRectCnt )
                {
                  v486 = WdLogNewEntry5_WdAssertion(v485);
                  *(_QWORD *)(v486 + 24) = 3903LL;
                  WdLogEvent5_WdAssertion(v486);
                }
                if ( !v8->pSrcSubRects )
                {
                  v487 = WdLogNewEntry5_WdAssertion(v485);
                  *(_QWORD *)(v487 + 24) = 3904LL;
                  WdLogEvent5_WdAssertion(v487);
                }
                LODWORD(v140) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 17), v8->SubRectCnt);
                if ( (int)v140 < 0 )
                  goto LABEL_691;
                v488 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 17), 0);
                v492 = 0LL;
                v665.SubRectCnt = 0;
                v665.pDstSubRects = v488;
                if ( v8->SubRectCnt <= (unsigned int)v489 )
                  goto LABEL_789;
                while ( 1 )
                {
                  if ( DXGPRESENT::IntersectRect(&v488[v492], &v8->pSrcSubRects[v476], &v665.SrcRect) )
                    v492 = ++v665.SubRectCnt;
                  else
                    v492 = v665.SubRectCnt;
                  if ( ++v476 >= v8->SubRectCnt )
                    break;
                  v488 = (struct tagRECT *)v665.pDstSubRects;
                }
                if ( !(_DWORD)v492 )
                {
LABEL_789:
                  v523 = WdLogNewEntry5_WdWarning(v492, v489, v490, v491);
                  *(_QWORD *)(v523 + 24) = -1071775738LL;
                  *(_QWORD *)(v523 + 32) = this;
                  WdLogEvent5_WdWarning(v523);
                  LODWORD(v140) = -1071775738;
                  goto LABEL_691;
                }
                if ( bTracingEnabled )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 424LL)
                                                                     + 8LL)
                                                         + 320LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                    v479);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 424LL)
                                                                     + 8LL)
                                                         + 320LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                    hSource);
                  v495 = v665.pDstSubRects;
                  v496 = v665.SubRectCnt;
                  v497 = *((_QWORD *)this + 36);
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_ppxppttqddddddddq(
                      HIDWORD(*(_QWORD *)&v665.DstRect.left),
                      HIDWORD(*(_QWORD *)&v665.DstRect.right),
                      HIDWORD(*(_QWORD *)&v665.SrcRect.left),
                      v8->hWindow,
                      v497);
                  v498 = 0;
                  if ( v496 )
                  {
                    while ( v496 - v498 <= 0x10 )
                    {
                      v499 = v496 - v498;
                      if ( v496 != v498 )
                        goto LABEL_750;
LABEL_752:
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      {
                        LODWORD(HandleInformation) = v499;
                        LODWORD(Objecta) = v496 - v498 <= 0x10;
                        Template_ptqDR2DR2DR2DR2(
                          (__int64)v680,
                          v493,
                          v494,
                          v497,
                          Objecta,
                          HandleInformation,
                          v680,
                          v676,
                          v682,
                          v674);
                      }
                      v498 += 16;
                      if ( v498 >= v496 )
                      {
                        v8 = v643;
                        goto LABEL_756;
                      }
                    }
                    v499 = 16;
LABEL_750:
                    LODWORD(v494) = v498;
                    v500 = v499;
                    v493 = 0LL;
                    do
                    {
                      v493 += 4LL;
                      v501 = (unsigned int)v494;
                      v494 = (unsigned int)(v494 + 1);
                      v502 = &v495[v501];
                      *(_DWORD *)&v679[v493 + 60] = v502->left;
                      *(_DWORD *)&v675[v493 + 60] = v502->right;
                      *(_DWORD *)&v681[v493 + 60] = v502->top;
                      *(_DWORD *)&v673[v493 + 60] = v502->bottom;
                      --v500;
                    }
                    while ( v500 );
                    goto LABEL_752;
                  }
LABEL_756:
                  v479 = v623;
                }
                v503 = 0;
                v504 = DXGCONTEXT::SubmitPresent(
                         this,
                         v8,
                         v8->BroadcastContextCount,
                         v639,
                         (struct DXGALLOCATION *)v621,
                         hSource,
                         v479,
                         &v665,
                         0LL,
                         *((struct _VIDMM_DMA_BUFFER **)this + 36),
                         v627,
                         v620);
                *((_QWORD *)this + 36) = 0LL;
                LODWORD(v140) = v504;
                if ( v504 < 0 )
                  goto LABEL_691;
                v506 = (DXGDEVICE *)*((_QWORD *)this + 2);
                if ( (v8->Flags.Value & 0x100) != 0
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                       *(DXGADAPTER ***)(*((_QWORD *)v506 + 354) + 1984LL),
                       *((const struct DXGDEVICE **)this + 2),
                       v8->VidPnSourceId) )
                {
                  v503 = 1;
                }
                else if ( !DXGDEVICE::AllowLegacyPresent(v506, v505) )
                {
                  v507 = 0;
                  goto LABEL_762;
                }
                v507 = 1;
LABEL_762:
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v626);
                COREDEVICEACCESS::Release(v620);
                if ( v507 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
                {
                  v508 = v630;
                  CWin32kLocks::Unlock(v630);
                  v509 = v626;
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v626);
                  v510 = COREDEVICEACCESS::AcquireShared(v620);
                  if ( v510 < 0 )
                    goto LABEL_768;
                  memset(&v659, 0, sizeof(v659));
                  if ( !v479 )
                  {
                    v514 = WdLogNewEntry5_WdAssertion(v511);
                    *(_QWORD *)(v514 + 24) = 3987LL;
                    WdLogEvent5_WdAssertion(v514);
                  }
                  v659.hAllocation = v479;
                  v331 = v620;
                  LODWORD(v140) = DXGDEVICE::Lock(*((DXGDEVICE **)this + 2), &v659, v620, v512);
                  if ( (int)v140 < 0 )
                    goto LABEL_692;
                  DXGADAPTERSTOPRESETLOCKSHARED::Release(v509);
                  COREDEVICEACCESS::Release(v620);
                  if ( !v659.pData )
                  {
                    v516 = WdLogNewEntry5_WdAssertion(v515);
                    *(_QWORD *)(v516 + 24) = 4002LL;
                    WdLogEvent5_WdAssertion(v516);
                  }
                  if ( (v8->Flags.Value & 0x10000) != 0 && v8->hDestination )
                  {
                    v517 = WdLogNewEntry5_WdAssertion(v515);
                    *(_QWORD *)(v517 + 24) = 4003LL;
                    WdLogEvent5_WdAssertion(v517);
                  }
                  if ( (*(unsigned int (__fastcall **)(_QWORD))(v629 + 312))(0LL) )
                    v518 = v503;
                  else
                    v518 = 0;
                  LODWORD(v140) = CWin32kLocks::Lock(v508, v8->hWindow, 0, 0, v518);
                  if ( (int)v140 >= 0 )
                  {
                    v519 = *((_QWORD *)v508 + 1);
                    if ( !v519 )
                      v519 = *(_QWORD *)v508;
                    LOBYTE(v618) = (v8->Flags.Value & 0x200) != 0;
                    LOBYTE(v617) = 0;
                    if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, __int64, struct _EX_RUNDOWN_REF *, const RECT *, void *, _DWORD, signed int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v629 + 144))(
                            v8,
                            v519,
                            v634,
                            v665.pDstSubRects,
                            v659.pData,
                            *(_DWORD *)(*((_QWORD *)this + 17) + 424LL),
                            v622,
                            v625,
                            v617,
                            v618,
                            v8->Color,
                            DXGPRESENT::XformRect,
                            DXGPRESENT::ClipRects) )
                    {
                      v520 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                      *(_QWORD *)(v520 + 24) = -1071775737LL;
                      *(_QWORD *)(v520 + 32) = this;
                      WdLogEvent5_WdEvent(v520);
                      LODWORD(v140) = -1071775737;
                    }
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v509);
                  v510 = COREDEVICEACCESS::AcquireShared(v620);
                  if ( v510 < 0 )
                  {
LABEL_768:
                    v513 = v510;
                    DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
                    v48 = v513;
                    goto LABEL_896;
                  }
                  v522 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  v655.phAllocations = &v659.hAllocation;
                  v655.hDevice = 0;
                  v655.NumAllocations = 1;
                  DXGDEVICE::Unlock(v522, &v655, 0LL, v521);
                  if ( (int)v140 >= 0 && (v8->Flags.Value & 0x10000) != 0 )
                  {
                    v8->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                    v8->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 17) + 432LL);
                    v8->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                    v8->PresentHistoryToken.TokenSize = 48;
                    DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
                    LODWORD(v140) = DXGCONTEXT::SubmitPresentHistoryToken(
                                      this,
                                      &v8->PresentHistoryToken,
                                      v620,
                                      v508,
                                      0,
                                      0LL,
                                      0LL,
                                      0LL);
                  }
                }
                else
                {
                  v331 = v620;
                  COREDEVICEACCESS::AcquireSharedUncheck(v620);
                  LODWORD(v140) = -1071775738;
                }
LABEL_692:
                if ( v637 )
                {
                  v637 = 0;
                  DXGFASTMUTEX::Release((DXGFASTMUTEX *)(v636 + 440));
                }
                v281 = (_QWORD *)((char *)this + 288);
                if ( *((_QWORD *)this + 36) )
                {
                  if ( (int)v140 >= 0 )
                  {
                    v470 = *(unsigned int *)(*((_QWORD *)this + 17) + 4LL);
                    LOBYTE(v470) = v470 & 0x12;
                    if ( (_BYTE)v470 == 16 && (v8->Flags.Value & 2) == 0 )
                    {
                      v471 = WdLogNewEntry5_WdAssertion(v470);
                      *(_QWORD *)(v471 + 24) = 4324LL;
                      WdLogEvent5_WdAssertion(v471);
                    }
                  }
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 424LL)
                                                                     + 8LL)
                                                         + 480LL))(
                    *v281,
                    0LL);
                  *v281 = 0LL;
                }
                v472 = *((_QWORD *)this + 17);
                if ( (*(_DWORD *)(v472 + 4) & 0x80) != 0 )
                {
                  if ( (unsigned int)(v140 + 1071775738) > 1 )
                  {
                    v473 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v472 + 4) >> 7);
                    *(_QWORD *)(v473 + 24) = 4332LL;
                    WdLogEvent5_WdAssertion(v473);
                  }
                  LODWORD(v140) = 0;
                }
                if ( v637 )
                  DXGFASTMUTEX::Release((DXGFASTMUTEX *)(v636 + 440));
                goto LABEL_443;
              }
              if ( (*(_BYTE *)&v477 & 2) == 0 )
                goto LABEL_691;
              v524 = (DXGDEVICE *)*((_QWORD *)this + 2);
              v525 = 0;
              if ( (*(_WORD *)&v477 & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*((_QWORD *)v524 + 354) + 1984LL),
                     *((const struct DXGDEVICE **)this + 2),
                     v8->VidPnSourceId) )
              {
                v525 = 1;
              }
              else if ( !DXGDEVICE::AllowLegacyPresent(v524, v465) )
              {
                v526 = 0;
                goto LABEL_795;
              }
              v526 = 1;
LABEL_795:
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v442);
              COREDEVICEACCESS::Release(v620);
              if ( v526 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
              {
                if ( (v8->Flags.Value & 0x10000) != 0 )
                {
                  v528 = WdLogNewEntry5_WdAssertion(v527);
                  *(_QWORD *)(v528 + 24) = 4103LL;
                  WdLogEvent5_WdAssertion(v528);
                }
                CWin32kLocks::Unlock(v630);
                if ( (*(unsigned int (__fastcall **)(_QWORD))(v629 + 312))(0LL) )
                  v529 = v525;
                else
                  v529 = 0;
                v530 = CWin32kLocks::Lock(v630, v8->hWindow, 0, 0, v529);
                v531 = *((_QWORD *)v630 + 1);
                LODWORD(v140) = v530;
                if ( !v531 )
                  v531 = *(_QWORD *)v630;
                if ( !(*(unsigned int (__fastcall **)(__int64, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, UINT))(v629 + 152))(
                        v531,
                        v475,
                        v8->pSrcSubRects,
                        v8->SubRectCnt,
                        v8->Color) )
                {
                  v532 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                  *(_QWORD *)(v532 + 24) = -1071775737LL;
                  *(_QWORD *)(v532 + 32) = this;
                  WdLogEvent5_WdEvent(v532);
                  LODWORD(v140) = -1071775737;
                }
              }
              else
              {
                LODWORD(v140) = -1071775738;
              }
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v442);
              v331 = v620;
              v533 = COREDEVICEACCESS::AcquireShared(v620);
              v458 = v533;
              if ( v533 >= 0 )
                goto LABEL_692;
              goto LABEL_838;
            }
            if ( (int)v140 < 0 || (v464 & 2) != 0 )
              goto LABEL_691;
            if ( (*(unsigned int (__fastcall **)(_QWORD))(v629 + 224))(0LL) )
            {
              if ( (v8->Flags.Value & 0x12100) == 0x10000 )
                goto LABEL_820;
              v535 = WdLogNewEntry5_WdAssertion(v534);
              *(_QWORD *)(v535 + 24) = 4140LL;
            }
            else
            {
              if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) || (v8->Flags.Value & 0x4000000) != 0 )
                goto LABEL_820;
              v535 = WdLogNewEntry5_WdAssertion(v534);
              *(_QWORD *)(v535 + 24) = 4145LL;
            }
            WdLogEvent5_WdAssertion(v535);
LABEL_820:
            if ( (v8->Flags.Value & 0x10000) != 0
              && (v536 = *(_QWORD *)v630, v537 = *((_QWORD *)DXGPROCESS::GetCurrent() + 10), v536)
              && v537
              && *(_DWORD *)(*((_QWORD *)this + 17) + 432LL) == v8->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
            {
              if ( *((_BYTE *)v442 + 8) )
              {
                *((_BYTE *)v442 + 8) = 0;
                ExReleasePushLockSharedEx(*(_QWORD *)v442 + 104LL, 0LL);
                KeLeaveCriticalRegion();
                v538 = *(DXGGLOBAL ***)v442;
                v539 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v442 + 24LL));
                if ( v539 )
                {
                  if ( v539 < 0 )
                  {
                    v540 = WdLogNewEntry5_WdAssertion(v538);
                    *(_QWORD *)(v540 + 24) = 1158LL;
                    WdLogEvent5_WdAssertion(v540);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(v538[2], (struct DXGADAPTER *)v538);
                }
              }
              if ( *((_BYTE *)v620 + 64) )
                COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 32));
              COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 8));
              LODWORD(v664[0]) = 0;
              memset(&v664[1], 0, 0x218uLL);
              v541 = 1LL;
              v542 = 0LL;
              LODWORD(v664[0]) = *(_DWORD *)(*((_QWORD *)this + 17) + 352LL);
              v664[1] = *(_QWORD *)(*((_QWORD *)this + 17) + 224LL);
              v664[3] = *((unsigned int *)this + 6);
              for ( LODWORD(v664[2]) = 1; (unsigned int)v542 < v8->BroadcastContextCount; ++LODWORD(v664[2]) )
              {
                v543 = (unsigned int)v542;
                v542 = (unsigned int)(v542 + 1);
                v664[(unsigned int)v541 + 3] = v8->BroadcastContext[v543];
                v541 = (unsigned int)(LODWORD(v664[2]) + 1);
              }
              (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(v537 + 240))(v536, v664, v541, v542);
              if ( !*((_BYTE *)v442 + 8) )
              {
                if ( _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v442 + 24LL), 1uLL) <= 0 )
                {
                  v545 = WdLogNewEntry5_WdAssertion(v544);
                  *(_QWORD *)(v545 + 24) = 1141LL;
                  WdLogEvent5_WdAssertion(v545);
                }
                v546 = *(DXGGLOBAL ***)v442;
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v546 + 13, 0LL);
                *((_BYTE *)v442 + 8) = 1;
              }
              v331 = v620;
              v547 = COREDEVICEACCESS::AcquireShared(v620);
              v458 = v547;
              if ( v547 < 0 )
              {
LABEL_838:
                v459 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v459 + 24) = v458;
                *(_QWORD *)(v459 + 32) = this;
                goto LABEL_839;
              }
            }
            else
            {
              v331 = v620;
            }
            for ( i = 0; ; ++i )
            {
              while ( 1 )
              {
                if ( (v8->Flags.Value & 0x10000) != 0 )
                  v549 = 1;
                else
                  v549 = *(_DWORD *)(*((_QWORD *)this + 2) + 2840LL);
                if ( i >= v549 )
                  goto LABEL_692;
                v550 = *((_QWORD *)this + 17);
                if ( i < *(_DWORD *)(v550 + 68) || !i )
                  break;
                v665.SubRectCnt = 0;
                ++i;
              }
              v665.SubRectCnt = *(_DWORD *)(v550 + 4LL * i + 352);
              if ( v665.SubRectCnt )
              {
                if ( (v8->Flags.Value & 0x10000) == 0 )
                  v623 = DXGDEVICE::OpenCddPrimaryHandle(
                           *((DXGDEVICE **)this + 2),
                           i,
                           *((_BYTE *)this + 352),
                           *((_DWORD *)this + 82));
                if ( v623 )
                {
                  v551 = *((_QWORD *)this + 17);
                  if ( i >= *(_DWORD *)(v551 + 68) && i )
                    v552 = 0LL;
                  else
                    v552 = *(const RECT **)(v551 + 8LL * i + 224);
                  v665.pDstSubRects = v552;
                  if ( (v8->Flags.Value & 0x2000) != 0 )
                  {
                    v553 = ADAPTER_DISPLAY::GetCurrentOrientation(
                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL),
                             i,
                             1LL);
                    v665.Flags.Value ^= (*(_BYTE *)&v665.Flags.0 ^ (unsigned __int8)((v553 != 1) << 7)) & 0x80;
                  }
                  v666 = 0LL;
                  if ( (v8->Flags.Value & 0x10000) != 0 )
                    v554 = &v666;
                  else
                    v554 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL)
                                                  + 136LL)
                                      + 628LL
                                      + 1016LL * i);
                  v665.SrcRect = *(RECT *)(*((_QWORD *)this + 17) + 144LL);
                  v555 = (_DWORD *)*((_QWORD *)this + 17);
                  v665.DstRect.top = v555[33] - *((_DWORD *)v554 + 1);
                  v665.DstRect.bottom = v555[35] - *((_DWORD *)v554 + 1);
                  v665.DstRect.left = v555[32] - *(_DWORD *)v554;
                  v665.DstRect.right = v555[34] - *(_DWORD *)v554;
                  if ( bTracingEnabled && *((_QWORD *)this + 36) )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 424LL)
                                                                       + 8LL)
                                                           + 320LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                      v623);
                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 424LL)
                                                                       + 8LL)
                                                           + 320LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                      hSource);
                    v558 = v665.pDstSubRects;
                    v559 = v665.SubRectCnt;
                    v560 = *((_QWORD *)this + 36);
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      Template_ppxppttqddddddddq(
                        HIDWORD(*(_QWORD *)&v665.DstRect.left),
                        HIDWORD(*(_QWORD *)&v665.DstRect.right),
                        HIDWORD(*(_QWORD *)&v665.SrcRect.left),
                        v8->hWindow,
                        v560);
                    v561 = 0;
                    if ( v559 )
                    {
                      while ( v559 - v561 <= 0x10 )
                      {
                        v562 = v559 - v561;
                        if ( v559 != v561 )
                          goto LABEL_872;
LABEL_874:
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        {
                          LODWORD(HandleInformation) = v562;
                          LODWORD(Object) = v559 - v561 <= 0x10;
                          Template_ptqDR2DR2DR2DR2(
                            (__int64)v677,
                            v556,
                            v557,
                            v560,
                            Object,
                            HandleInformation,
                            v677,
                            v675,
                            v673,
                            v678);
                        }
                        v561 += 16;
                        if ( v561 >= v559 )
                        {
                          v8 = v643;
                          goto LABEL_878;
                        }
                      }
                      v562 = 16;
LABEL_872:
                      LODWORD(v557) = v561;
                      v563 = v562;
                      v556 = 0LL;
                      do
                      {
                        v556 += 4LL;
                        v564 = (unsigned int)v557;
                        v557 = (unsigned int)(v557 + 1);
                        v565 = &v558[v564];
                        *(_DWORD *)&v676[v556 + 60] = v565->left;
                        *(_DWORD *)&v674[v556 + 60] = v565->right;
                        *(_DWORD *)&v672[v556 + 60] = v565->top;
                        *(_DWORD *)&v677[v556 + 60] = v565->bottom;
                        --v563;
                      }
                      while ( v563 );
                      goto LABEL_874;
                    }
LABEL_878:
                    v331 = v620;
                  }
                  v566 = v639;
                  v619 = v627;
                  *((_DWORD *)v627 + 29) = i;
                  v567 = DXGCONTEXT::SubmitPresent(
                           this,
                           v8,
                           v8->BroadcastContextCount,
                           v566,
                           (struct DXGALLOCATION *)v621,
                           hSource,
                           v623,
                           &v665,
                           0LL,
                           *((struct _VIDMM_DMA_BUFFER **)this + 36),
                           v619,
                           v331);
                  *((_QWORD *)this + 36) = 0LL;
                  LODWORD(v140) = v567;
                  if ( (v8->Flags.Value & 0x10000) != 0
                    && *(_DWORD *)(*((_QWORD *)this + 17) + 432LL) == v8->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                  {
                    v8->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                    v8->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 17) + 432LL);
                    if ( v665.SubRectCnt <= 0x10 )
                    {
                      v8->PresentHistoryToken.Token.Flip.VidPnSourceId = v665.SubRectCnt;
                      for ( j = 0;
                            j < v665.SubRectCnt;
                            *(RECT *)((char *)&v8->PresentHistoryToken.Token.SurfaceComplete + 16 * v569 + 28) = v665.pDstSubRects[v569] )
                      {
                        v569 = j++;
                      }
                    }
                    else
                    {
                      v8->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                      *(RECT *)((char *)&v8->PresentHistoryToken.Token.SurfaceComplete + 28) = v665.DstRect;
                    }
                    v20 = v637 == 0;
                    v8->PresentHistoryToken.TokenSize = 16 * (v8->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                    if ( !v20 )
                    {
                      v637 = 0;
                      DXGFASTMUTEX::Release((DXGFASTMUTEX *)(v636 + 440));
                    }
                    LODWORD(v140) = DXGCONTEXT::SubmitPresentHistoryToken(
                                      this,
                                      &v8->PresentHistoryToken,
                                      v331,
                                      v630,
                                      0,
                                      0LL,
                                      0LL,
                                      0LL);
                  }
                  if ( (int)v140 < 0 )
                    goto LABEL_692;
                }
              }
            }
          }
          if ( (v8->Flags.Value & 0x10000) != 0 && v8->hDestination && !*(_QWORD *)(*((_QWORD *)this + 17) + 432LL) )
          {
            v452 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            LODWORD(v378) = 0;
            *(_QWORD *)(v452 + 24) = 0LL;
            *(_QWORD *)(v452 + 32) = this;
            WdLogEvent5_WdEvent(v452);
            v453 = *((_QWORD *)this + 36);
            if ( v453 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 424LL)
                                                                  + 8LL)
                                                      + 480LL))(
                v453,
                0LL);
              *((_QWORD *)this + 36) = 0LL;
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
              v48 = 0;
              goto LABEL_896;
            }
            goto LABEL_840;
          }
          v454 = *(HDC *)v446;
          v455 = (const struct DXGDEVICE *)*((_QWORD *)this + 2);
          v456 = *(HDC *)v446;
          v656 = (HDEV)*((_QWORD *)v446 + 2);
          LODWORD(v140) = DXGPRESENT::CheckVisRgn(
                            *((DXGPRESENT **)this + 17),
                            v8,
                            v456,
                            v656,
                            v455,
                            v622,
                            v625,
                            v633[0],
                            1);
          if ( (_DWORD)v140 == 261 )
          {
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
            COREDEVICEACCESS::Release(v620);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v626);
            if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
              LODWORD(v140) = -1071775738;
            if ( (v8->Flags.Value & 0x10000) == 0 )
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v635);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v626);
            v457 = COREDEVICEACCESS::AcquireShared(v620);
            v458 = v457;
            if ( v457 < 0 )
            {
              v459 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v459 + 24) = v458;
LABEL_839:
              WdLogEvent5_WdEvent(v459);
              LODWORD(v378) = v458;
LABEL_840:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v635);
              goto LABEL_841;
            }
            if ( (_DWORD)v140 != -1071775738 )
              LODWORD(v140) = DXGPRESENT::CheckVisRgn(
                                *((DXGPRESENT **)this + 17),
                                v8,
                                v454,
                                v656,
                                *((const struct DXGDEVICE **)this + 2),
                                v622,
                                v625,
                                v633[0],
                                0);
          }
          if ( (int)v140 < 0 )
          {
            v463 = *((_QWORD *)this + 17);
            if ( (*(_BYTE *)(v463 + 4) & 1) != 0 )
            {
              *(_QWORD *)(v463 + 56) = v634;
              *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v628;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 17) + 56LL) = v634;
            if ( (v8->Flags.Value & 0x10000) == 0 )
            {
              *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v628;
              DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2);
              v460 = 0;
              v461 = *(_DWORD *)(*((_QWORD *)this + 17) + 8LL);
              if ( v461 != (*(unsigned int (**)(void))(v629 + 8))() )
              {
                *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v628;
                ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFF, 0);
                v460 = 1;
              }
              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v462, v460);
            }
          }
        }
        v442 = v626;
        goto LABEL_686;
      }
    }
    v276 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, v410, a3, a4);
    LODWORD(v273) = -1073741811;
    v276[3] = this;
    v276[4] = v8->pSrcSubRects;
    v276[5] = v8->SubRectCnt;
    v276[6] = v8->Flags.Value;
    v276[7] = -1073741811LL;
    goto LABEL_891;
  }
  if ( (v111 & 0x8000) == 0 )
  {
    v407 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, Value, a3, a4);
    LODWORD(v140) = -1073741811;
    v407[3] = -1073741811LL;
    v407[4] = this;
    v407[5] = v8->pSrcSubRects;
    v407[6] = v8->SubRectCnt;
    v407[7] = v8->Flags.Value;
    WdLogEvent5_WdWarning(v407);
    goto LABEL_569;
  }
  if ( (v111 & 0x2F) != 0 || (v111 & 0x6C0) != 0 || (v111 & 0x2100) != 0 )
    goto LABEL_567;
  p_PresentHistoryToken = &v8->PresentHistoryToken;
  Model = v8->PresentHistoryToken.Model;
  if ( Model != D3DKMT_PM_REDIRECTED_FLIP )
  {
    if ( Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      goto LABEL_495;
LABEL_567:
    v406 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, Value, a3, a4);
    v406[3] = this;
    v406[4] = v8->Flags.Value;
    v406[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v406);
    v48 = -1073741811;
    goto LABEL_896;
  }
  if ( v8->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects > 0x10 )
    goto LABEL_567;
LABEL_495:
  v359 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( v359 != -664 && *(struct _KTHREAD **)(v359 + 672) == KeGetCurrentThread() )
  {
    v360 = WdLogNewEntry5_WdAssertion(v111);
    *(_QWORD *)(v360 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v360);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v359 + 664, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v359 + 664), v361, v362);
    ExAcquirePushLockSharedEx(v359 + 664, 0LL);
  }
  v363 = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(v363);
  v365 = ProcessSessionId < *(_DWORD *)(v359 + 688) && *(_QWORD *)(*(_QWORD *)(v359 + 696) + 8LL * ProcessSessionId);
  ExReleasePushLockSharedEx(v359 + 664, 0LL);
  KeLeaveCriticalRegion();
  v369 = v626;
  if ( *((_BYTE *)v626 + 8) )
  {
    *((_BYTE *)v626 + 8) = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)v369 + 104LL, 0LL);
    KeLeaveCriticalRegion();
    v367 = *(DXGGLOBAL ***)v369;
    v370 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v369 + 24LL));
    if ( v370 )
    {
      if ( v370 < 0 )
      {
        v371 = WdLogNewEntry5_WdAssertion(v367);
        *(_QWORD *)(v371 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v371);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(v367[2], (struct DXGADAPTER *)v367);
    }
    p_PresentHistoryToken = &v8->PresentHistoryToken;
  }
  if ( *((_BYTE *)v620 + 64) )
    COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 32));
  v372 = (COREDEVICEACCESS *)((char *)v620 + 8);
  if ( !*((_BYTE *)v620 + 24) )
  {
    v373 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v367, v366, v368);
    v373[3] = 275LL;
    v373[4] = 4LL;
    v373[5] = v372;
    v373[6] = 0LL;
    v373[7] = 0LL;
    WdLogEvent5_WdCriticalError(v373);
  }
  *((_BYTE *)v620 + 24) = 0;
  v374 = *((_QWORD *)v620 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v374 + 144) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v374);
  PresentLimitSemaphore = v8->PresentLimitSemaphore;
  if ( !PresentLimitSemaphore )
    goto LABEL_524;
  v376 = ObReferenceObjectByHandle(PresentLimitSemaphore, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v660, 0LL);
  v377 = v660;
  v378 = v376;
  if ( v376 >= 0 )
  {
    if ( (v8->Flags.Value & 0x10) != 0 )
    {
      Timeout.QuadPart = 0LL;
      if ( KeWaitForSingleObject(v660, Executive, 0, 1u, &Timeout) == 258 )
      {
        ObfDereferenceObject(v377);
        v48 = -1071775486;
        goto LABEL_896;
      }
    }
    else
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(v660, Executive, 0, 1u, &Timeout);
    }
    ObfDereferenceObject(v377);
    v369 = v626;
LABEL_524:
    v380 = (*(__int64 (__fastcall **)(BOOL, const struct _D3DKMT_PRESENTHISTORYTOKEN *))(v629 + 320))(
             v365,
             p_PresentHistoryToken);
    v378 = v380;
    if ( v380 >= 0 )
    {
      if ( !*((_BYTE *)v369 + 8) )
      {
        if ( _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v369 + 24LL), 1uLL) <= 0 )
        {
          v381 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v381 + 24) = 1141LL;
          WdLogEvent5_WdAssertion(v381);
        }
        v382 = *(DXGGLOBAL ***)v369;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v382 + 13, 0LL);
        *((_BYTE *)v626 + 8) = 1;
      }
      COREACCESS::AcquireShared(v372);
      v331 = v620;
      if ( *(_DWORD *)(*((_QWORD *)v620 + 7) + 352LL) == 1 )
      {
        if ( !*((_BYTE *)v620 + 64)
          || (COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v620 + 32)),
              *(_DWORD *)(*((_QWORD *)v620 + 5) + 160LL) == 1) )
        {
          if ( p_PresentHistoryToken->Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            v383 = PsGetCurrentProcess();
            v384 = PsGetProcessWin32Process(v383);
            if ( v384 )
            {
              v385 = *(_QWORD *)(v384 + 248);
            }
            else
            {
              v386 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v386 + 24) = v383;
              WdLogEvent5_WdEvent(v386);
              v385 = 0LL;
            }
            v387 = DXGGLOBAL::m_pGlobal;
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v388 = WdLogNewEntry5_WdAssertion(0LL);
              *(_QWORD *)(v388 + 24) = 1016LL;
              WdLogEvent5_WdAssertion(v388);
              v387 = DXGGLOBAL::m_pGlobal;
            }
            v640 = (PERESOURCE *)v387;
            v641 = 0;
            if ( !v387 )
            {
              v389 = WdLogNewEntry5_WdAssertion(0LL);
              *(_QWORD *)(v389 + 24) = 1380LL;
              WdLogEvent5_WdAssertion(v389);
              v387 = (struct DXGGLOBAL *)v640;
            }
            if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v387 + 48)) )
            {
              v393 = WdLogNewEntry5_WdAssertion(v391);
              *(_QWORD *)(v393 + 24) = 1385LL;
              WdLogEvent5_WdAssertion(v393);
            }
            if ( v641 )
            {
              v394 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v391, v390, v392);
              v394[3] = 275LL;
              v394[4] = 4LL;
              v394[5] = &v640;
              v394[6] = 0LL;
              v394[7] = 0LL;
              WdLogEvent5_WdCriticalError(v394);
            }
            v395 = v640;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v395[48], 1u);
            v641 = 1;
            Reserved = v8->PresentHistoryToken.Token.Flip.Reserved;
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v385 + 192, 0LL) )
            {
              DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v385 + 192), v397, v398);
              ExAcquirePushLockSharedEx(v385 + 192, 0LL);
            }
            v399 = (Reserved >> 6) & 0xFFFFFF;
            if ( v399 < *(_DWORD *)(v385 + 232)
              && (v400 = *(_QWORD *)(v385 + 216),
                  v401 = *(_DWORD *)(v400 + 16LL * v399 + 8),
                  ((Reserved >> 26) & 0x30) == (*(_BYTE *)(v400 + 16LL * v399 + 8) & 0x30))
              && (v401 & 0x1000) == 0
              && (v401 & 0xF) != 0
              && (*(_BYTE *)(v400 + 16LL * v399 + 8) & 0xF) == 8 )
            {
              v402 = *(_QWORD *)(v400 + 16LL * v399);
            }
            else
            {
              v402 = 0LL;
            }
            ExReleasePushLockSharedEx(v385 + 192, 0LL);
            KeLeaveCriticalRegion();
            if ( v402 )
            {
              FenceValue = v8->PresentHistoryToken.Token.Flip.FenceValue;
              if ( *(_DWORD *)(v402 + 152) != 3 )
              {
                v405 = WdLogNewEntry5_WdAssertion(v403);
                *(_QWORD *)(v405 + 24) = 228LL;
                WdLogEvent5_WdAssertion(v405);
              }
              if ( *(_QWORD *)(v402 + 104) > FenceValue )
                FenceValue = *(_QWORD *)(v402 + 104);
              *(_QWORD *)(v402 + 104) = FenceValue;
              v8->PresentHistoryToken.Token.Flip.Reserved = *(_DWORD *)(v402 + 96);
            }
            if ( v641 )
            {
              v641 = 0;
              ExReleaseResourceLite(v640[48]);
              KeLeaveCriticalRegion();
            }
          }
          LODWORD(v140) = DXGCONTEXT::SubmitPresentHistoryToken(
                            this,
                            p_PresentHistoryToken,
                            v620,
                            v630,
                            1,
                            0LL,
                            (struct DXGK_PRESENT_PARAMS *)v8,
                            v627);
          v281 = (_QWORD *)((char *)this + 288);
          goto LABEL_443;
        }
        COREACCESS::Release((COREDEVICEACCESS *)((char *)v620 + 32));
      }
      COREACCESS::Release(v372);
      v48 = -1073741130;
      goto LABEL_896;
    }
    if ( v380 != -1071775733 && v380 != -1071775730 )
      goto LABEL_518;
LABEL_841:
    v48 = v378;
    goto LABEL_896;
  }
LABEL_518:
  v379 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
  *(_QWORD *)(v379 + 24) = v378;
  *(_QWORD *)(v379 + 32) = this;
  WdLogEvent5_WdEvent(v379);
  v48 = v378;
LABEL_896:
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v570 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v570 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v570);
  }
  if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 231) )
  {
    v571 = KeGetCurrentThread();
    if ( !v571 )
    {
      v572 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v572 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v572);
    }
    v573 = PsGetCurrentProcessSessionId();
    if ( v573 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v571) == v573 )
      {
        v574 = (__int64 *)PsGetThreadWin32Thread(v571);
        if ( v574 )
        {
          v575 = *v574;
          if ( v575 )
          {
            if ( *(_QWORD *)(v575 + 80) )
            {
              v576 = KeGetCurrentThread();
              if ( !v576 )
              {
                v577 = WdLogNewEntry5_WdAssertion(v47);
                *(_QWORD *)(v577 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v577);
              }
              v579 = PsGetCurrentProcessSessionId();
              if ( v579
                && (unsigned int)PsGetThreadSessionId(v576) == v579
                && (v581 = PsGetThreadWin32Thread(v576)) != 0
                && *(_QWORD *)v581 )
              {
                v582 = *(_QWORD *)(*(_QWORD *)v581 + 80LL);
              }
              else
              {
                v582 = 0LL;
              }
              if ( *(_DWORD *)(v582 + 136) )
              {
                v583 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v578, v580);
                v583[3] = 275LL;
                v583[4] = 25LL;
                v583[5] = *(int *)(v582 + 136);
                v583[6] = 0LL;
                v583[7] = 0LL;
                WdLogEvent5_WdCriticalError(v583);
              }
            }
          }
        }
      }
    }
  }
  if ( v632 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v632 + 11);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v584 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v584 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v584);
  }
  if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 231) )
  {
    v585 = KeGetCurrentThread();
    if ( !v585 )
    {
      v586 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v586 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v586);
    }
    v587 = PsGetCurrentProcessSessionId();
    if ( v587 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v585) == v587 )
      {
        v588 = (__int64 *)PsGetThreadWin32Thread(v585);
        if ( v588 )
        {
          v589 = *v588;
          if ( v589 )
          {
            if ( *(_QWORD *)(v589 + 80) )
            {
              v590 = KeGetCurrentThread();
              if ( !v590 )
              {
                v591 = WdLogNewEntry5_WdAssertion(v47);
                *(_QWORD *)(v591 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v591);
              }
              v593 = PsGetCurrentProcessSessionId();
              if ( v593
                && (unsigned int)PsGetThreadSessionId(v590) == v593
                && (v595 = PsGetThreadWin32Thread(v590)) != 0
                && *(_QWORD *)v595 )
              {
                v596 = *(_QWORD *)(*(_QWORD *)v595 + 80LL);
              }
              else
              {
                v596 = 0LL;
              }
              if ( *(_DWORD *)(v596 + 136) )
              {
                v597 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v592, v594);
                v597[3] = 275LL;
                v597[4] = 25LL;
                v597[5] = *(int *)(v596 + 136);
                v597[6] = 0LL;
                v597[7] = 0LL;
                WdLogEvent5_WdCriticalError(v597);
              }
            }
          }
        }
      }
    }
  }
  if ( v621 )
    ExReleaseRundownProtection(v621 + 11);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v598 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v598 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v598);
  }
  if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 231) )
  {
    v599 = KeGetCurrentThread();
    if ( !v599 )
    {
      v600 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v600 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v600);
    }
    v601 = PsGetCurrentProcessSessionId();
    if ( v601 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v599) == v601 )
      {
        v602 = (__int64 *)PsGetThreadWin32Thread(v599);
        if ( v602 )
        {
          v604 = *v602;
          if ( v604 )
          {
            if ( *(_QWORD *)(v604 + 80) )
            {
              v605 = KeGetCurrentThread();
              if ( !v605 )
              {
                v606 = WdLogNewEntry5_WdAssertion(v603);
                *(_QWORD *)(v606 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v606);
              }
              v609 = PsGetCurrentProcessSessionId();
              if ( v609
                && (unsigned int)PsGetThreadSessionId(v605) == v609
                && (v611 = PsGetThreadWin32Thread(v605)) != 0
                && *(_QWORD *)v611 )
              {
                v612 = *(_QWORD *)(*(_QWORD *)v611 + 80LL);
              }
              else
              {
                v612 = 0LL;
              }
              if ( *(_DWORD *)(v612 + 136) )
              {
                v613 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v608, v607, v610);
                v613[3] = 275LL;
                v613[4] = 25LL;
                v613[5] = *(int *)(v612 + 136);
                v613[6] = 0LL;
                v613[7] = 0LL;
                WdLogEvent5_WdCriticalError(v613);
              }
            }
          }
        }
      }
    }
  }
  return v48;
}
