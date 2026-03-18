/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0
 * Callers:
 *     DxgkPresent @ 0x1C00C8CB0 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0006908 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E9C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C0007F28 (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1C000987C (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000CABC (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C000CAFC (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000CB04 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000CB20 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001CE68 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0025EC0 (Template_ppxppttqddddddddq.c)
 *     Template_pqpqtt @ 0x1C0026070 (Template_pqpqtt.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C002612C (Template_ptqDR2DR2DR2DR2.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00943C8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096238 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00A8014 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00AEF28 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00CA23C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00DBBE0 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00DC1A0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE3E0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C0143A24 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0143CD4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C01447A0 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0144830 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C014819C (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015E2E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01703E0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0170AB0 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0171234 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01713C4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0171F50 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        DXGADAPTER **a3,
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
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v20; // zf
  int v21; // ecx
  __int64 v22; // rdx
  int v23; // r12d
  __int64 v24; // rcx
  D3DKMT_HANDLE v25; // esi
  struct _EX_RUNDOWN_REF *v26; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v27; // rdi
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r9d
  unsigned int v32; // ecx
  __int64 v33; // r8
  int v34; // edx
  struct _EX_RUNDOWN_REF *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  D3DKMT_HANDLE v40; // ebx
  __int64 v41; // r13
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  unsigned int v45; // ecx
  __int64 v46; // r8
  int v47; // edx
  struct _EX_RUNDOWN_REF *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 CurrentProcess; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  __int64 v64; // rcx
  __int64 v65; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v67; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  _QWORD *v80; // rax
  char *v81; // rcx
  D3DKMT_HANDLE v82; // eax
  __int64 v83; // rdx
  _QWORD *v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rdx
  unsigned int v87; // r13d
  _QWORD *v88; // rax
  __int64 v89; // rcx
  unsigned int VidPnSourceId; // r13d
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r8
  int v94; // eax
  __int64 v95; // rdx
  RECT *p_SrcRect; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rax
  unsigned int v100; // ecx
  __int64 v101; // rcx
  _QWORD *v102; // rax
  LONG v103; // eax
  unsigned int v104; // r10d
  unsigned int v105; // esi
  UINT v106; // ebx
  __int64 v107; // rsi
  __int64 v108; // rcx
  LONG v109; // r10d
  __int64 v110; // rcx
  const RECT *v111; // r11
  int v112; // r10d
  __int64 v113; // rdx
  RECT DstRect; // xmm0
  _QWORD *v115; // rax
  __int64 v116; // rcx
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  UINT v119; // ecx
  _QWORD *v120; // rax
  __int64 v121; // rdx
  _QWORD *v122; // rax
  LONG v123; // eax
  UINT j; // ebx
  __int64 v125; // rdi
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  CWin32kLocks *v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  char v136; // al
  __int64 v137; // rcx
  _QWORD *v138; // rax
  __int64 v139; // rcx
  _QWORD *v140; // rax
  unsigned int v141; // edx
  ULONG_PTR v142; // rax
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // rax
  __int64 v159; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v160; // rsi
  int v161; // ecx
  UINT v162; // ecx
  int v163; // ecx
  UINT v164; // ecx
  UINT v165; // ecx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int v168; // eax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  _QWORD *v173; // rax
  __int64 v174; // rsi
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // r8
  int v178; // r9d
  __int64 v179; // rcx
  __int64 v180; // rsi
  ULONG_PTR v181; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rax
  int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // rsi
  __int64 v188; // rax
  _QWORD *v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // rcx
  int v192; // eax
  DXGCONTEXT *v193; // rcx
  __int64 v194; // rax
  _QWORD *v195; // rax
  __int64 v196; // rcx
  __int64 v197; // rdi
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rcx
  __int64 v204; // rsi
  int v205; // ebx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v206; // eax
  int v207; // eax
  __int64 v208; // rcx
  struct DXGPRESENTMUTEX *v209; // r8
  __int64 v210; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v212; // rcx
  bool v213; // di
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rbx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // r8
  struct DXGALLOCATION *v220; // rdi
  __int64 v221; // rax
  int v222; // eax
  __int64 v223; // rcx
  struct DXGPRESENTMUTEX *v224; // r8
  __int64 v225; // rax
  __int64 v226; // rax
  _QWORD *v227; // rax
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // rax
  _QWORD *v231; // rbx
  __int64 v232; // rcx
  __int64 v233; // rax
  __int64 v234; // rsi
  __int64 v235; // rdi
  CWin32kLocks *v236; // rcx
  __int64 v237; // rax
  __int64 v238; // rax
  struct DXGALLOCATION *v239; // rbx
  __int64 v240; // rcx
  __int64 v241; // rax
  char v242; // al
  _QWORD *v243; // rax
  __int64 v244; // rsi
  _QWORD *v245; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v246; // edi
  __int64 v247; // rax
  _QWORD *v248; // rax
  struct DXGALLOCATION *v249; // rbx
  __int64 v250; // rax
  __int64 v251; // rcx
  _QWORD *v252; // rax
  __int64 v253; // rcx
  int v254; // eax
  __int64 v255; // rax
  __int64 v256; // rcx
  __int64 (__fastcall *v257)(__int64, _QWORD); // rax
  __int64 v258; // r8
  __int64 v259; // rdx
  __int64 v260; // rdx
  __int64 v261; // r8
  UINT v262; // eax
  const RECT *v263; // rsi
  HWND v264; // r9
  UINT v265; // edi
  struct _EX_RUNDOWN_REF *v266; // rbx
  unsigned int v267; // r10d
  unsigned int v268; // r11d
  __int64 v269; // r9
  __int64 v270; // rcx
  const RECT *v271; // rcx
  __int64 v272; // rcx
  __int64 v273; // rax
  char *v274; // rbx
  __int64 v275; // rax
  __int64 v276; // rcx
  __int64 v277; // r8
  int v278; // r9d
  char *v279; // rcx
  COREACCESS *v280; // rax
  __int64 v281; // rsi
  __int64 v282; // rcx
  __int64 v283; // r13
  __int64 v284; // rax
  __int64 v285; // rcx
  __int64 v286; // r8
  int v287; // r9d
  struct DXGALLOCATION *v288; // rax
  COREACCESS *v289; // rcx
  struct _EX_RUNDOWN_REF *v290; // rbx
  __int64 v291; // rsi
  __int64 v292; // rcx
  ULONG BroadcastContextCount; // eax
  D3DKMT_HANDLE *BroadcastContext; // r14
  D3DKMT_HANDLE *v295; // rax
  __int128 v296; // xmm0
  int v297; // eax
  __int64 v298; // rcx
  __int64 v299; // rax
  __int64 v300; // rax
  _QWORD *v301; // rax
  __int64 v302; // rcx
  __int64 v303; // rcx
  int v304; // eax
  struct DXGALLOCATION *v305; // rbx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v306; // eax
  unsigned int v307; // edx
  _QWORD *v308; // rax
  __int128 v309; // xmm0
  __int64 v310; // rax
  __int64 v311; // r8
  int v312; // eax
  __int64 Format; // rcx
  __int64 v314; // rsi
  _QWORD *v315; // rax
  int v316; // edx
  _QWORD *v317; // rax
  __int64 v318; // rax
  _QWORD *v319; // rax
  _QWORD *v320; // rax
  D3DKMT_PRESENT_MODEL Model; // eax
  __int64 v322; // rdi
  __int64 v323; // rax
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // rax
  unsigned int ProcessSessionId; // eax
  unsigned int v329; // r13d
  __int64 v330; // rdx
  __int64 v331; // rcx
  __int64 v332; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v333; // rbx
  _QWORD *v334; // rax
  DXGADAPTER *v335; // rcx
  HANDLE PresentLimitSemaphore; // rcx
  NTSTATUS v337; // eax
  __int64 v338; // rcx
  PVOID v339; // rbx
  __int64 v340; // rsi
  int v341; // eax
  __int64 v342; // rdx
  __int64 v343; // r8
  __int64 v344; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v345; // rsi
  __int64 v346; // rbx
  _QWORD *v347; // rax
  DXGADAPTER *v348; // rcx
  struct COREDEVICEACCESS *v349; // rsi
  __int64 v350; // rax
  __int64 v351; // rdx
  __int64 v352; // rax
  DXGGLOBAL *v353; // rcx
  __int64 v354; // rsi
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 v357; // rdx
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // rax
  _QWORD *v361; // rax
  PERESOURCE *v362; // rbx
  D3DKMT_HANDLE Reserved; // ebx
  __int64 v364; // rdx
  __int64 v365; // r8
  unsigned int v366; // ecx
  __int64 v367; // r8
  int v368; // edx
  __int64 v369; // rbx
  __int64 v370; // rcx
  UINT64 FenceValue; // rdi
  __int64 v372; // rax
  _QWORD *v373; // rax
  _QWORD *v374; // rax
  __int64 v375; // rcx
  _QWORD *v376; // rax
  __int64 v377; // rax
  unsigned int v378; // eax
  __int64 v379; // rdx
  _QWORD *v380; // rax
  int v381; // esi
  __int64 v382; // rax
  __int64 v383; // rcx
  __int64 v384; // rax
  __int64 v385; // rax
  unsigned int v386; // r13d
  bool v387; // di
  __int64 v388; // rcx
  __int64 v389; // rbx
  __int64 v390; // r8
  __int64 v391; // rax
  __int64 v392; // rax
  __int64 v393; // rax
  __int64 v394; // rdx
  int v395; // r13d
  __int64 v396; // rax
  __int64 v397; // rcx
  __int64 v398; // r8
  __int64 v399; // r9
  __int64 v400; // rax
  __int64 v401; // rcx
  __int64 v402; // r8
  __int64 v403; // r9
  __int64 v404; // rax
  int v405; // eax
  __int64 v406; // rcx
  __int64 v407; // rax
  __int64 v408; // rax
  __int64 v409; // rcx
  _QWORD *v410; // r13
  __int64 v411; // rdi
  int v412; // eax
  __int64 v413; // rbx
  int v414; // eax
  __int64 v415; // rax
  __int64 v416; // rax
  __int64 v417; // rax
  __int64 v418; // rax
  __int64 v419; // rax
  struct _KTHREAD *v420; // rcx
  __int64 v421; // rax
  BOOL v422; // ebx
  int v423; // eax
  __int64 v424; // rcx
  __int64 v425; // rax
  ULONG_PTR Count; // rcx
  char *CurrentThreadId; // rax
  __int64 v428; // rcx
  char *v429; // rsi
  int v430; // eax
  struct DXGPRESENTMUTEX *v431; // r8
  __int64 v432; // rdx
  HWND hWindow; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v434; // rbx
  COREACCESS *v435; // rbx
  _QWORD *v436; // rax
  DXGADAPTER *v437; // rcx
  CWin32kLocks *v438; // rsi
  __int16 Value_high; // di
  int v440; // edi
  __int64 v441; // rcx
  __int64 v442; // rax
  __int64 v443; // rax
  int v444; // esi
  __int64 v445; // rcx
  __int64 v446; // r8
  CWin32kLocks *v447; // rax
  CWin32kLocks *v448; // r8
  HWND v449; // rcx
  HDEV v450; // rdx
  CWin32kLocks *v451; // rdi
  __int64 v452; // rax
  __int64 v453; // rax
  __int64 v454; // rcx
  __int64 v455; // rax
  __int64 v456; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v457; // rcx
  __int64 v458; // rbx
  struct COREDEVICEACCESS *v459; // rcx
  __int64 v460; // rax
  __int64 v461; // rcx
  HDC v462; // rsi
  const struct DXGDEVICE *v463; // rax
  HDC v464; // r8
  int v465; // eax
  __int64 v466; // rcx
  __int64 v467; // rbx
  __int64 v468; // rax
  char v469; // si
  int v470; // ebx
  struct DXGPRESENTMUTEX *v471; // r8
  __int64 v472; // rcx
  int v473; // ecx
  unsigned int v474; // edx
  __int64 v475; // r8
  __int64 v476; // rax
  __int64 v477; // rcx
  __int64 v478; // rax
  __int64 v479; // rax
  COREACCESS *v480; // rsi
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v481; // eax
  __int64 v482; // rcx
  unsigned int v483; // esi
  __int64 v484; // rax
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  int right; // eax
  __int64 v489; // rcx
  __int64 v490; // rax
  __int64 v491; // rax
  struct tagRECT *DdiSubRectList; // rax
  __int64 v493; // rdx
  __int64 v494; // r8
  __int64 v495; // r9
  __int64 SubRectCnt; // rcx
  int v497; // ebx
  __int64 v498; // rdx
  __int64 v499; // r8
  const RECT *pDstSubRects; // rdi
  UINT v501; // esi
  HWND v502; // r9
  UINT v503; // ebx
  char *v504; // r13
  unsigned int v505; // r11d
  __int64 v506; // r9
  __int64 v507; // rcx
  const RECT *v508; // rcx
  int v509; // eax
  unsigned int v510; // edx
  DXGDEVICE *v511; // rbx
  unsigned __int8 v512; // si
  char v513; // bl
  __int64 v514; // rcx
  __int64 v515; // rax
  __int64 v516; // rax
  __int64 v517; // rax
  CWin32kLocks *v518; // r13
  int v519; // eax
  __int64 v520; // rcx
  __int64 v521; // r9
  D3DKMT_HANDLE v522; // ebx
  __int64 v523; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v524; // rbx
  __int64 v525; // rcx
  __int64 v526; // rax
  __int64 v527; // rax
  int v528; // eax
  __int64 v529; // rdx
  __int64 v530; // rcx
  __int64 v531; // rax
  __int64 v532; // r9
  DXGDEVICE *v533; // rcx
  __int64 v534; // rax
  DXGDEVICE *v535; // rbx
  unsigned __int8 v536; // di
  char v537; // bl
  __int64 v538; // rcx
  __int64 v539; // rax
  CWin32kLocks *v540; // rbx
  __int64 v541; // r13
  int v542; // eax
  int v543; // eax
  __int64 v544; // rcx
  __int64 v545; // rcx
  __int64 v546; // rax
  int v547; // eax
  __int64 v548; // rcx
  __int64 v549; // rcx
  __int64 v550; // rax
  HDEV v551; // r13
  __int64 v552; // rax
  __int64 v553; // rdx
  __int64 v554; // rdx
  __int64 v555; // rbx
  __int64 v556; // r8
  __int64 v557; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v558; // rsi
  COREACCESS *v559; // rsi
  _QWORD *v560; // rax
  DXGADAPTER *v561; // rcx
  __int64 v562; // r8
  __int64 v563; // r9
  __int64 v564; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v565; // r13
  __int64 v566; // rbx
  __int64 v567; // rcx
  unsigned int v568; // edx
  struct DXGALLOCATION *v569; // rbx
  unsigned int v570; // ecx
  __int64 v571; // rax
  __int64 v572; // rsi
  unsigned int v573; // eax
  unsigned int v574; // ecx
  __int64 v575; // rcx
  const RECT *v576; // rcx
  int CurrentOrientation; // eax
  const struct tagRECT *ContentRect; // r9
  _DWORD *v579; // r8
  __int64 v580; // rdx
  __int64 v581; // r8
  const RECT *v582; // rsi
  UINT v583; // r13d
  HWND v584; // r9
  UINT v585; // edi
  char *v586; // rbx
  unsigned int v587; // r11d
  __int64 v588; // r9
  __int64 v589; // rcx
  const RECT *v590; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v591; // rcx
  struct DXGCONTEXT **v592; // r9
  int v593; // eax
  UINT i; // edx
  __int64 v595; // rcx
  _QWORD *v596; // rax
  PVOID *Object; // [rsp+20h] [rbp-100h]
  PVOID *Objecta; // [rsp+20h] [rbp-100h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F8h]
  int v600; // [rsp+40h] [rbp-E0h]
  int v601; // [rsp+48h] [rbp-D8h]
  int v602; // [rsp+A0h] [rbp-80h]
  signed int v603; // [rsp+A0h] [rbp-80h]
  unsigned int v604; // [rsp+A0h] [rbp-80h]
  signed int v605; // [rsp+A4h] [rbp-7Ch]
  UINT v606; // [rsp+A4h] [rbp-7Ch]
  unsigned int v607; // [rsp+A4h] [rbp-7Ch]
  unsigned int v608; // [rsp+A4h] [rbp-7Ch]
  unsigned int v609; // [rsp+A4h] [rbp-7Ch]
  unsigned int v610; // [rsp+A4h] [rbp-7Ch]
  struct DXGALLOCATION *v612; // [rsp+B0h] [rbp-70h] BYREF
  enum _D3DDDIFORMAT v613; // [rsp+B8h] [rbp-68h]
  DXGADAPTERSTOPRESETLOCKSHARED *v614; // [rsp+C0h] [rbp-60h]
  unsigned int v615[2]; // [rsp+C8h] [rbp-58h]
  unsigned int hSource; // [rsp+D0h] [rbp-50h]
  CWin32kLocks *v617; // [rsp+D8h] [rbp-48h]
  unsigned int v618; // [rsp+E0h] [rbp-40h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v619; // [rsp+E8h] [rbp-38h]
  __int64 v620; // [rsp+F0h] [rbp-30h]
  struct _EX_RUNDOWN_REF *v621; // [rsp+F8h] [rbp-28h] BYREF
  char *v622; // [rsp+100h] [rbp-20h]
  D3DKMT_HANDLE v623; // [rsp+108h] [rbp-18h]
  HWND CurrentIrql; // [rsp+110h] [rbp-10h]
  COREACCESS *v625; // [rsp+118h] [rbp-8h]
  HDEV v626; // [rsp+120h] [rbp+0h]
  char v627[8]; // [rsp+128h] [rbp+8h] BYREF
  __int64 v628; // [rsp+130h] [rbp+10h]
  char v629; // [rsp+138h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v630; // [rsp+140h] [rbp+20h] BYREF
  struct DXGCONTEXT **v631; // [rsp+148h] [rbp+28h]
  struct _EX_RUNDOWN_REF *v632; // [rsp+150h] [rbp+30h] BYREF
  PERESOURCE *v633; // [rsp+158h] [rbp+38h] BYREF
  char v634; // [rsp+160h] [rbp+40h]
  union _LARGE_INTEGER Timeout; // [rsp+168h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v636; // [rsp+170h] [rbp+50h] BYREF
  struct _EX_RUNDOWN_REF *v637; // [rsp+178h] [rbp+58h] BYREF
  struct _EX_RUNDOWN_REF *v638; // [rsp+180h] [rbp+60h] BYREF
  __int64 v639; // [rsp+188h] [rbp+68h] BYREF
  __int64 v640; // [rsp+190h] [rbp+70h]
  __int64 v641; // [rsp+198h] [rbp+78h]
  __int64 v642; // [rsp+1A0h] [rbp+80h]
  __int64 v643; // [rsp+1A8h] [rbp+88h]
  __int64 v644; // [rsp+1B0h] [rbp+90h]
  struct _DXGKARG_DESCRIBEALLOCATION v645; // [rsp+1B8h] [rbp+98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v646; // [rsp+1E8h] [rbp+C8h] BYREF
  struct _D3DKMT_UNLOCK v647; // [rsp+218h] [rbp+F8h] BYREF
  __int64 v648; // [rsp+228h] [rbp+108h] BYREF
  PVOID v649; // [rsp+230h] [rbp+110h] BYREF
  struct _D3DKMT_LOCK v650; // [rsp+238h] [rbp+118h] BYREF
  _BYTE v651[24]; // [rsp+268h] [rbp+148h] BYREF
  _BYTE v652[24]; // [rsp+280h] [rbp+160h] BYREF
  __int128 v653; // [rsp+298h] [rbp+178h]
  _QWORD v654[68]; // [rsp+2D0h] [rbp+1B0h] BYREF
  struct _DXGKARG_PRESENT v655; // [rsp+4F0h] [rbp+3D0h] BYREF
  struct tagRECT v656; // [rsp+5A0h] [rbp+480h] BYREF
  struct tagRECT v657; // [rsp+5B0h] [rbp+490h] BYREF
  struct tagRECT v658; // [rsp+5C0h] [rbp+4A0h] BYREF
  __int128 v659; // [rsp+5D0h] [rbp+4B0h] BYREF
  struct tagRECT Source1; // [rsp+5E0h] [rbp+4C0h] BYREF
  _D3DKMT_OUTPUTDUPLPRESENT v661; // [rsp+5F0h] [rbp+4D0h] BYREF
  _BYTE v663[64]; // [rsp+730h] [rbp+610h] BYREF
  _BYTE v664[64]; // [rsp+770h] [rbp+650h] BYREF
  _BYTE v665[64]; // [rsp+7B0h] [rbp+690h] BYREF
  _BYTE v666[64]; // [rsp+7F0h] [rbp+6D0h] BYREF
  _BYTE v667[64]; // [rsp+830h] [rbp+710h] BYREF
  _BYTE v668[64]; // [rsp+870h] [rbp+750h] BYREF
  _BYTE v669[64]; // [rsp+8B0h] [rbp+790h] BYREF
  _BYTE v670[64]; // [rsp+8F0h] [rbp+7D0h] BYREF
  _BYTE v671[64]; // [rsp+930h] [rbp+810h] BYREF
  _BYTE v672[64]; // [rsp+970h] [rbp+850h] BYREF
  _BYTE v673[64]; // [rsp+9B0h] [rbp+890h] BYREF
  _BYTE v674[64]; // [rsp+9F0h] [rbp+8D0h] BYREF

  v617 = a5;
  v631 = a6;
  v9 = *((_QWORD *)this + 2);
  v614 = a4;
  v619 = a7;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 2400LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 2401LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Value = a2->Flags.Value;
  if ( (Value & 0x4000) != 0
    || (Value &= 0x12000u,
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
        v620 = *(_QWORD *)(v10 + 72),
        (_DWORD)Value == 73728) )
  {
    v14 = WdLogNewEntry5_WdWarning(v10, Value, a3, a4);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  memset(&v655, 0, sizeof(v655));
  v18 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v18;
  v20 = (a2->Flags.Value & 0x10000) == 0;
  v618 = hDestination;
  if ( v20 )
    *(_DWORD *)a7 = v18 | 1;
  v21 = *(_DWORD *)a7 | 0x100;
  *(_DWORD *)a7 = v21;
  *(_DWORD *)a7 = v21 ^ (v21 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  v22 = *((_QWORD *)this + 2);
  v23 = 0;
  v24 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( *(_QWORD *)(v22 + 2856) != v24 )
    *((_DWORD *)a7 + 29) = 0;
  v25 = a2->hDestination;
  v26 = 0LL;
  v612 = 0LL;
  v27 = 0LL;
  v615[0] = 0;
  v602 = 0;
  v613 = D3DDDIFMT_UNKNOWN;
  v621 = 0LL;
  v632 = 0LL;
  v623 = 0;
  if ( v25 )
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v28 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = *(_DWORD *)(v28 + 200);
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v29, &EventBlockThread, v30, v31);
      }
      ExAcquirePushLockSharedEx(v28 + 184, 0LL);
    }
    v32 = (v25 >> 6) & 0xFFFFFF;
    if ( v32 < *(_DWORD *)(v28 + 224)
      && (v33 = *(_QWORD *)(v28 + 208),
          v34 = *(_DWORD *)(v33 + 16LL * v32 + 8),
          ((v25 >> 26) & 0x30) == (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0x30))
      && (v34 & 0x1000) == 0
      && (v34 & 0xF) != 0
      && (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0xF) == 5 )
    {
      v35 = *(struct _EX_RUNDOWN_REF **)(v33 + 16LL * v32);
    }
    else
    {
      v35 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v637, v35);
    ExReleasePushLockSharedEx(v28 + 184, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v621, &v637);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v637);
    v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v621;
    if ( !v621 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v16, v17);
      v38[3] = -1073741811LL;
      v38[4] = this;
      v38[5] = a2->hDestination;
      WdLogEvent5_WdWarning(v38);
      LODWORD(v27) = -1073741811;
      goto LABEL_874;
    }
    v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v621[1].Count + 16) + 16LL) != *(_QWORD *)(v24 + 16) )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v39[3] = *((_QWORD *)this + 2);
      v39[4] = v27;
      v39[5] = -1073741811LL;
      WdLogEvent5_WdError(v39);
      LODWORD(v27) = -1073741811;
      goto LABEL_874;
    }
  }
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v40 = a2->hSource;
    v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v41 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v44 = *(_DWORD *)(v41 + 200);
        if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v42, &EventBlockThread, v43, v44);
      }
      ExAcquirePushLockSharedEx(v41 + 184, 0LL);
    }
    v45 = (v40 >> 6) & 0xFFFFFF;
    if ( v45 < *(_DWORD *)(v41 + 224)
      && (v46 = *(_QWORD *)(v41 + 208),
          v47 = *(_DWORD *)(v46 + 16LL * v45 + 8),
          ((v40 >> 26) & 0x30) == (*(_BYTE *)(v46 + 16LL * v45 + 8) & 0x30))
      && (v47 & 0x1000) == 0
      && (v47 & 0xF) != 0
      && (*(_BYTE *)(v46 + 16LL * v45 + 8) & 0xF) == 5 )
    {
      v48 = *(struct _EX_RUNDOWN_REF **)(v46 + 16LL * v45);
    }
    else
    {
      v48 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v636, v48);
    ExReleasePushLockSharedEx(v41 + 184, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v612, &v636);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v636);
    v26 = (struct _EX_RUNDOWN_REF *)v612;
    if ( !v612 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v16, v17);
      v51[3] = -1073741811LL;
      v51[4] = this;
      v51[5] = a2->hSource;
      WdLogEvent5_WdWarning(v51);
      LODWORD(v27) = -1073741811;
      goto LABEL_874;
    }
    v639 = 0LL;
    v640 = 0LL;
    v641 = 0LL;
    v642 = 0LL;
    v643 = 0LL;
    v644 = 0LL;
    v622 = (char *)v612 + 48;
    v639 = *(_QWORD *)(*((_QWORD *)v612 + 6) + 16LL);
    if ( (a2->Flags.Value & 0x10000000) != 0 )
    {
      v640 = *(__int64 *)((char *)&a2[1].hWindow + 4);
      v615[0] = v640;
      v24 = a2[1].hSource;
      v613 = (int)v24;
      LODWORD(v641) = v24;
      v602 = HIDWORD(v640);
      goto LABEL_100;
    }
    v52 = *((_QWORD *)v612 + 1);
    *(_QWORD *)v615 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v53 = *(_QWORD *)(v52 + 16);
    if ( *(_QWORD *)(v53 + 16) != *(_QWORD *)(*(_QWORD *)v615 + 16LL) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v53);
      v54[3] = *((_QWORD *)this + 2);
      v54[4] = v26;
      v54[5] = -1073741811LL;
      WdLogEvent5_WdError(v54);
      LODWORD(v27) = -1073741811;
      goto LABEL_874;
    }
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v53, &EventProfilerEnter, v16, 5003);
    CurrentProcess = PsGetCurrentProcess(v53);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v56);
    v59 = ProcessDxgProcess + 88;
    if ( !ProcessDxgProcess )
      v59 = 0LL;
    v613 = D3DDDIFMT_UNKNOWN;
    if ( v59 )
    {
      if ( *(struct _KTHREAD **)(v59 + 8) == KeGetCurrentThread() )
      {
        v60 = WdLogNewEntry5_WdAssertion(v57);
        *(_QWORD *)(v60 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v60);
      }
      v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v621;
      v26 = (struct _EX_RUNDOWN_REF *)v612;
    }
    if ( ProcessDxgProcess )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v59, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v63 = *(_DWORD *)(v59 + 16);
          if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v61, &EventBlockThread, v62, v63);
        }
        ExAcquirePushLockExclusiveEx(v59, 0LL);
      }
      v26 = (struct _EX_RUNDOWN_REF *)v612;
      v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v621;
      *(_QWORD *)(v59 + 8) = KeGetCurrentThread();
      v613 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(*(_QWORD *)v615 + 16LL), 1);
    CurrentIrql = (HWND)KeGetCurrentIrql();
    v65 = 0LL;
    if ( (unsigned __int8)CurrentIrql >= 2u )
      goto LABEL_81;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v67 = WdLogNewEntry5_WdAssertion(v64);
      *(_QWORD *)(v67 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v67);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread && *(_QWORD *)ThreadWin32Thread )
      {
        v65 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        v26 = (struct _EX_RUNDOWN_REF *)v612;
        v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v621;
        if ( v65 )
        {
          v605 = *(_DWORD *)(v65 + 136);
          goto LABEL_82;
        }
LABEL_81:
        v605 = 0;
LABEL_82:
        v603 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)v615 + 16LL) + 344LL))(
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v615 + 16LL) + 240LL),
                 &v639);
        v73 = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql != (_BYTE)v73 )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v73, v70, v71);
          v75 = *(_QWORD *)v615;
          v74[3] = 275LL;
          v74[4] = 16LL;
          v74[5] = v75;
          v74[6] = (unsigned __int8)CurrentIrql;
          LOBYTE(v75) = KeGetCurrentIrql();
          v74[7] = (unsigned __int8)v75;
          WdLogEvent5_WdCriticalError(v74);
        }
        if ( v65 && *(_DWORD *)(v65 + 136) != v605 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v73, v70, v71);
          v76[3] = 275LL;
          v76[4] = 25LL;
          v76[5] = *(int *)(v65 + 136);
          v76[6] = v605;
          v76[7] = 0LL;
          WdLogEvent5_WdCriticalError(v76);
        }
        v77 = (_QWORD *)WdLogNewEntry5_WdTrace(v73, v70, v71, v72);
        v77[3] = v603;
        v77[4] = v639;
        v77[5] = (unsigned int)v640;
        v77[6] = HIDWORD(v640);
        v78 = (int)v641;
        v77[7] = (int)v641;
        if ( v603 )
        {
          v79 = WdLogNewEntry5_WdError(v78);
          *(_QWORD *)(v79 + 24) = v603;
          WdLogEvent5_WdError(v79);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(*(_QWORD *)v615 + 16LL));
        if ( v613 == 1 )
        {
          ExReleasePushLockSharedEx(v59, 0LL);
        }
        else
        {
          if ( v613 != 2 )
            goto LABEL_94;
          *(_QWORD *)(v59 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v59, 0LL);
        }
        KeLeaveCriticalRegion();
