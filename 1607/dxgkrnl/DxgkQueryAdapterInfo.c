/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C0090400
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     RtlStringCbCopyNW @ 0x1C0007A04 (RtlStringCbCopyNW.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0008E9C (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C000F2E8 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C0020EAC (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C0092BD8 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0092C70 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00931B0 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C009326C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C009F708 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C009F8A0 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C009FD58 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0145DCC (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0148B7C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C014E104 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C017E3FC (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01935A0 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfo(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *ProcessDxgProcess; // r13
  DXGADAPTER *v11; // r14
  ULONG64 v12; // rcx
  char *v13; // xmm2_8
  size_t v14; // rsi
  size_t v15; // r12
  __int64 v16; // rdx
  unsigned int *PoolWithTag; // r15
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGADAPTER *v33; // rdi
  unsigned int v34; // r13d
  __int64 v35; // rcx
  int PairingAdapters; // esi
  struct DXGADAPTER *v37; // rbx
  struct DXGADAPTER *v38; // rsi
  struct DXGADAPTER *v39; // rdi
  signed __int64 v40; // rax
  struct DXGADAPTER *v41; // rdi
  char *v42; // r13
  unsigned __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rcx
  struct DXGADAPTER *v46; // r8
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  int AdapterRegistryInfo; // eax
  void *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned int *v60; // rax
  int v61; // eax
  struct DXGADAPTER *v62; // rdi
  NTSTATUS v63; // eax
  struct DXGADAPTER *v64; // r9
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rdx
  __int64 NumDifferentPhysicalAdapters; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  struct DXGADAPTER *v83; // rdi
  _DWORD *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 ProcessWow64Process; // rax
  size_t v104; // rdx
  __int64 v105; // r8
  size_t v106; // r9
  const wchar_t *v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // r8
  __int64 v119; // r8
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdi
  __int64 v126; // rax
  DXGADAPTER *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  struct DXGADAPTER *v131; // [rsp+30h] [rbp-178h] BYREF
  void *v132[2]; // [rsp+38h] [rbp-170h]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-160h]
  DXGADAPTER *v134; // [rsp+50h] [rbp-158h] BYREF
  struct DXGADAPTER *v135; // [rsp+58h] [rbp-150h] BYREF
  char v136[8]; // [rsp+60h] [rbp-148h] BYREF
  DXGADAPTER *v137; // [rsp+68h] [rbp-140h]
  char v138; // [rsp+70h] [rbp-138h]
  unsigned int *v139; // [rsp+78h] [rbp-130h]
  void *v140; // [rsp+80h] [rbp-128h]
  struct DXGADAPTER *v141[2]; // [rsp+88h] [rbp-120h] BYREF
  _QWORD v142[2]; // [rsp+98h] [rbp-110h] BYREF
  char v143; // [rsp+A8h] [rbp-100h]
  unsigned __int64 v144; // [rsp+B8h] [rbp-F0h] BYREF
  struct DXGPROCESS *v145; // [rsp+C0h] [rbp-E8h]
  __int64 v146; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v147; // [rsp+D8h] [rbp-D0h]
  int v148; // [rsp+E0h] [rbp-C8h]
  _DXGKARG_QUERYADAPTERINFO v149; // [rsp+E8h] [rbp-C0h] BYREF
  _BYTE v150[136]; // [rsp+120h] [rbp-88h] BYREF
  int v151; // [rsp+1C0h] [rbp+18h]

  v3 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2015);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  v145 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v86 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v86 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v86);
    goto LABEL_153;
  }
  v11 = 0LL;
  v140 = 0LL;
  v12 = MmUserProbeAddress;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v132 = *(_OWORD *)v3;
  NumberOfBytes = *(_QWORD *)(v3 + 16);
  v13 = (char *)_mm_srli_si128(*(__m128i *)v132, 8).m128i_u64[0];
  if ( !v13 )
  {
    v19 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8, v9);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v20, &EventProfilerExit, v21, 2015);
    return 3221225485LL;
  }
  v14 = (unsigned int)NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
  {
    v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8, v9);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2015);
    return 3221225485LL;
  }
  v15 = (unsigned int)NumberOfBytes;
  v16 = (unsigned int)NumberOfBytes;
  if ( (unsigned int)NumberOfBytes > 0x7FFFFFFFuLL )
    PoolWithTag = 0LL;
  else
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B677844u);
  v139 = PoolWithTag;
  v140 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v26 = WdLogNewEntry5_WdWarning(v12, v16, v8, v9);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v26);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2015);
    return 3221225495LL;
  }
  v18 = HIDWORD(v132[0]);
  if ( HIDWORD(v132[0]) == 16 )
  {
LABEL_11:
    if ( &v13[(unsigned int)NumberOfBytes] < v13
      || (unsigned __int64)&v13[(unsigned int)NumberOfBytes] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(PoolWithTag, v13, v14);
  }
  else
  {
    switch ( HIDWORD(v132[0]) )
    {
      case 1:
      case 7:
      case 9:
      case 0x17:
      case 0x19:
      case 0x1F:
      case 0x22:
        goto LABEL_11;
      default:
        memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
        break;
    }
  }
  v151 = 0;
  if ( v18 == 16 )
    v151 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)ProcessDxgProcess + 9) + 224LL))(0LL);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v141, (unsigned int)v132[0], ProcessDxgProcess, &v134);
  v33 = v134;
  if ( !v134 )
  {
    v91 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v91 + 24) = LODWORD(v132[0]);
    *(_QWORD *)(v91 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v91);
    operator delete(PoolWithTag);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v141, v92);
