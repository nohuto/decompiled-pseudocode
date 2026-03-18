/*
 * XREFs of DxgkEscape @ 0x1C00B5410
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00016CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00086BC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C00116B4 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiGetWhqlInfo @ 0x1C00128F0 (DpiGetWhqlInfo.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C00239E8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C002549C (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     DpiIsHybridDiscreteAdapter @ 0x1C002A76C (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C002A778 (DpiIsHybridIntegratedAdapter.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C002AAF0 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C002D048 (DxgkGetAdapterMiracastInfo.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0143F3C (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0144AD8 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C0146D88 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C0147E10 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014D63C (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C015DBA4 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0162400 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C0166DF8 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0167C5C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0168520 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C016858C (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01686FC (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C016899C (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0169F30 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C016B8C4 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0178BDC (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C017F514 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C017F5F8 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0198B60 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C019B27C (DxgkHandleIndirectEscape.c)
 *     DmmEscape @ 0x1C01A3850 (DmmEscape.c)
 */

__int64 __fastcall DxgkEscape(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessDxgProcess; // rdi
  struct VIDMM_DEVICE *v8; // r12
  __int64 v9; // r14
  _DWORD *PoolWithTag; // r13
  unsigned __int64 v11; // rax
  size_t v12; // r8
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // r10d
  __int64 v33; // rcx
  unsigned int v34; // r9d
  int v35; // edx
  int v36; // edx
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  void *v43; // rax
  UINT v44; // eax
  struct _LUID *v45; // r12
  int Diagnostics; // edi
  size_t v47; // r8
  char *v48; // rcx
  __int64 v49; // r8
  PVOID v50; // rcx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // ebx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // r8
  size_t v70; // r8
  char *v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  DXGGLOBAL *v78; // rax
  __int64 v79; // rcx
  DXGADAPTER *v80; // rbx
  struct DXGGLOBAL *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 v85; // r8
  DXGGLOBAL *v86; // rax
  struct DXGADAPTER *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned int v90; // eax
  int v91; // eax
  size_t v92; // r8
  char *v93; // rcx
  __int64 v94; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v96; // edx
  _QWORD *v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  unsigned __int64 v103; // rdx
  __int64 v104; // rax
  int v105; // eax
  unsigned int HighPart; // eax
  __int64 v107; // rcx
  __int64 v108; // rcx
  DXGADAPTER *v109; // r12
  __int64 v110; // rcx
  unsigned int v111; // edx
  int v112; // eax
  unsigned int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v117; // r13
  DXGDIAGNOSTICS *v118; // rcx
  __int64 v119; // rax
  unsigned __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  unsigned int v123; // eax
  __int64 v124; // rax
  DXGADAPTER *v125; // rdi
  __int64 v126; // rcx
  __int64 v127; // rax
  DXGADAPTER *v128; // rcx
  __int64 v129; // rax
  bool v130; // di
  unsigned __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rcx
  EDIDCACHE *v134; // rcx
  unsigned __int64 v135; // rdx
  DXGADAPTER *v136; // rcx
  char v137; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v139; // rcx
  unsigned int v140; // r8d
  int v141; // eax
  int v142; // eax
  __int64 LowPart; // r8
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // rax
  struct _LUID *Src; // [rsp+30h] [rbp-508h]
  char v151; // [rsp+38h] [rbp-500h]
  __int64 v152; // [rsp+40h] [rbp-4F8h] BYREF
  char v153[8]; // [rsp+48h] [rbp-4F0h] BYREF
  __int64 v154; // [rsp+50h] [rbp-4E8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-4E0h] BYREF
  unsigned __int64 v156; // [rsp+68h] [rbp-4D0h] BYREF
  int v157; // [rsp+70h] [rbp-4C8h]
  DXGADAPTER *v158; // [rsp+78h] [rbp-4C0h] BYREF
  DXGADAPTER *v159[2]; // [rsp+80h] [rbp-4B8h] BYREF
  char v160[8]; // [rsp+90h] [rbp-4A8h] BYREF
  __int64 v161; // [rsp+98h] [rbp-4A0h]
  char v162; // [rsp+A0h] [rbp-498h]
  __int64 v163; // [rsp+A8h] [rbp-490h]
  _BYTE v164[32]; // [rsp+B0h] [rbp-488h] BYREF
  int v165; // [rsp+D0h] [rbp-468h]
  union _LARGE_INTEGER Interval; // [rsp+D8h] [rbp-460h] BYREF
  __int64 v167; // [rsp+E0h] [rbp-458h]
  __int64 v168; // [rsp+F0h] [rbp-448h] BYREF
  _BYTE v169[16]; // [rsp+F8h] [rbp-440h] BYREF
  DXGADAPTER *v170; // [rsp+108h] [rbp-430h]
  char v171; // [rsp+110h] [rbp-428h]
  _BYTE v172[16]; // [rsp+118h] [rbp-420h] BYREF
  unsigned int *v173; // [rsp+128h] [rbp-410h]
  struct DXGADAPTER *v174; // [rsp+140h] [rbp-3F8h]
  __int64 v175; // [rsp+148h] [rbp-3F0h]
  __int64 v176; // [rsp+150h] [rbp-3E8h]
  unsigned __int64 v177; // [rsp+158h] [rbp-3E0h] BYREF
  int v178; // [rsp+160h] [rbp-3D8h]
  _BYTE v179[24]; // [rsp+168h] [rbp-3D0h] BYREF
  char v180[8]; // [rsp+180h] [rbp-3B8h] BYREF
  DXGPUSHLOCK *v181; // [rsp+188h] [rbp-3B0h]
  int v182; // [rsp+190h] [rbp-3A8h]
  _DXGKARG_ESCAPE v183; // [rsp+198h] [rbp-3A0h] BYREF
  unsigned int v184; // [rsp+1C8h] [rbp-370h]
  struct _LUID *v185; // [rsp+1D0h] [rbp-368h]
  unsigned int v186; // [rsp+1D8h] [rbp-360h]
  __int64 v187; // [rsp+1E0h] [rbp-358h]
  struct _DXGKARG_ESCAPE v188; // [rsp+1E8h] [rbp-350h] BYREF
  __int64 v189; // [rsp+218h] [rbp-320h]
  _DWORD v190[4]; // [rsp+220h] [rbp-318h] BYREF
  _DWORD v191[4]; // [rsp+230h] [rbp-308h] BYREF
  _QWORD v192[8]; // [rsp+240h] [rbp-2F8h] BYREF
  _QWORD v193[8]; // [rsp+280h] [rbp-2B8h] BYREF
  _QWORD v194[8]; // [rsp+2C0h] [rbp-278h] BYREF
  struct _LUID v195; // [rsp+300h] [rbp-238h] BYREF

  v178 = 2016;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2016);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v176 = ProcessDxgProcess;
  v8 = 0LL;
  v9 = 0LL;
  v175 = 0LL;
  v163 = 0LL;
  PoolWithTag = &v195;
  Src = &v195;
  if ( !ProcessDxgProcess )
  {
    v54 = WdLogNewEntry5_WdError(v6);
    Diagnostics = -1073741811;
    *(_QWORD *)(v54 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v54);
    goto LABEL_86;
  }
  *(_OWORD *)P = 0LL;
  v11 = a1[6];
  if ( (unsigned int)v11 > 0x200 )
  {
    if ( v11 > 0x7FFFFFFF )
      PoolWithTag = 0LL;
    else
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, a1[6], 0x4B677844u);
    Src = (struct _LUID *)PoolWithTag;
    P[0] = PoolWithTag;
  }
  if ( PoolWithTag )
  {
    v12 = a1[6];
    v13 = (char *)*((_QWORD *)a1 + 2);
    if ( &v13[v12] < v13 || (unsigned __int64)&v13[v12] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithTag, v13, v12);
    v14 = a1[2];
    if ( (int)v14 < 1 )
      goto LABEL_9;
    if ( (int)v14 <= 24 )
    {
      if ( (_DWORD)v14 != 24 )
      {
        switch ( (_DWORD)v14 )
        {
          case 1:
            if ( a1[6] < 0x440 )
              goto LABEL_9;
            v65 = *PoolWithTag;
            if ( *PoolWithTag == 5 )
            {
              v60 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)PoolWithTag);
            }
            else
            {
              switch ( v65 )
              {
                case 6:
                  v60 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)PoolWithTag);
                  break;
                case 13:
                  v60 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)PoolWithTag);
                  break;
                case 9:
                  v60 = DxgEscapeSuspendResumeProcess(*a1, *((void **)PoolWithTag + 1), 1, PoolWithTag[4] != 0);
                  break;
                case 10:
                  v60 = DxgEscapeSuspendResumeProcess(*a1, *((void **)PoolWithTag + 1), 0, 0);
                  break;
                default:
                  goto LABEL_9;
              }
            }
            break;
          case 8:
            v58 = a1[6];
            if ( v58 < 0xC )
              goto LABEL_9;
            if ( v58 < PoolWithTag[1] )
              goto LABEL_9;
            if ( *PoolWithTag != 1484026436 )
              goto LABEL_9;
            v59 = PoolWithTag[2];
            if ( v59 )
            {
              if ( v59 != 13 )
                goto LABEL_9;
            }
            v60 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)PoolWithTag, 0LL);
            break;
          case 0x14:
            v75 = DxgkHandleMiracastEscape(a1[6], PoolWithTag);