LABEL_94:
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v24, &EventProfilerExit, v16, 5003);
        if ( v603 < 0 )
        {
          v80 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v81 = v622;
          v80[3] = v603;
          v80[4] = this;
          v80[5] = *(_QWORD *)(*(_QWORD *)v81 + 16LL);
          v80[6] = v26;
          WdLogEvent5_WdError(v80);
          LODWORD(v27) = v603;
          goto LABEL_874;
        }
        v613 = (int)v641;
        v602 = HIDWORD(v640);
        v615[0] = v640;
        goto LABEL_100;
      }
      v65 = 0LL;
    }
    v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v621;
    v26 = (struct _EX_RUNDOWN_REF *)v612;
    goto LABEL_81;
  }
LABEL_100:
  v82 = a2->hDestination;
  if ( !v82 || (v83 = a2->Flags.Value, (v83 & 0x10000) != 0) )
  {
    v83 = a2->Flags.Value;
    if ( (v83 & 4) == 0 )
    {
      if ( (v83 & 3) == 0 )
      {
        if ( (v83 & 0x8000) == 0 )
        {
          v374 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v83, v16, v17);
          v374[3] = -1073741811LL;
          v374[4] = this;
          v374[5] = a2->pSrcSubRects;
          v374[6] = a2->SubRectCnt;
          v374[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v374);
          LODWORD(v27) = -1073741811;
          goto LABEL_402;
        }
        if ( (v83 & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              goto LABEL_449;
          }
          else if ( Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
          {
LABEL_449:
            v322 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( v322 != -592 && *(struct _KTHREAD **)(v322 + 600) == KeGetCurrentThread() )
            {
              v323 = WdLogNewEntry5_WdAssertion(v24);
              *(_QWORD *)(v323 + 24) = 1142LL;
              WdLogEvent5_WdAssertion(v323);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v322 + 592, 0LL) )
            {
              DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v322 + 592), v324, v326);
              ExAcquirePushLockSharedEx(v322 + 592, 0LL);
            }
            v327 = PsGetCurrentProcess(v325);
            ProcessSessionId = PsGetProcessSessionId(v327);
            if ( ProcessSessionId >= *(_DWORD *)(v322 + 616)
              || (v329 = 1, !*(_QWORD *)(*(_QWORD *)(v322 + 624) + 8LL * ProcessSessionId)) )
            {
              v329 = 0;
            }
            ExReleasePushLockSharedEx(v322 + 592, 0LL);
            KeLeaveCriticalRegion();
            v333 = v614;
            if ( *((_BYTE *)v614 + 16) )
            {
              *((_BYTE *)v614 + 16) = 0;
              ExReleasePushLockSharedEx(*((_QWORD *)v333 + 1) + 120LL, 0LL);
              KeLeaveCriticalRegion();
              v331 = *((_QWORD *)v333 + 1);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v331 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v331 + 16), (struct DXGADAPTER *)v331);
            }
            if ( *((_BYTE *)a3 + 80) )
              COREACCESS::Release((COREACCESS *)(a3 + 5));
            v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)(a3 + 1);
            if ( !*((_BYTE *)a3 + 32) )
            {
              v334 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v331, v330, v332);
              v334[3] = 275LL;
              v334[4] = 4LL;
              v334[5] = v27;
              v334[6] = 0LL;
              v334[7] = 0LL;
              WdLogEvent5_WdCriticalError(v334);
            }
            *((_BYTE *)a3 + 32) = 0;
            v335 = a3[3];
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v335 + 20) )
              DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v335);
            PresentLimitSemaphore = a2->PresentLimitSemaphore;
            if ( PresentLimitSemaphore )
            {
              v337 = ObReferenceObjectByHandle(
                       PresentLimitSemaphore,
                       2u,
                       (POBJECT_TYPE)ExSemaphoreObjectType,
                       1,
                       &v649,
                       0LL);
              v339 = v649;
              v340 = v337;
              if ( v337 < 0 )
                goto LABEL_476;
              if ( (a2->Flags.Value & 0x10) != 0 )
              {
                Timeout.QuadPart = 0LL;
                if ( KeWaitForSingleObject(v649, Executive, 0, 1u, &Timeout) == 258 )
                {
                  ObfDereferenceObject(v339);
                  LODWORD(v27) = -1071775486;
                  goto LABEL_874;
                }
              }
              else
              {
                Timeout.QuadPart = -20000000LL;
                KeWaitForSingleObject(v649, Executive, 0, 1u, &Timeout);
              }
              ObfDereferenceObject(v339);
            }
            v341 = (*(__int64 (__fastcall **)(_QWORD, D3DKMT_PRESENTHISTORYTOKEN *))(v620 + 320))(
                     v329,
                     &a2->PresentHistoryToken);
            v340 = v341;
            if ( v341 >= 0 )
            {
              v345 = v614;
              if ( !*((_BYTE *)v614 + 16) )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v614 + 1) + 24LL));
                *(_QWORD *)v345 = -1LL;
                v346 = *((_QWORD *)v345 + 1);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v346 + 120, 0LL);
                *((_BYTE *)v345 + 16) = 1;
              }
              if ( *((_BYTE *)a3 + 32) )
              {
                v347 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v338, v342, v343);
                v347[3] = 275LL;
                v347[4] = 4LL;
                v347[5] = v27;
                v347[6] = 0LL;
                v347[7] = 0LL;
                WdLogEvent5_WdCriticalError(v347);
              }
              v348 = a3[3];
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v348 + 20) )
              {
                if ( !KeReadStateEvent((PRKEVENT)v348 + 2) )
                  KeWaitForSingleObject((char *)a3[3] + 48, Executive, 0, 0, 0LL);
                DXGADAPTER::AcquireCoreResourceShared(a3[3]);
              }
              v349 = (struct COREDEVICEACCESS *)a3;
              *((_BYTE *)a3 + 32) = 1;
              if ( *((_DWORD *)a3[9] + 94) == 1 )
              {
                if ( !*((_BYTE *)a3 + 80)
                  || (COREACCESS::AcquireShared((COREACCESS *)(a3 + 5)), *((_DWORD *)a3[7] + 44) == 1) )
                {
                  if ( a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_FLIP )
                  {
                    v350 = PsGetCurrentProcess(v348);
                    v352 = PsGetProcessDxgProcess(v350, v351);
                    v353 = DXGGLOBAL::m_pGlobal;
                    v354 = v352;
                    if ( !DXGGLOBAL::m_pGlobal )
                    {
                      v355 = WdLogNewEntry5_WdAssertion(0LL);
                      *(_QWORD *)(v355 + 24) = 982LL;
                      WdLogEvent5_WdAssertion(v355);
                      v353 = DXGGLOBAL::m_pGlobal;
                    }
                    v633 = (PERESOURCE *)v353;
                    v634 = 0;
                    if ( !v353 )
                    {
                      v356 = WdLogNewEntry5_WdAssertion(0LL);
                      *(_QWORD *)(v356 + 24) = 1264LL;
                      WdLogEvent5_WdAssertion(v356);
                      v353 = (DXGGLOBAL *)v633;
                    }
                    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v353 + 39)) )
                    {
                      v360 = WdLogNewEntry5_WdAssertion(v358);
                      *(_QWORD *)(v360 + 24) = 1269LL;
                      WdLogEvent5_WdAssertion(v360);
                    }
                    if ( v634 )
                    {
                      v361 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v358, v357, v359);
                      v361[3] = 275LL;
                      v361[4] = 4LL;
                      v361[5] = &v633;
                      v361[6] = 0LL;
                      v361[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v361);
                    }
                    v362 = v633;
                    KeEnterCriticalRegion();
                    ExAcquireResourceSharedLite(v362[39], 1u);
                    v634 = 1;
                    Reserved = a2->PresentHistoryToken.Token.Flip.Reserved;
                    KeEnterCriticalRegion();
                    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v354 + 184, 0LL) )
                    {
                      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v354 + 184), v364, v365);
                      ExAcquirePushLockSharedEx(v354 + 184, 0LL);
                    }
                    v366 = (Reserved >> 6) & 0xFFFFFF;
                    if ( v366 < *(_DWORD *)(v354 + 224)
                      && (v367 = *(_QWORD *)(v354 + 208),
                          v368 = *(_DWORD *)(v367 + 16LL * v366 + 8),
                          ((Reserved >> 26) & 0x30) == (*(_BYTE *)(v367 + 16LL * v366 + 8) & 0x30))
                      && (v368 & 0x1000) == 0
                      && (v368 & 0xF) != 0
                      && (*(_BYTE *)(v367 + 16LL * v366 + 8) & 0xF) == 8 )
                    {
                      v369 = *(_QWORD *)(v367 + 16LL * v366);
                    }
                    else
                    {
                      v369 = 0LL;
                    }
                    ExReleasePushLockSharedEx(v354 + 184, 0LL);
                    KeLeaveCriticalRegion();
                    if ( v369 )
                    {
                      FenceValue = a2->PresentHistoryToken.Token.Flip.FenceValue;
                      if ( *(_DWORD *)(v369 + 128) != 3 )
                      {
                        v372 = WdLogNewEntry5_WdAssertion(v370);
                        *(_QWORD *)(v372 + 24) = 262LL;
                        WdLogEvent5_WdAssertion(v372);
                      }
                      if ( *(_QWORD *)(v369 + 80) > FenceValue )
                        FenceValue = *(_QWORD *)(v369 + 80);
                      *(_QWORD *)(v369 + 80) = FenceValue;
                      a2->PresentHistoryToken.Token.Flip.Reserved = *(_DWORD *)(v369 + 72);
                    }
                    if ( v634 )
                    {
                      v634 = 0;
                      ExReleaseResourceLite(v633[39]);
                      KeLeaveCriticalRegion();
                    }
                    v349 = (struct COREDEVICEACCESS *)a3;
                  }
                  LODWORD(v27) = DXGCONTEXT::SubmitPresentHistoryToken(
                                   this,
                                   &a2->PresentHistoryToken,
                                   v349,
                                   v614,
                                   v617,
                                   1,
                                   0LL,
                                   (struct DXGK_PRESENT_PARAMS *)a2,
                                   v619);
