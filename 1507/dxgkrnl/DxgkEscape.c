/*
 * XREFs of DxgkEscape @ 0x1C009FD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00096CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C000FB08 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     DpiGetWhqlInfo @ 0x1C0010E20 (DpiGetWhqlInfo.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C001B128 (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     DpiIsHybridDiscreteAdapter @ 0x1C0023B78 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C0023B84 (DpiIsHybridIntegratedAdapter.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C002643C (DxgkGetAdapterMiracastInfo.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C00284E0 (DxgkGetAdapterBrightnessInfo.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C011E6E0 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     _DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C011EE9C (_DxgkEscape_--_8_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C011F6C4 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0124038 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0124150 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01247E4 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0124848 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgkRequestMachineCrash@@YAJPEAU_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE@@@Z @ 0x1C0126004 (-DxgkRequestMachineCrash@@YAJPEAU_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE@@@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C0126628 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0126CBC (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C0135D28 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C013973C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C013DCD4 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C013FFE0 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C01400CC (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0141670 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C015624C (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0156310 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C016C018 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DmmEscape @ 0x1C01759AC (DmmEscape.c)
 */

__int64 __fastcall DxgkEscape(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  void *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *p_Src; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v24; // r8
  char *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int Diagnostics; // ebx
  size_t v31; // r8
  char *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  int LiveDumpWithWdLogs; // eax
  PVOID v36; // rcx
  __int64 v37; // r8
  int Param1; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  _QWORD *v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  signed __int64 v59; // rbx
  DXGADAPTER *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // rax
  unsigned int v63; // eax
  size_t v64; // r8
  char *v65; // rcx
  char v66; // bl
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r9
  int v72; // edx
  int v73; // edx
  int v74; // edx
  __int64 v75; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v77; // edx
  char v78; // r15
  _QWORD *v79; // rax
  unsigned __int64 v80; // rdx
  void *v81; // rax
  UINT v82; // eax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 Param2; // rdx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int DebugInfo; // eax
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int v93; // edx
  unsigned int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  struct DXGGLOBAL *v103; // rax
  struct DXGGLOBAL *v104; // r15
  DXGDIAGNOSTICS *v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r8
  unsigned int v109; // eax
  __int64 v110; // rax
  DXGADAPTER *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  DXGADAPTER *v117; // rcx
  __int64 v118; // rax
  bool v119; // bl
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rcx
  EDIDCACHE *v123; // rcx
  char v124; // r9
  unsigned int v125; // edx
  __int64 v126; // r8
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v128; // rax
  size_t v129; // r8
  char *v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r9
  __int64 v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rcx
  __int64 v142; // r8
  DXGGLOBAL *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // r8
  struct DXGGLOBAL *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  unsigned __int64 v154; // r8
  unsigned __int64 v155; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-468h]
  char v157; // [rsp+30h] [rbp-458h]
  char v158; // [rsp+31h] [rbp-457h]
  char v159[6]; // [rsp+32h] [rbp-456h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-450h] BYREF
  __int64 v161; // [rsp+48h] [rbp-440h] BYREF
  DXGADAPTER *v162; // [rsp+50h] [rbp-438h] BYREF
  __int64 v163; // [rsp+58h] [rbp-430h] BYREF
  __int64 v164; // [rsp+60h] [rbp-428h] BYREF
  char v165; // [rsp+68h] [rbp-420h]
  DXGADAPTER *v166; // [rsp+70h] [rbp-418h] BYREF
  unsigned int v167; // [rsp+78h] [rbp-410h]
  __int64 v168; // [rsp+80h] [rbp-408h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp-400h] BYREF
  __int64 v170; // [rsp+90h] [rbp-3F8h]
  __int64 v171; // [rsp+98h] [rbp-3F0h]
  _BYTE v172[24]; // [rsp+A0h] [rbp-3E8h] BYREF
  __int64 v173; // [rsp+B8h] [rbp-3D0h] BYREF
  char v174[8]; // [rsp+C0h] [rbp-3C8h] BYREF
  DXGADAPTER *v175; // [rsp+C8h] [rbp-3C0h]
  char v176; // [rsp+D0h] [rbp-3B8h]
  char v177[8]; // [rsp+D8h] [rbp-3B0h] BYREF
  unsigned int *v178; // [rsp+E0h] [rbp-3A8h]
  __int64 v179; // [rsp+F0h] [rbp-398h]
  struct DXGADAPTER *v180; // [rsp+F8h] [rbp-390h]
  int v181; // [rsp+100h] [rbp-388h]
  _BYTE v182[24]; // [rsp+108h] [rbp-380h] BYREF
  char v183[8]; // [rsp+120h] [rbp-368h] BYREF
  DXGPUSHLOCK *v184; // [rsp+128h] [rbp-360h]
  int v185; // [rsp+130h] [rbp-358h]
  _DXGKARG_ESCAPE v186; // [rsp+138h] [rbp-350h] BYREF
  unsigned int v187; // [rsp+168h] [rbp-320h]
  struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *v188; // [rsp+170h] [rbp-318h]
  unsigned int v189; // [rsp+178h] [rbp-310h]
  __int64 v190; // [rsp+180h] [rbp-308h]
  struct _DXGKARG_ESCAPE v191; // [rsp+188h] [rbp-300h] BYREF
  unsigned int Param1_high; // [rsp+1B8h] [rbp-2D0h]
  __int64 v193; // [rsp+1C0h] [rbp-2C8h] BYREF
  __int64 v194; // [rsp+1C8h] [rbp-2C0h]
  __int64 v195; // [rsp+1D0h] [rbp-2B8h]
  __int64 v196; // [rsp+1D8h] [rbp-2B0h]
  __int64 v197; // [rsp+1E0h] [rbp-2A8h]
  __int64 v198; // [rsp+1E8h] [rbp-2A0h]
  union _LARGE_INTEGER LocalTime; // [rsp+1F0h] [rbp-298h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+1F8h] [rbp-290h] BYREF
  _DWORD v201[4]; // [rsp+200h] [rbp-288h] BYREF
  _QWORD v202[8]; // [rsp+210h] [rbp-278h] BYREF
  char Src; // [rsp+250h] [rbp-238h] BYREF

  v181 = 2016;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2016);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v10 = *(_QWORD *)(ProcessWin32Process + 248);
    v11 = 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v12);
    v11 = 0LL;
    v10 = 0LL;
  }
  v168 = v10;
  v13 = 0LL;
  v179 = 0LL;
  v14 = 0LL;
  v170 = 0LL;
  p_Src = (struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *)&Src;
  if ( !v10 )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_9:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2016);
    return 3221225485LL;
  }
  *(_OWORD *)P = 0LL;
  v20 = a1[6];
  if ( v20 > 0x200 )
  {
    p_Src = (struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *)ExAllocatePoolWithTag(PagedPool, v20, 0x4B677844u);
    P[0] = p_Src;
  }
  if ( !p_Src )
  {
    v21 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v21 + 24) = a1[6];
    *(_QWORD *)(v21 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
    DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v22, &EventProfilerExit, v23, 2016);
    return 3221225495LL;
  }
  v24 = a1[6];
  v25 = (char *)*((_QWORD *)a1 + 2);
  if ( &v25[v24] < v25 || (unsigned __int64)&v25[v24] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(p_Src, v25, v24);
  v29 = a1[2];
  if ( (int)v29 > 24 )
  {
    if ( (_DWORD)v29 == 25 )
    {
      if ( a1[6] != 24 )
        goto LABEL_62;
      LiveDumpWithWdLogs = DxgkRequestMachineCrash(p_Src);
LABEL_39:
      Diagnostics = LiveDumpWithWdLogs;
LABEL_40:
      DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
LABEL_41:
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q((__int64)v36, &EventProfilerExit, v37, 2016);
      return (unsigned int)Diagnostics;
    }
    if ( (_DWORD)v29 != 1029 )
    {
LABEL_69:
      v43 = 0LL;
      v171 = 0LL;
      v166 = 0LL;
      v180 = 0LL;
      if ( (_DWORD)v29 != 13 )
        goto LABEL_72;
      Global = DXGGLOBAL::GetGlobal(v29, v26, v27, v28);
      v45 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global);
      v180 = v45;
      if ( v45 )
      {
        P[1] = v45;
LABEL_72:
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182, (struct DXGPROCESS *)v10);
        v49 = *a1;
        if ( (_DWORD)v49 )
        {
          v46 = ((unsigned int)v49 >> 6) & 0xFFFFFF;
          v49 = (unsigned int)v49 >> 30;
          if ( (unsigned int)v46 < *(_DWORD *)(v10 + 232)
            && (v48 = *(_QWORD *)(v10 + 216),
                v47 = *(unsigned int *)(v48 + 16LL * (unsigned int)v46 + 8),
                (_DWORD)v49 == ((*(_DWORD *)(v48 + 16LL * (unsigned int)v46 + 8) >> 4) & 3))
            && (v47 & 0x1000) == 0
            && (v47 & 0xF) != 0
            && (*(_BYTE *)(v48 + 16LL * (unsigned int)v46 + 8) & 0xF) == 1 )
          {
            v43 = *(_QWORD *)(v48 + 16LL * (unsigned int)v46);
          }
          else
          {
            v43 = 0LL;
          }
          v171 = v43;
        }
        if ( !v43 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v49, v47, v48);
          v50[3] = *a1;
          v50[4] = -1073741811LL;
LABEL_83:
          WdLogEvent5_WdWarning(v50);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182);
          goto LABEL_62;
        }
        v51 = a1[1];
        if ( v51 )
        {
          v46 = (v51 >> 6) & 0xFFFFFF;
          v52 = v51 >> 30;
          if ( (unsigned int)v46 < *(_DWORD *)(v10 + 232)
            && (v48 = *(_QWORD *)(v10 + 216),
                v47 = *(unsigned int *)(v48 + 16LL * (unsigned int)v46 + 8),
                (_DWORD)v52 == ((*(_DWORD *)(v48 + 16LL * (unsigned int)v46 + 8) >> 4) & 3))
            && (v47 & 0x1000) == 0
            && (v47 & 0xF) != 0
            && (*(_BYTE *)(v48 + 16LL * (unsigned int)v46 + 8) & 0xF) == 3 )
          {
            v13 = *(_QWORD *)(v48 + 16LL * (unsigned int)v46);
          }
          else
          {
            v13 = 0LL;
          }
          v179 = v13;
          if ( !v13 || v43 != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) && v43 != *(_QWORD *)(v13 + 18704) )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v52, v47, v48);
            v50[3] = v43;
            v50[4] = a1[1];
            goto LABEL_83;
          }
        }
        v53 = a1[7];
        if ( (_DWORD)v53 )
        {
          v46 = ((unsigned int)v53 >> 6) & 0xFFFFFF;
          v53 = (unsigned int)v53 >> 30;
          if ( (unsigned int)v46 < *(_DWORD *)(v10 + 232)
            && (v48 = *(_QWORD *)(v10 + 216),
                v47 = *(unsigned int *)(v48 + 16LL * (unsigned int)v46 + 8),
                (_DWORD)v53 == ((*(_DWORD *)(v48 + 16LL * (unsigned int)v46 + 8) >> 4) & 3))
            && (v47 & 0x1000) == 0
            && (v47 & 0xF) != 0
            && (v46 *= 2LL, (*(_BYTE *)(v48 + 8 * v46 + 8) & 0xF) == 7) )
          {
            v14 = *(_QWORD *)(v48 + 8 * v46);
          }
          else
          {
            v14 = 0LL;
          }
          v170 = v14;
          if ( !v14 || !v13 || v13 != *(_QWORD *)(v14 + 16) )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v53, v47, v48);
            v50[3] = v43;
            v50[4] = v13;
            v50[5] = a1[7];
            goto LABEL_83;
          }
        }
        if ( v13 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v13 + 64));
          v43 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
          v171 = v43;
        }
        if ( v14 )
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 32));
        if ( _InterlockedAdd64((volatile signed __int64 *)(v43 + 24), 1uLL) <= 0 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v46, v53, v47, v48);
          *(_QWORD *)(v54 + 24) = 1050LL;
          WdLogEvent5_WdAssertion(v54);
        }
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182);
        v162 = (DXGADAPTER *)v43;
        v163 = v13;
        v161 = v14;
        if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v43, 0LL, &v166, 0LL) < 0 )
        {
          v60 = v166;
        }
        else
        {
          v59 = _InterlockedExchangeAdd64((volatile signed __int64 *)v166 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v60 = v166;
          v61 = v59 - 1;
          if ( !v61 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v166 + 2), v166);
          if ( v61 < 0 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
            *(_QWORD *)(v62 + 24) = 1067LL;
            WdLogEvent5_WdAssertion(v62);
          }
        }
        if ( a1[2] == 8 )
        {
          v63 = a1[6];
          if ( v63 >= 0xC
            && v63 >= HIDWORD(p_Src->Param1)
            && LODWORD(p_Src->Param1) == 1484026436
            && LODWORD(p_Src->Param2) == 14 )
          {
            Diagnostics = DxgkDrtTestEscape((struct DXGADAPTER *)v43, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            if ( Diagnostics >= 0 )
            {
              v64 = a1[6];
              v65 = (char *)*((_QWORD *)a1 + 2);
              if ( (unsigned __int64)&v65[v64] > MmUserProbeAddress || &v65[v64] <= v65 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v65, p_Src, v64);
            }
LABEL_189:
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v161);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v163);
            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v162);
            goto LABEL_40;
          }
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v173, (struct DXGADAPTER *const)v43, 0LL);
        COREACCESS::COREACCESS((COREACCESS *)v172, v180);
        v167 = 0;
        v164 = v43;
        v66 = 0;
        v157 = 0;
        v165 = 0;
        LODWORD(v168) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v168 + 80) + 224LL))(0LL);
        v69 = a1[2];
        if ( (_DWORD)v69 == 13 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v172);