LABEL_184:
            v61 = v75;
            if ( v75 < 0 )
            {
LABEL_134:
              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
              if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                Template_q(v63, &EventProfilerExit, v64, 2016);
              return (unsigned int)v61;
            }
            v70 = a1[6];
            v71 = (char *)*((_QWORD *)a1 + 2);
            if ( (unsigned __int64)&v71[v70] > MmUserProbeAddress || &v71[v70] <= v71 )
              *(_BYTE *)MmUserProbeAddress = 0;
LABEL_174:
            memmove(v71, PoolWithTag, v70);
            goto LABEL_134;
          default:
LABEL_9:
            v15 = 0LL;
            v167 = 0LL;
            v158 = 0LL;
            v174 = 0LL;
            if ( (_DWORD)v14 != 13 )
            {
LABEL_10:
              DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                (DXGHANDLETABLELOCKSHARED *)v179,
                (struct _KTHREAD **)ProcessDxgProcess);
              v19 = *a1;
              if ( (_DWORD)v19 )
              {
                v16 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
                v19 = (unsigned int)v19 >> 30;
                if ( (unsigned int)v16 < *(_DWORD *)(ProcessDxgProcess + 224)
                  && (v18 = *(_QWORD *)(ProcessDxgProcess + 208),
                      v17 = *(unsigned int *)(v18 + 16LL * (unsigned int)v16 + 8),
                      (_DWORD)v19 == ((*(_DWORD *)(v18 + 16LL * (unsigned int)v16 + 8) >> 4) & 3))
                  && (v17 & 0x1000) == 0
                  && (v17 & 0xF) != 0
                  && (*(_BYTE *)(v18 + 16LL * (unsigned int)v16 + 8) & 0xF) == 1 )
                {
                  v15 = *(_QWORD *)(v18 + 16LL * (unsigned int)v16);
                }
                else
                {
                  v15 = 0LL;
                }
                v167 = v15;
              }
              if ( v15 )
              {
                v20 = a1[1];
                if ( v20 )
                {
                  v21 = (v20 >> 6) & 0xFFFFFF;
                  v22 = v20 >> 30;
                  if ( (unsigned int)v21 < *(_DWORD *)(ProcessDxgProcess + 224)
                    && (v18 = *(_QWORD *)(ProcessDxgProcess + 208),
                        v17 = *(unsigned int *)(v18 + 16LL * (unsigned int)v21 + 8),
                        (_DWORD)v22 == ((*(_DWORD *)(v18 + 16LL * (unsigned int)v21 + 8) >> 4) & 3))
                    && (v17 & 0x1000) == 0
                    && (v17 & 0xF) != 0
                    && (*(_BYTE *)(v18 + 16LL * (unsigned int)v21 + 8) & 0xF) == 3 )
                  {
                    v9 = *(_QWORD *)(v18 + 16LL * (unsigned int)v21);
                  }
                  else
                  {
                    v9 = 0LL;
                  }
                  v175 = v9;
                  if ( !v9 || v15 != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) && v15 != *(_QWORD *)(v9 + 2856) )
                  {
                    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v22, v17, v18);
                    v72[3] = v15;
                    v72[4] = a1[1];
LABEL_178:
                    WdLogEvent5_WdWarning(v72);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v179);
                    goto LABEL_179;
                  }
                }
                v23 = a1[7];
                if ( v23 )
                {
                  v52 = (v23 >> 6) & 0xFFFFFF;
                  v53 = v23 >> 30;
                  if ( (unsigned int)v52 < *(_DWORD *)(ProcessDxgProcess + 224)
                    && (v18 = *(_QWORD *)(ProcessDxgProcess + 208),
                        v17 = *(unsigned int *)(v18 + 16LL * (unsigned int)v52 + 8),
                        v53 == ((*(_DWORD *)(v18 + 16LL * (unsigned int)v52 + 8) >> 4) & 3))
                    && (v17 & 0x1000) == 0
                    && (v17 & 0xF) != 0
                    && (*(_BYTE *)(v18 + 16LL * (unsigned int)v52 + 8) & 0xF) == 7 )
                  {
                    v24 = *(_QWORD *)(v18 + 16LL * (unsigned int)v52);
                  }
                  else
                  {
                    v24 = 0LL;
                  }
                  v163 = v24;
                  if ( !v24 || !v9 || v9 != *(_QWORD *)(v24 + 16) )
                  {
                    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v52, v17, v18);
                    v72[3] = v15;
                    v72[4] = v9;
                    v72[5] = a1[7];
                    goto LABEL_178;
                  }
                }
                else
                {
                  v24 = v163;
                }
                if ( v9 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v9 + 64));
                  v15 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
                  v167 = v15;
                }
                if ( v24 )
                  _InterlockedIncrement64((volatile signed __int64 *)(v24 + 32));
                _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
                v189 = -1LL;
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v179);
                if ( *(_DWORD *)(v15 + 1352) >= 0x5023u && (a1[3] & 0xFFFFFFF0) != 0 )
                {
                  v89 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
                  *(_QWORD *)(v89 + 24) = v15;
                  WdLogEvent5_WdWarning(v89);
                  goto LABEL_179;
                }
                v159[0] = (DXGADAPTER *)v15;
                v159[1] = (DXGADAPTER *)-1LL;
                v154 = v9;
                v152 = v163;
                if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v15, 0, &v158, &v177, 0LL, 0LL) >= 0
                  && _InterlockedExchangeAdd64((volatile signed __int64 *)v158 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v158 + 2), v158);
                }
                if ( a1[2] == 8 )
                {
                  v90 = a1[6];
                  if ( v90 >= 0xC && v90 >= PoolWithTag[1] && *PoolWithTag == 1484026436 )
                  {
                    v91 = PoolWithTag[2];
                    if ( v91 == 14 || v91 == 21 )
                    {
                      v61 = DxgkDrtTestEscape(
                              (struct DXGADAPTER *)v15,
                              (struct _D3DKMT_DRT_ESCAPE_HEAD *)PoolWithTag,
                              0LL);
                      if ( v61 >= 0 )
                      {
                        v92 = a1[6];
                        v93 = (char *)*((_QWORD *)a1 + 2);
                        if ( (unsigned __int64)&v93[v92] > MmUserProbeAddress || &v93[v92] <= v93 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v93, PoolWithTag, v92);
                      }
                      ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v152);
                      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v154);
                      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v159, v62);
                      goto LABEL_134;
                    }
                  }
                }
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v168, (struct DXGADAPTER *const)v15, 0LL);
                COREACCESS::COREACCESS((COREACCESS *)v164, v174);
                v165 = 0;
                v161 = v15;
                v29 = 0;
                v162 = 0;
                v32 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL);
                v157 = v32;
                v33 = a1[2];
                if ( (_DWORD)v33 == 13 )
                {
                  COREACCESS::AcquireShared((COREACCESS *)v164);
                }
                else
                {
                  v34 = a1[3];
                  if ( (v34 & 1) != 0 )
                  {
                    v151 = 0;
                    if ( !(_DWORD)v33 || (_DWORD)v33 == 3 && a1[6] >= 0xC && Src->LowPart == 3 )
                      v151 = 1;
                    if ( *(_QWORD *)(v15 + 2136) )
                      v151 = 1;
                    Diagnostics = COREADAPTERACCESS::AcquireExclusive(&v168);
                    if ( Diagnostics < 0 )
                      goto LABEL_75;
                    if ( !v151 )
                    {
                      v38 = *(_QWORD *)(v15 + 2136);
                      if ( v38 )
                        ADAPTER_RENDER::FlushScheduler(v38, 2, 0xFFFFFFFF, 0);
                    }
                    v39 = 1LL;
                    v40 = 1LL;
                    ProcessDxgProcess = v176;
                    v32 = v157;
LABEL_56:
                    if ( a1[1] )
                    {
                      v29 = v162;
                      if ( *(_DWORD *)(v9 + 376) != 1 )
                      {
                        Diagnostics = -1073741130;
                        goto LABEL_75;
                      }
                    }
                    v41 = a1[2];
                    if ( v41 )
                    {
                      switch ( v41 )
                      {
                        case 1u:
                          if ( !v158 )
                            goto LABEL_261;
                          if ( v9 )
                            v8 = *(struct VIDMM_DEVICE **)(v9 + 560);
                          if ( a1[6] < 0x440 )
                            goto LABEL_267;
                          v105 = VIDMM_EXPORT::VidMmEscape(
                                   *(VIDMM_EXPORT **)(*((_QWORD *)v158 + 267) + 400LL),
                                   *(struct VIDMM_GLOBAL **)(*((_QWORD *)v158 + 267) + 408LL),
                                   v8,
                                   (struct _D3DKMT_VIDMM_ESCAPE *)Src,
                                   v40);
                          goto LABEL_439;
                        case 2u:
                          if ( *((_QWORD *)a1 + 2) )
                          {
                            v30 = a1[6];
                            if ( (unsigned int)v30 < 4 )
                              goto LABEL_267;
                            switch ( Src->LowPart )
                            {
                              case 0u:
                                goto LABEL_283;
                              case 1u:
                                v107 = 2LL;
                                goto LABEL_285;
                              case 2u:
                                v107 = 1LL;
                                goto LABEL_285;
                              case 3u:
                                v107 = 3LL;
                                goto LABEL_285;
                              case 4u:
                              case 5u:
                                if ( !v158 )
                                {
                                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v38, v30, 1LL, v40) + 24) = 0LL;
                                  goto LABEL_443;
                                }
                                Diagnostics = TdrDbgCtrl(4LL, v30, 1LL, v40);
                                if ( Diagnostics < 0 )
                                  goto LABEL_440;
                                v108 = *(_QWORD *)(*((_QWORD *)v158 + 267) + 384LL);
                                v191[0] = 2;
                                v45 = Src;
                                v191[1] = Src->LowPart;
                                Diagnostics = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v158 + 267) + 376LL) + 8LL)
                                                                                           + 64LL))(
                                                v108,
                                                v191);
                                goto LABEL_70;
                              case 6u:
                                v107 = 5LL;
                                goto LABEL_285;
                              case 7u:
                                v107 = 6LL;
                                goto LABEL_285;
                              case 8u:
                                if ( (unsigned int)v30 < 8 )
                                {
                                  Diagnostics = -1073741811;
                                  goto LABEL_75;
                                }
                                v109 = v158;
                                if ( !v158 )
                                {
                                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v38, v30, 1LL, v40) + 24) = v15;
                                  goto LABEL_443;
                                }
                                Diagnostics = TdrDbgCtrl(4LL, v30, 1LL, v40);
                                if ( Diagnostics < 0 )
                                  goto LABEL_440;
                                v110 = *(_QWORD *)(*((_QWORD *)v109 + 267) + 384LL);
                                v190[0] = 2;
                                v190[1] = Src->LowPart;
                                v190[2] = Src->HighPart;
                                v105 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v109 + 267) + 376LL)
                                                                                                + 8LL)
                                                                                    + 64LL))(
                                         v110,
                                         v190);
                                break;
                              default:
                                goto LABEL_267;
                            }
                          }
                          else
                          {
LABEL_283:
                            v107 = 0LL;
LABEL_285:
                            v105 = TdrDbgCtrl(v107, v30, 1LL, v40);
                          }