LABEL_391:
                  v231 = (_QWORD *)((char *)this + 288);
LABEL_392:
                  if ( (int)v27 < 0 )
                    goto LABEL_403;
                  v290 = v632;
                  if ( v632 )
                  {
                    if ( (a2->Flags.Value & 0x10000000) == 0 )
                    {
                      v291 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
                      if ( v291 )
                      {
                        if ( !(*(unsigned int (**)(void))(v620 + 216))() )
                        {
                          memset(&v661, 0, sizeof(v661));
                          v661.hContext = a2->hDevice;
                          v661.hSource = v623;
                          v661.VidPnSourceId = (*(_DWORD *)(v290[6].Count + 4) >> 6) & 0xF;
                          v292 = 2LL;
                          BroadcastContextCount = a2->BroadcastContextCount;
                          BroadcastContext = a2->BroadcastContext;
                          v661.BroadcastContextCount = BroadcastContextCount;
                          v295 = v661.BroadcastContext;
                          do
                          {
                            v295 += 32;
                            v296 = *(_OWORD *)BroadcastContext;
                            BroadcastContext += 32;
                            *((_OWORD *)v295 - 8) = v296;
                            *((_OWORD *)v295 - 7) = *((_OWORD *)BroadcastContext - 7);
                            *((_OWORD *)v295 - 6) = *((_OWORD *)BroadcastContext - 6);
                            *((_OWORD *)v295 - 5) = *((_OWORD *)BroadcastContext - 5);
                            *((_OWORD *)v295 - 4) = *((_OWORD *)BroadcastContext - 4);
                            *((_OWORD *)v295 - 3) = *((_OWORD *)BroadcastContext - 3);
                            *((_OWORD *)v295 - 2) = *((_OWORD *)BroadcastContext - 2);
                            *((_OWORD *)v295 - 1) = *((_OWORD *)BroadcastContext - 1);
                            --v292;
                          }
                          while ( v292 );
                          v661.PresentRegions.DirtyRectCount = 0;
                          v661.PresentRegions.MoveRectCount = 0;
                          v661.Flags.Value = 4;
                          v297 = OUTPUTDUPL_MGR::ProcessPresent(
                                   *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v291 + 2128) + 104LL),
                                   this,
                                   &v661,
                                   (*(_DWORD *)(v290[6].Count + 4) >> 6) & 0xF,
                                   v631,
                                   (struct COREDEVICEACCESS *)a3);
                          if ( v297 == 259 )
                            v297 = 0;
                          LODWORD(v27) = v297;
                        }
                      }
                    }
                  }
                  goto LABEL_402;
                }
                COREACCESS::Release((COREACCESS *)(a3 + 5));
              }
              COREACCESS::Release(v27);
              LODWORD(v27) = -1073741130;
              goto LABEL_874;
            }
            if ( v341 != -1071775733 && v341 != -1071775730 )
            {
LABEL_476:
              v344 = WdLogNewEntry5_WdEvent(v338);
              *(_QWORD *)(v344 + 24) = v340;
              *(_QWORD *)(v344 + 32) = this;
              WdLogEvent5_WdEvent(v344);
              LODWORD(v27) = v340;
              goto LABEL_874;
            }
LABEL_819:
            LODWORD(v27) = v340;
            goto LABEL_874;
          }
        }
        v373 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v83, v16, v17);
        v373[3] = this;
        v373[4] = a2->Flags.Value;
        v373[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v373);
        LODWORD(v27) = -1073741811;
        goto LABEL_874;
      }
      v375 = ((unsigned int)v83 >> 8) & 1;
      if ( (((unsigned int)v83 >> 8) & 1) != 0 )
      {
        v16 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v16 + 2856) )
        {
          v376 = (_QWORD *)WdLogNewEntry5_WdWarning(v375, v83, v16, v17);
          v376[3] = *((_QWORD *)this + 2);
          v376[4] = -1073741811LL;
LABEL_871:
          WdLogEvent5_WdWarning(v376);
          LODWORD(v220) = -1073741811;
          goto LABEL_872;
        }
        if ( *(_DWORD *)(v16 + 2864) <= a2->VidPnSourceId )
        {
          v377 = WdLogNewEntry5_WdWarning(v375, v83, v16, v17);
          *(_QWORD *)(v377 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v377 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 2864LL);
          WdLogEvent5_WdWarning(v377);
          LODWORD(v220) = -1073741811;
          goto LABEL_872;
        }
      }
      if ( (v83 & 2) != 0 )
      {
        if ( a2->pSrcSubRects && a2->SubRectCnt && (v83 & 0x86BD) == 0 )
        {
          hSource = 0;
          goto LABEL_541;
        }
LABEL_870:
        v376 = (_QWORD *)WdLogNewEntry5_WdWarning(v375, v83, v16, v17);
        v376[3] = this;
        v376[4] = a2->pSrcSubRects;
        v376[5] = a2->SubRectCnt;
        v376[6] = a2->Flags.Value;
        v376[7] = -1073741811LL;
        goto LABEL_871;
      }
      if ( !a2->pSrcSubRects || !a2->SubRectCnt || !v615[0] || !v602 || (v83 & 0x802E) != 0 )
        goto LABEL_870;
      v378 = ((unsigned int)v83 >> 9) & 1;
      if ( v378 || (v83 & 0x400) != 0 )
      {
        v379 = ((unsigned int)v83 >> 10) & 1;
        if ( v378 == (_DWORD)v379 )
        {
          v380 = (_QWORD *)WdLogNewEntry5_WdWarning(v375, v379, v16, v17);
          v381 = -1073741811;
          v380[3] = -1073741811LL;
          v380[4] = this;
          v380[5] = a2->pSrcSubRects;
          v380[6] = a2->SubRectCnt;
          v380[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v380);
LABEL_873:
          LODWORD(v27) = v381;
          goto LABEL_874;
        }
        if ( !(_DWORD)v375
          || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                *((const struct DXGDEVICE **)this + 2),
                a2->VidPnSourceId) )
        {
          v596 = (_QWORD *)WdLogNewEntry5_WdWarning(v375, v379, v16, v17);
          v381 = -1073741811;
          v596[3] = this;
          v596[4] = a2->pSrcSubRects;
          v596[5] = a2->SubRectCnt;
          v596[6] = a2->Flags.Value;
          v596[7] = -1073741811LL;
          WdLogEvent5_WdWarning(v596);
          goto LABEL_873;
        }
      }
LABEL_541:
      v655.Flags.Value ^= (a2->Flags.Value ^ v655.Flags.Value) & 2;
      v655.Flags.Value ^= (a2->Flags.Value ^ v655.Flags.Value) & 1;
      v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
      v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
      v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
      v655.Color = a2->Color;
      LODWORD(v27) = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 17), a2, v615[0], v602);
      if ( (int)v27 < 0 )
        goto LABEL_402;
      if ( (*(_DWORD *)(*((_QWORD *)this + 17) + 4LL) & 4) != 0 )
        goto LABEL_391;
      v382 = *((_QWORD *)this + 2);
      v383 = *(_QWORD *)(v382 + 2856);
      if ( v383 && *(_QWORD *)(v383 + 2136) )
      {
        if ( v383 != *(_QWORD *)(*(_QWORD *)(v382 + 16) + 16LL) )
        {
          v384 = WdLogNewEntry5_WdAssertion(v383);
          *(_QWORD *)(v384 + 24) = 3603LL;
          WdLogEvent5_WdAssertion(v384);
        }
        v385 = *((_QWORD *)this + 2);
        v386 = 0;
        if ( *(_DWORD *)(v385 + 2864) )
        {
          while ( 1 )
          {
            v387 = (*(_BYTE *)&a2->Flags.0 & 0x10) == 0;
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v385 + 80));
            LODWORD(v389) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 184LL))(
                              *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
                              v386,
                              0LL);
            if ( (_DWORD)v389 != -1071775486 )
              break;
            if ( !v387 )
              goto LABEL_555;
            if ( *((_BYTE *)a3 + 80) )
              COREACCESS::Release((COREACCESS *)(a3 + 5));
            COREACCESS::Release((COREACCESS *)(a3 + 1));
            LOBYTE(v390) = 1;
            v389 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 376LL)
                                                                              + 8LL)
                                                                  + 184LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
                     v386,
                     v390);
            LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
            if ( (int)v27 >= 0 )
              break;
            v391 = WdLogNewEntry5_WdEvent(v388);
            *(_QWORD *)(v391 + 24) = v389;
            WdLogEvent5_WdEvent(v391);
LABEL_560:
            if ( (int)v27 < 0 )
            {
              v404 = WdLogNewEntry5_WdEvent(v388);
              *(_QWORD *)(v404 + 24) = (int)v27;
              *(_QWORD *)(v404 + 32) = this;
              WdLogEvent5_WdEvent(v404);
              goto LABEL_874;
            }
            v385 = *((_QWORD *)this + 2);
            if ( ++v386 >= *(_DWORD *)(v385 + 2864) )
              goto LABEL_562;
          }
          if ( (int)v389 < 0 )
          {
LABEL_555:
            v392 = WdLogNewEntry5_WdEvent(v388);
            *(_QWORD *)(v392 + 24) = (int)v389;
            *(_QWORD *)(v392 + 32) = this;
            WdLogEvent5_WdEvent(v392);
            if ( (_DWORD)v389 != -1071775486 && (_DWORD)v389 != -1073741130 && (_DWORD)v389 != -1071775232 )
            {
              v393 = WdLogNewEntry5_WdAssertion(v388);
              *(_QWORD *)(v393 + 24) = 2065LL;
              WdLogEvent5_WdAssertion(v393);
            }
          }
          LODWORD(v27) = v389;
          goto LABEL_560;
        }
      }
      else
      {
        v405 = DXGCONTEXT::WaitForQueuedPresentLimit(
                 this,
                 0,
                 (*(_BYTE *)&a2->Flags.0 & 0x10) == 0,
                 (struct COREDEVICEACCESS *)a3);
        v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v405;
        if ( v405 < 0 )
        {
          v407 = WdLogNewEntry5_WdEvent(v406);
          *(_QWORD *)(v407 + 24) = v27;
          *(_QWORD *)(v407 + 32) = this;
          WdLogEvent5_WdEvent(v407);
          goto LABEL_874;
        }
      }