LABEL_163:
          v71 = v167;
          goto LABEL_164;
        }
        if ( (a1[3] & 1) != 0 )
        {
          v158 = 0;
          if ( !(_DWORD)v69 || (_DWORD)v69 == 3 && a1[6] >= 0xC && LODWORD(p_Src->Param1) == 3 )
            v158 = 1;
          if ( *(_QWORD *)(v43 + 1984) )
            v158 = 1;
          Diagnostics = COREADAPTERACCESS::AcquireExclusive(&v173);
          if ( Diagnostics < 0 )
          {
            v78 = 0;
            goto LABEL_342;
          }
          if ( !v158 )
          {
            v70 = *(_QWORD *)(v43 + 1984);
            if ( v70 )
              ADAPTER_RENDER::FlushScheduler(v70, 2, 0xFFFFFFFF, 0);
          }
          v66 = 0;
          v71 = 1LL;
LABEL_164:
          if ( a1[1] )
          {
            if ( *(_DWORD *)(v13 + 352) != 1 )
            {
              Diagnostics = -1073741130;
              v78 = v165;
              goto LABEL_342;
            }
            v60 = v166;
            v66 = v165;
            v157 = v165;
          }
          switch ( a1[2] )
          {
            case 0u:
              if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v43 + 432) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
              {
                v84 = WdLogNewEntry5_WdWarning(
                        ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange,
                        v67,
                        0x1C0000000uLL,
                        v71);
                *(_QWORD *)(v84 + 24) = v43;
                Diagnostics = -1073741637;
                *(_QWORD *)(v84 + 32) = -1073741637LL;
                WdLogEvent5_WdWarning(v84);
                v78 = v157;
                goto LABEL_342;
              }
              v80 = a1[6];
              if ( !(_DWORD)v80 || !*((_QWORD *)a1 + 2) )
              {
                v83 = (_QWORD *)WdLogNewEntry5_WdWarning(
                                  ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange,
                                  v80,
                                  0x1C0000000uLL,
                                  v71);
                v83[3] = a1[6];
                v83[4] = *((_QWORD *)a1 + 2);
                v83[5] = -1073741811LL;
                WdLogEvent5_WdWarning(v83);
                goto LABEL_183;
              }
              if ( v13 )
                v81 = *(void **)(v13 + 360);
              else
                v81 = 0LL;
              v186.hDevice = v81;
              if ( v170 )
                v11 = *(void **)(v170 + 168);
              v186.hContext = v11;
              v82 = a1[3];
              v186.Flags.Value = v82;
              if ( *(_DWORD *)(v43 + 260) == 4098 )
              {
                if ( !(unsigned int)IsAMDDriverEscapeAllowed(p_Src, v80) )
                {
                  Diagnostics = -1073741637;
                  v78 = v157;
                  goto LABEL_342;
                }
                LOBYTE(v82) = v186.Flags.0;
              }
              v186.Flags.Value = v82 & 7;
              v186.PrivateDriverDataSize = a1[6];
              v186.pPrivateDriverData = p_Src;
              Diagnostics = DXGADAPTER::DdiEscape((DXGADAPTER *)v43, &v186);
              goto LABEL_335;
            case 1u:
              if ( !v60 )
                goto LABEL_186;
              if ( v13 )
                v11 = *(void **)(v13 + 536);
              if ( a1[6] < 0x58 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              Diagnostics = VIDMM_EXPORT::VidMmEscape(
                              *(VIDMM_EXPORT **)(*((_QWORD *)v60 + 248) + 400LL),
                              *(struct VIDMM_GLOBAL **)(*((_QWORD *)v60 + 248) + 408LL),
                              (struct VIDMM_DEVICE *)v11,
                              (struct _D3DKMT_VIDMM_ESCAPE *)p_Src,
                              v71);
              goto LABEL_335;
            case 2u:
              if ( *((_QWORD *)a1 + 2) )
              {
                v67 = a1[6];
                if ( (unsigned int)v67 < 4 )
                  goto LABEL_183;
                switch ( LODWORD(p_Src->Param1) )
                {
                  case 0:
                    goto LABEL_213;
                  case 1:
                    v89 = 2LL;
                    goto LABEL_214;
                  case 2:
                    v89 = 1LL;
                    goto LABEL_214;
                  case 3:
                    v89 = 3LL;
                    goto LABEL_214;
                  case 4:
                  case 5:
                    if ( !v60 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v70, v67, 0x1C0000000uLL, v71) + 24) = 0LL;
                      Diagnostics = -1073741637;
                      v78 = v157;
                      goto LABEL_342;
                    }
                    Diagnostics = TdrDbgCtrl(4LL, v67, 0x1C0000000uLL, v71);
                    if ( Diagnostics < 0 )
                      goto LABEL_335;
                    v91 = *(_QWORD *)(*((_QWORD *)v60 + 248) + 384LL);
                    v201[0] = 2;
                    v201[1] = p_Src->Param1;
                    DebugInfo = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 248) + 376LL)
                                                                                         + 8LL)
                                                                             + 64LL))(
                                  v91,
                                  v201);
                    goto LABEL_215;
                  case 6:
                    v89 = 5LL;
                    goto LABEL_214;
                  case 7:
                    v89 = 6LL;
                    goto LABEL_214;
                  case 8:
                    if ( (unsigned int)v67 < 8 )
                    {
                      Diagnostics = -1073741811;
                      v78 = v157;
                      goto LABEL_342;
                    }
                    if ( !v60 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v70, v67, 0x1C0000000uLL, v71) + 24) = v43;
                      Diagnostics = -1073741637;
                      v78 = v157;
                      goto LABEL_342;
                    }
                    Diagnostics = TdrDbgCtrl(4LL, v67, 0x1C0000000uLL, v71);
                    if ( Diagnostics < 0 )
                      goto LABEL_335;
                    v92 = *(_QWORD *)(*((_QWORD *)v60 + 248) + 384LL);
                    LODWORD(v191.hKmdProcessHandle) = 2;
                    HIDWORD(v191.hKmdProcessHandle) = p_Src->Param1;
                    Param1_high = HIDWORD(p_Src->Param1);
                    DebugInfo = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 248) + 376LL)
                                                                                         + 8LL)
                                                                             + 64LL))(
                                  v92,
                                  &v191.hKmdProcessHandle);
                    break;
                  default:
                    goto LABEL_183;
                }
              }
              else
              {
LABEL_213:
                v89 = 0LL;
LABEL_214:
                DebugInfo = TdrDbgCtrl(v89, v67, 0x1C0000000uLL, v71);
              }
              goto LABEL_215;
            case 3u:
              if ( !v60 )
                goto LABEL_186;
              if ( a1[6] < 0xC )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( LODWORD(p_Src->Param1) == 2 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( LODWORD(p_Src->Param1) != 3 )
              {
                Diagnostics = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 248) + 376LL) + 8LL) + 64LL))(
                                *(_QWORD *)(*((_QWORD *)v60 + 248) + 384LL),
                                p_Src);
                goto LABEL_335;
              }
              if ( !(_DWORD)v71 )
              {
LABEL_183:
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              v88 = 5000000;
              if ( HIDWORD(p_Src->Param1) < 0x4C4B40 )
                v88 = HIDWORD(p_Src->Param1);
              Interval.QuadPart = -(__int64)v88;
              KeDelayExecutionThread(0, 0, &Interval);
              Diagnostics = 0;
              v78 = v157;
              goto LABEL_337;
            case 4u:
              if ( a1[6] < 0xC || !v13 )
                goto LABEL_183;
              DebugInfo = DXGDEVICE::Escape((DXGDEVICE *)v13, (struct _D3DKMT_DEVICE_ESCAPE *)p_Src);
              goto LABEL_215;
            case 5u:
              if ( !*(_QWORD *)(v43 + 1976) )
                goto LABEL_186;
              v86 = a1[6];
              if ( (unsigned int)v86 < 0x80 )
                goto LABEL_183;
              Param2 = p_Src->Param2;
              if ( Param2 > 0x19000 || v86 != Param2 + 127 && Param2 )
                goto LABEL_183;
              Diagnostics = DmmEscape(v43, p_Src, 0x1C0000000uLL, v71);
              goto LABEL_335;
            case 6u:
              v93 = a1[6];
              if ( v93 < 8 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              DebugInfo = DxgDbgTakeSnapshot((char *)&p_Src->Param1 + 4, v93 - 4, (unsigned int *)p_Src);
              goto LABEL_215;
            case 7u:
              if ( (a1[3] & 1) == 0 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( a1[6] != 4 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( (*(_DWORD *)(v43 + 284) & 2) == 0 )
                *(_BYTE *)(v43 + 164) = p_Src->Param1;
              Diagnostics = 0;
              v78 = v157;
              goto LABEL_337;
            case 8u:
              v94 = a1[6];
              if ( v94 < 0xC || v94 < HIDWORD(p_Src->Param1) || LODWORD(p_Src->Param1) != 1484026436 )
                goto LABEL_183;
              DebugInfo = DxgkDrtTestEscape(
                            (struct DXGADAPTER *)v43,
                            (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src,
                            (struct COREADAPTERACCESS *)&v173);
              goto LABEL_215;
            case 9u:
              Diagnostics = -1073741811;
              v95 = a1[6];
              if ( (unsigned int)v95 < 4 || v95 != LODWORD(p_Src->Param1) + 4LL )
                goto LABEL_335;
              v193 = 0LL;
              v194 = 0LL;
              v195 = 0LL;
              v196 = 0LL;
              v197 = 0LL;
              v198 = 0LL;
              LocalTime.QuadPart = 0LL;
              SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
              ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
              v193 = 0x400000000ALL;
              LODWORD(v198) = 0;
              v197 = 0LL;
              v194 = 0LL;
              v195 = 0LL;
              v196 = 0LL;
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v193, v96, v97, v98);
              v103 = DXGGLOBAL::GetGlobal(v100, v99, v101, v102);
              v104 = v103;
              if ( !v103 )
                goto LABEL_261;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v183, (struct _KTHREAD **)v103 + 65);
              DXGPUSHLOCK::AcquireShared(v184);
              v185 = 1;
              v105 = (DXGDIAGNOSTICS *)*((_QWORD *)v104 + 68);
              if ( !v105 )
              {
                v106 = WdLogNewEntry5_WdError(0LL);
                *(_QWORD *)(v106 + 24) = p_Src;
                *(_QWORD *)(v106 + 32) = v104;
                WdLogEvent5_WdError(v106);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v183);
                if ( v165 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v164);
                COREACCESS::~COREACCESS((COREACCESS *)v172);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v173);
                ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v161);
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v163);
                DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v162);
                DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
                if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                  Template_q(v107, &EventProfilerExit, v108, 2016);
                return 3221225860LL;
              }
              Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(
                              v105,
                              (unsigned __int8 *)&p_Src->Param1 + 4,
                              (unsigned int *)p_Src);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v183);