LABEL_439:
                          Diagnostics = v105;
                          goto LABEL_440;
                        case 3u:
                          if ( !v158 )
                            goto LABEL_261;
                          if ( a1[6] < 0xC )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( Src->LowPart == 2 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( Src->LowPart != 3 )
                          {
                            v45 = Src;
                            Diagnostics = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v158 + 267) + 376LL) + 8LL)
                                                                                            + 64LL))(
                                            *(_QWORD *)(*((_QWORD *)v158 + 267) + 384LL),
                                            Src);
                            goto LABEL_70;
                          }
                          if ( !(_DWORD)v40 )
                            goto LABEL_267;
                          HighPart = 5000000;
                          if ( Src->HighPart < 0x4C4B40u )
                            HighPart = Src->HighPart;
                          Interval.QuadPart = -(__int64)HighPart;
                          KeDelayExecutionThread(0, 0, &Interval);
                          Diagnostics = 0;
                          v45 = Src;
                          goto LABEL_71;
                        case 4u:
                          if ( a1[6] < 0xC || !v9 )
                            goto LABEL_267;
                          v45 = Src;
                          Diagnostics = DXGDEVICE::Escape((DXGDEVICE *)v9, (struct _D3DKMT_DEVICE_ESCAPE *)Src);
                          goto LABEL_70;
                        case 5u:
                          if ( !*(_QWORD *)(v15 + 2128) )
                          {
                            v98 = WdLogNewEntry5_WdError(v38);
                            *(_QWORD *)(v98 + 24) = v15;
                            *(_QWORD *)(v98 + 32) = -1073741637LL;
                            WdLogEvent5_WdError(v98);
                            if ( !v29 )
                              goto LABEL_249;
                            goto LABEL_248;
                          }
                          v102 = a1[6];
                          if ( (unsigned int)v102 >= 0x80 )
                          {
                            v45 = Src;
                            v103 = (unsigned __int64)Src[1];
                            if ( v103 <= 0x19000 && (v102 == v103 + 127 || !v103) )
                            {
                              Diagnostics = DmmEscape(v15, Src, 1LL, v40);
                              goto LABEL_70;
                            }
                          }