LABEL_153:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v87, &EventProfilerExit, v88, 2015);
    return 3221225485LL;
  }
  v34 = 0;
  if ( v18 != 9 )
    goto LABEL_34;
  if ( (_DWORD)v14 != 48 )
  {
    v89 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v89 + 24) = v14;
    *(_QWORD *)(v89 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v89);
    operator delete(PoolWithTag);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v141, v90);
    goto LABEL_153;
  }
  v34 = *PoolWithTag;
LABEL_34:
  PairingAdapters = DxgkpGetPairingAdapters(v134, v34, &v131, &v144, &v135, (unsigned __int64 *)&v149.hKmdProcessHandle);
  if ( PairingAdapters >= 0 || v18 == 9 )
  {
    v37 = v135;
  }
  else
  {
    v37 = 0LL;
    v135 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v33, v34, &v131, &v144, 0LL, 0LL);
  }
  if ( PairingAdapters >= 0 )
  {
    v38 = v131;
    if ( v131 != v33 && v37 != v33 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v97 + 24) = 2018LL;
      WdLogEvent5_WdAssertion(v97);
    }
    if ( v37 && !*((_QWORD *)v37 + 266) )
    {
      v98 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v98 + 24) = 2020LL;
      WdLogEvent5_WdAssertion(v98);
    }
    if ( !v38 || !*((_QWORD *)v38 + 267) )
    {
      v99 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v99 + 24) = 2022LL;
      WdLogEvent5_WdAssertion(v99);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v150, v38, v37);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v131 + 2), v131);
    v39 = v135;
    if ( v135 )
    {
      v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v39 = v135;
      if ( v40 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v135 + 2), v135);
    }
    if ( HIDWORD(v132[0]) == 9 )
    {
      LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v150);
      if ( (int)v11 >= 0 )
      {
        if ( !v39 || !*((_QWORD *)v39 + 266) )
        {
          v82 = WdLogNewEntry5_WdAssertion(v72);
          *(_QWORD *)(v82 + 24) = 2050LL;
          WdLogEvent5_WdAssertion(v82);
        }
        if ( (_DWORD)NumberOfBytes == 48 )
        {
          v75 = *((_QWORD *)v39 + 266);
          v76 = *PoolWithTag;
          if ( (unsigned int)v76 >= *(_DWORD *)(v75 + 80) )
          {
            LODWORD(v11) = -1071774972;
            v129 = WdLogNewEntry5_WdWarning(v75, v76, v73, v74);
            *(_QWORD *)(v129 + 24) = *PoolWithTag;
            *(_QWORD *)(v129 + 32) = *(unsigned int *)(*((_QWORD *)v39 + 266) + 80LL);
            WdLogEvent5_WdWarning(v129);
          }
          else
          {
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v75, v76);
            if ( *(_DWORD *)DisplayModeInfo )
            {
              *(_OWORD *)(PoolWithTag + 1) = *(_OWORD *)DisplayModeInfo;
              *(_OWORD *)(PoolWithTag + 5) = *((_OWORD *)DisplayModeInfo + 1);
              *(_QWORD *)(PoolWithTag + 9) = *((_QWORD *)DisplayModeInfo + 4);
              PoolWithTag[11] = *((_DWORD *)DisplayModeInfo + 10);
            }
            else
            {
              LODWORD(v11) = -1071774919;
              v130 = WdLogNewEntry5_WdWarning(v79, v78, v80, v81);
              *(_QWORD *)(v130 + 24) = *PoolWithTag;
              *(_QWORD *)(v130 + 32) = v39;
              WdLogEvent5_WdWarning(v130);
            }
          }
        }
        else
        {
          LODWORD(v11) = -1073741811;
          v128 = WdLogNewEntry5_WdWarning(v72, v71, v73, v74);
          *(_QWORD *)(v128 + 24) = v15;
          *(_QWORD *)(v128 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v128);
        }
      }
      goto LABEL_70;
    }
    v142[1] = v131;
    _InterlockedIncrement64((volatile signed __int64 *)v38 + 3);
    v142[0] = -1LL;
    KeEnterCriticalRegion();
    v41 = v131;
    v42 = (char *)v131 + 120;
    ExAcquirePushLockSharedEx((char *)v131 + 120, 0LL);
    v143 = 1;
    v137 = v135;
    v138 = 0;
    if ( v135 && v135 != v41 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    v45 = *((unsigned int *)v134 + 44);
    if ( (_DWORD)v45 == 1 )
    {
      v46 = v135;
      if ( !v135 )
        goto LABEL_56;
      if ( *((_DWORD *)v135 + 44) == 1 )
      {
        v46 = v135;
LABEL_56:
        v47 = SHIDWORD(v132[0]);
        if ( HIDWORD(v132[0]) == 16 )
        {
          if ( (_DWORD)NumberOfBytes == 8 )
          {
            v48 = PsGetCurrentProcess();
            v50 = PsGetProcessDxgProcess(v48, v49);
            if ( (*(unsigned int (**)(void))(*(_QWORD *)(v50 + 72) + 216LL))() )
            {
              v143 = 0;
              ExReleasePushLockSharedEx(v42, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v131 + 2), v131);
              if ( v138 )
              {
                v138 = 0;
                v127 = v137;
                ExReleasePushLockSharedEx((char *)v137 + 120, 0LL);
                KeLeaveCriticalRegion();
                DXGADAPTER::ReleaseReference(v127);
              }
              if ( !v151 )
                v11 = v134;
              AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                      v11,
                                      v55,
                                      *PoolWithTag,
                                      PoolWithTag,
                                      lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
LABEL_66:
              LODWORD(v11) = AdapterRegistryInfo;
            }
            else
            {
              LODWORD(v11) = -1073741790;
              v126 = WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
              *(_QWORD *)(v126 + 24) = -1073741790LL;
              WdLogEvent5_WdWarning(v126);
            }
LABEL_67:
            if ( v138 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
            if ( v143 )
            {
              v143 = 0;
              ExReleasePushLockSharedEx(v42, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v131 + 2), v131);
            }
LABEL_70:
            if ( (int)v11 >= 0 )
            {
              v57 = v132[1];
              if ( (char *)v132[1] + v15 > (void *)MmUserProbeAddress || (char *)v132[1] + v15 <= v132[1] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v57, PoolWithTag, v15);
            }
            ExFreePoolWithTag(PoolWithTag, 0);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v150);
            if ( v141[0]
              && _InterlockedExchangeAdd64((volatile signed __int64 *)v141[0] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v141[0] + 2), v141[0]);
            }
            if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v58, &EventProfilerExit, v59, 2015);
            return (unsigned int)v11;
          }
