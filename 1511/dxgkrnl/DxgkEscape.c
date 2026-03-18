/*
 * XREFs of DxgkEscape @ 0x1C007AB10
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000BE34 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0011288 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     DpiGetWhqlInfo @ 0x1C0012590 (DpiGetWhqlInfo.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C001BBD8 (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     DpiIsHybridDiscreteAdapter @ 0x1C00236B0 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C00236BC (DpiIsHybridIntegratedAdapter.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0025F8C (DxgkGetAdapterMiracastInfo.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C00280A0 (DxgkGetAdapterBrightnessInfo.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0124098 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     sub_1C0124A64 @ 0x1C0124A64 (sub_1C0124A64.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C0125260 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0129F34 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A89C (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A900 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgkRequestMachineCrash@@YAJPEAU_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE@@@Z @ 0x1C012C1E4 (-DxgkRequestMachineCrash@@YAJPEAU_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE@@@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C012C858 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C012CE94 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C013A448 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C013E0F4 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C0144114 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C01464B8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C01465A4 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0147130 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0153B4C (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C015A52C (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C015A5F0 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0170828 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DmmEscape @ 0x1C0179F44 (DmmEscape.c)
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
  unsigned int *p_Src; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // r8
  char *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int Diagnostics; // ebx
  size_t v31; // r8
  char *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  int LiveDumpWithWdLogs; // eax
  PVOID v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r14
  DXGGLOBAL *v44; // rax
  DXGADAPTER *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  _QWORD *v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rdx
  unsigned int v54; // edx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  signed __int64 v63; // rbx
  DXGADAPTER *v64; // r13
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned int v67; // eax
  size_t v68; // r8
  char *v69; // rcx
  char v70; // bl
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned int v75; // r9d
  __int64 v76; // r9
  int v77; // edx
  int v78; // ecx
  int v79; // edx
  int v80; // edx
  __int64 v81; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v83; // edx
  char v84; // r15
  _QWORD *v85; // rax
  unsigned __int64 v86; // rdx
  void *v87; // rax
  UINT v88; // eax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  unsigned int v94; // eax
  __int64 v95; // rcx
  int DebugInfo; // eax
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned int v99; // edx
  int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rcx
  struct DXGGLOBAL *v104; // rax
  struct DXGGLOBAL *v105; // r15
  DXGDIAGNOSTICS *v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  unsigned int v111; // eax
  __int64 v112; // rax
  DXGADAPTER *v113; // rbx
  __int64 v114; // rcx
  __int64 v115; // rax
  DXGADAPTER *v116; // rcx
  __int64 v117; // rax
  bool v118; // bl
  unsigned __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rcx
  EDIDCACHE *v122; // rcx
  char v123; // r9
  unsigned int v124; // edx
  __int64 v125; // r8
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v127; // rax
  size_t v128; // r8
  char *v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // r8
  DXGGLOBAL *Global; // rax
  __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // r8
  struct DXGGLOBAL *v142; // rax
  unsigned __int64 v143; // rdx
  unsigned int v144; // ecx
  unsigned __int64 v145; // r8
  unsigned __int64 v146; // r9
  size_t v147; // r8
  char *v148; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-468h]
  char v150; // [rsp+30h] [rbp-458h]
  char v151; // [rsp+31h] [rbp-457h]
  char v152[6]; // [rsp+32h] [rbp-456h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-450h] BYREF
  __int64 v154; // [rsp+48h] [rbp-440h] BYREF
  DXGADAPTER *v155; // [rsp+50h] [rbp-438h] BYREF
  __int64 v156; // [rsp+58h] [rbp-430h] BYREF
  __int64 v157; // [rsp+60h] [rbp-428h] BYREF
  char v158; // [rsp+68h] [rbp-420h]
  DXGADAPTER *v159; // [rsp+70h] [rbp-418h] BYREF
  unsigned int v160; // [rsp+78h] [rbp-410h]
  __int64 v161; // [rsp+80h] [rbp-408h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp-400h] BYREF
  __int64 v163; // [rsp+90h] [rbp-3F8h]
  __int64 v164; // [rsp+98h] [rbp-3F0h]
  _BYTE v165[24]; // [rsp+A0h] [rbp-3E8h] BYREF
  __int64 v166; // [rsp+B8h] [rbp-3D0h] BYREF
  char v167[8]; // [rsp+C0h] [rbp-3C8h] BYREF
  DXGADAPTER *v168; // [rsp+C8h] [rbp-3C0h]
  char v169; // [rsp+D0h] [rbp-3B8h]
  char v170[8]; // [rsp+D8h] [rbp-3B0h] BYREF
  unsigned int *v171; // [rsp+E0h] [rbp-3A8h]
  __int64 v172; // [rsp+F0h] [rbp-398h]
  DXGADAPTER *v173; // [rsp+F8h] [rbp-390h]
  int v174; // [rsp+100h] [rbp-388h]
  _BYTE v175[24]; // [rsp+108h] [rbp-380h] BYREF
  char v176[8]; // [rsp+120h] [rbp-368h] BYREF
  DXGPUSHLOCK *v177; // [rsp+128h] [rbp-360h]
  int v178; // [rsp+130h] [rbp-358h]
  _DXGKARG_ESCAPE v179; // [rsp+138h] [rbp-350h] BYREF
  unsigned int v180; // [rsp+168h] [rbp-320h]
  unsigned int *v181; // [rsp+170h] [rbp-318h]
  unsigned int v182; // [rsp+178h] [rbp-310h]
  __int64 v183; // [rsp+180h] [rbp-308h]
  struct _DXGKARG_ESCAPE v184; // [rsp+188h] [rbp-300h] BYREF
  unsigned int v185; // [rsp+1B8h] [rbp-2D0h]
  __int64 v186; // [rsp+1C0h] [rbp-2C8h] BYREF
  __int64 v187; // [rsp+1C8h] [rbp-2C0h]
  __int64 v188; // [rsp+1D0h] [rbp-2B8h]
  __int64 v189; // [rsp+1D8h] [rbp-2B0h]
  __int64 v190; // [rsp+1E0h] [rbp-2A8h]
  __int64 v191; // [rsp+1E8h] [rbp-2A0h]
  union _LARGE_INTEGER LocalTime; // [rsp+1F0h] [rbp-298h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+1F8h] [rbp-290h] BYREF
  _DWORD v194[4]; // [rsp+200h] [rbp-288h] BYREF
  _QWORD v195[8]; // [rsp+210h] [rbp-278h] BYREF
  char Src; // [rsp+250h] [rbp-238h] BYREF

  v174 = 2016;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2016);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v10 = *(_QWORD *)(ProcessWin32Process + 248);
    v11 = 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v12 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v12);
    v11 = 0LL;
    v10 = 0LL;
  }
  v161 = v10;
  v13 = 0LL;
  v172 = 0LL;
  v14 = 0LL;
  v163 = 0LL;
  p_Src = (unsigned int *)&Src;
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
    p_Src = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x4B677844u);
    P[0] = p_Src;
  }
  if ( !p_Src )
  {
    v21 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v21 + 24) = a1[6];
    *(_QWORD *)(v21 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
    sub_1C0124A64(P, v22);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2016);
    return 3221225495LL;
  }
  v25 = a1[6];
  v26 = (char *)*((_QWORD *)a1 + 2);
  if ( &v26[v25] < v26 || (unsigned __int64)&v26[v25] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(p_Src, v26, v25);
  v28 = a1[2];
  if ( (int)v28 > 24 )
  {
    v27 = (unsigned int)(v28 - 25);
    if ( (_DWORD)v28 == 25 )
    {
      if ( a1[6] != 24 )
        goto LABEL_62;
      LiveDumpWithWdLogs = DxgkRequestMachineCrash((struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *)p_Src);
LABEL_39:
      Diagnostics = LiveDumpWithWdLogs;
LABEL_40:
      sub_1C0124A64(P, v29);
LABEL_41:
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q((__int64)v36, &EventProfilerExit, v37, 2016);
      return (unsigned int)Diagnostics;
    }
    v27 = (unsigned int)(v28 - 26);
    if ( (_DWORD)v28 == 26 )
    {
      if ( a1[6] == 140 )
      {
        Diagnostics = DxgkHMDGetEdidBaseBlock((const struct _LUID *)p_Src, p_Src[2], (unsigned __int8 *)p_Src + 12);
        if ( Diagnostics >= 0 )
        {
          v147 = a1[6];
          v148 = (char *)*((_QWORD *)a1 + 2);
          if ( (unsigned __int64)&v148[v147] > MmUserProbeAddress || &v148[v147] <= v148 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v148, p_Src, v147);
        }
        goto LABEL_40;
      }
      goto LABEL_62;
    }
    if ( (_DWORD)v28 != 1029 )
      goto LABEL_70;
    v133 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v133 + 24) = 8012LL;
    WdLogEvent5_WdAssertion(v133);
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v10 + 80) + 224LL))(0LL) )
    {
      Global = DXGGLOBAL::GetGlobal(v135);
      if ( !DXGGLOBAL::ReferenceBddFallbackAdapter(Global) )
      {
LABEL_368:
        sub_1C0124A64(P, v46);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v140, &EventProfilerExit, v141, 2016);
        return 3221226021LL;
      }
      v152[0] = 1;
      v142 = DXGGLOBAL::GetGlobal(v139);
      DXGGLOBAL::IterateAdaptersWithCallback(v142, DxgkEscapeStopDisplayAdapters, v152, 1LL);
      if ( !v152[0] )
      {
        memset(v195, 0, sizeof(v195));
        DxgkDiagInitializeCodePointPacket(v195, 76, 0, 0, 0);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v195);
        LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(v144, v143, v145, v146, (unsigned __int64)Timeout);
        goto LABEL_39;
      }
    }
    sub_1C0124A64(P, v134);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v136, &EventProfilerExit, v137, 2016);
    return 3221225473LL;
  }
  else
  {
    if ( (_DWORD)v28 != 24 )
    {
      switch ( (_DWORD)v28 )
      {
        case 1:
          if ( a1[6] >= 0x58 )
          {
            v38 = *p_Src;
            if ( *p_Src == 5 )
            {
              LiveDumpWithWdLogs = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
              goto LABEL_39;
            }
            switch ( v38 )
            {
              case 6u:
                LiveDumpWithWdLogs = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
                goto LABEL_39;
              case 0xDu:
                LiveDumpWithWdLogs = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
                goto LABEL_39;
              case 9u:
                LiveDumpWithWdLogs = DxgEscapeSuspendResumeProcess(*a1, *((void **)p_Src + 1), 1);
                goto LABEL_39;
              case 0xAu:
                LiveDumpWithWdLogs = DxgEscapeSuspendResumeProcess(*a1, *((void **)p_Src + 1), 0);
                goto LABEL_39;
            }
          }
          break;
        case 8:
          v33 = a1[6];
          if ( v33 >= 0xC && v33 >= p_Src[1] && *p_Src == 1484026436 )
          {
            v34 = p_Src[2];
            if ( !v34 || v34 == 13 )
            {
              LiveDumpWithWdLogs = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
              goto LABEL_39;
            }
          }
          break;
        case 0x14:
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
        default:
          break;
      }
LABEL_70:
      v43 = 0LL;
      v164 = 0LL;
      v159 = 0LL;
      v173 = 0LL;
      if ( (_DWORD)v28 != 13 )
        goto LABEL_73;
      v44 = DXGGLOBAL::GetGlobal(v28);
      v45 = DXGGLOBAL::ReferenceBddFallbackAdapter(v44);
      v173 = v45;
      if ( v45 )
      {
        P[1] = v45;
LABEL_73:
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v175, (struct DXGPROCESS *)v10);
        v50 = *a1;
        if ( (_DWORD)v50 )
        {
          v47 = ((unsigned int)v50 >> 6) & 0xFFFFFF;
          v50 = (unsigned int)v50 >> 30;
          if ( (unsigned int)v47 < *(_DWORD *)(v10 + 232)
            && (v49 = *(_QWORD *)(v10 + 216),
                v48 = *(unsigned int *)(v49 + 16LL * (unsigned int)v47 + 8),
                (_DWORD)v50 == ((*(_DWORD *)(v49 + 16LL * (unsigned int)v47 + 8) >> 4) & 3))
            && (v48 & 0x1000) == 0
            && (v48 & 0xF) != 0
            && (*(_BYTE *)(v49 + 16LL * (unsigned int)v47 + 8) & 0xF) == 1 )
          {
            v43 = *(_QWORD *)(v49 + 16LL * (unsigned int)v47);
          }
          else
          {
            v43 = 0LL;
          }
          v164 = v43;
        }
        if ( !v43 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v50, v48, v49);
          v51[3] = *a1;
          v51[4] = -1073741811LL;
LABEL_84:
          WdLogEvent5_WdWarning(v51);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v175);
          goto LABEL_62;
        }
        v52 = a1[1];
        if ( v52 )
        {
          v47 = (v52 >> 6) & 0xFFFFFF;
          v53 = v52 >> 30;
          if ( (unsigned int)v47 < *(_DWORD *)(v10 + 232)
            && (v49 = *(_QWORD *)(v10 + 216),
                v48 = *(unsigned int *)(v49 + 16LL * (unsigned int)v47 + 8),
                (_DWORD)v53 == ((*(_DWORD *)(v49 + 16LL * (unsigned int)v47 + 8) >> 4) & 3))
            && (v48 & 0x1000) == 0
            && (v48 & 0xF) != 0
            && (*(_BYTE *)(v49 + 16LL * (unsigned int)v47 + 8) & 0xF) == 3 )
          {
            v13 = *(_QWORD *)(v49 + 16LL * (unsigned int)v47);
          }
          else
          {
            v13 = 0LL;
          }
          v172 = v13;
          if ( !v13 || v43 != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) && v43 != *(_QWORD *)(v13 + 2832) )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v53, v48, v49);
            v51[3] = v43;
            v51[4] = a1[1];
            goto LABEL_84;
          }
        }
        v54 = a1[7];
        if ( v54 )
        {
          v47 = (v54 >> 6) & 0xFFFFFF;
          v55 = v54 >> 30;
          if ( (unsigned int)v47 < *(_DWORD *)(v10 + 232)
            && (v49 = *(_QWORD *)(v10 + 216),
                v48 = *(unsigned int *)(v49 + 16LL * (unsigned int)v47 + 8),
                (_DWORD)v55 == ((*(_DWORD *)(v49 + 16LL * (unsigned int)v47 + 8) >> 4) & 3))
            && (v48 & 0x1000) == 0
            && (v48 & 0xF) != 0
            && (v47 *= 2LL, (*(_BYTE *)(v49 + 8 * v47 + 8) & 0xF) == 7) )
          {
            v14 = *(_QWORD *)(v49 + 8 * v47);
          }
          else
          {
            v14 = 0LL;
          }
          v163 = v14;
          if ( !v14 || !v13 || v13 != *(_QWORD *)(v14 + 16) )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v55, v48, v49);
            v51[3] = v43;
            v51[4] = v13;
            v51[5] = a1[7];
            goto LABEL_84;
          }
        }
        if ( v13 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v13 + 64));
          v43 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
          v164 = v43;
        }
        if ( v14 )
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 32));
        if ( _InterlockedAdd64((volatile signed __int64 *)(v43 + 24), 1uLL) <= 0 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v56 + 24) = 1141LL;
          WdLogEvent5_WdAssertion(v56);
        }
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v175);
        if ( *(_DWORD *)(v43 + 1264) >= 0x5023u && (a1[3] & 0xFFFFFFF0) != 0 )
        {
          v61 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
          *(_QWORD *)(v61 + 24) = v43;
          WdLogEvent5_WdWarning(v61);
          goto LABEL_62;
        }
        v155 = (DXGADAPTER *)v43;
        v156 = v13;
        v154 = v14;
        if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v43, 0, &v159, 0LL) < 0 )
        {
          v64 = v159;
        }
        else
        {
          v63 = _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v64 = v159;
          v65 = v63 - 1;
          if ( !v65 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v159 + 2), v159);
          if ( v65 < 0 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v62);
            *(_QWORD *)(v66 + 24) = 1158LL;
            WdLogEvent5_WdAssertion(v66);
          }
        }
        if ( a1[2] == 8 )
        {
          v67 = a1[6];
          if ( v67 >= 0xC && v67 >= p_Src[1] && *p_Src == 1484026436 && p_Src[2] == 14 )
          {
            Diagnostics = DxgkDrtTestEscape((struct DXGADAPTER *)v43, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            if ( Diagnostics >= 0 )
            {
              v68 = a1[6];
              v69 = (char *)*((_QWORD *)a1 + 2);
              if ( (unsigned __int64)&v69[v68] > MmUserProbeAddress || &v69[v68] <= v69 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v69, p_Src, v68);
            }
LABEL_195:
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v154);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v156);
            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v155);
            goto LABEL_40;
          }
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v166, (struct DXGADAPTER *const)v43, 0LL);
        COREACCESS::COREACCESS((COREACCESS *)v165, v173);
        v160 = 0;
        v157 = v43;
        v70 = 0;
        v150 = 0;
        v158 = 0;
        LODWORD(v161) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v161 + 80) + 224LL))(0LL);
        v73 = a1[2];
        if ( (_DWORD)v73 == 13 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v165);
LABEL_169:
          v76 = v160;
          goto LABEL_170;
        }
        v75 = a1[3];
        if ( (v75 & 1) != 0 )
        {
          v151 = 0;
          if ( !(_DWORD)v73 || (_DWORD)v73 == 3 && a1[6] >= 0xC && *p_Src == 3 )
            v151 = 1;
          if ( *(_QWORD *)(v43 + 1992) )
            v151 = 1;
          Diagnostics = COREADAPTERACCESS::AcquireExclusive(&v166);
          if ( Diagnostics < 0 )
          {
            v84 = 0;
            goto LABEL_349;
          }
          if ( !v151 )
          {
            v74 = *(_QWORD *)(v43 + 1992);
            if ( v74 )
              ADAPTER_RENDER::FlushScheduler(v74, 2, 0xFFFFFFFF, 0);
          }
          v70 = 0;
          v76 = 1LL;
LABEL_170:
          if ( a1[1] )
          {
            if ( *(_DWORD *)(v13 + 352) != 1 )
            {
              Diagnostics = -1073741130;
              v84 = v158;
              goto LABEL_349;
            }
            v64 = v159;
            v70 = v158;
            v150 = v158;
          }
          switch ( a1[2] )
          {
            case 0u:
              if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v43 + 432) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
              {
                v90 = WdLogNewEntry5_WdWarning(
                        ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange,
                        v71,
                        0x1C0000000uLL,
                        v76);
                *(_QWORD *)(v90 + 24) = v43;
                Diagnostics = -1073741637;
                *(_QWORD *)(v90 + 32) = -1073741637LL;
                WdLogEvent5_WdWarning(v90);
                v84 = v150;
                goto LABEL_349;
              }
              v86 = a1[6];
              if ( !(_DWORD)v86 || !*((_QWORD *)a1 + 2) )
              {
                v89 = (_QWORD *)WdLogNewEntry5_WdWarning(
                                  ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange,
                                  v86,
                                  0x1C0000000uLL,
                                  v76);
                v89[3] = a1[6];
                v89[4] = *((_QWORD *)a1 + 2);
                v89[5] = -1073741811LL;
                WdLogEvent5_WdWarning(v89);
                goto LABEL_189;
              }
              if ( v13 )
                v87 = *(void **)(v13 + 360);
              else
                v87 = 0LL;
              v179.hDevice = v87;
              if ( v163 )
                v11 = *(void **)(v163 + 168);
              v179.hContext = v11;
              v88 = a1[3];
              v179.Flags.Value = v88;
              if ( *(_DWORD *)(v43 + 260) == 4098 )
              {
                if ( !(unsigned int)IsAMDDriverEscapeAllowed(p_Src, v86) )
                {
                  Diagnostics = -1073741637;
                  v84 = v150;
                  goto LABEL_349;
                }
                LOBYTE(v88) = v179.Flags.0;
              }
              v179.Flags.Value = v88 & 0xF;
              v179.PrivateDriverDataSize = a1[6];
              v179.pPrivateDriverData = p_Src;
              Diagnostics = DXGADAPTER::DdiEscape((DXGADAPTER *)v43, &v179);
              goto LABEL_342;
            case 1u:
              if ( !v64 )
                goto LABEL_192;
              if ( v13 )
                v11 = *(void **)(v13 + 536);
              if ( a1[6] < 0x58 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              Diagnostics = VIDMM_EXPORT::VidMmEscape(
                              *(VIDMM_EXPORT **)(*((_QWORD *)v64 + 249) + 424LL),
                              *(struct VIDMM_GLOBAL **)(*((_QWORD *)v64 + 249) + 432LL),
                              (struct VIDMM_DEVICE *)v11,
                              (struct _D3DKMT_VIDMM_ESCAPE *)p_Src,
                              v76);
              goto LABEL_342;
            case 2u:
              if ( *((_QWORD *)a1 + 2) )
              {
                v71 = a1[6];
                if ( (unsigned int)v71 < 4 )
                  goto LABEL_189;
                switch ( *p_Src )
                {
                  case 0u:
                    goto LABEL_219;
                  case 1u:
                    v95 = 2LL;
                    goto LABEL_220;
                  case 2u:
                    v95 = 1LL;
                    goto LABEL_220;
                  case 3u:
                    v95 = 3LL;
                    goto LABEL_220;
                  case 4u:
                  case 5u:
                    if ( !v64 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v74, v71, 0x1C0000000uLL, v76) + 24) = 0LL;
                      Diagnostics = -1073741637;
                      v84 = v150;
                      goto LABEL_349;
                    }
                    Diagnostics = TdrDbgCtrl(4LL, v71, 0x1C0000000uLL, v76);
                    if ( Diagnostics < 0 )
                      goto LABEL_342;
                    v97 = *(_QWORD *)(*((_QWORD *)v64 + 249) + 408LL);
                    v194[0] = 2;
                    v194[1] = *p_Src;
                    DebugInfo = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 249) + 400LL)
                                                                                         + 8LL)
                                                                             + 64LL))(
                                  v97,
                                  v194);
                    goto LABEL_221;
                  case 6u:
                    v95 = 5LL;
                    goto LABEL_220;
                  case 7u:
                    v95 = 6LL;
                    goto LABEL_220;
                  case 8u:
                    if ( (unsigned int)v71 < 8 )
                    {
                      Diagnostics = -1073741811;
                      v84 = v150;
                      goto LABEL_349;
                    }
                    if ( !v64 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v74, v71, 0x1C0000000uLL, v76) + 24) = v43;
                      Diagnostics = -1073741637;
                      v84 = v150;
                      goto LABEL_349;
                    }
                    Diagnostics = TdrDbgCtrl(4LL, v71, 0x1C0000000uLL, v76);
                    if ( Diagnostics < 0 )
                      goto LABEL_342;
                    v98 = *(_QWORD *)(*((_QWORD *)v64 + 249) + 408LL);
                    LODWORD(v184.hKmdProcessHandle) = 2;
                    HIDWORD(v184.hKmdProcessHandle) = *p_Src;
                    v185 = p_Src[1];
                    DebugInfo = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 249) + 400LL)
                                                                                         + 8LL)
                                                                             + 64LL))(
                                  v98,
                                  &v184.hKmdProcessHandle);
                    break;
                  default:
                    goto LABEL_189;
                }
              }
              else
              {
LABEL_219:
                v95 = 0LL;
LABEL_220:
                DebugInfo = TdrDbgCtrl(v95, v71, 0x1C0000000uLL, v76);
              }
              goto LABEL_221;
            case 3u:
              if ( !v64 )
                goto LABEL_192;
              if ( a1[6] < 0xC )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( *p_Src == 2 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( *p_Src != 3 )
              {
                Diagnostics = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 249) + 400LL)
                                                                                            + 8LL)
                                                                                + 64LL))(
                                *(_QWORD *)(*((_QWORD *)v64 + 249) + 408LL),
                                p_Src);
                goto LABEL_342;
              }
              if ( !(_DWORD)v76 )
              {
LABEL_189:
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              v94 = 5000000;
              if ( p_Src[1] < 0x4C4B40 )
                v94 = p_Src[1];
              Interval.QuadPart = -(__int64)v94;
              KeDelayExecutionThread(0, 0, &Interval);
              Diagnostics = 0;
              v84 = v150;
              goto LABEL_344;
            case 4u:
              if ( a1[6] < 0xC || !v13 )
                goto LABEL_189;
              DebugInfo = DXGDEVICE::Escape((DXGDEVICE *)v13, (struct _D3DKMT_DEVICE_ESCAPE *)p_Src);
              goto LABEL_221;
            case 5u:
              if ( !*(_QWORD *)(v43 + 1984) )
                goto LABEL_192;
              v92 = a1[6];
              if ( (unsigned int)v92 < 0x80 )
                goto LABEL_189;
              v93 = *((_QWORD *)p_Src + 1);
              if ( v93 > 0x19000 || v92 != v93 + 127 && v93 )
                goto LABEL_189;
              Diagnostics = DmmEscape(v43, p_Src, 0x1C0000000uLL, v76);
              goto LABEL_342;
            case 6u:
              v99 = a1[6];
              if ( v99 < 8 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              DebugInfo = DxgDbgTakeSnapshot(p_Src + 1, v99 - 4, p_Src);
              goto LABEL_221;
            case 7u:
              if ( (a1[3] & 1) == 0 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( a1[6] != 4 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              v100 = *(_DWORD *)(v43 + 284);
              if ( (v100 & 4) == 0 && (v100 & 0x20) == 0 )
                *(_BYTE *)(v43 + 164) = *(_BYTE *)p_Src;
              Diagnostics = 0;
              v84 = v150;
              goto LABEL_344;
            case 8u:
              v101 = a1[6];
              if ( v101 < 0xC || v101 < p_Src[1] || *p_Src != 1484026436 )
                goto LABEL_189;
              DebugInfo = DxgkDrtTestEscape(
                            (struct DXGADAPTER *)v43,
                            (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src,
                            (struct COREADAPTERACCESS *)&v166);
              goto LABEL_221;
            case 9u:
              Diagnostics = -1073741811;
              v102 = a1[6];
              if ( (unsigned int)v102 < 4 || v102 != *p_Src + 4LL )
                goto LABEL_342;
              v186 = 0LL;
              v187 = 0LL;
              v188 = 0LL;
              v189 = 0LL;
              v190 = 0LL;
              v191 = 0LL;
              LocalTime.QuadPart = 0LL;
              SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
              ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
              v186 = 0x400000000ALL;
              LODWORD(v191) = 0;
              v190 = 0LL;
              v187 = 0LL;
              v188 = 0LL;
              v189 = 0LL;
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v186);
              v104 = DXGGLOBAL::GetGlobal(v103);
              v105 = v104;
              if ( !v104 )
                goto LABEL_268;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v176, (struct _KTHREAD **)v104 + 83);
              DXGPUSHLOCK::AcquireShared(v177);
              v178 = 1;
              v106 = (DXGDIAGNOSTICS *)*((_QWORD *)v105 + 86);
              if ( !v106 )
              {
                v107 = WdLogNewEntry5_WdError(0LL);
                *(_QWORD *)(v107 + 24) = p_Src;
                *(_QWORD *)(v107 + 32) = v105;
                WdLogEvent5_WdError(v107);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v176);
                if ( v158 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v157);
                COREACCESS::~COREACCESS((COREACCESS *)v165);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v166);
                ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v154);
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v156);
                DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v155);
                sub_1C0124A64(P, v108);
                if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                  Template_q(v109, &EventProfilerExit, v110, 2016);
                return 3221225860LL;
              }
              Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(v106, (unsigned __int8 *)p_Src + 4, p_Src);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v176);
LABEL_268:
              v84 = v158;
              goto LABEL_343;
            case 0xAu:
              if ( !*(_QWORD *)(v43 + 1984) )
                goto LABEL_192;
              v111 = a1[6];
              if ( v111 < 0x18 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( v111 != *p_Src )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( (_DWORD)v161 )
                DebugInfo = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
              else
                DebugInfo = OutputDuplGetDebugInfo(
                              (struct DXGADAPTER *)v43,
                              (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
              goto LABEL_221;
            case 0xBu:
              if ( !*(_QWORD *)(v43 + 1984) )
                goto LABEL_192;
              v112 = a1[6];
              if ( (unsigned int)v112 < 8 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( v112 != p_Src[1] + 8LL )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( (_DWORD)v161 )
                DebugInfo = OutputDuplGetDiagnosticBuffer(0LL, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
              else
                DebugInfo = OutputDuplGetDiagnosticBuffer(
                              (struct DXGADAPTER *)v43,
                              (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
              goto LABEL_221;
            case 0xCu:
              if ( (*(_DWORD *)(v43 + 284) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v43) )
              {
                v184.hDevice = 0LL;
                v184.hContext = 0LL;
                v184.Flags.Value = a1[3];
                v184.PrivateDriverDataSize = a1[6];
                v184.pPrivateDriverData = p_Src;
                DebugInfo = DXGADAPTER::DdiEscape(v116, &v184);
                goto LABEL_221;
              }
              Diagnostics = -1071775742;
              v84 = v150;
              goto LABEL_349;
            case 0xDu:
              v113 = v173;
              if ( !DXGADAPTER::IsBddFallbackDriver(v173) )
              {
                v115 = WdLogNewEntry5_WdAssertion(v114);
                *(_QWORD *)(v115 + 24) = 8905LL;
                WdLogEvent5_WdAssertion(v115);
              }
              v179.hKmdProcessHandle = 0LL;
              v183 = 0LL;
              v180 = a1[3];
              v182 = a1[6];
              v181 = p_Src;
              DebugInfo = DXGADAPTER::DdiEscape(v113, (const struct _DXGKARG_ESCAPE *)&v179.hKmdProcessHandle);
              goto LABEL_221;
            case 0xEu:
              if ( a1[6] != 8 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( !*p_Src )
              {
                v118 = p_Src[1] != 0;
                *((_BYTE *)DXGGLOBAL::GetGlobal(v74) + 912) = v118;
                Diagnostics = 0;
                v84 = v150;
                goto LABEL_344;
              }
              if ( *p_Src != 15 )
              {
                v117 = WdLogNewEntry5_WdAssertion(v74);
                *(_QWORD *)(v117 + 24) = (int)*p_Src;
                WdLogEvent5_WdAssertion(v117);
                Diagnostics = -1073741811;
                goto LABEL_342;
              }
              v74 = *(_QWORD *)(v43 + 1984);
              if ( v74 )
              {
                DebugInfo = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                              (ADAPTER_DISPLAY *)v74,
                              p_Src[1]);
                goto LABEL_221;
              }
LABEL_192:
              v91 = WdLogNewEntry5_WdError(v74);
              Diagnostics = -1073741637;
              *(_QWORD *)(v91 + 24) = v43;
              *(_QWORD *)(v91 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v91);
              if ( v150 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v157);
              COREACCESS::~COREACCESS((COREACCESS *)v165);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v166);
              goto LABEL_195;
            case 0xFu:
              if ( !*(_QWORD *)(v43 + 1984) )
                goto LABEL_192;
              v119 = a1[6];
              if ( (unsigned int)v119 < 8 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( v119 < 44 * (unsigned __int64)p_Src[1] + 8 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              DebugInfo = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                            *(ADAPTER_DISPLAY **)(v43 + 1984),
                            (struct _D3DKMT_DISPLAYMODELIST *)p_Src);
              goto LABEL_221;
            case 0x10u:
              if ( a1[6] < 4 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              DebugInfo = DpiGetWhqlInfo(*(_QWORD *)(v43 + 176), p_Src);
              goto LABEL_221;
            case 0x11u:
              if ( (a1[3] & 1) == 0 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              if ( a1[6] < 0x608 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              DebugInfo = DpiBrightnessEscape(
                            *(struct _DEVICE_OBJECT **)(v43 + 176),
                            (struct _D3DKMT_BRIGHTNESS_INFO *)p_Src);
              goto LABEL_221;
            case 0x12u:
              v120 = a1[6];
              if ( (unsigned int)v120 < 4 )
                goto LABEL_189;
              v121 = *p_Src + 4LL;
              if ( v120 != v121 )
                goto LABEL_189;
              v122 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v121) + 98);
              if ( !v122 )
              {
                Diagnostics = -1073741801;
                v84 = v150;
                goto LABEL_349;
              }
              DebugInfo = EDIDCACHE::GetEdids(v122, (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src);
LABEL_221:
              Diagnostics = DebugInfo;
LABEL_342:
              v84 = v150;
LABEL_343:
              if ( Diagnostics >= 0 )
                goto LABEL_344;
              goto LABEL_349;
            case 0x13u:
              if ( a1[6] < 0x10 )
              {
                Diagnostics = -1073741811;
                v84 = v150;
                goto LABEL_349;
              }
              p_Src[1] &= 7u;
              DxgkGetAdapterBrightnessInfo(*(_QWORD *)(v43 + 176), p_Src);
              Diagnostics = 0;
              v84 = v150;
              goto LABEL_344;
            case 0x15u:
              if ( a1[6] >= 8 && v64 && v13 )
              {
                v123 = 0;
                if ( (qword_1C00467F0 & 0x188ED7) != 0
                  && (qword_1C00467F8 & 0xFFFFFFFFFFE77128uLL) == 0
                  && (qword_1C00467F0 & 0x4000) != 0
                  && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v64) )
                {
                  v125 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 249) + 16LL) + 1904LL);
                  while ( !*(_QWORD *)(v125 + 48LL * v124 + 32) )
                  {
                    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v64);
                    if ( v124 >= NumDifferentPhysicalAdapters )
                      goto LABEL_340;
                  }
                  v123 = 1;
                }
LABEL_340:
                *(_BYTE *)(v13 + 2844) = v123;
                *(_BYTE *)p_Src = v123;
                p_Src[1] = 0;
                Diagnostics = 0;
                v84 = v150;
                goto LABEL_344;
              }
              if ( v70 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v157);
              COREACCESS::~COREACCESS((COREACCESS *)v165);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v166);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v154);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v156);
              DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v155);
              break;
            case 0x17u:
              if ( a1[6] == 32 )
              {
                DxgkGetAdapterMiracastInfo(*(_QWORD *)(v43 + 176), p_Src);
                Diagnostics = 0;
                v84 = v150;
LABEL_344:
                v128 = a1[6];
                v129 = (char *)*((_QWORD *)a1 + 2);
                if ( (unsigned __int64)&v129[v128] > MmUserProbeAddress || &v129[v128] <= v129 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v129, p_Src, v128);
              }
              else
              {
                Diagnostics = -1073741811;
                v84 = v150;
              }
              goto LABEL_349;
            default:
              Diagnostics = -1073741811;
              v127 = WdLogNewEntry5_WdWarning(v74, v71, 0x1C0000000uLL, v76);
              *(_QWORD *)(v127 + 24) = (int)a1[2];
              WdLogEvent5_WdWarning(v127);
              goto LABEL_342;
          }
          goto LABEL_62;
        }
        if ( (_DWORD)v73 )
          goto LABEL_157;
        v77 = ((*(_QWORD *)(v43 + 1992) != 0LL) ^ (unsigned __int8)(2 * (*(_QWORD *)(v43 + 1984) != 0LL))) & 2 ^ (*(_QWORD *)(v43 + 1992) != 0LL);
        v78 = *(_DWORD *)(v43 + 284);
        v79 = ((unsigned __int8)v77 ^ (unsigned __int8)(4 * ((v78 & 4) != 0))) & 4 ^ v77;
        v80 = ((unsigned __int8)v79 ^ (unsigned __int8)(8 * (v78 & 1))) & 8 ^ v79;
        v73 = ((unsigned __int8)v80 ^ ((BYTE1(v78) & 1) << 6)) & 0x40;
        v71 = (unsigned int)v73 ^ v80;
        if ( byte_1C0046CDC )
        {
          DpiIsHybridIntegratedAdapter(*(_QWORD *)(v43 + 176));
          IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v81);
          v73 = ((unsigned __int8)v83 ^ (unsigned __int8)(16 * IsHybridDiscreteAdapter)) & 0x10;
          v71 = (unsigned int)v73 ^ v83;
        }
        if ( (v71 & 0x10) != 0 || *(_DWORD *)(v43 + 1264) >= 0x5023u && (v75 & 8) != 0 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v157);
          if ( *(_DWORD *)(v43 + 160) != 1 )
          {
            Diagnostics = -1073741130;
            v84 = v158;
LABEL_349:
            if ( v84 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v157);
            COREACCESS::~COREACCESS((COREACCESS *)v165);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v166);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v154);
            if ( v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
            v131 = _InterlockedDecrement64((volatile signed __int64 *)(v43 + 24));
            if ( !v131 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v43 + 16), (struct DXGADAPTER *)v43);
            if ( v131 < 0 )
            {
              v132 = WdLogNewEntry5_WdAssertion(v130);
              *(_QWORD *)(v132 + 24) = 1158LL;
              WdLogEvent5_WdAssertion(v132);
            }
            if ( P[0] )
              ExFreePoolWithTag(P[0], 0);
            v36 = P[1];
            if ( P[1] )
              DXGADAPTER::ReleaseReference((DXGADAPTER *)P[1]);
            goto LABEL_41;
          }
        }
        else
        {
LABEL_157:
          if ( v169 )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v73, v71, v72);
            v85[3] = 275LL;
            v85[4] = 4LL;
            v85[5] = v167;
            v85[6] = 0LL;
            v85[7] = 0LL;
            WdLogEvent5_WdCriticalError(v85);
          }
          v74 = (__int64)v168;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v168 + 18) )
          {
            if ( !KeReadStateEvent((PRKEVENT)((char *)v168 + 32)) )
              KeWaitForSingleObject((char *)v168 + 32, Executive, 0, 0, 0LL);
            DXGADAPTER::AcquireCoreResourceShared(v168);
            v74 = (__int64)v168;
          }
          v169 = 1;
          if ( *(_DWORD *)(v74 + 160) != 1 )
          {
            COREACCESS::Release((COREACCESS *)v167);
            Diagnostics = -1073741130;
            v84 = v158;
            goto LABEL_349;
          }
          if ( v168 != (DXGADAPTER *)v171 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v170);
            v74 = v171[40];
            if ( (_DWORD)v74 != 1 )
            {
              COREACCESS::Release((COREACCESS *)v170);
              COREACCESS::Release((COREACCESS *)v167);
              Diagnostics = -1073741130;
              v84 = v158;
              goto LABEL_349;
            }
          }
        }
        v70 = v158;
        v150 = v158;
        v64 = v159;
        goto LABEL_169;
      }
      goto LABEL_368;
    }
    if ( !g_OSTestSigningEnabled )
    {
      sub_1C0124A64(P, v27);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2016);
      return 3221225506LL;
    }
    if ( a1[6] != 1 )
    {
LABEL_62:
      sub_1C0124A64(P, v27);
      goto LABEL_9;
    }
    byte_1C0046CDB = *(_BYTE *)p_Src;
    sub_1C0124A64(P, v27);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v41, &EventProfilerExit, v42, 2016);
    return 0LL;
  }
}