LABEL_267:
                          Diagnostics = -1073741811;
                          goto LABEL_75;
                        case 6u:
                          v111 = a1[6];
                          if ( v111 < 8 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v45 = Src;
                          Diagnostics = DxgDbgTakeSnapshot(&Src->HighPart, v111 - 4, (unsigned int *)Src);
                          goto LABEL_70;
                        case 7u:
                          if ( (a1[3] & 1) == 0 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( a1[6] != 4 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v112 = *(_DWORD *)(v15 + 300);
                          if ( (v112 & 4) == 0 && (v112 & 0x20) == 0 )
                            *(_BYTE *)(v15 + 180) = Src->LowPart;
                          Diagnostics = 0;
                          v45 = Src;
                          goto LABEL_71;
                        case 8u:
                          v113 = a1[6];
                          if ( v113 < 0xC )
                            goto LABEL_267;
                          v45 = Src;
                          if ( v113 < Src->HighPart || Src->LowPart != 1484026436 )
                            goto LABEL_267;
                          Diagnostics = DxgkDrtTestEscape(
                                          (struct DXGADAPTER *)v15,
                                          (struct _D3DKMT_DRT_ESCAPE_HEAD *)Src,
                                          (struct COREADAPTERACCESS *)&v168);
                          goto LABEL_70;
                        case 9u:
                          Diagnostics = -1073741811;
                          v114 = a1[6];
                          if ( (unsigned int)v114 < 4 || v114 != Src->LowPart + 4LL )
                            goto LABEL_440;
                          memset(v193, 0, sizeof(v193));
                          v193[7] = MEMORY[0xFFFFF78000000014];
                          ExSystemTimeToLocalTime((PLARGE_INTEGER)&v193[7], (PLARGE_INTEGER)&v193[6]);
                          v193[0] = 0x400000000ALL;
                          memset(&v193[1], 0, 36);
                          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v193);
                          Global = DXGGLOBAL::GetGlobal(v115);
                          v117 = Global;
                          if ( !Global )
                          {
                            v29 = v162;
LABEL_440:
                            v45 = Src;
                            goto LABEL_70;
                          }
                          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v180, (struct _KTHREAD **)Global + 65);
                          DXGPUSHLOCK::AcquireShared(v181);
                          v182 = 1;
                          v118 = (DXGDIAGNOSTICS *)*((_QWORD *)v117 + 68);
                          if ( v118 )
                          {
                            v45 = Src;
                            Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(
                                            v118,
                                            (unsigned __int8 *)&Src->HighPart,
                                            (unsigned int *)Src);
                            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v180);
                            v29 = v162;
                            goto LABEL_70;
                          }
                          v119 = WdLogNewEntry5_WdError(0LL);
                          *(_QWORD *)(v119 + 24) = Src;
                          *(_QWORD *)(v119 + 32) = v117;
                          WdLogEvent5_WdError(v119);
                          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v180);
                          if ( v162 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
                          COREACCESS::~COREACCESS((COREACCESS *)v164);
                          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v168);
                          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v152);
                          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v154);
                          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v159, v120);
                          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
                          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                            Template_q(v121, &EventProfilerExit, v122, 2016);
                          return 3221225860LL;
                        case 0xAu:
                          if ( !*(_QWORD *)(v15 + 2128) )
                            goto LABEL_261;
                          v123 = a1[6];
                          if ( v123 < 0x18 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v45 = Src;
                          if ( v123 != Src->LowPart )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( v32 )
                            Diagnostics = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)Src);
                          else
                            Diagnostics = OutputDuplGetDebugInfo(
                                            (struct DXGADAPTER *)v15,
                                            (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)Src);
                          goto LABEL_70;
                        case 0xBu:
                          if ( !*(_QWORD *)(v15 + 2128) )
                            goto LABEL_261;
                          v124 = a1[6];
                          if ( (unsigned int)v124 < 8 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v45 = Src;
                          if ( v124 != (unsigned int)Src->HighPart + 8LL )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( v32 )
                            Diagnostics = OutputDuplGetDiagnosticBuffer(
                                            0LL,
                                            (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)Src);
                          else
                            Diagnostics = OutputDuplGetDiagnosticBuffer(
                                            (struct DXGADAPTER *)v15,
                                            (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)Src);
                          goto LABEL_70;
                        case 0xCu:
                          if ( (*(_DWORD *)(v15 + 300) & 0x20) == 0
                            || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v15) )
                          {
                            Diagnostics = -1071775742;
                            goto LABEL_75;
                          }
                          v188.hDevice = 0LL;
                          v188.hContext = 0LL;
                          v188.Flags.Value = a1[3];
                          v188.PrivateDriverDataSize = a1[6];
                          v45 = Src;
                          v188.pPrivateDriverData = Src;
                          Diagnostics = DXGADAPTER::DdiEscape(v128, &v188);
                          goto LABEL_70;
                        case 0xDu:
                          v125 = v174;
                          if ( !DXGADAPTER::IsBddFallbackDriver(v174) )
                          {
                            v127 = WdLogNewEntry5_WdAssertion(v126);
                            *(_QWORD *)(v127 + 24) = 1751LL;
                            WdLogEvent5_WdAssertion(v127);
                          }
                          v183.hKmdProcessHandle = 0LL;
                          v187 = 0LL;
                          v184 = a1[3];
                          v186 = a1[6];
                          v45 = Src;
                          v185 = Src;
                          Diagnostics = DXGADAPTER::DdiEscape(
                                          v125,
                                          (const struct _DXGKARG_ESCAPE *)&v183.hKmdProcessHandle);
                          goto LABEL_70;
                        case 0xEu:
                          if ( a1[6] != 8 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( !Src->LowPart )
                          {
                            v130 = Src->HighPart != 0;
                            *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)Src) + 752) = v130;
                            Diagnostics = 0;
                            v45 = Src;
                            goto LABEL_71;
                          }
                          if ( Src->LowPart == 15 )
                          {
                            v38 = *(_QWORD *)(v15 + 2128);
                            if ( !v38 )
                            {
LABEL_261:
                              v104 = WdLogNewEntry5_WdError(v38);
                              *(_QWORD *)(v104 + 24) = v15;
                              *(_QWORD *)(v104 + 32) = -1073741637LL;
                              goto LABEL_263;
                            }
                            v45 = Src;
                            Diagnostics = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                                            (ADAPTER_DISPLAY *)v38,
                                            Src->HighPart);
                          }
                          else
                          {
                            v129 = WdLogNewEntry5_WdAssertion(Src);
                            v45 = Src;
                            *(_QWORD *)(v129 + 24) = (int)Src->LowPart;
                            WdLogEvent5_WdAssertion(v129);
                            Diagnostics = -1073741811;
                          }
                          goto LABEL_70;
                        case 0xFu:
                          if ( !*(_QWORD *)(v15 + 2128) )
                            goto LABEL_261;
                          v131 = a1[6];
                          if ( (unsigned int)v131 < 8 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v45 = Src;
                          if ( v131 < 44 * (unsigned __int64)(unsigned int)Src->HighPart + 8 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          Diagnostics = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                                          *(ADAPTER_DISPLAY **)(v15 + 2128),
                                          (struct _D3DKMT_DISPLAYMODELIST *)Src);
                          goto LABEL_70;
                        case 0x10u:
                          if ( a1[6] < 4 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v45 = Src;
                          Diagnostics = DpiGetWhqlInfo(*(_QWORD *)(v15 + 192), Src);
                          goto LABEL_70;
                        case 0x11u:
                          if ( (a1[3] & 1) == 0 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          if ( a1[6] < 0x608 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          v45 = Src;
                          Diagnostics = DpiBrightnessEscape(
                                          *(struct _DEVICE_OBJECT **)(v15 + 192),
                                          (struct _D3DKMT_BRIGHTNESS_INFO *)Src);
                          goto LABEL_70;
                        case 0x12u:
                          v132 = a1[6];
                          if ( (unsigned int)v132 < 4 )
                            goto LABEL_267;
                          v45 = Src;
                          v133 = Src->LowPart + 4LL;
                          if ( v132 != v133 )
                            goto LABEL_267;
                          v134 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v133) + 79);
                          if ( v134 )
                          {
                            Diagnostics = EDIDCACHE::GetEdids(v134, (struct _D3DKMT_DXGK_DIAGNOSTICS *)Src);
                            goto LABEL_70;
                          }
                          Diagnostics = -1073741801;
                          goto LABEL_75;
                        case 0x13u:
                          if ( a1[6] < 0x10 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          Src->HighPart &= 7u;
                          DxgkGetAdapterBrightnessInfo(*(_QWORD *)(v15 + 192), Src);
                          Diagnostics = 0;
                          v45 = Src;
                          goto LABEL_71;
                        case 0x15u:
                          if ( a1[6] >= 8 )
                          {
                            v136 = v158;
                            if ( !v158 )
                              goto LABEL_391;
                            if ( v9 )
                            {
                              v137 = 0;
                              if ( (qword_1C0056840 & 0x188ED7) != 0
                                && (qword_1C0056848 & 0xFFFFFFFFFFE77128uLL) == 0
                                && (qword_1C0056840 & 0x4000) != 0 )
                              {
                                while ( 1 )
                                {
                                  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v136);
                                  if ( v140 >= NumDifferentPhysicalAdapters )
                                    goto LABEL_400;
                                  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 2136) + 16LL) + 2040LL)
                                                 + 48LL * v140
                                                 + 32) )
                                    break;
                                  v136 = v158;
                                }
                                v137 = 1;
                              }