LABEL_562:
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 80LL));
      v395 = 3;
      v608 = *((_DWORD *)this + 24);
      if ( *((_DWORD *)this + 16) > 3u )
        v395 = *((_DWORD *)this + 16);
      if ( !*((_QWORD *)this + 26) )
      {
        v396 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 432LL))(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                 *((unsigned int *)this + 82),
                 *(_QWORD *)(*((_QWORD *)this + 2) + 560LL),
                 this,
                 1,
                 *((_DWORD *)this + 44),
                 v395,
                 *((_DWORD *)this + 24),
                 *((_DWORD *)this + 45),
                 *((_DWORD *)this + 46));
        *((_QWORD *)this + 26) = v396;
        if ( !v396 )
        {
          v400 = WdLogNewEntry5_WdWarning(v397, 0LL, v398, v399);
          LODWORD(v27) = -1073741801;
          *(_QWORD *)(v400 + 24) = this;
          *(_QWORD *)(v400 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v400);
LABEL_574:
          v408 = WdLogNewEntry5_WdWarning(v401, v394, v402, v403);
          *(_QWORD *)(v408 + 24) = this;
          WdLogEvent5_WdWarning(v408);
          v410 = (_QWORD *)((char *)this + 288);
          goto LABEL_582;
        }
        LODWORD(v27) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 400LL)
                                                                      + 8LL)
                                                          + 440LL))(v396);
        if ( (int)v27 < 0 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                     + 8LL)
                                         + 448LL))(*((_QWORD *)this + 26));
          *((_QWORD *)this + 26) = 0LL;
        }
        else
        {
          *((_DWORD *)this + 47) = v395;
          *((_DWORD *)this + 48) = v608;
        }
        if ( (int)v27 < 0 )
          goto LABEL_574;
      }
      v410 = (_QWORD *)((char *)this + 288);
      v411 = *((_QWORD *)this + 26);
      LOBYTE(v394) = 1;
      v412 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 400LL)
                                                                                     + 8LL)
                                                                         + 488LL))(
               v411,
               v394,
               0LL,
               (char *)this + 288);
      v413 = v412;
      if ( v412 == -1071775486 )
      {
        if ( a3 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
          LODWORD(v413) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                                 + 8LL)
                                                                                     + 488LL))(
                            v411,
                            0LL,
                            0LL,
                            (char *)this + 288);
          v414 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
          v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v414;
          if ( v414 < 0 )
          {
            v415 = WdLogNewEntry5_WdEvent(v409);
            *(_QWORD *)(v415 + 24) = this;
            *(_QWORD *)(v415 + 32) = v27;
            WdLogEvent5_WdEvent(v415);
            goto LABEL_582;
          }
        }
      }
      else if ( v412 < 0 )
      {
        v416 = WdLogNewEntry5_WdEvent(v409);
        *(_QWORD *)(v416 + 24) = this;
        *(_QWORD *)(v416 + 32) = v413;
        WdLogEvent5_WdEvent(v416);
      }
      LODWORD(v27) = v413;
LABEL_582:
      if ( (int)v27 < 0 )
        goto LABEL_402;
      if ( !*v410 )
      {
        v417 = WdLogNewEntry5_WdAssertion(v409);
        *(_QWORD *)(v417 + 24) = 3641LL;
        WdLogEvent5_WdAssertion(v417);
      }
      v418 = *((_QWORD *)this + 2);
      v629 = 0;
      v628 = *(_QWORD *)(v418 + 16);
      if ( !v628 )
      {
        v419 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v419 + 24) = 5320LL;
        WdLogEvent5_WdAssertion(v419);
      }
      v420 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v628 + 424) == v420 )
      {
        v421 = WdLogNewEntry5_WdAssertion(v420);
        *(_QWORD *)(v421 + 24) = 5325LL;
        WdLogEvent5_WdAssertion(v421);
      }
      v422 = 0;
      if ( (a2->Flags.Value & 0x10000) != 0 )
      {
        if ( a2->hDestination )
        {
          Count = v621[6].Count;
          v422 = (*(_DWORD *)(Count + 4) & 0x400) == 0;
          *(_DWORD *)(Count + 4) |= 0x400u;
        }
      }
      else
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v627);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v614);
        v423 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
        v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v423;
        if ( v423 < 0 )
        {
          v425 = WdLogNewEntry5_WdEvent(v424);
          *(_QWORD *)(v425 + 24) = v27;
          *(_QWORD *)(v425 + 32) = this;
          WdLogEvent5_WdEvent(v425);
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
          goto LABEL_874;
        }
      }
      v609 = (*(__int64 (**)(void))(v620 + 8))();
      CurrentThreadId = (char *)PsGetCurrentThreadId();
      v428 = *((_QWORD *)this + 2);
      v429 = CurrentThreadId;
      v622 = CurrentThreadId;
      v430 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v428 + 16) + 376LL) + 8LL) + 440LL))(*(_QWORD *)(*(_QWORD *)(v428 + 16) + 384LL));
      v432 = *((_QWORD *)this + 17);
      hWindow = (HWND)v609;
      if ( *(_DWORD *)(v432 + 8) == v609
        && *(char **)(v432 + 56) == v429
        && (hWindow = a2->hWindow, *(HWND *)(v432 + 48) == hWindow)
        && *(_DWORD *)(v432 + 64) == v430
        && !v422
        && (hWindow = (HWND)*(unsigned int *)(v432 + 4), (*(_DWORD *)(v432 + 4) & 8) == 0) )
      {
        if ( ((unsigned __int8)hWindow & 1) != 0 )
        {
          LODWORD(v27) = -1071775738;
        }
        else if ( (a2->Flags.Value & 0x10000) == 0 && ((unsigned __int8)hWindow & 0x10) == 0 )
        {
          DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v431, 0);
        }
      }
      else
      {
        if ( v629 )
        {
          v629 = 0;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v628 + 416));
        }
        v434 = v614;
        if ( *((_BYTE *)v614 + 16) )
        {
          *((_BYTE *)v614 + 16) = 0;
          ExReleasePushLockSharedEx(*((_QWORD *)v434 + 1) + 120LL, 0LL);
          KeLeaveCriticalRegion();
          hWindow = (HWND)*((_QWORD *)v434 + 1);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)hWindow + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)hWindow + 2), (struct DXGADAPTER *)hWindow);
        }
        if ( *((_BYTE *)a3 + 80) )
          COREACCESS::Release((COREACCESS *)(a3 + 5));
        v435 = (COREACCESS *)(a3 + 1);
        v625 = (COREACCESS *)(a3 + 1);
        if ( !*((_BYTE *)a3 + 32) )
        {
          v436 = (_QWORD *)WdLogNewEntry5_WdCriticalError(hWindow, v432, v431);
          v436[3] = 275LL;
          v436[4] = 4LL;
          v436[5] = v435;
          v436[6] = 0LL;
          v436[7] = 0LL;
          WdLogEvent5_WdCriticalError(v436);
        }
        *((_BYTE *)a3 + 32) = 0;
        v437 = a3[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v437 + 20) )
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v437);
        v438 = v617;
        Value_high = HIWORD(a2->Flags.Value);
        CurrentIrql = a2->hWindow;
        v440 = Value_high & 1;
        v441 = *((_QWORD *)v617 + 7);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v441 + 160)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v441 + 144)) )
        {
          v442 = WdLogNewEntry5_WdAssertion(v441);
          *(_QWORD *)(v442 + 24) = 692LL;
          WdLogEvent5_WdAssertion(v442);
        }
        if ( *(_QWORD *)v438 || *((_QWORD *)v438 + 1) || *((_QWORD *)v438 + 2) )
        {
          v443 = WdLogNewEntry5_WdAssertion(v441);
          *(_QWORD *)(v443 + 24) = 694LL;
          WdLogEvent5_WdAssertion(v443);
        }
        v444 = 0;
        v446 = (*(__int64 (__fastcall **)(HWND, _QWORD))(*((_QWORD *)v617 + 3) + 48LL))(CurrentIrql, 0LL);
        v447 = v617;
        *(_QWORD *)v617 = v446;
        if ( v446 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v447 + 3) + 296LL))(v446, 1LL);
          v448 = v617;
          v449 = (HWND)*((_QWORD *)v617 + 7);
          v450 = *(HDEV *)v617;
          *((_QWORD *)v617 + 4) = *((_QWORD *)v617 + 3);
          *((_QWORD *)v448 + 5) = 0LL;
          *((_DWORD *)v448 + 12) = v440;
          v451 = v448;
          CurrentIrql = v449;
          v626 = v450;
          if ( *((_DWORD *)v448 + 13) )
          {
            v452 = WdLogNewEntry5_WdAssertion(v449);
            *(_QWORD *)(v452 + 24) = 591LL;
            WdLogEvent5_WdAssertion(v452);
            v449 = CurrentIrql;
            v450 = v626;
          }
          if ( v450 && v449 )
          {
            *((_QWORD *)v451 + 5) = v449;
            (*(void (__fastcall **)(HDEV))(*((_QWORD *)v451 + 4) + 264LL))(v450);
            (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)v451 + 4) + 280LL))(
              *((_QWORD *)v451 + 5),
              *((_DWORD *)v451 + 12) == 0);
            *((_DWORD *)v451 + 13) = 1;
          }
          v453 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v451 + 3) + 16LL))(*(_QWORD *)v451);
          *((_QWORD *)v451 + 2) = v453;
          if ( !v453 )
          {
            v455 = WdLogNewEntry5_WdEvent(v454);
            *(_QWORD *)(v455 + 24) = *(_QWORD *)v451;
            WdLogEvent5_WdEvent(v455);
            CWin32kLocks::Unlock(v451);
            v444 = -1073741811;
          }
        }
        else
        {
          v444 = -1071775731;
          v456 = WdLogNewEntry5_WdEvent(v445);
          *(_QWORD *)(v456 + 24) = CurrentIrql;
          WdLogEvent5_WdEvent(v456);
        }
        LODWORD(v27) = v444;
        if ( (a2->Flags.Value & 0x10000) == 0
          || ((*(void (__fastcall **)(_QWORD, __int64 *))(v620 + 232))(*(_QWORD *)v617, &v648),
              *(_QWORD *)(*((_QWORD *)this + 17) + 432LL) = v648,
              (a2->Flags.Value & 0x10000) == 0) )
        {
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v627);
        }
        v457 = v614;
        if ( !*((_BYTE *)v614 + 16) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v614 + 1) + 24LL));
          *(_QWORD *)v457 = -1LL;
          v458 = *((_QWORD *)v457 + 1);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v458 + 120, 0LL);
          v435 = v625;
          *((_BYTE *)v614 + 16) = 1;
        }
        COREACCESS::AcquireShared(v435);
        v459 = (struct COREDEVICEACCESS *)a3;
        if ( *((_DWORD *)a3[9] + 94) != 1 )
        {
          COREACCESS::Release(v435);
          LODWORD(v27) = -1073741130;
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
          goto LABEL_874;
        }
        if ( *((_BYTE *)a3 + 80) )
        {
          COREACCESS::AcquireShared((COREACCESS *)(a3 + 5));
          if ( *((_DWORD *)a3[7] + 44) != 1 )
          {
            COREACCESS::Release((COREACCESS *)(a3 + 5));
            COREACCESS::Release(v625);
            LODWORD(v27) = -1073741130;
            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
            goto LABEL_874;
          }
        }
        if ( v444 >= 0 )
        {
          if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)this + 17) + 432LL) )
          {
            v460 = WdLogNewEntry5_WdEvent(v459);
            *(_QWORD *)(v460 + 24) = 0LL;
            *(_QWORD *)(v460 + 32) = this;
            WdLogEvent5_WdEvent(v460);
            v461 = *((_QWORD *)this + 36);
            if ( v461 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 496LL))(
                v461,
                0LL);
              *((_QWORD *)this + 36) = 0LL;
            }
            LODWORD(v27) = 0;
            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
            goto LABEL_874;
          }
          v462 = *(HDC *)v617;
          v463 = (const struct DXGDEVICE *)*((_QWORD *)this + 2);
          v464 = *(HDC *)v617;
          v626 = (HDEV)*((_QWORD *)v617 + 2);
          LODWORD(v27) = DXGPRESENT::CheckVisRgn(
                           *((DXGPRESENT **)this + 17),
                           a2,
                           v464,
                           v626,
                           v463,
                           v615[0],
                           v602,
                           v613,
                           1);
          if ( (_DWORD)v27 == 261 )
          {
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v627);
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
            if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
              LODWORD(v27) = -1071775738;
            if ( (a2->Flags.Value & 0x10000) == 0 )
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v627);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v614);
            v465 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
            v467 = v465;
            if ( v465 < 0 )
            {
              v468 = WdLogNewEntry5_WdEvent(v466);
              *(_QWORD *)(v468 + 24) = v467;
LABEL_818:
              WdLogEvent5_WdEvent(v468);
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
              LODWORD(v340) = v467;
              goto LABEL_819;
            }
            if ( (_DWORD)v27 != -1071775738 )
              LODWORD(v27) = DXGPRESENT::CheckVisRgn(
                               *((DXGPRESENT **)this + 17),
                               a2,
                               v462,
                               v626,
                               *((const struct DXGDEVICE **)this + 2),
                               v615[0],
                               v602,
                               v613,
                               0);
          }
          if ( (int)v27 < 0 )
          {
            v472 = *((_QWORD *)this + 17);
            if ( (*(_BYTE *)(v472 + 4) & 1) != 0 )
            {
              *(_QWORD *)(v472 + 56) = v622;
              *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v609;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 17) + 56LL) = v622;
            if ( (a2->Flags.Value & 0x10000) == 0 )
            {
              *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v609;
              DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2);
              v469 = 0;
              v470 = *(_DWORD *)(*((_QWORD *)this + 17) + 8LL);
              if ( v470 != (*(unsigned int (**)(void))(v620 + 8))() )
              {
                *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = v609;
                ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFF, 0);
                v469 = 1;
              }
              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v471, v469);
            }
          }
        }
      }
      v473 = *(_DWORD *)(*((_QWORD *)this + 17) + 4LL);
      if ( (v473 & 0x10) != 0 )
      {
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v627);
        if ( (int)v27 < 0 )
          goto LABEL_729;
        v476 = *((_QWORD *)this + 17);
        v477 = *(_DWORD *)(v476 + 4) >> 1;
        LOBYTE(v477) = (*(_DWORD *)(v476 + 4) & 2) != 0;
        if ( (*(_DWORD *)(v476 + 4) & 2) == 0 && a2->BroadcastContextCount )
        {
          v478 = WdLogNewEntry5_WdError(v477);
          *(_QWORD *)(v478 + 24) = 3907LL;
          WdLogEvent5_WdError(v478);
          LODWORD(v27) = -1071774910;
          goto LABEL_729;
        }
        if ( (*(_DWORD *)(v476 + 4) & 2) != 0 )
          goto LABEL_729;
        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
        {
          v479 = WdLogNewEntry5_WdAssertion(v477);
          *(_QWORD *)(v479 + 24) = 3913LL;
          WdLogEvent5_WdAssertion(v479);
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v477, &EventPerformanceWarning, v475, 0);
        if ( (a2->Flags.Value & 0x100) != 0 )
        {
          v480 = (COREACCESS *)&v658;
          v658 = *ADAPTER_DISPLAY::GetContentRect(
                    *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                    a2->VidPnSourceId);
        }
        else
        {
          v480 = 0LL;
        }
        v481 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
        v625 = v480;
        if ( (*(_BYTE *)&v481 & 1) != 0 )
        {
          LODWORD(v27) = DXGPRESENT::PrepareStagingBuffer(
                           *((DXGPRESENT **)this + 17),
                           *((struct DXGDEVICE **)this + 2),
                           a2->hSource,
                           (struct COREDEVICEACCESS *)a3,
                           &v618);
          if ( (int)v27 < 0 )
            goto LABEL_729;
          v483 = v618;
          if ( !v618 )
          {
            v484 = WdLogNewEntry5_WdAssertion(v482);
            *(_QWORD *)(v484 + 24) = 3943LL;
            WdLogEvent5_WdAssertion(v484);
          }
          if ( *(_BYTE *)&a2->Flags.0 >= 0 )
          {
            v655.SrcRect.bottom = v602;
            right = v615[0];
            *(_QWORD *)&v655.SrcRect.left = 0LL;
          }
          else
          {
            top = a2->SrcRect.top;
            if ( top < 0 )
              top = 0;
            v655.SrcRect.top = top;
            left = a2->SrcRect.left;
            if ( left < 0 )
              left = 0;
            v655.SrcRect.left = left;
            bottom = a2->SrcRect.bottom;
            if ( v602 < bottom )
              bottom = v602;
            v655.SrcRect.bottom = bottom;
            right = a2->SrcRect.right;
            if ( (int)v615[0] < right )
              right = v615[0];
          }
          v655.SrcRect.right = right;
          v655.DstRect = v655.SrcRect;
          v489 = (*(_WORD *)&v655.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
          v655.Flags.Value ^= v489;
          if ( !a2->SubRectCnt )
          {
            v490 = WdLogNewEntry5_WdAssertion(v489);
            *(_QWORD *)(v490 + 24) = 3969LL;
            WdLogEvent5_WdAssertion(v490);
          }
          if ( !a2->pSrcSubRects )
          {
            v491 = WdLogNewEntry5_WdAssertion(v489);
            *(_QWORD *)(v491 + 24) = 3970LL;
            WdLogEvent5_WdAssertion(v491);
          }
          LODWORD(v27) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 17), a2->SubRectCnt);
          if ( (int)v27 < 0 )
            goto LABEL_729;
          DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 17), 0);
          SubRectCnt = 0LL;
          v497 = 0;
          v655.SubRectCnt = 0;
          v655.pDstSubRects = DdiSubRectList;
          if ( a2->SubRectCnt <= (unsigned int)v493 )
            goto LABEL_765;
          while ( 1 )
          {
            if ( DXGPRESENT::IntersectRect(&DdiSubRectList[SubRectCnt], &a2->pSrcSubRects[v497], &v655.SrcRect) )
              SubRectCnt = ++v655.SubRectCnt;
            else
              SubRectCnt = v655.SubRectCnt;
            if ( ++v497 >= a2->SubRectCnt )
              break;
            DdiSubRectList = (struct tagRECT *)v655.pDstSubRects;
          }
          if ( !(_DWORD)SubRectCnt )
          {
LABEL_765:
            v534 = WdLogNewEntry5_WdWarning(SubRectCnt, v493, v494, v495);
            *(_QWORD *)(v534 + 24) = -1071775738LL;
            *(_QWORD *)(v534 + 32) = this;
            WdLogEvent5_WdWarning(v534);
            goto LABEL_728;
          }
          if ( bTracingEnabled )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 400LL)
                                                               + 8LL)
                                                   + 336LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
              v483);
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 400LL)
                                                               + 8LL)
                                                   + 336LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
              hSource);
            pDstSubRects = v655.pDstSubRects;
            v501 = v655.SubRectCnt;
            v502 = a2->hWindow;
            v622 = (char *)*((_QWORD *)this + 36);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
              Template_ppxppttqddddddddq(
                HIDWORD(*(_QWORD *)&v655.DstRect.left),
                HIDWORD(*(_QWORD *)&v655.DstRect.right),
                HIDWORD(*(_QWORD *)&v655.SrcRect.left),
                v502,
                v622);
            v503 = 0;
            if ( v501 )
            {
              v504 = v622;
              while ( v501 - v503 <= 0x10 )
              {
                v505 = v501 - v503;
                if ( v501 != v503 )
                  goto LABEL_715;
LABEL_717:
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(HandleInformation) = v505;
                  LODWORD(Objecta) = v501 - v503 <= 0x10;
                  Template_ptqDR2DR2DR2DR2(
                    (__int64)v674,
                    v498,
                    v499,
                    v504,
                    Objecta,
                    HandleInformation,
                    v674,
                    v668,
                    v667,
                    v666);
                }
                v503 += 16;
                if ( v503 >= v501 )
                  goto LABEL_720;
              }
              v505 = 16;