LABEL_217:
          LODWORD(v11) = -1073741811;
          v85 = WdLogNewEntry5_WdWarning(v45, v43, v46, v44);
          *(_QWORD *)(v85 + 24) = v15;
        }
        else
        {
          v43 = 0x1C0000000uLL;
          switch ( HIDWORD(v132[0]) )
          {
            case 0:
              v149.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
              v149.pInputData = 0LL;
              v149.InputDataSize = 0;
              v149.pOutputData = PoolWithTag;
              v149.OutputDataSize = NumberOfBytes;
              AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo(v131, &v149);
              goto LABEL_66;
            case 1:
              if ( (_DWORD)NumberOfBytes != 524 )
                goto LABEL_217;
              v62 = v131;
              v63 = ADAPTER_RENDER::CopyUmdFileName(
                      *((ADAPTER_RENDER **)v131 + 267),
                      (struct _D3DKMT_UMDFILENAMEINFO *)PoolWithTag);
              goto LABEL_101;
            case 2:
              if ( (_DWORD)NumberOfBytes != 528 )
                goto LABEL_217;
              v102 = PsGetCurrentProcess();
              ProcessWow64Process = PsGetProcessWow64Process(v102);
              v105 = *((_QWORD *)v131 + 267);
              if ( ProcessWow64Process )
              {
                PoolWithTag[130] = *(_DWORD *)(v105 + 360);
                PoolWithTag[131] = *(_DWORD *)(v105 + 364);
                v106 = *(unsigned __int16 *)(v105 + 344);
                v107 = *(const wchar_t **)(v105 + 352);
              }
              else
              {
                PoolWithTag[130] = *(_DWORD *)(v105 + 336);
                PoolWithTag[131] = *(_DWORD *)(v105 + 340);
                v106 = *(unsigned __int16 *)(v105 + 320);
                v107 = *(const wchar_t **)(v105 + 328);
              }
              LODWORD(v11) = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)PoolWithTag, v104, v107, v106);
              if ( (int)v11 < 0 )
              {
                v109 = WdLogNewEntry5_WdError(v108);
                *(_QWORD *)(v109 + 24) = (int)v11;
                WdLogEvent5_WdError(v109);
              }
              goto LABEL_67;
            case 3:
              if ( (_DWORD)NumberOfBytes != 24 )
                goto LABEL_217;
              VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                *(VIDMM_EXPORT **)(*((_QWORD *)v131 + 267) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v131 + 267) + 408LL),
                (unsigned __int64 *)PoolWithTag,
                (unsigned __int64 *)PoolWithTag + 1,
                (unsigned __int64 *)PoolWithTag + 2);
              goto LABEL_67;
            case 4:
              if ( (_DWORD)NumberOfBytes != 16 )
                goto LABEL_217;
              *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v134 + 252);
              goto LABEL_67;
            case 5:
              if ( (_DWORD)NumberOfBytes != 12 )
                goto LABEL_217;
              AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 376LL)
                                                                                                  + 8LL)
                                                                                      + 416LL))(
                                      *(_QWORD *)(*((_QWORD *)v131 + 267) + 384LL),
                                      PoolWithTag);
              goto LABEL_66;
            case 6:
              if ( (_DWORD)NumberOfBytes != 12 )
                goto LABEL_217;
              v110 = *(_QWORD *)(*((_QWORD *)v134 + 24) + 64LL);
              *PoolWithTag = *(_DWORD *)(v110 + 1128);
              PoolWithTag[1] = *(unsigned __int16 *)(v110 + 1134);
              PoolWithTag[2] = (unsigned __int16)*(_DWORD *)(v110 + 1132);
              goto LABEL_67;
            case 7:
              if ( (_DWORD)NumberOfBytes != 12 )
                goto LABEL_217;
              AdapterRegistryInfo = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)v131 + 267) + 400LL),
                                      v145,
                                      (struct _D3DKMT_WORKINGSETINFO *)PoolWithTag);
              goto LABEL_66;
            case 8:
              if ( (_DWORD)NumberOfBytes != 2080 )
                goto LABEL_217;
              AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v134 + 24), PoolWithTag);
              goto LABEL_66;
            case 0xB:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = *((unsigned __int8 *)v134 + 180);
              goto LABEL_67;
            case 0xC:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = 0;
              *PoolWithTag ^= (*PoolWithTag ^ ((*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 1524LL) & 0x20) != 0)) & 1;
              goto LABEL_67;
            case 0xD:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = DXGADAPTER::GetDriverVersion(v134);
              goto LABEL_67;
            case 0xF:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              LODWORD(v60) = DXGADAPTER::GetAdapterType(v134);
              *PoolWithTag = *v60;
              goto LABEL_67;
            case 0x11:
              if ( (_DWORD)NumberOfBytes != 12 )
                goto LABEL_217;
              DXGADAPTER::QueryWDDM1_2Caps(v134, (struct _D3DKMT_WDDM_1_2_CAPS *)PoolWithTag);
              goto LABEL_67;
            case 0x12:
              if ( (_DWORD)NumberOfBytes != 8 )
                goto LABEL_217;
              AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                      *((ADAPTER_RENDER **)v131 + 267),
                                      (union _LARGE_INTEGER *)PoolWithTag);
              goto LABEL_66;
            case 0x13:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 1995LL) )
                goto LABEL_118;
              *PoolWithTag = 1;
              goto LABEL_67;
            case 0x14:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v131 + 267)) )
                goto LABEL_118;
              *PoolWithTag = 1;
              goto LABEL_67;
            case 0x15:
              if ( (_DWORD)NumberOfBytes != 520 )
                goto LABEL_217;
              v62 = v131;
              if ( (_BYTE)word_1C0056E9D && *((_BYTE *)v131 + 1999) )
              {
                v63 = ADAPTER_RENDER::CopyDListFileName(
                        *((ADAPTER_RENDER **)v131 + 267),
                        (unsigned __int16 *)PoolWithTag,
                        (unsigned int)v46);
LABEL_101:
                v11 = (DXGADAPTER *)v63;
                if ( v63 < 0 )
                {
                  v100 = (_QWORD *)WdLogNewEntry5_WdEvent();
                  v100[3] = PoolWithTag;
                  v100[4] = v62;
                  v100[5] = v11;
                  WdLogEvent5_WdEvent(v100);
                }
              }
              else
              {
                v101 = (_QWORD *)WdLogNewEntry5_WdEvent();
                v101[3] = PoolWithTag;
                v101[4] = v62;
                LODWORD(v11) = -1073741637;
                v101[5] = -1073741637LL;
                WdLogEvent5_WdEvent(v101);
              }
              goto LABEL_67;
            case 0x16:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              DXGADAPTER::QueryWDDM1_3Caps(v134, (struct _D3DKMT_WDDM_1_3_CAPS *)PoolWithTag);
              goto LABEL_67;
            case 0x17:
              if ( (_DWORD)NumberOfBytes != 16 )
                goto LABEL_217;
              if ( !PoolWithTag[1] )
                goto LABEL_140;
              v111 = PsGetCurrentProcess();
              v113 = PsGetProcessDxgProcess(v111, v112);
              if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v113 + 72) + 216LL))() )
              {
                LODWORD(v11) = -1073741790;
                v85 = WdLogNewEntry5_WdWarning(v115, v114, v116, v117);
                *(_QWORD *)(v85 + 24) = -1073741790LL;
                goto LABEL_148;
              }
              if ( PoolWithTag[1] )
              {
                *(_DWORD *)(*((_QWORD *)v131 + 267) + 808LL) = PoolWithTag[3];
              }
              else
              {
LABEL_140:
                v83 = v131;
                PoolWithTag[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v131 + 267));
                PoolWithTag[3] = *(_DWORD *)(*((_QWORD *)v83 + 267) + 808LL);
              }
              goto LABEL_67;
            case 0x18:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = 0;
              v64 = v131;
              v65 = ((unsigned __int8)~*((_BYTE *)v131 + 1520) >> 5) & 1;
              *PoolWithTag = v65;
              v66 = v65 ^ ((unsigned __int8)v65 ^ (unsigned __int8)(2 * ((*((_DWORD *)v64 + 381) & 0x60) == 96))) & 2;
              *PoolWithTag = v66;
              *PoolWithTag = v66 ^ ((unsigned __int8)v66 ^ (unsigned __int8)(4
                                                                           * ((*((_DWORD *)v64 + 381) & 0xA0) == 0xA0))) & 4;
              goto LABEL_67;
            case 0x19:
              if ( (_DWORD)NumberOfBytes != 78 )
                goto LABEL_217;
              AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(
                                      v131,
                                      *PoolWithTag,
                                      (struct _DXGK_NODEMETADATA *)(PoolWithTag + 1));
              goto LABEL_66;
            case 0x1A:
              if ( (_DWORD)NumberOfBytes != 520 )
                goto LABEL_217;
              v62 = v131;
              v118 = *((_QWORD *)v131 + 267);
              *(_WORD *)PoolWithTag = 0;
              v63 = RtlStringCbCopyNW(
                      (NTSTRSAFE_PWSTR)PoolWithTag,
                      0x1C0000000uLL,
                      *(STRSAFE_PCNZWCH *)(v118 + 296),
                      *(unsigned __int16 *)(v118 + 288));
              goto LABEL_101;
            case 0x1B:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = (*((_DWORD *)v134 + 75) & 0x200) != 0;
              goto LABEL_67;
            case 0x1C:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 1516LL) & 0x10) == 0 )
                goto LABEL_118;
              *PoolWithTag = 1;
              goto LABEL_67;
            case 0x1D:
              if ( (_DWORD)NumberOfBytes != 520 )
                goto LABEL_217;
              v62 = v131;
              v119 = *((_QWORD *)v131 + 267);
              *(_WORD *)PoolWithTag = 0;
              v63 = RtlStringCbCopyNW(
                      (NTSTRSAFE_PWSTR)PoolWithTag,
                      0x1C0000000uLL,
                      *(STRSAFE_PCNZWCH *)(v119 + 312),
                      *(unsigned __int16 *)(v119 + 304));
              goto LABEL_101;
            case 0x1E:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              if ( *((int *)v131 + 448) < 0x2000 )
                v61 = 1;
              else
                v61 = *((_DWORD *)v131 + 62);
              *PoolWithTag = v61;
              goto LABEL_67;
            case 0x1F:
              if ( (_DWORD)NumberOfBytes != 28 )
                goto LABEL_217;
              v47 = *PoolWithTag;
              if ( (unsigned int)v47 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v131) )
                goto LABEL_216;
              _mm_lfence();
              v84 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v131 + 255) + 48 * v47 + 8) + 64LL);
              PoolWithTag[1] = v84[277];
              PoolWithTag[2] = v84[278];
              PoolWithTag[3] = v84[279];
              PoolWithTag[4] = v84[280];
              PoolWithTag[5] = v84[281];
              PoolWithTag[6] = v84[276];
              goto LABEL_67;
            case 0x20:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              QueryDriverCapsExt(v46, (struct _D3DKMT_DRIVERCAPS_EXT *)PoolWithTag);
              goto LABEL_67;
            case 0x21:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              v146 = 0LL;
              v147 = 0LL;
              v148 = 0;
              v120 = DxgkMiracastQueryMiracastSupportInternal(&v146);
              v125 = v120;
              if ( v120 == -1073741637 )
                goto LABEL_118;
              if ( v120 < 0 )
              {
                LODWORD(v11) = v120;
                v85 = WdLogNewEntry5_WdWarning(v122, v121, v123, v124);
                *(_QWORD *)(v85 + 24) = v125;
                goto LABEL_148;
              }
              *PoolWithTag = 2 - ((_BYTE)v147 != 0);
              goto LABEL_67;
            case 0x22:
              if ( (_DWORD)NumberOfBytes != 12 )
                goto LABEL_217;
              NumDifferentPhysicalAdapters = (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v131);
              v70 = *(unsigned int *)(v67 + 1524);
              if ( (v70 & 0x40) == 0 )
              {
                LODWORD(v11) = -1073741811;
                v85 = WdLogNewEntry5_WdWarning(v70, v67, NumDifferentPhysicalAdapters, v69);
                *(_QWORD *)(v85 + 24) = -1073741811LL;
                goto LABEL_148;
              }
              if ( *PoolWithTag < (unsigned int)NumDifferentPhysicalAdapters )
              {
                ADAPTER_RENDER::QueryGpuMmuCaps(
                  *(ADAPTER_RENDER **)(v67 + 2136),
                  *PoolWithTag,
                  (struct _D3DKMT_GPUMMU_CAPS *)(PoolWithTag + 1));
                goto LABEL_67;
              }
              LODWORD(v11) = -1073741811;
              v85 = WdLogNewEntry5_WdWarning(v70, v67, NumDifferentPhysicalAdapters, v69);
              *(_QWORD *)(v85 + 24) = *PoolWithTag;
              break;
            case 0x23:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 2085LL) )
                goto LABEL_118;
              *PoolWithTag = 1;
              goto LABEL_67;
            case 0x24:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = *((_DWORD *)DXGGLOBAL::GetGlobal() + 220);
              goto LABEL_67;
            case 0x25:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 2086LL) != 0;
              goto LABEL_67;
            case 0x26:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 2087LL) != 0;
              goto LABEL_67;
            case 0x27:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 2088LL) != 0;
              goto LABEL_67;
            case 0x28:
              if ( (_DWORD)NumberOfBytes != 4 )
                goto LABEL_217;
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v131 + 267) + 16LL) + 2089LL) )
                *PoolWithTag = 1;
              else
LABEL_118:
                *PoolWithTag = 0;
              goto LABEL_67;
            default:
LABEL_216:
              LODWORD(v11) = -1073741811;
              v85 = WdLogNewEntry5_WdWarning(v45, v43, v46, v44);
              *(_QWORD *)(v85 + 24) = v47;
              break;
          }
        }
        *(_QWORD *)(v85 + 32) = -1073741811LL;
LABEL_148:
        WdLogEvent5_WdWarning(v85);
        goto LABEL_67;
      }
    }
    LODWORD(v11) = -1073741130;
    if ( v138 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v142);
    goto LABEL_70;
  }
  v93 = WdLogNewEntry5_WdError(v35);
  *(_QWORD *)(v93 + 24) = v33;
  *(_QWORD *)(v93 + 32) = v34;
  WdLogEvent5_WdError(v93);
  operator delete(PoolWithTag);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v141, v94);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v95, &EventProfilerExit, v96, 2015);
  return (unsigned int)PairingAdapters;
}