LABEL_400:
                              *(_BYTE *)(v9 + 2868) = v137;
                              LOBYTE(Src->LowPart) = v137;
                              Src->HighPart = 0;
                              Diagnostics = 0;
                              v45 = Src;
                              goto LABEL_71;
                            }
                            if ( !v29 )
                              goto LABEL_386;
                          }
                          else if ( !v29 )
                          {
                            goto LABEL_386;
                          }
LABEL_385:
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
LABEL_386:
                          COREACCESS::~COREACCESS((COREACCESS *)v164);
                          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v168);
                          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v152);
                          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v154);
                          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v159, v135);
                          break;
                        case 0x17u:
                          if ( a1[6] != 32 )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          DxgkGetAdapterMiracastInfo(*(_QWORD *)(v15 + 192), Src);
                          Diagnostics = 0;
                          v45 = Src;
                          goto LABEL_71;
                        case 0x1Cu:
                          if ( a1[6] < 0x20 )
                          {
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          v45 = Src;
                          v141 = Src[1].HighPart;
                          if ( v141 > 1 )
                          {
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          if ( *Src )
                          {
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          if ( !v141 )
                          {
                            Src[2] = 0LL;
                            Src[3] = 0LL;
                          }
                          if ( Src[1].LowPart - 1000 > 1 )
                            goto LABEL_391;
                          if ( !v158 )
                          {
                            v104 = WdLogNewEntry5_WdError(v38);
                            *(_QWORD *)(v104 + 24) = 2029LL;
                            goto LABEL_263;
                          }
                          Diagnostics = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v158 + 267) + 400LL) + 8LL)
                                                                                           + 1080LL))(
                                          *(_QWORD *)(*((_QWORD *)v158 + 267) + 408LL),
                                          ProcessDxgProcess,
                                          (unsigned int)Src[1].HighPart);
                          goto LABEL_70;
                        case 0x1Du:
                          if ( a1[6] < 0x20 )
                          {
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          v45 = Src;
                          v142 = Src->HighPart;
                          if ( v142 > 1 )
                          {
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          if ( !v142 )
                          {
                            Src[1] = 0LL;
                            Src[2] = 0LL;
                            Src[3] = 0LL;
                          }
                          LowPart = Src->LowPart;
                          if ( (unsigned int)(LowPart - 1000) > 1 )
                          {
LABEL_391:
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          if ( v158 )
                          {
                            Diagnostics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v158 + 267) + 400LL) + 8LL) + 1088LL))(
                                            *(_QWORD *)(*((_QWORD *)v158 + 267) + 408LL),
                                            (unsigned int)Src->HighPart,
                                            LowPart,
                                            Src + 1);
                            goto LABEL_70;
                          }
                          v104 = WdLogNewEntry5_WdError(v38);
                          *(_QWORD *)(v104 + 24) = 2079LL;