LABEL_715:
              LODWORD(v499) = v503;
              v506 = v505;
              v498 = 0LL;
              do
              {
                v498 += 4LL;
                v507 = (unsigned int)v499;
                v499 = (unsigned int)(v499 + 1);
                v508 = &pDstSubRects[v507];
                *(_DWORD *)&v673[v498 + 60] = v508->left;
                *(_DWORD *)&v667[v498 + 60] = v508->right;
                *(_DWORD *)&v666[v498 + 60] = v508->top;
                *(_DWORD *)&v665[v498 + 60] = v508->bottom;
                --v506;
              }
              while ( v506 );
              goto LABEL_717;
            }
          }
LABEL_720:
          v509 = DXGCONTEXT::SubmitPresent(
                   this,
                   a2,
                   a2->BroadcastContextCount,
                   v631,
                   v612,
                   hSource,
                   v618,
                   &v655,
                   0LL,
                   *((struct _VIDMM_DMA_BUFFER **)this + 36),
                   v619,
                   v613,
                   (struct _D3DKMT_PRESENT *)a3);
          *((_QWORD *)this + 36) = 0LL;
          LODWORD(v27) = v509;
          if ( v509 < 0 )
            goto LABEL_729;
          v511 = (DXGDEVICE *)*((_QWORD *)this + 2);
          v512 = 0;
          if ( (a2->Flags.Value & 0x100) != 0
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                 *(DXGADAPTER ***)(*((_QWORD *)v511 + 357) + 2128LL),
                 *((const struct DXGDEVICE **)this + 2),
                 a2->VidPnSourceId) )
          {
            v512 = 1;
          }
          else if ( !DXGDEVICE::AllowLegacyPresent(v511, v510) )
          {
            v513 = 0;
LABEL_725:
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
            if ( !v513 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
            {
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
LABEL_728:
              LODWORD(v27) = -1071775738;
              goto LABEL_729;
            }
            v518 = v617;
            CWin32kLocks::Unlock(v617);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v614);
            v519 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
            if ( v519 < 0 )
              goto LABEL_761;
            v522 = v618;
            memset(&v650, 0, sizeof(v650));
            if ( !v618 )
            {
              v523 = WdLogNewEntry5_WdAssertion(v520);
              *(_QWORD *)(v523 + 24) = 4053LL;
              WdLogEvent5_WdAssertion(v523);
            }
            v650.hAllocation = v522;
            LODWORD(v27) = DXGDEVICE::Lock(*((DXGDEVICE **)this + 2), &v650, (struct COREDEVICEACCESS *)a3, v521);
            if ( (int)v27 < 0 )
              goto LABEL_729;
            v524 = v614;
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
            if ( !v650.pData )
            {
              v526 = WdLogNewEntry5_WdAssertion(v525);
              *(_QWORD *)(v526 + 24) = 4068LL;
              WdLogEvent5_WdAssertion(v526);
            }
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
            {
              v527 = WdLogNewEntry5_WdAssertion(v525);
              *(_QWORD *)(v527 + 24) = 4069LL;
              WdLogEvent5_WdAssertion(v527);
            }
            v20 = (*(unsigned int (__fastcall **)(_QWORD))(v620 + 312))(0LL) == 0;
            v528 = v512;
            if ( v20 )
              v528 = 0;
            LODWORD(v27) = CWin32kLocks::Lock(v518, a2->hWindow, 0, 0, v528);
            if ( (int)v27 >= 0 )
            {
              v529 = *((_QWORD *)v518 + 1);
              if ( !v529 )
                v529 = *(_QWORD *)v518;
              LOBYTE(v601) = (a2->Flags.Value & 0x200) != 0;
              LOBYTE(v600) = 0;
              if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, __int64, COREACCESS *, const RECT *, void *, _DWORD, unsigned int, int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v620 + 144))(
                      a2,
                      v529,
                      v625,
                      v655.pDstSubRects,
                      v650.pData,
                      *(_DWORD *)(*((_QWORD *)this + 17) + 424LL),
                      v615[0],
                      v602,
                      v600,
                      v601,
                      a2->Color,
                      DXGPRESENT::XformRect,
                      DXGPRESENT::ClipRects) )
              {
                v531 = WdLogNewEntry5_WdEvent(v530);
                *(_QWORD *)(v531 + 24) = -1071775737LL;
                *(_QWORD *)(v531 + 32) = this;
                WdLogEvent5_WdEvent(v531);
                LODWORD(v27) = -1071775737;
              }
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v524);
            v519 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
            if ( v519 < 0 )
            {
LABEL_761:
              LODWORD(v27) = v519;
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
              goto LABEL_874;
            }
            v533 = (DXGDEVICE *)*((_QWORD *)this + 2);
            v647.phAllocations = &v650.hAllocation;
            v647.hDevice = 0;
            v647.NumAllocations = 1;
            DXGDEVICE::Unlock(v533, &v647, 0LL, v532);
            if ( (int)v27 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
            {
              a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
              a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 17) + 432LL);
              a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
              a2->PresentHistoryToken.TokenSize = 48;
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v627);
              LODWORD(v27) = DXGCONTEXT::SubmitPresentHistoryToken(
                               this,
                               &a2->PresentHistoryToken,
                               (struct COREDEVICEACCESS *)a3,
                               v524,
                               v518,
                               0,
                               0LL,
                               0LL,
                               0LL);
            }
LABEL_729:
            if ( v629 )
            {
              v629 = 0;
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v628 + 416));
            }
            v231 = (_QWORD *)((char *)this + 288);
            if ( *((_QWORD *)this + 36) )
            {
              if ( (int)v27 >= 0 )
              {
                v514 = *(unsigned int *)(*((_QWORD *)this + 17) + 4LL);
                LOBYTE(v514) = v514 & 0x12;
                if ( (_BYTE)v514 == 16 && (a2->Flags.Value & 2) == 0 )
                {
                  v515 = WdLogNewEntry5_WdAssertion(v514);
                  *(_QWORD *)(v515 + 24) = 4390LL;
                  WdLogEvent5_WdAssertion(v515);
                }
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 400LL)
                                                                 + 8LL)
                                                     + 496LL))(
                *v231,
                0LL);
              *v231 = 0LL;
            }
            v516 = *((_QWORD *)this + 17);
            if ( (*(_DWORD *)(v516 + 4) & 0x80) != 0 )
            {
              if ( (unsigned int)((_DWORD)v27 + 1071775738) > 1 )
              {
                v517 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v516 + 4) >> 7);
                *(_QWORD *)(v517 + 24) = 4398LL;
                WdLogEvent5_WdAssertion(v517);
              }
              LODWORD(v27) = 0;
            }
            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v627);
            goto LABEL_392;
          }
          v513 = 1;
          goto LABEL_725;
        }
        if ( (*(_BYTE *)&v481 & 2) == 0 )
          goto LABEL_729;
        v535 = (DXGDEVICE *)*((_QWORD *)this + 2);
        v536 = 0;
        if ( (*(_WORD *)&v481 & 0x100) != 0
          && ADAPTER_DISPLAY::IsVidPnSourceOwner(
               *(DXGADAPTER ***)(*((_QWORD *)v535 + 357) + 2128LL),
               *((const struct DXGDEVICE **)this + 2),
               a2->VidPnSourceId) )
        {
          v536 = 1;
        }
        else if ( !DXGDEVICE::AllowLegacyPresent(v535, v474) )
        {
          v537 = 0;
LABEL_771:
          DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
          if ( v537 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 17)) )
          {
            if ( (a2->Flags.Value & 0x10000) != 0 )
            {
              v539 = WdLogNewEntry5_WdAssertion(v538);
              *(_QWORD *)(v539 + 24) = 4169LL;
              WdLogEvent5_WdAssertion(v539);
            }
            v540 = v617;
            CWin32kLocks::Unlock(v617);
            v541 = v620;
            v20 = (*(unsigned int (__fastcall **)(_QWORD))(v620 + 312))(0LL) == 0;
            v542 = v536;
            if ( v20 )
              v542 = 0;
            v543 = CWin32kLocks::Lock(v540, a2->hWindow, 0, 0, v542);
            v544 = *((_QWORD *)v540 + 1);
            LODWORD(v27) = v543;
            if ( !v544 )
              v544 = *(_QWORD *)v540;
            if ( !(*(unsigned int (__fastcall **)(__int64, COREACCESS *, const RECT *, _QWORD, UINT))(v541 + 152))(
                    v544,
                    v480,
                    a2->pSrcSubRects,
                    a2->SubRectCnt,
                    a2->Color) )
            {
              v546 = WdLogNewEntry5_WdEvent(v545);
              *(_QWORD *)(v546 + 24) = -1071775737LL;
              *(_QWORD *)(v546 + 32) = this;
              WdLogEvent5_WdEvent(v546);
              LODWORD(v27) = -1071775737;
            }
          }
          else
          {
            LODWORD(v27) = -1071775738;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v614);
          v547 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
          v467 = v547;
          if ( v547 >= 0 )
            goto LABEL_729;
          v468 = WdLogNewEntry5_WdEvent(v548);
          goto LABEL_817;
        }
        v537 = 1;
        goto LABEL_771;
      }
      if ( (int)v27 < 0 || (v473 & 2) != 0 )
        goto LABEL_729;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(v620 + 224))(0LL) )
      {
        if ( (a2->Flags.Value & 0x12100) == 0x10000 )
          goto LABEL_795;
        v550 = WdLogNewEntry5_WdAssertion(v549);
        *(_QWORD *)(v550 + 24) = 4206LL;
      }
      else
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) || (a2->Flags.Value & 0x4000000) != 0 )
          goto LABEL_795;
        v550 = WdLogNewEntry5_WdAssertion(v549);
        *(_QWORD *)(v550 + 24) = 4211LL;
      }
      WdLogEvent5_WdAssertion(v550);
LABEL_795:
      if ( (a2->Flags.Value & 0x10000) != 0 )
      {
        v551 = *(HDEV *)v617;
        v552 = PsGetCurrentProcess(v549);
        v555 = *(_QWORD *)(PsGetProcessDxgProcess(v552, v553) + 72);
        if ( v551 )
        {
          if ( v555 )
          {
            v557 = *((_QWORD *)this + 17);
            if ( *(_DWORD *)(v557 + 432) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
            {
              v558 = v614;
              if ( *((_BYTE *)v614 + 16) )
              {
                *((_BYTE *)v614 + 16) = 0;
                ExReleasePushLockSharedEx(*((_QWORD *)v558 + 1) + 120LL, 0LL);
                KeLeaveCriticalRegion();
                v557 = *((_QWORD *)v558 + 1);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v557 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v557 + 16), (struct DXGADAPTER *)v557);
              }
              if ( *((_BYTE *)a3 + 80) )
                COREACCESS::Release((COREACCESS *)(a3 + 5));
              v559 = (COREACCESS *)(a3 + 1);
              if ( !*((_BYTE *)a3 + 32) )
              {
                v560 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v557, v554, v556);
                v560[3] = 275LL;
                v560[4] = 4LL;
                v560[5] = v559;
                v560[6] = 0LL;
                v560[7] = 0LL;
                WdLogEvent5_WdCriticalError(v560);
              }
              *((_BYTE *)a3 + 32) = 0;
              v561 = a3[3];
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v561 + 20) )
                DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v561);
              LODWORD(v654[0]) = 0;
              memset(&v654[1], 0, 0x218uLL);
              v562 = 1LL;
              v563 = 0LL;
              LODWORD(v654[0]) = *(_DWORD *)(*((_QWORD *)this + 17) + 352LL);
              v654[1] = *(_QWORD *)(*((_QWORD *)this + 17) + 224LL);
              v654[3] = *((unsigned int *)this + 6);
              for ( LODWORD(v654[2]) = 1; (unsigned int)v563 < a2->BroadcastContextCount; ++LODWORD(v654[2]) )
              {
                v564 = (unsigned int)v563;
                v563 = (unsigned int)(v563 + 1);
                v654[(unsigned int)v562 + 3] = a2->BroadcastContext[v564];
                v562 = (unsigned int)(LODWORD(v654[2]) + 1);
              }
              (*(void (__fastcall **)(HDEV, _QWORD *, __int64, __int64))(v555 + 240))(v551, v654, v562, v563);
              v565 = v614;
              if ( !*((_BYTE *)v614 + 16) )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v614 + 1) + 24LL));
                *(_QWORD *)v565 = -1LL;
                v566 = *((_QWORD *)v565 + 1);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v566 + 120, 0LL);
                *((_BYTE *)v565 + 16) = 1;
              }
              COREACCESS::AcquireShared(v559);
              if ( *((_DWORD *)a3[9] + 94) != 1 )
                goto LABEL_816;
              if ( *((_BYTE *)a3 + 80) )
              {
                COREACCESS::AcquireShared((COREACCESS *)(a3 + 5));
                if ( *((_DWORD *)a3[7] + 44) != 1 )
                {
                  COREACCESS::Release((COREACCESS *)(a3 + 5));
LABEL_816:
                  COREACCESS::Release(v559);
                  v468 = WdLogNewEntry5_WdEvent(v567);
                  v467 = -1073741130LL;
LABEL_817:
                  *(_QWORD *)(v468 + 24) = v467;
                  *(_QWORD *)(v468 + 32) = this;
                  goto LABEL_818;
                }
              }
            }
          }
        }
      }
      v568 = 0;
      v569 = v612;
      v610 = v618;
      while ( 1 )
      {
        while ( 1 )
        {
          v604 = v568;
          if ( (a2->Flags.Value & 0x10000) != 0 )
            v570 = 1;
          else
            v570 = *(_DWORD *)(*((_QWORD *)this + 2) + 2864LL);
          if ( v568 >= v570 )
            goto LABEL_729;
          v571 = *((_QWORD *)this + 17);
          if ( v568 < *(_DWORD *)(v571 + 68) || !v568 )
            break;
          v655.SubRectCnt = 0;
          ++v568;
        }
        v572 = v568;
        v655.SubRectCnt = *(_DWORD *)(v571 + 4LL * v568 + 352);
        if ( v655.SubRectCnt )
        {
          if ( (a2->Flags.Value & 0x10000) != 0 )
          {
            v574 = v610;
          }
          else
          {
            v573 = DXGDEVICE::OpenCddPrimaryHandle(
                     *((DXGDEVICE **)this + 2),
                     v568,
                     *((_BYTE *)this + 352),
                     *((_DWORD *)this + 82));
            v568 = v604;
            v574 = v573;
            v610 = v573;
          }
          if ( v574 )
          {
            v575 = *((_QWORD *)this + 17);
            if ( v568 >= *(_DWORD *)(v575 + 68) && v568 )
              v576 = 0LL;
            else
              v576 = *(const RECT **)(v575 + 8 * v572 + 224);
            v655.pDstSubRects = v576;
            if ( (a2->Flags.Value & 0x2000) != 0 )
            {
              CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                                     v568,
                                     1);
              v568 = v604;
              v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)((CurrentOrientation != 1) << 7)) & 0x80;
            }
            v659 = 0LL;
            if ( (a2->Flags.Value & 0x10000) != 0 )
              ContentRect = (const struct tagRECT *)&v659;
            else
              ContentRect = ADAPTER_DISPLAY::GetContentRect(
                              *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                              v568);
            v655.SrcRect = *(RECT *)(*((_QWORD *)this + 17) + 144LL);
            v579 = (_DWORD *)*((_QWORD *)this + 17);
            v655.DstRect.top = v579[33] - ContentRect->top;
            v655.DstRect.bottom = v579[35] - ContentRect->top;
            v655.DstRect.left = v579[32] - ContentRect->left;
            v655.DstRect.right = v579[34] - ContentRect->left;
            if ( bTracingEnabled && *((_QWORD *)this + 36) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 400LL)
                                                                 + 8LL)
                                                     + 336LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                v610);
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 400LL)
                                                                 + 8LL)
                                                     + 336LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                hSource);
              v582 = v655.pDstSubRects;
              v583 = v655.SubRectCnt;
              v584 = a2->hWindow;
              v622 = (char *)*((_QWORD *)this + 36);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                Template_ppxppttqddddddddq(
                  HIDWORD(*(_QWORD *)&v655.DstRect.left),
                  HIDWORD(*(_QWORD *)&v655.DstRect.right),
                  HIDWORD(*(_QWORD *)&v655.SrcRect.left),
                  v584,
                  v622);
              v585 = 0;
              if ( v583 )
              {
                v586 = v622;
                while ( v583 - v585 <= 0x10 )
                {
                  v587 = v583 - v585;
                  if ( v583 != v585 )
                    goto LABEL_851;
LABEL_853:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                  {
                    LODWORD(HandleInformation) = v587;
                    LODWORD(Object) = v583 - v585 <= 0x10;
                    Template_ptqDR2DR2DR2DR2(
                      (__int64)v673,
                      v580,
                      v581,
                      v586,
                      Object,
                      HandleInformation,
                      v673,
                      v672,
                      v671,
                      v670);
                  }
                  v585 += 16;
                  if ( v585 >= v583 )
                  {
                    v569 = v612;
                    goto LABEL_857;
                  }
                }
                v587 = 16;
LABEL_851:
                LODWORD(v581) = v585;
                v588 = v587;
                v580 = 0LL;
                do
                {
                  v580 += 4LL;
                  v589 = (unsigned int)v581;
                  v581 = (unsigned int)(v581 + 1);
                  v590 = &v582[v589];
                  *(_DWORD *)&v672[v580 + 60] = v590->left;
                  *(_DWORD *)&v671[v580 + 60] = v590->right;
                  *(_DWORD *)&v670[v580 + 60] = v590->top;
                  *(_DWORD *)&v669[v580 + 60] = v590->bottom;
                  --v588;
                }
                while ( v588 );
                goto LABEL_853;
              }
            }