LABEL_261:
              v78 = v165;
              goto LABEL_336;
            case 0xAu:
              if ( !*(_QWORD *)(v43 + 1976) )
                goto LABEL_186;
              v109 = a1[6];
              if ( v109 < 0x18 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( v109 != LODWORD(p_Src->Param1) )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( (_DWORD)v168 )
                DebugInfo = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
              else
                DebugInfo = OutputDuplGetDebugInfo(
                              (struct DXGADAPTER *)v43,
                              (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
              goto LABEL_215;
            case 0xBu:
              if ( !*(_QWORD *)(v43 + 1976) )
                goto LABEL_186;
              v110 = a1[6];
              if ( (unsigned int)v110 < 8 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( v110 != HIDWORD(p_Src->Param1) + 8LL )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( (_DWORD)v168 )
                DebugInfo = OutputDuplGetDiagnosticBuffer(0LL, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
              else
                DebugInfo = OutputDuplGetDiagnosticBuffer(
                              (struct DXGADAPTER *)v43,
                              (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
              goto LABEL_215;
            case 0xCu:
              if ( (*(_DWORD *)(v43 + 284) & 0x10) != 0 && !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v43) )
              {
                v191.hDevice = 0LL;
                v191.hContext = 0LL;
                v191.Flags.Value = a1[3];
                v191.PrivateDriverDataSize = a1[6];
                v191.pPrivateDriverData = p_Src;
                DebugInfo = DXGADAPTER::DdiEscape(v117, &v191);
                goto LABEL_215;
              }
              Diagnostics = -1071775742;
              v78 = v157;
              goto LABEL_342;
            case 0xDu:
              v111 = v180;
              if ( !DXGADAPTER::IsBddFallbackDriver(v180) )
              {
                v116 = WdLogNewEntry5_WdAssertion(v113, v112, v114, v115);
                *(_QWORD *)(v116 + 24) = 8560LL;
                WdLogEvent5_WdAssertion(v116);
              }
              v186.hKmdProcessHandle = 0LL;
              v190 = 0LL;
              v187 = a1[3];
              v189 = a1[6];
              v188 = p_Src;
              DebugInfo = DXGADAPTER::DdiEscape(v111, (const struct _DXGKARG_ESCAPE *)&v186.hKmdProcessHandle);
              goto LABEL_215;
            case 0xEu:
              if ( a1[6] != 8 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( !LODWORD(p_Src->Param1) )
              {
                v119 = HIDWORD(p_Src->Param1) != 0;
                *((_BYTE *)DXGGLOBAL::GetGlobal(v70, v67, 0x1C0000000LL, v71) + 768) = v119;
                Diagnostics = 0;
                v78 = v157;
                goto LABEL_337;
              }
              if ( LODWORD(p_Src->Param1) != 15 )
              {
                v118 = WdLogNewEntry5_WdAssertion(v70, v67, 0x1C0000000uLL, v71);
                *(_QWORD *)(v118 + 24) = SLODWORD(p_Src->Param1);
                WdLogEvent5_WdAssertion(v118);
                Diagnostics = -1073741811;
                goto LABEL_335;
              }
              v70 = *(_QWORD *)(v43 + 1976);
              if ( v70 )
              {
                DebugInfo = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                              (ADAPTER_DISPLAY *)v70,
                              HIDWORD(p_Src->Param1));
                goto LABEL_215;
              }
LABEL_186:
              v85 = WdLogNewEntry5_WdError(v70);
              Diagnostics = -1073741637;
              *(_QWORD *)(v85 + 24) = v43;
              *(_QWORD *)(v85 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v85);
              if ( v157 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v164);
              COREACCESS::~COREACCESS((COREACCESS *)v172);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v173);
              goto LABEL_189;
            case 0xFu:
              if ( !*(_QWORD *)(v43 + 1976) )
                goto LABEL_186;
              v120 = a1[6];
              if ( (unsigned int)v120 < 8 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( v120 < 44 * (unsigned __int64)HIDWORD(p_Src->Param1) + 8 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              DebugInfo = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                            *(ADAPTER_DISPLAY **)(v43 + 1976),
                            (struct _D3DKMT_DISPLAYMODELIST *)p_Src);
              goto LABEL_215;
            case 0x10u:
              if ( a1[6] < 4 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              DebugInfo = DpiGetWhqlInfo(*(_QWORD *)(v43 + 176), p_Src);
              goto LABEL_215;
            case 0x11u:
              if ( (a1[3] & 1) == 0 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              if ( a1[6] < 0x608 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              DebugInfo = DpiBrightnessEscape(
                            *(struct _DEVICE_OBJECT **)(v43 + 176),
                            (struct _D3DKMT_BRIGHTNESS_INFO *)p_Src);
              goto LABEL_215;
            case 0x12u:
              v121 = a1[6];
              if ( (unsigned int)v121 < 4 )
                goto LABEL_183;
              v122 = LODWORD(p_Src->Param1) + 4LL;
              if ( v121 != v122 )
                goto LABEL_183;
              v123 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v122, v67, 0x1C0000000LL, v71) + 80);
              if ( !v123 )
              {
                Diagnostics = -1073741801;
                v78 = v157;
                goto LABEL_342;
              }
              DebugInfo = EDIDCACHE::GetEdids(v123, (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src);
LABEL_215:
              Diagnostics = DebugInfo;
LABEL_335:
              v78 = v157;
LABEL_336:
              if ( Diagnostics >= 0 )
                goto LABEL_337;
              goto LABEL_342;
            case 0x13u:
              if ( a1[6] < 0x10 )
              {
                Diagnostics = -1073741811;
                v78 = v157;
                goto LABEL_342;
              }
              HIDWORD(p_Src->Param1) &= 7u;
              DxgkGetAdapterBrightnessInfo(*(_QWORD *)(v43 + 176), p_Src);
              Diagnostics = 0;
              v78 = v157;
              goto LABEL_337;
            case 0x15u:
              if ( a1[6] >= 8 && v60 && v13 )
              {
                v124 = 0;
                if ( (qword_1C00467F0 & 0x188ED7) != 0
                  && (qword_1C00467F8 & 0xFFFFFFFFFFE77128uLL) == 0
                  && (qword_1C00467F0 & 0x4000) != 0
                  && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v60) )
                {
                  v126 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 248) + 16LL) + 1896LL);
                  while ( !*(_QWORD *)(v126 + 48LL * v125 + 32) )
                  {
                    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v60);
                    if ( v125 >= NumDifferentPhysicalAdapters )
                      goto LABEL_333;
                  }
                  v124 = 1;
                }
LABEL_333:
                *(_BYTE *)(v13 + 18716) = v124;
                LOBYTE(p_Src->Param1) = v124;
                HIDWORD(p_Src->Param1) = 0;
                Diagnostics = 0;
                v78 = v157;
                goto LABEL_337;
              }
              if ( v66 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v164);
              COREACCESS::~COREACCESS((COREACCESS *)v172);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v173);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v161);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v163);
              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v162);
              break;
            case 0x17u:
              if ( a1[6] == 32 )
              {
                DxgkGetAdapterMiracastInfo(*(_QWORD *)(v43 + 176), p_Src);
                Diagnostics = 0;
                v78 = v157;
LABEL_337:
                v129 = a1[6];
                v130 = (char *)*((_QWORD *)a1 + 2);
                if ( (unsigned __int64)&v130[v129] > MmUserProbeAddress || &v130[v129] <= v130 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v130, p_Src, v129);
              }
              else
              {
                Diagnostics = -1073741811;
                v78 = v157;
              }
              goto LABEL_342;
            default:
              Diagnostics = -1073741811;
              v128 = WdLogNewEntry5_WdWarning(v70, v67, 0x1C0000000uLL, v71);
              *(_QWORD *)(v128 + 24) = (int)a1[2];
              WdLogEvent5_WdWarning(v128);
              goto LABEL_335;
          }
          goto LABEL_62;
        }
        if ( (_DWORD)v69 )
          goto LABEL_151;
        v72 = ((*(_QWORD *)(v43 + 1984) != 0LL) ^ (unsigned __int8)(2 * (*(_QWORD *)(v43 + 1976) != 0LL))) & 2 ^ (*(_QWORD *)(v43 + 1984) != 0LL);
        v69 = *(unsigned int *)(v43 + 284);
        v73 = ((unsigned __int8)v72 ^ (unsigned __int8)(4 * ((v69 & 2) != 0))) & 4 ^ v72;
        v74 = ((unsigned __int8)v73 ^ (unsigned __int8)(8 * (*(_DWORD *)(v43 + 284) & 1))) & 8 ^ v73;
        v67 = ((unsigned __int8)v74 ^ ((unsigned __int8)v69 >> 7 << 6)) & 0x40 ^ (unsigned int)v74;
        if ( byte_1C0046C5C )
        {
          DpiIsHybridIntegratedAdapter(*(_QWORD *)(v43 + 176));
          IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v75);
          v69 = ((unsigned __int8)v77 ^ (unsigned __int8)(16 * IsHybridDiscreteAdapter)) & 0x10;
          v67 = (unsigned int)v69 ^ v77;
        }
        if ( (v67 & 0x10) == 0 )
        {
LABEL_151:
          if ( v176 )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v67, v68);
            v79[3] = 275LL;
            v79[4] = 4LL;
            v79[5] = v174;
            v79[6] = 0LL;
            v79[7] = 0LL;
            WdLogEvent5_WdCriticalError(v79);
          }
          v70 = (__int64)v175;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v175 + 18) )
          {
            if ( !KeReadStateEvent((PRKEVENT)((char *)v175 + 32)) )
              KeWaitForSingleObject((char *)v175 + 32, Executive, 0, 0, 0LL);
            DXGADAPTER::AcquireCoreResourceShared(v175);
            v70 = (__int64)v175;
          }
          v176 = 1;
          if ( *(_DWORD *)(v70 + 160) != 1 )
          {
            COREACCESS::Release((COREACCESS *)v174);
            Diagnostics = -1073741130;
            v78 = v165;
            goto LABEL_342;
          }
          if ( v175 != (DXGADAPTER *)v178 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v177);
            v70 = v178[40];
            if ( (_DWORD)v70 != 1 )
            {
              COREACCESS::Release((COREACCESS *)v177);
              COREACCESS::Release((COREACCESS *)v174);
              Diagnostics = -1073741130;
              v78 = v165;
              goto LABEL_342;
            }
          }
        }
        else
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v164);
          if ( *(_DWORD *)(v43 + 160) != 1 )
          {
            Diagnostics = -1073741130;
            v78 = v165;
LABEL_342:
            if ( v78 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v164);
            COREACCESS::~COREACCESS((COREACCESS *)v172);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v173);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v161);
            if ( v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
            if ( v43 )
            {
              v134 = _InterlockedDecrement64((volatile signed __int64 *)(v43 + 24));
              if ( !v134 )
                DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v43 + 16), (struct DXGADAPTER *)v43);
              if ( v134 < 0 )
              {
                v135 = WdLogNewEntry5_WdAssertion(v132, v131, v37, v133);
                *(_QWORD *)(v135 + 24) = 1067LL;
                WdLogEvent5_WdAssertion(v135);
              }
            }
            if ( P[0] )
              ExFreePoolWithTag(P[0], 0);
            v36 = P[1];
            if ( P[1] )
              DXGADAPTER::ReleaseReference((DXGADAPTER *)P[1]);
            goto LABEL_41;
          }
        }
        v66 = v165;
        v157 = v165;
        v60 = v166;
        goto LABEL_163;
      }
      goto LABEL_362;
    }
    v136 = WdLogNewEntry5_WdAssertion(v29, v26, v27, v28);
    *(_QWORD *)(v136 + 24) = 7714LL;
    WdLogEvent5_WdAssertion(v136);
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v10 + 80) + 224LL))(0LL) )
    {
      v143 = DXGGLOBAL::GetGlobal(v138, v137, v139, v140);
      if ( !DXGGLOBAL::ReferenceBddFallbackAdapter(v143) )
      {
LABEL_362:
        DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v148, &EventProfilerExit, v149, 2016);
        return 3221226021LL;
      }
      v159[0] = 1;
      v150 = DXGGLOBAL::GetGlobal(v145, v144, v146, v147);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)v150,
        (__int64 (__fastcall *)(_QWORD *, __int64))DxgkEscapeStopDisplayAdapters,
        (__int64)v159,
        1LL);
      if ( !v159[0] )
      {
        memset(v202, 0, sizeof(v202));
        DxgkDiagInitializeCodePointPacket(v202, 76, 0, 0, 0);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v202, v151, v152, v153);
        LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, v154, v155, (unsigned __int64)Timeout);
        goto LABEL_39;
      }
    }
    DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v141, &EventProfilerExit, v142, 2016);
    return 3221225473LL;
  }
  else
  {
    if ( (_DWORD)v29 != 24 )
    {
      v26 = (unsigned int)(v29 - 1);
      if ( (_DWORD)v29 == 1 )
      {
        if ( a1[6] >= 0x58 )
        {
          Param1 = p_Src->Param1;
          if ( LODWORD(p_Src->Param1) == 5 )
          {
            LiveDumpWithWdLogs = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_39;
          }
          switch ( Param1 )
          {
            case 6:
              LiveDumpWithWdLogs = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
              goto LABEL_39;
            case 13:
              LiveDumpWithWdLogs = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
              goto LABEL_39;
            case 9:
              LiveDumpWithWdLogs = DxgEscapeSuspendResumeProcess(*a1, (void *)p_Src->Param2, 1);
              goto LABEL_39;
            case 10:
              LiveDumpWithWdLogs = DxgEscapeSuspendResumeProcess(*a1, (void *)p_Src->Param2, 0);
              goto LABEL_39;
          }
        }
      }
      else
      {
        v26 = (unsigned int)(v29 - 8);
        if ( (_DWORD)v29 != 8 )
        {
          if ( (_DWORD)v29 == 20 )
          {
            Diagnostics = DxgkHandleMiracastEscape(a1[6], p_Src);
            if ( Diagnostics >= 0 )
            {
              v31 = a1[6];
              v32 = (char *)*((_QWORD *)a1 + 2);
              if ( (unsigned __int64)&v32[v31] > MmUserProbeAddress || &v32[v31] <= v32 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v32, p_Src, v31);
            }
            goto LABEL_40;
          }
          goto LABEL_69;
        }
        v33 = a1[6];
        if ( v33 >= 0xC && v33 >= HIDWORD(p_Src->Param1) && LODWORD(p_Src->Param1) == 1484026436 )
        {
          v34 = p_Src->Param2;
          if ( !v34 || v34 == 13 )
          {
            LiveDumpWithWdLogs = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            goto LABEL_39;
          }
        }
      }
      goto LABEL_69;
    }
    if ( g_OSTestSigningEnabled )
    {
      if ( a1[6] != 1 )
      {
LABEL_62:
        DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
        goto LABEL_9;
      }
      byte_1C0046C5B = p_Src->Param1;
      DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v41, &EventProfilerExit, v42, 2016);
      return 0LL;
    }
    else
    {
      DxgkEscape_::_8_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2016);
      return 3221225506LL;
    }
  }
}