LABEL_263:
                          WdLogEvent5_WdError(v104);
                          if ( v29 )
LABEL_248:
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
LABEL_249:
                          COREACCESS::~COREACCESS((COREACCESS *)v164);
                          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v168);
                          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v152);
                          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v154);
                          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v159, v99);
                          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
                          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                            Template_q(v100, &EventProfilerExit, v101, 2016);
                          return 3221225659LL;
                        case 0x1Fu:
                          if ( a1[6] != 4 )
                          {
                            v144 = WdLogNewEntry5_WdError(v38);
                            *(_QWORD *)(v144 + 24) = a1[6];
                            WdLogEvent5_WdError(v144);
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          if ( *(_QWORD *)(v15 + 2136) )
                          {
                            v145 = WdLogNewEntry5_WdWarning(v38, v30, 1LL, v40);
                            *(_QWORD *)(v145 + 24) = v15;
                            WdLogEvent5_WdWarning(v145);
                            if ( !v29 )
                              goto LABEL_386;
                            goto LABEL_385;
                          }
                          v146 = *(_QWORD *)(v15 + 2128);
                          if ( !*(_QWORD *)(v146 + 256) )
                          {
                            Diagnostics = -1073741811;
                            goto LABEL_75;
                          }
                          *(_DWORD *)(v146 + 264) = **((_DWORD **)a1 + 2);
                          Diagnostics = 0;
                          v45 = Src;
                          goto LABEL_71;
                        default:
                          Diagnostics = -1073741811;
                          v147 = WdLogNewEntry5_WdWarning(v38, v30, 1LL, v40);
                          *(_QWORD *)(v147 + 24) = (int)a1[2];
                          WdLogEvent5_WdWarning(v147);
                          goto LABEL_440;
                      }
                      goto LABEL_179;
                    }
                    if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v15 + 448) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
                      v39 = 0LL;
                    if ( (_BYTE)v39 )
                    {
                      v42 = a1[6];
                      if ( !(_DWORD)v42 || !*((_QWORD *)a1 + 2) )
                      {
                        v148 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v42, v39, v40);
                        v148[3] = a1[6];
                        v148[4] = *((_QWORD *)a1 + 2);
                        Diagnostics = -1073741811;
                        v148[5] = -1073741811LL;
                        WdLogEvent5_WdWarning(v148);
                        goto LABEL_75;
                      }
                      if ( v9 )
                        v43 = *(void **)(v9 + 384);
                      else
                        v43 = 0LL;
                      v183.hDevice = v43;
                      if ( v163 )
                        v8 = *(struct VIDMM_DEVICE **)(v163 + 168);
                      v183.hContext = v8;
                      v44 = a1[3];
                      v183.Flags.Value = v44;
                      v45 = Src;
                      if ( *(_DWORD *)(v15 + 276) != 4098 )
                      {
LABEL_69:
                        v183.Flags.Value = v44 & 0xF;
                        v183.PrivateDriverDataSize = a1[6];
                        v183.pPrivateDriverData = Src;
                        Diagnostics = DXGADAPTER::DdiEscape((DXGADAPTER *)v15, &v183);
LABEL_70:
                        if ( Diagnostics >= 0 )
                        {
LABEL_71:
                          v47 = a1[6];
                          v48 = (char *)*((_QWORD *)a1 + 2);
                          if ( (unsigned __int64)&v48[v47] > MmUserProbeAddress || &v48[v47] <= v48 )
                            *(_BYTE *)MmUserProbeAddress = 0;
                          memmove(v48, v45, v47);
                        }
                        goto LABEL_75;
                      }
                      if ( (unsigned int)IsAMDDriverEscapeAllowed(Src, v42) )
                      {
                        LOBYTE(v44) = v183.Flags.0;
                        goto LABEL_69;
                      }
                    }
                    else
                    {
                      v149 = WdLogNewEntry5_WdWarning(v38, v30, v39, v40);
                      *(_QWORD *)(v149 + 24) = v15;
                      *(_QWORD *)(v149 + 32) = -1073741637LL;
                      WdLogEvent5_WdWarning(v149);
                    }