LABEL_857:
            v591 = v619;
            v592 = v631;
            *((_DWORD *)v619 + 29) = v604;
            v593 = DXGCONTEXT::SubmitPresent(
                     this,
                     a2,
                     a2->BroadcastContextCount,
                     v592,
                     v569,
                     hSource,
                     v610,
                     &v655,
                     0LL,
                     *((struct _VIDMM_DMA_BUFFER **)this + 36),
                     v591,
                     v613,
                     (struct _D3DKMT_PRESENT *)a3);
            *((_QWORD *)this + 36) = 0LL;
            LODWORD(v27) = v593;
            if ( (a2->Flags.Value & 0x10000) != 0
              && *(_DWORD *)(*((_QWORD *)this + 17) + 432LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
            {
              a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
              a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 17) + 432LL);
              if ( v655.SubRectCnt <= 0x10 )
              {
                a2->PresentHistoryToken.Token.Flip.VidPnSourceId = v655.SubRectCnt;
                for ( i = 0;
                      i < v655.SubRectCnt;
                      *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 16 * v595 + 28) = v655.pDstSubRects[v595] )
                {
                  v595 = i++;
                }
              }
              else
              {
                a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 28) = v655.DstRect;
              }
              a2->PresentHistoryToken.TokenSize = 16 * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
              if ( v629 )
              {
                v629 = 0;
                DXGFASTMUTEX::Release((struct _KTHREAD **)(v628 + 416));
              }
              LODWORD(v27) = DXGCONTEXT::SubmitPresentHistoryToken(
                               this,
                               &a2->PresentHistoryToken,
                               (struct COREDEVICEACCESS *)a3,
                               v614,
                               v617,
                               0,
                               0LL,
                               0LL,
                               0LL);
            }
            if ( (int)v27 < 0 )
              goto LABEL_729;
            v568 = v604;
          }
        }
        ++v568;
      }
    }
  }
  if ( !v82 )
  {
    if ( (v83 & 0x10A7C3) != 0 )
    {
      v320 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v83, v16, v17);
      v320[3] = this;
      v320[4] = a2->Flags.Value;
      v320[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v320);
      v23 = -1073741811;
      goto LABEL_441;
    }
    v141 = ((unsigned int)v83 >> 28) & 1;
    if ( v141 )
    {
      v142 = v26[5].Count;
      if ( !v142 || !*(_QWORD *)(v142 + 56) )
      {
        v143 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v143 + 24) = 2898LL;
LABEL_194:
        WdLogEvent5_WdError(v143);
        LODWORD(v27) = -1073741811;
        goto LABEL_874;
      }
    }
    else if ( (*(_DWORD *)(v26[6].Count + 4) & 0x2003) == 0 )
    {
      goto LABEL_196;
    }
    if ( v141 )
    {
      v145 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
      if ( !v145
        || (v146 = *(_QWORD *)(v145 + 2128)) == 0
        || (VidPnSourceId = a2->VidPnSourceId, VidPnSourceId >= *(_DWORD *)(v146 + 80)) )
      {
        v143 = WdLogNewEntry5_WdError(v145);
        *(_QWORD *)(v143 + 24) = a2->VidPnSourceId;
        goto LABEL_194;
      }
    }
    else
    {
      VidPnSourceId = (*(_DWORD *)(v26[6].Count + 4) >> 6) & 0xF;
    }
    v630 = v26;
    if ( !ExAcquireRundownProtection(v26 + 11) )
    {
      v150 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v148, v147, v149);
      v150[3] = 275LL;
      v150[4] = 25LL;
      v150[5] = v26;
      v150[6] = 0LL;
      v150[7] = 0LL;
      WdLogEvent5_WdCriticalError(v150);
    }
    DXGALLOCATIONREFERENCE::MoveAssign(&v632, &v630);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v630);
    v623 = a2->hSource;
    v151 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
    if ( v151 )
    {
      v152 = *(_QWORD *)(v151 + 2128);
      if ( v152 )
      {
        v24 = *(_QWORD *)(v152 + 16);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v24 + 160)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 144)) )
        {
          v26 = (struct _EX_RUNDOWN_REF *)v612;
          goto LABEL_211;
        }
        v26 = (struct _EX_RUNDOWN_REF *)v612;
      }
    }
    v153 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v153 + 24) = 2939LL;
    WdLogEvent5_WdAssertion(v153);
LABEL_211:
    v154 = v620;
    if ( (*(_DWORD *)(v26[6].Count + 4) & 0x2000) == 0 || (*(unsigned int (**)(void))(v620 + 216))() )
    {
      v97 = a2->Flags.Value;
      if ( (a2->Flags.Value & 0x60000) != 0 )
      {
        if ( (a2->Flags.Value & 0x60000) == 0x60000 )
        {
          v143 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v143 + 24) = 2958LL;
          goto LABEL_194;
        }
        if ( (*(_DWORD *)(v26[6].Count + 4) & 0x1000) == 0 )
        {
          v143 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v143 + 24) = 2964LL;
          goto LABEL_194;
        }
        v156 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                                   VidPnSourceId)
               + 10);
        if ( (v156 & 0x10) == 0 )
        {
          v158 = WdLogNewEntry5_WdWarning(v156, v155, v157, v98);
          *(_QWORD *)(v158 + 24) = 2971LL;
LABEL_221:
          WdLogEvent5_WdWarning(v158);
          LODWORD(v27) = -1071775739;
          goto LABEL_874;
        }
        v97 = a2->Flags.Value;
        if ( (v97 & 0x40000) != 0 && (v156 & 0x20) == 0 )
        {
          v158 = WdLogNewEntry5_WdWarning(v156, v155, v97, v98);
          *(_QWORD *)(v158 + 24) = 2977LL;
          goto LABEL_221;
        }
        if ( (v97 & 0xC0000) == 0xC0000 )
        {
          v159 = WdLogNewEntry5_WdError(v156);
          *(_QWORD *)(v159 + 24) = 2983LL;
          WdLogEvent5_WdError(v159);
          LODWORD(v27) = -1073741811;
          goto LABEL_874;
        }
      }
      v95 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v95 + 2856) != *(_QWORD *)(*(_QWORD *)(v95 + 16) + 16LL) )
        goto LABEL_179;
      v160 = v619;
      v161 = *(_DWORD *)v619 ^ ((unsigned __int8)v97 ^ (unsigned __int8)*(_DWORD *)v619) & 4;
      *(_DWORD *)v619 = v161;
      v162 = (a2->Flags.Value ^ v161) & 8 ^ v161;
      *(_DWORD *)v160 = v162;
      v163 = ((unsigned __int8)v162 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v162;
      *(_DWORD *)v160 = v163;
      v164 = (v163 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v163;
      *(_DWORD *)v160 = v164;
      v165 = (v164 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v164;
      *(_DWORD *)v160 = v165;
      *(_DWORD *)v160 = v165 ^ (v165 ^ (4 * a2->Flags.Value)) & 0x200000;
      if ( (a2->Flags.Value & 0x8000000) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)v160 + 36) = Duration;
      *(_DWORD *)v160 ^= (a2->Flags.Value ^ *(_DWORD *)v160) & 0x20000000;
      v655.Flags.Value ^= (a2->Flags.Value ^ v655.Flags.Value) & 4;
      v655.Flags.Value ^= (*(_WORD *)&v655.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x100;
      v655.Flags.Value ^= (*(_WORD *)&v655.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x200;
      v655.Flags.Value ^= (*(_WORD *)&v655.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x400;
      pPresentRegions = a2->pPresentRegions;
      if ( pPresentRegions && !pPresentRegions->MoveRectCount && (*(unsigned int (**)(void))(v154 + 216))() )
      {
        v655.SubRectCnt = a2->pPresentRegions->DirtyRectCount;
        v655.pDstSubRects = a2->pPresentRegions->pDirtyRects;
      }
      v168 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                               + 8LL)
                                                                                   + 424LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
               VidPnSourceId,
               &a2->FlipInterval);
      *((_DWORD *)v160 + 30) = v168;
      if ( !v168 )
      {
        v173 = (_QWORD *)WdLogNewEntry5_WdWarning(v170, v169, v171, v172);
        v173[3] = this;
        v173[4] = a2->FlipInterval;
        v173[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v173);
        LODWORD(v27) = -1073741811;
        goto LABEL_874;
      }
      if ( ((v168 - 1) & 0xFFFFFFFD) != 0 )
      {
        v655.FlipInterval = a2->FlipInterval;
        if ( *((_DWORD *)v160 + 30) == 2 )
          goto LABEL_242;
      }
      else
      {
        v655.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
      }
      v655.Flags.Value |= 8u;
LABEL_242:
      *((_DWORD *)v160 + 31) = a2->FlipInterval;
      *((_DWORD *)v160 + 29) = VidPnSourceId;
      v174 = *((_QWORD *)this + 2);
      if ( v174 != -208 && *(struct _KTHREAD **)(v174 + 216) == KeGetCurrentThread() )
      {
        v175 = WdLogNewEntry5_WdAssertion(v170);
        *(_QWORD *)(v175 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v175);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v174 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v178 = *(_DWORD *)(v174 + 224);
          if ( v178 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v176, &EventBlockThread, v177, v178);
        }
        ExAcquirePushLockSharedEx(v174 + 208, 0LL);
      }
      v179 = v174 + 208;
      v180 = *(_QWORD *)(v174 + 8LL * VidPnSourceId + 808);
      ExReleasePushLockSharedEx(v179, 0LL);
      KeLeaveCriticalRegion();
      v181 = v26[6].Count;
      v95 = (*(_DWORD *)(v181 + 4) >> 13) & 1;
      if ( ((*(_DWORD *)(v181 + 4) >> 13) & 1) != 0 && v180 && (*(_DWORD *)(*(_QWORD *)(v180 + 48) + 4LL) & 0x2000) == 0 )
      {
        v182 = v619;
        *(_DWORD *)v619 |= 0x400000u;
      }
      else if ( !(_DWORD)v95 && v180 && (*(_DWORD *)(*(_QWORD *)(v180 + 48) + 4LL) & 0x2000) != 0 )
      {
        v182 = v619;
        *(_DWORD *)v619 |= 0x400000u;
      }
      else
      {
        v182 = v619;
        *(_DWORD *)v619 &= ~0x400000u;
      }
      v183 = *((unsigned int *)v182 + 30);
      if ( !(_DWORD)v183 )
        goto LABEL_179;
      v95 = VidPnSourceId;
      if ( (_DWORD)v183 == *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 2792) )
        goto LABEL_179;
      v184 = WdLogNewEntry5_WdEvent(v183);
      *(_QWORD *)(v184 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdEvent(v184);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
      v185 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
      v187 = v185;
      if ( v185 >= 0 )
        goto LABEL_179;
      v188 = WdLogNewEntry5_WdEvent(v186);
      *(_QWORD *)(v188 + 24) = v187;
      WdLogEvent5_WdEvent(v188);
      LODWORD(v27) = v187;
      goto LABEL_874;
    }
LABEL_196:
    v144 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v144[3] = -1073741811LL;
    v144[4] = this;
    v144[5] = v26;
    v144[6] = v26[6].Count;
    v144[7] = a2->hSource;
    WdLogEvent5_WdError(v144);
    LODWORD(v27) = -1073741811;
    goto LABEL_874;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (v83 & 3) == 0 || (v83 & 0x100E803C) != 0 )
    goto LABEL_110;
  if ( (v83 & 2) != 0 )
  {
    if ( (v83 & 0x100681) != 0 )
    {
LABEL_110:
      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v83, v16, v17);
      LODWORD(v85) = -1073741811;
      v84[3] = this;
      v84[4] = a2->pSrcSubRects;
      v84[5] = a2->SubRectCnt;
      v84[6] = a2->Flags.Value;
      v84[7] = -1073741811LL;
LABEL_111:
      WdLogEvent5_WdWarning(v84);
      goto LABEL_112;
    }
  }
  else
  {
    if ( !v615[0] || !v602 || (v83 & 0x80u) == 0LL )
      goto LABEL_110;
    v86 = v83 & 0x600;
    if ( (_DWORD)v86 == 1536 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v86, v16, v17);
      LODWORD(v85) = -1073741811;
      v84[3] = -1073741811LL;
      v84[4] = this;
      v84[5] = a2->pSrcSubRects;
      v84[6] = a2->SubRectCnt;
      v84[7] = a2->Flags.Value;
      goto LABEL_111;
    }
  }
  v87 = *(_DWORD *)(*((_QWORD *)v27 + 6) + 4LL);
  if ( (v87 & 3) == 0 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    LODWORD(v85) = -1073741811;
    v88[3] = -1073741811LL;
    v88[4] = this;
    v88[5] = v27;
    v89 = *((_QWORD *)v27 + 6);
LABEL_121:
    v88[6] = v89;
    v88[7] = a2->hDestination;
    WdLogEvent5_WdError(v88);
    goto LABEL_112;
  }
  VidPnSourceId = (v87 >> 6) & 0xF;
  v91 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
  if ( !v91
    || (v91 = *(_QWORD *)(v91 + 2128)) == 0
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v91 + 16)) )
  {
    v92 = WdLogNewEntry5_WdAssertion(v91);
    *(_QWORD *)(v92 + 24) = 2634LL;
    WdLogEvent5_WdAssertion(v92);
  }
  *((_DWORD *)v619 + 29) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v638, (struct _EX_RUNDOWN_REF *)v27);
  DXGALLOCATIONREFERENCE::MoveAssign(&v632, &v638);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v638);
  v623 = a2->hDestination;
  memset(&v645, 0, sizeof(v645));
  v645.hAllocation = *(HANDLE *)(*((_QWORD *)v27 + 6) + 16LL);
  v94 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v645, v93);
  v85 = v94;
  if ( v94 < 0 )
  {
    v99 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    v99[3] = v85;
    v99[4] = this;
    v99[5] = *(_QWORD *)(*((_QWORD *)v27 + 6) + 16LL);
    v99[6] = v27;
    WdLogEvent5_WdError(v99);
    goto LABEL_112;
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    v655.DstRect.right = v645.Width;
    v655.DstRect.bottom = v645.Height;
    *(_QWORD *)&v655.DstRect.left = 0LL;
    if ( (a2->Flags.Value & 0x40) != 0 )
    {
      v123 = a2->DstRect.right;
      if ( v123 <= a2->DstRect.left )
        goto LABEL_160;
      p_SrcRect = (RECT *)(unsigned int)a2->DstRect.bottom;
      if ( (int)p_SrcRect <= a2->DstRect.top || v123 <= 0 || (int)p_SrcRect <= 0 )
        goto LABEL_160;
      if ( !DXGPRESENT::IntersectRect(&v655.DstRect, &a2->DstRect, &v655.DstRect) )
        goto LABEL_113;
    }
    for ( j = 0; j < a2->SubRectCnt; ++j )
    {
      v125 = j;
      if ( !DXGPRESENT::IntersectRect(&v657, &a2->pSrcSubRects[v125], &v655.DstRect)
        || RtlCompareMemory(&v657, &a2->pSrcSubRects[v125], 0x10uLL) != 16 )
      {
        v138 = (_QWORD *)WdLogNewEntry5_WdError(v126);
        v138[3] = -1073741811LL;
        v138[4] = a2->DstRect.left;
        v138[5] = a2->DstRect.top;
        v138[6] = a2->DstRect.right;
        v138[7] = a2->DstRect.bottom;
        WdLogEvent5_WdError(v138);
        v140 = (_QWORD *)WdLogNewEntry5_WdError(v139);
        v140[3] = j;
        v140[4] = a2->pSrcSubRects[j].left;
        v140[5] = a2->pSrcSubRects[j].top;
        v140[6] = a2->pSrcSubRects[j].right;
        v140[7] = a2->pSrcSubRects[j].bottom;
        WdLogEvent5_WdError(v140);
        LODWORD(v27) = -1073741811;
        goto LABEL_874;
      }
    }
    v119 = v655.Flags.Value;
    v655.SrcRect = v655.DstRect;
    v655.pDstSubRects = a2->pSrcSubRects;
    goto LABEL_178;
  }
  if ( v27 == (struct VIDSCH_SUBMIT_DATA_BASE *)v26 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    LODWORD(v85) = -1073741811;
    v88[3] = -1073741811LL;
    v88[4] = this;
    v88[5] = v26;
    v89 = a2->hSource;
    goto LABEL_121;
  }
  v100 = *(_DWORD *)(v26[6].Count + 4);
  if ( (v100 & 3) != 0 )
  {
    v101 = (v100 >> 6) & 0xF;
    if ( (_DWORD)v101 != VidPnSourceId )
    {
      v102 = (_QWORD *)WdLogNewEntry5_WdError(v101);
      LODWORD(v85) = -1073741811;
      v102[3] = -1073741811LL;
      v102[4] = this;
      v102[5] = v26;
      v102[6] = (*(_DWORD *)(v26[6].Count + 4) >> 6) & 0xF;
      v102[7] = VidPnSourceId;
      WdLogEvent5_WdError(v102);
      goto LABEL_112;
    }
  }
  v103 = a2->SrcRect.left;
  p_SrcRect = &a2->SrcRect;
  v97 = (unsigned int)a2->SrcRect.right;
  if ( (int)v97 <= v103
    || (v98 = (unsigned int)a2->SrcRect.bottom, v95 = (unsigned int)a2->SrcRect.top, (int)v98 <= (int)v95)
    || (v104 = v615[0], v103 >= (int)v615[0])
    || (v105 = v602, (int)v95 >= v602)
    || (int)v97 <= 0
    || (int)v98 <= 0 )
  {
    v122 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    LODWORD(v85) = -1073741811;
    v122[3] = -1073741811LL;
    v122[4] = a2->SrcRect.left;
    v122[5] = a2->SrcRect.top;
    v122[6] = a2->SrcRect.right;
    v122[7] = a2->SrcRect.bottom;
    WdLogEvent5_WdError(v122);
    goto LABEL_112;
  }
  v106 = 0;
  if ( !a2->SubRectCnt )
    goto LABEL_145;
  do
  {
    v107 = v106;
    if ( !DXGPRESENT::IntersectRect(&Source1, &a2->pSrcSubRects[v107], p_SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v107], 0x10uLL) != 16 )
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdError(v108);
      LODWORD(v85) = -1073741811;
      v115[3] = -1073741811LL;
      v115[4] = a2->SrcRect.left;
      v115[5] = a2->SrcRect.top;
      v115[6] = a2->SrcRect.right;
      v115[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v115);
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v116);
      v117[3] = v106;
      v117[4] = a2->pSrcSubRects[v106].left;
      v117[5] = a2->pSrcSubRects[v106].top;
      v117[6] = a2->pSrcSubRects[v106].right;
      v117[7] = a2->pSrcSubRects[v106].bottom;
      WdLogEvent5_WdError(v117);
      goto LABEL_112;
    }
    ++v106;
    p_SrcRect = &a2->SrcRect;
  }
  while ( v106 < a2->SubRectCnt );
  v105 = v602;
  p_SrcRect = &a2->SrcRect;
  v104 = v615[0];
LABEL_145:
  if ( (a2->Flags.Value & 0x40) == 0 )
  {
    if ( v645.Width == v104 && v645.Height == v105 )
    {
      v655.DstRect = *p_SrcRect;
      v655.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_164;
    }
    v120 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v95, v97, v98);
    v121 = v615[0];
    v120[3] = this;
    v120[4] = v645.Width;
    v120[5] = v645.Height;
    v120[6] = v121;
    v120[7] = v105;
    WdLogEvent5_WdWarning(v120);
    LODWORD(v85) = -1073741811;
    goto LABEL_112;
  }
  v97 = (unsigned int)a2->DstRect.right;
  v98 = (unsigned int)a2->DstRect.left;
  if ( (int)v97 <= (int)v98
    || (v95 = (unsigned int)a2->DstRect.bottom, v109 = a2->DstRect.top, (int)v95 <= v109)
    || (int)v98 >= (int)v645.Width
    || v109 >= (int)v645.Height
    || (int)v97 <= 0
    || (int)v95 <= 0 )
  {
LABEL_160:
    v84 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v95, v97, v98);
    LODWORD(v85) = -1073741811;
    v84[3] = -1073741811LL;
    v84[4] = a2->DstRect.left;
    v84[5] = a2->DstRect.top;
    v84[6] = a2->DstRect.right;
    v84[7] = a2->DstRect.bottom;
    goto LABEL_111;
  }
  v110 = (unsigned int)(a2->SrcRect.right - p_SrcRect->left);
  if ( (_DWORD)v110 != (_DWORD)v97 - (_DWORD)v98
    || (v110 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top), (_DWORD)v110 != (_DWORD)v95 - v109) )
  {
    v118 = (_QWORD *)WdLogNewEntry5_WdError(v110);
    LODWORD(v85) = -1073741811;
    v118[3] = -1073741811LL;
    v118[4] = this;
    v118[5] = a2->Flags.Value;
    v118[6] = v27;
    v118[7] = VidPnSourceId;
    WdLogEvent5_WdError(v118);
    goto LABEL_112;
  }
  LODWORD(v85) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 17), a2->SubRectCnt);
  if ( (int)v85 < 0 )
  {
LABEL_112:
    v23 = v85;
LABEL_113:
    LODWORD(v27) = v23;
    goto LABEL_874;
  }
  v111 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 17), 0);
  v97 = 0LL;
  v98 = (unsigned int)(a2->DstRect.left - a2->SrcRect.left);
  v112 = a2->DstRect.top - a2->SrcRect.top;
  if ( a2->SubRectCnt > (unsigned int)v95 )
  {
    do
    {
      v113 = (unsigned int)v97;
      v97 = (unsigned int)(v97 + 1);
      v95 = 2 * v113;
      *(&v111->left + 2 * v95) = v98 + *(&a2->pSrcSubRects->left + 2 * v95);
      *(&v111->right + 2 * v95) = v98 + *(&a2->pSrcSubRects->right + 2 * v95);
      *(&v111->top + 2 * v95) = v112 + *(&a2->pSrcSubRects->top + 2 * v95);
      *(&v111->bottom + 2 * v95) = v112 + *(&a2->pSrcSubRects->bottom + 2 * v95);
    }
    while ( (unsigned int)v97 < a2->SubRectCnt );
  }
  DstRect = a2->DstRect;
  v655.pDstSubRects = v111;
  p_SrcRect = &a2->SrcRect;
  v655.DstRect = DstRect;
LABEL_164:
  v655.SrcRect = *p_SrcRect;
  v119 = (*(_WORD *)&v655.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800 ^ v655.Flags.Value;
  v655.Flags.Value = v119;
LABEL_178:
  v655.SubRectCnt = a2->SubRectCnt;
  v655.Flags.Value = (a2->Flags.Value ^ v119) & 1 ^ v119;
  v655.Flags.Value ^= (a2->Flags.Value ^ v655.Flags.Value) & 2;
  v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
  v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
  v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
  v655.Color = a2->Color;
  v655.Flags.Value ^= (*(_WORD *)&v655.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
LABEL_179:
  v127 = *((_QWORD *)this + 2);
  v128 = *(_QWORD *)(*(_QWORD *)(v127 + 2856) + 2128LL);
  v129 = *(_QWORD *)(v128 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v129 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v129 + 144)) )
  {
    v130 = WdLogNewEntry5_WdAssertion(v129);
    *(_QWORD *)(v130 + 24) = 4248LL;
    WdLogEvent5_WdAssertion(v130);
  }
  if ( VidPnSourceId >= *(_DWORD *)(v128 + 80)
    && (v131 = WdLogNewEntry5_WdAssertion(v129),
        *(_QWORD *)(v131 + 24) = 4249LL,
        WdLogEvent5_WdAssertion(v131),
        VidPnSourceId >= *(_DWORD *)(v128 + 80))
    || (v133 = *(_QWORD *)(v128 + 112),
        v132 = (CWin32kLocks *)(1016LL * VidPnSourceId),
        v617 = v132,
        v127 != *(_QWORD *)((char *)v132 + v133 + 672)) )
  {
    v319 = (_QWORD *)WdLogNewEntry5_WdWarning(v132, v95, v97, v98);
    v319[3] = -1071775744LL;
    v319[4] = this;
    v319[5] = a2->hSource;
    v319[6] = v612;
    v319[7] = VidPnSourceId;
    WdLogEvent5_WdWarning(v319);
    LODWORD(v27) = -1071775744;
    goto LABEL_874;
  }
  v134 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
  if ( v134 )
  {
    v135 = *(_QWORD *)(v134 + 2136);
    v136 = v135
         ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v135 + 376) + 8LL) + 448LL))(
             *(_QWORD *)(v135 + 384),
             VidPnSourceId)
         : DmmIsSourceInActiveVidPnTopology(v134, VidPnSourceId);
    if ( !v136 )
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 304LL) == 1 )
      {
        v189 = (_QWORD *)WdLogNewEntry5_WdEvent(v137);
        LODWORD(v27) = -1071775738;
        v189[3] = -1071775738LL;
        v189[4] = this;
        v189[5] = VidPnSourceId;
        WdLogEvent5_WdEvent(v189);
        goto LABEL_874;
      }
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v190 = (_QWORD *)WdLogNewEntry5_WdEvent(v137);
        v190[3] = 0LL;
        v190[4] = this;
        v190[5] = VidPnSourceId;
        WdLogEvent5_WdEvent(v190);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v191 = *((_QWORD *)this + 2);
          if ( *(_QWORD *)(v191 + 2856) == *(_QWORD *)(*(_QWORD *)(v191 + 16) + 16LL) )
          {
            DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays((struct _KTHREAD **)v191, VidPnSourceId);
            v27 = v619;
            DXGDEVICE::SetDisplayedPrimary(
              *((struct _KTHREAD ***)this + 2),
              VidPnSourceId,
              v612,
              *((_DWORD *)v619 + 34),
              1);
            v192 = *((_DWORD *)v27 + 30);
            LODWORD(v27) = 0;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 2792) = v192;
          }
          else
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v191, VidPnSourceId, v612, 0, 1);
            LODWORD(v27) = 0;
          }
          goto LABEL_874;
        }
LABEL_441:
        LODWORD(v27) = v23;
        goto LABEL_874;
      }
    }
  }
  v193 = (DXGCONTEXT *)a2->Flags.Value;
  if ( ((unsigned int)v193 & 0x10000000) == 0 )
  {
    v194 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v194 + 304) == 1 && (*(_DWORD *)(v194 + 4LL * VidPnSourceId + 1000) & 0x100) == 0 )
    {
      v195 = (_QWORD *)WdLogNewEntry5_WdEvent(v193);
      LODWORD(v27) = -1071775739;
      v195[3] = -1071775739LL;
      v195[4] = this;
      v195[5] = a2->hSource;
      v195[6] = v612;
      v195[7] = VidPnSourceId;
      WdLogEvent5_WdEvent(v195);
      goto LABEL_874;
    }
  }
  if ( ((unsigned __int8)v193 & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v27) = DXGCONTEXT::ValidatePresentRegions(v193, a2, v615[0], v602);
      if ( (int)v27 < 0 )
        goto LABEL_874;
    }
  }
  v196 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
  v197 = *(_QWORD *)(v196 + 2128);
  if ( VidPnSourceId >= *(_DWORD *)(v197 + 80) )
  {
    v198 = WdLogNewEntry5_WdAssertion(v196);
    *(_QWORD *)(v198 + 24) = 712LL;
    WdLogEvent5_WdAssertion(v198);
  }
  v199 = *(_QWORD *)(v197 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v199 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v199 + 144)) )
  {
    v201 = WdLogNewEntry5_WdAssertion(v200);
    *(_QWORD *)(v201 + 24) = 713LL;
    WdLogEvent5_WdAssertion(v201);
  }
  v202 = *(_QWORD *)((char *)v617 + *(_QWORD *)(v197 + 112) + 88);
  if ( !v202 || (v203 = *(_QWORD *)(v202 + 48), (*(_DWORD *)(v203 + 4) & 0x10) != 0) || !v203 )
  {
    v226 = *((_QWORD *)this + 2);
    if ( (*(_DWORD *)(v226 + 4LL * VidPnSourceId + 1000) & 0x200) != 0 || (a2->Flags.Value & 0x10000000) != 0 )
      goto LABEL_295;
    v227 = (_QWORD *)WdLogNewEntry5_WdWarning(*(_DWORD *)(v226 + 4LL * VidPnSourceId + 1000) >> 9, v95, v97, v98);
    LODWORD(v220) = -1071775739;
    v227[3] = -1071775739LL;
    v227[4] = this;
    v227[5] = a2->hSource;
    v227[6] = v612;
    v227[7] = VidPnSourceId;
    WdLogEvent5_WdWarning(v227);
    goto LABEL_872;
  }
  v204 = v620;
  v205 = *(_DWORD *)(*((_QWORD *)this + 17) + 8LL);
  v20 = v205 == (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(v620 + 8))(v203, v95, v97, v98);
  v206 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( v20 )
  {
    if ( (*(_BYTE *)&v206 & 4) != 0 )
      goto LABEL_295;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v652,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v652);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v614);
    v222 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    v220 = (struct DXGALLOCATION *)v222;
    if ( v222 >= 0 )
    {
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v224, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v652);
      goto LABEL_295;
    }
    v225 = WdLogNewEntry5_WdEvent(v223);
    *(_QWORD *)(v225 + 24) = v220;
    *(_QWORD *)(v225 + 32) = this;
    WdLogEvent5_WdEvent(v225);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v652);
    goto LABEL_872;
  }
  if ( (*(_BYTE *)&v206 & 4) == 0 )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v614);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v651,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v651);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v614);
    v207 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    v27 = (struct VIDSCH_SUBMIT_DATA_BASE *)v207;
    if ( v207 < 0 )
    {
      v210 = WdLogNewEntry5_WdEvent(v208);
      *(_QWORD *)(v210 + 24) = v27;
      *(_QWORD *)(v210 + 32) = this;
      WdLogEvent5_WdEvent(v210);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v651);
      goto LABEL_874;
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v209, 1);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v651);
  }
  *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) = (*(__int64 (**)(void))(v204 + 8))();
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                   VidPnSourceId);
  if ( CddInterface )
    (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
LABEL_295:
  v212 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v212 + 2856) != *(_QWORD *)(*(_QWORD *)(v212 + 16) + 16LL) )
  {
    if ( !*(_QWORD *)(v212 + 2856) )
    {
      v318 = WdLogNewEntry5_WdAssertion(v212);
      *(_QWORD *)(v318 + 24) = *((_QWORD *)this + 2);
      *(_QWORD *)(v318 + 32) = -1073741822LL;
      WdLogEvent5_WdAssertion(v318);
      LODWORD(v220) = -1073741811;
      goto LABEL_872;
    }
    v305 = v612;
    *(_QWORD *)&v656.left = 0LL;
    v306 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_DWORD *)&v306 & 0x10000000) != 0 )
    {
      v656.right = HIDWORD(a2[1].hWindow);
      v656.bottom = a2[1].VidPnSourceId;
    }
    else
    {
      v220 = (struct DXGALLOCATION *)v621;
      if ( (*(_BYTE *)&v306 & 4) != 0 )
        v220 = v612;
      v307 = *(_DWORD *)(*((_QWORD *)v220 + 6) + 4LL);
      if ( (v307 & 0x10) != 0 )
      {
        v308 = (_QWORD *)WdLogNewEntry5_WdEvent(v212);
        v308[3] = -1071775482LL;
        v308[4] = this;
        v308[5] = v220;
        WdLogEvent5_WdEvent(v308);
        LODWORD(v220) = -1071775482;
        goto LABEL_872;
      }
      v309 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                          (v307 >> 6) & 0xF);
      v646.Flags.Value = 1;
      memset(&v646, 0, 40);
      v646.Rotation = -1;
      v310 = *((_QWORD *)v220 + 6);
      v653 = v309;
      v646.hAllocation = *(HANDLE *)(v310 + 16);
      v312 = ADAPTER_RENDER::DdiDescribeAllocation(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2136LL),
               &v646,
               v311);
      v314 = v312;
      if ( v312 < 0 )
      {
        v315 = (_QWORD *)WdLogNewEntry5_WdError(Format);
        v315[3] = v314;
        v315[4] = this;
        v315[5] = *((unsigned int *)v220 + 4);
        v315[6] = v220;
        v315[7] = (*(_DWORD *)(*((_QWORD *)v220 + 6) + 4LL) >> 6) & 0xF;
        WdLogEvent5_WdError(v315);
        LODWORD(v220) = -1073741811;
        goto LABEL_872;
      }
      if ( *(_QWORD *)&v646.Width != (_QWORD)v653 )
        goto LABEL_433;
      v316 = 22;
      Format = 22LL;
      if ( v646.Format != D3DDDIFMT_A8R8G8B8 )
        Format = (unsigned int)v646.Format;
      if ( DWORD2(v653) != 21 )
        v316 = DWORD2(v653);
      if ( (_DWORD)Format != v316 )
      {
LABEL_433:
        v317 = (_QWORD *)WdLogNewEntry5_WdEvent(Format);
        v317[3] = -1071775482LL;
        v317[4] = this;
        v317[5] = v220;
        WdLogEvent5_WdEvent(v317);
        LODWORD(v220) = -1071775739;
        goto LABEL_872;
      }
      v656.right = v646.Width;
      v656.bottom = v646.Height;
    }
    LODWORD(v27) = ADAPTER_DISPLAY::PresentDisplayOnly(
                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                     this,
                     VidPnSourceId,
                     a2,
                     &v655,
                     (struct COREDEVICEACCESS *)a3,
                     &v656);
    if ( (int)v27 < 0 )
    {
LABEL_402:
      v231 = (_QWORD *)((char *)this + 288);
      goto LABEL_403;
    }
    if ( (a2->Flags.Value & 4) != 0 )
    {
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(*((struct _KTHREAD ***)this + 2), VidPnSourceId);
      DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v305, 0, 1);
    }
    goto LABEL_391;
  }
  v213 = (*(_BYTE *)&a2->Flags.0 & 0x10) == 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v212 + 80));
  LODWORD(v216) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 376LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
                    VidPnSourceId,
                    0LL);
  if ( (_DWORD)v216 != -1071775486 )
    goto LABEL_307;
  if ( !v213 )
    goto LABEL_308;
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  LOBYTE(v219) = 1;
  v216 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 376LL)
                                                                    + 8LL)
                                                        + 184LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
           VidPnSourceId,
           v219);
  LODWORD(v220) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
  if ( (int)v220 < 0 )
  {
    v221 = WdLogNewEntry5_WdEvent(v215);
    *(_QWORD *)(v221 + 24) = v216;
    WdLogEvent5_WdEvent(v221);
    goto LABEL_313;
  }