LABEL_443:
                    Diagnostics = -1073741637;
                    goto LABEL_75;
                  }
                  if ( (_DWORD)v33 )
                    goto LABEL_46;
                  v31 = 1LL;
                  v33 = *(unsigned int *)(v15 + 300);
                  v35 = ((*(_QWORD *)(v15 + 2136) != 0LL) ^ (unsigned __int8)(2 * (*(_QWORD *)(v15 + 2128) != 0LL))) & 2 ^ (*(_QWORD *)(v15 + 2136) != 0LL);
                  v36 = ((unsigned __int8)v35 ^ (unsigned __int8)(4 * ((v33 & 4) != 0))) & 4 ^ v35;
                  v37 = ((unsigned __int8)v36 ^ (unsigned __int8)(8 * ((v33 & 1) != 0))) & 8 ^ v36;
                  v30 = ((unsigned __int8)v37 ^ (((*(_DWORD *)(v15 + 300) & 0x100) != 0) << 6)) & 0x40 ^ (unsigned int)v37;
                  if ( (_BYTE)word_1C0056E9D )
                  {
                    DpiIsHybridIntegratedAdapter(*(_QWORD *)(v15 + 192));
                    IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v94);
                    v33 = ((unsigned __int8)v96 ^ (unsigned __int8)(16 * IsHybridDiscreteAdapter)) & 0x10;
                    v30 = (unsigned int)v33 ^ v96;
                  }
                  if ( (v30 & 0x10) == 0 && (*(_DWORD *)(v15 + 1352) < 0x5023u || (v34 & 8) == 0) )
                  {
LABEL_46:
                    if ( v171 )
                    {
                      v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v30, v31);
                      v97[3] = 275LL;
                      v97[4] = 4LL;
                      v97[5] = v169;
                      v97[6] = 0LL;
                      v97[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v97);
                      v32 = v157;
                    }
                    v38 = (__int64)v170;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v170 + 20) )
                    {
                      if ( !KeReadStateEvent((PRKEVENT)v170 + 2) )
                        KeWaitForSingleObject((char *)v170 + 48, Executive, 0, 0, 0LL);
                      DXGADAPTER::AcquireCoreResourceShared(v170);
                      v38 = (__int64)v170;
                      v32 = v157;
                    }
                    v171 = 1;
                    if ( *(_DWORD *)(v38 + 176) != 1 )
                    {
                      COREACCESS::Release((COREACCESS *)v169);
                      Diagnostics = -1073741130;
                      v29 = v162;
                      goto LABEL_75;
                    }
                    if ( v170 != (DXGADAPTER *)v173 )
                    {
                      COREACCESS::AcquireShared((COREACCESS *)v172);
                      v38 = v173[44];
                      if ( (_DWORD)v38 != 1 )
                      {
                        COREACCESS::Release((COREACCESS *)v172);
                        COREACCESS::Release((COREACCESS *)v169);
                        Diagnostics = -1073741130;
                        v29 = v162;
                        goto LABEL_75;
                      }
                      v32 = v157;
                    }
                    v29 = v162;
                    goto LABEL_55;
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
                  v29 = v162;
                  if ( *(_DWORD *)(v15 + 176) != 1 )
                  {
                    Diagnostics = -1073741130;
LABEL_75:
                    if ( v29 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
                    COREACCESS::~COREACCESS((COREACCESS *)v164);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v168);
                    ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v152);
                    if ( v9
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v9 + 16), (struct DXGDEVICE *)v9);
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v15 + 16), (struct DXGADAPTER *)v15);
                    if ( P[0] )
                      ExFreePoolWithTag(P[0], 0);
                    v50 = P[1];
                    if ( P[1] )
                      DXGADAPTER::ReleaseReference((DXGADAPTER *)P[1]);
                    goto LABEL_86;
                  }
                }
                v32 = v157;