LABEL_307:
  if ( (int)v216 < 0 )
  {
LABEL_308:
    v228 = WdLogNewEntry5_WdEvent(v215);
    *(_QWORD *)(v228 + 24) = (int)v216;
    *(_QWORD *)(v228 + 32) = this;
    WdLogEvent5_WdEvent(v228);
    if ( (_DWORD)v216 != -1071775486 && (_DWORD)v216 != -1073741130 && (_DWORD)v216 != -1071775232 )
    {
      v229 = WdLogNewEntry5_WdAssertion(v215);
      *(_QWORD *)(v229 + 24) = 2065LL;
      WdLogEvent5_WdAssertion(v229);
    }
  }
  LODWORD(v220) = v216;
LABEL_313:
  if ( (int)v220 < 0 )
  {
    v230 = WdLogNewEntry5_WdEvent(v215);
    *(_QWORD *)(v230 + 24) = (int)v220;
    *(_QWORD *)(v230 + 32) = this;
    WdLogEvent5_WdEvent(v230);
    goto LABEL_872;
  }
  if ( ((*((_DWORD *)v619 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
LABEL_319:
    v234 = *((_QWORD *)this + 2);
    v235 = *(_QWORD *)(*(_QWORD *)(v234 + 2856) + 2128LL);
    v236 = *(CWin32kLocks **)(v235 + 16);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v236 + 20)
      && !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v236 + 18)) )
    {
      v237 = WdLogNewEntry5_WdAssertion(v236);
      *(_QWORD *)(v237 + 24) = 4248LL;
      WdLogEvent5_WdAssertion(v237);
    }
    if ( VidPnSourceId >= *(_DWORD *)(v235 + 80) )
    {
      v238 = WdLogNewEntry5_WdAssertion(v236);
      *(_QWORD *)(v238 + 24) = 4249LL;
      WdLogEvent5_WdAssertion(v238);
    }
    v239 = v612;
    if ( VidPnSourceId >= *(_DWORD *)(v235 + 80)
      || (v236 = v617, v234 != *(_QWORD *)((char *)v617 + *(_QWORD *)(v235 + 112) + 672)) )
    {
      v301 = (_QWORD *)WdLogNewEntry5_WdWarning(v236, v214, v217, v218);
      v244 = VidPnSourceId;
      v301[3] = -1071775744LL;
      v301[4] = this;
      v301[5] = a2->hSource;
      v301[6] = v239;
      v301[7] = VidPnSourceId;
      WdLogEvent5_WdWarning(v301);
      LODWORD(v27) = -1071775744;
LABEL_410:
      v302 = *((_QWORD *)this + 36);
      if ( v302 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 400LL)
                                                            + 8LL)
                                                + 496LL))(
          v302,
          0LL);
        *((_QWORD *)this + 36) = 0LL;
      }
      if ( (_DWORD)v27 == -1071774920 )
      {
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v303 = *((_QWORD *)this + 2);
          if ( *(_QWORD *)(v303 + 2856) == *(_QWORD *)(*(_QWORD *)(v303 + 16) + 16LL) )
          {
            DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays((struct _KTHREAD **)v303, VidPnSourceId);
            v220 = v619;
            DXGDEVICE::SetDisplayedPrimary(
              *((struct _KTHREAD ***)this + 2),
              VidPnSourceId,
              v239,
              *((_DWORD *)v619 + 34),
              1);
            v304 = *((_DWORD *)v220 + 30);
            LODWORD(v220) = 0;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v244 + 2792) = v304;
LABEL_872:
            v381 = (int)v220;
            goto LABEL_873;
          }
          DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v303, VidPnSourceId, v239, 0, 1);
        }
        LODWORD(v220) = 0;
        goto LABEL_872;
      }
      goto LABEL_391;
    }
    v240 = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
    if ( v240 )
    {
      v241 = *(_QWORD *)(v240 + 2136);
      v242 = v241
           ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v241 + 376) + 8LL) + 448LL))(
               *(_QWORD *)(v241 + 384),
               VidPnSourceId)
           : DmmIsSourceInActiveVidPnTopology(v240, VidPnSourceId);
      if ( !v242 )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 2) + 304LL) == 1 )
        {
          v243 = (_QWORD *)WdLogNewEntry5_WdEvent(v240);
          LODWORD(v27) = -1071775738;
          v244 = VidPnSourceId;
          v243[3] = -1071775738LL;
          v243[4] = this;
          v243[5] = VidPnSourceId;
          WdLogEvent5_WdEvent(v243);
          goto LABEL_410;
        }
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v245 = (_QWORD *)WdLogNewEntry5_WdEvent(v240);
          v244 = VidPnSourceId;
          v245[3] = 0LL;
          v245[4] = this;
          v245[5] = VidPnSourceId;
          WdLogEvent5_WdEvent(v245);
          LODWORD(v27) = -1071774920;
          goto LABEL_410;
        }
      }
    }
    v246 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_DWORD *)&v246 & 0x10000000) == 0 )
    {
      v247 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v247 + 304) == 1 )
      {
        v244 = VidPnSourceId;
        if ( (*(_DWORD *)(v247 + 4LL * VidPnSourceId + 1000) & 0x100) == 0 )
        {
          v248 = (_QWORD *)WdLogNewEntry5_WdEvent(v240);
          LODWORD(v27) = -1071775739;
          v248[3] = -1071775739LL;
          v248[4] = this;
          v248[5] = a2->hSource;
          v248[6] = v239;
          v248[7] = VidPnSourceId;
          WdLogEvent5_WdEvent(v248);
          goto LABEL_410;
        }
      }
    }
    v249 = v612;
    if ( (*(_BYTE *)&v246 & 4) != 0 )
    {
      if ( v612 )
      {
        v250 = *((_QWORD *)v612 + 6);
        if ( v250 )
        {
          if ( (*(_DWORD *)(v250 + 4) & 0x2000) != 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v612) )
          {
            v252 = (_QWORD *)WdLogNewEntry5_WdEvent(v251);
            LODWORD(v220) = -1071775739;
            v252[3] = -1071775739LL;
            v252[4] = this;
            v252[5] = v249;
            WdLogEvent5_WdEvent(v252);
            v253 = *((_QWORD *)this + 36);
            if ( v253 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 496LL))(
                v253,
                0LL);
              *((_QWORD *)this + 36) = 0LL;
            }
            goto LABEL_872;
          }
        }
      }
    }
    if ( (*(_WORD *)&v246 & 0x2000) != 0 )
    {
      v254 = ADAPTER_DISPLAY::GetCurrentOrientation(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
               VidPnSourceId,
               1);
      v655.Flags.Value ^= (*(_BYTE *)&v655.Flags.0 ^ (unsigned __int8)((v254 != 1) << 7)) & 0x80;
    }
    if ( !bTracingEnabled )
    {
LABEL_365:
      LODWORD(v27) = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       a2->BroadcastContextCount,
                       v631,
                       v249,
                       hSource,
                       v618,
                       &v655,
                       a2->pPresentRegions,
                       *((struct _VIDMM_DMA_BUFFER **)this + 36),
                       v619,
                       v613,
                       (struct _D3DKMT_PRESENT *)a3);
      if ( (int)v27 >= 0 )
      {
        v272 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL) + 112LL);
        if ( *(_DWORD *)((char *)v617 + v272 + 964) == -1 )
        {
          v273 = WdLogNewEntry5_WdAssertion(v272);
          *(_QWORD *)(v273 + 24) = 3371LL;
          WdLogEvent5_WdAssertion(v273);
        }
      }
      v231 = (_QWORD *)((char *)this + 288);
      *((_QWORD *)this + 36) = 0LL;
      if ( (int)v27 < 0 )
        goto LABEL_403;
      if ( (a2->Flags.Value & 4) == 0 )
        goto LABEL_392;
      v622 = (char *)*((_QWORD *)this + 2);
      v274 = v622 + 208;
      if ( v622 != (char *)-208LL && *((struct _KTHREAD **)v622 + 27) == KeGetCurrentThread() )
      {
        v275 = WdLogNewEntry5_WdAssertion(v272);
        *(_QWORD *)(v275 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v275);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v274, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v278 = *((_DWORD *)v274 + 4);
          if ( v278 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v276, &EventBlockThread, v277, v278);
        }
        ExAcquirePushLockExclusiveEx(v274, 0LL);
      }
      v279 = v622;
      v280 = (COREACCESS *)((unsigned __int64)VidPnSourceId << 6);
      v281 = VidPnSourceId;
      v625 = v280;
      *(_QWORD *)((char *)v280 + (_QWORD)v622 + 1320) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1328) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1336) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1344) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1352) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1360) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1368) = 0LL;
      *(_QWORD *)((char *)v280 + (_QWORD)v279 + 1376) = 0LL;
      *(_DWORD *)&v279[4 * VidPnSourceId + 2344] = 0;
      *((_QWORD *)v274 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v274, 0LL);
      KeLeaveCriticalRegion();
      v283 = *((_QWORD *)this + 2);
      v607 = *((_DWORD *)v619 + 34);
      if ( v283 != -208 && *(struct _KTHREAD **)(v283 + 216) == KeGetCurrentThread() )
      {
        v284 = WdLogNewEntry5_WdAssertion(v282);
        *(_QWORD *)(v284 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v284);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v283 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v287 = *(_DWORD *)(v283 + 224);
          if ( v287 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v285, &EventBlockThread, v286, v287);
        }
        ExAcquirePushLockExclusiveEx(v283 + 208, 0LL);
      }
      *(_QWORD *)(v283 + 216) = KeGetCurrentThread();
      v288 = v612;
      *(_QWORD *)(v283 + 8 * v281 + 808) = v612;
      *(_DWORD *)(v283 + 4 * v281 + 936) = v607;
      if ( v288 )
      {
        v289 = v625;
        *(_QWORD *)((char *)v625 + v283 + 1328) = 0LL;
        *(_QWORD *)((char *)v289 + v283 + 1336) = 0LL;
        *(_QWORD *)((char *)v289 + v283 + 1344) = 0LL;
        *(_QWORD *)((char *)v289 + v283 + 1352) = 0LL;
        *(_QWORD *)((char *)v289 + v283 + 1360) = 0LL;
        *(_QWORD *)((char *)v289 + v283 + 1368) = 0LL;
        *(_QWORD *)((char *)v289 + v283 + 1376) = 0LL;
        *(_DWORD *)(v283 + 4 * v281 + 2344) = 0;
        *(_QWORD *)((char *)v289 + v283 + 1320) = v288;
      }
      *(_QWORD *)(v283 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v283 + 208, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v281 + 2792) = *((_DWORD *)v619 + 30);
      goto LABEL_391;
    }
    v255 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v256 = *(_QWORD *)(v255 + 408);
    v257 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v255 + 400) + 8LL) + 336LL);
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v258 = v257(v256, hSource);
      v259 = v655.Flags.Value >> 3;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LOBYTE(v259) = (*(_BYTE *)&v655.Flags.0 & 8) != 0;
        Template_pqpqtt(*((_QWORD *)this + 36) == 0LL, v259, v258);
      }
      goto LABEL_365;
    }
    v257(v256, v618);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                       + 8LL)
                                           + 336LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
      hSource);
    v262 = v655.SubRectCnt;
    v263 = v655.pDstSubRects;
    v264 = a2->hWindow;
    v630 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 36);
    v606 = v655.SubRectCnt;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
    {
      Template_ppxppttqddddddddq(
        HIDWORD(*(_QWORD *)&v655.DstRect.left),
        HIDWORD(*(_QWORD *)&v655.DstRect.right),
        HIDWORD(*(_QWORD *)&v655.SrcRect.left),
        v264,
        v630);
      v262 = v606;
    }
    v265 = 0;
    if ( !v262 )
      goto LABEL_365;
    v266 = v630;
    while ( 1 )
    {
      v267 = v262 - v265;
      if ( v262 - v265 > 0x10 )
        break;
      v268 = v262 - v265;
      if ( v267 )
        goto LABEL_359;
LABEL_361:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        LODWORD(HandleInformation) = v268;
        LODWORD(Object) = v267 <= 0x10;
        Template_ptqDR2DR2DR2DR2((__int64)v665, v260, v261, v266, Object, HandleInformation, v665, v664, v663, v669);
      }
      v262 = v606;
      v265 += 16;
      if ( v265 >= v606 )
      {
        v249 = v612;
        goto LABEL_365;
      }
    }
    v268 = 16;
LABEL_359:
    LODWORD(v261) = v265;
    v269 = v268;
    v260 = 0LL;
    do
    {
      v260 += 4LL;
      v270 = (unsigned int)v261;
      v261 = (unsigned int)(v261 + 1);
      v271 = &v263[v270];
      *(_DWORD *)&v664[v260 + 60] = v271->left;
      *(_DWORD *)&v663[v260 + 60] = v271->right;
      *(_DWORD *)&v663[v260 - 4] = v271->top;
      *(_DWORD *)&v668[v260 + 60] = v271->bottom;
      --v269;
    }
    while ( v269 );
    goto LABEL_361;
  }
  v231 = (_QWORD *)((char *)this + 288);
  LODWORD(v27) = DXGCONTEXT::AcquireDmaBuffer(
                   this,
                   (struct _VIDMM_DMA_BUFFER **)this + 36,
                   (struct COREDEVICEACCESS *)a3,
                   0);
  if ( (int)v27 >= 0 )
  {
    if ( !*v231 )
    {
      v233 = WdLogNewEntry5_WdAssertion(v232);
      *(_QWORD *)(v233 + 24) = 3258LL;
      WdLogEvent5_WdAssertion(v233);
    }
    goto LABEL_319;
  }
LABEL_403:
  v298 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v298 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v298 + 144))
    && (_DWORD)v27 != -1073741130 )
  {
    v299 = WdLogNewEntry5_WdAssertion(v298);
    *(_QWORD *)(v299 + 24) = 4600LL;
    WdLogEvent5_WdAssertion(v299);
  }
  if ( *v231 )
  {
    v300 = WdLogNewEntry5_WdAssertion(v298);
    *(_QWORD *)(v300 + 24) = 4601LL;
    WdLogEvent5_WdAssertion(v300);
  }
LABEL_874:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v632);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v621);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v612);
  return (unsigned int)v27;
}