LABEL_55:
                v39 = 1LL;
                v40 = (unsigned int)v165;
                goto LABEL_56;
              }
              v88 = WdLogNewEntry5_WdWarning(v16, v19, v17, v18);
              *(_QWORD *)(v88 + 24) = *a1;
              Diagnostics = -1073741811;
              *(_QWORD *)(v88 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v88);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v179);
              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
LABEL_86:
              if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                Template_q((__int64)v50, &EventProfilerExit, v49, 2016);
              return (unsigned int)Diagnostics;
            }
            v86 = DXGGLOBAL::GetGlobal(v14);
            v87 = DXGGLOBAL::ReferenceBddFallbackAdapter(v86, &v156);
            v174 = v87;
            if ( v87 )
            {
              P[1] = v87;
              goto LABEL_10;
            }
            goto LABEL_195;
        }
LABEL_132:
        v61 = v60;
        goto LABEL_134;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( a1[6] != 1 )
          goto LABEL_179;
        byte_1C0056E9C = *(_BYTE *)PoolWithTag;
        goto LABEL_157;
      }
      goto LABEL_152;
    }
    if ( (int)v14 > 30 )
    {
      if ( (_DWORD)v14 == 32 )
      {
        if ( a1[6] == 16 )
        {
          DxgkLogCodePointPacket(*PoolWithTag, PoolWithTag[1], PoolWithTag[2], PoolWithTag[3]);
LABEL_157:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v68, &EventProfilerExit, v69, 2016);
          return 0LL;
        }
        goto LABEL_179;
      }
      if ( (_DWORD)v14 != 1029 )
        goto LABEL_9;
      v76 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v76 + 24) = 817LL;
      WdLogEvent5_WdAssertion(v76);
      if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL) )
      {
        v78 = DXGGLOBAL::GetGlobal(v77);
        v80 = DXGGLOBAL::ReferenceBddFallbackAdapter(v78, (unsigned __int64 *)&v188.hKmdProcessHandle);
        if ( !v80 )
        {
LABEL_195:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v82, &EventProfilerExit, v83, 2016);
          return 3221226021LL;
        }
        v153[0] = 1;
        v81 = DXGGLOBAL::GetGlobal(v79);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v81,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkEscapeStopDisplayAdapters,
          (__int64)v153,
          1);
        if ( !v153[0] )
        {
          memset(v192, 0, sizeof(v192));
          v192[0] = 0x4000000006LL;
          memset(&v192[1], 0, 36);
          v192[6] = 76LL;
          v192[7] = 0LL;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v192);
          Diagnostics = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, 0LL, 0LL, 0LL);
          DXGADAPTER::ReleaseReference(v80);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
          goto LABEL_86;
        }
        DXGADAPTER::ReleaseReference(v80);
      }
    }
    else
    {
      if ( (_DWORD)v14 == 30 )
      {
        v75 = DxgkHandleIndirectEscape(a1[6], PoolWithTag);
        goto LABEL_184;
      }
      if ( (_DWORD)v14 != 25 )
      {
        if ( (_DWORD)v14 == 26 )
        {
          if ( a1[6] != 140 )
            goto LABEL_179;
          v61 = DxgkHMDGetEdidBaseBlock(
                  (const struct _LUID *)PoolWithTag,
                  PoolWithTag[2],
                  (unsigned __int8 *)PoolWithTag + 12);
          if ( v61 < 0 )
            goto LABEL_134;
          v70 = a1[6];
          v71 = (char *)*((_QWORD *)a1 + 2);
          if ( (unsigned __int64)&v71[v70] > MmUserProbeAddress || &v71[v70] <= v71 )
            *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_174;
        }
        if ( (_DWORD)v14 != 27 )
          goto LABEL_9;
        if ( !g_OSTestSigningEnabled )
        {
LABEL_152:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v66, &EventProfilerExit, v67, 2016);
          return 3221225506LL;
        }
        if ( a1[6] == 200 )
        {
          memset(v194, 0, sizeof(v194));
          EtwActivityIdControl(3u, (LPGUID)&v194[1]);
          v194[7] = MEMORY[0xFFFFF78000000014];
          LODWORD(v194[3]) = 46;
          v60 = DxgkEnableDisableTargetAsHMD(
                  (struct _D3DKMT_SOFTGPU_LUID_TARGET *)PoolWithTag,
                  PoolWithTag[48],
                  *((_BYTE *)PoolWithTag + 196),
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v194);
          goto LABEL_132;
        }
LABEL_179:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v73, &EventProfilerExit, v74, 2016);
        return -1073741811LL;
      }
      if ( a1[6] != 24 )
        goto LABEL_179;
    }
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v84, &EventProfilerExit, v85, 2016);
    return 3221225473LL;
  }
  else
  {
    v55 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v55 + 24) = a1[6];
    *(_QWORD *)(v55 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(P);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v56, &EventProfilerExit, v57, 2016);
    return 3221225495LL;
  }
}
