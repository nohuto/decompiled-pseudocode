/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C00908E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0002540 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C00052E8 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C001B2FC (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     RtlStringCbCopyNW @ 0x1C001B5CC (RtlStringCbCopyNW.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C0078224 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0093798 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0093BC0 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0120274 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C01274B4 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C01275CC (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01276DC (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C015519C (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPE.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C0167244 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfo(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // r13
  __int64 v11; // rdi
  char *v12; // xmm2_8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  size_t v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int *PoolWithTag; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r12d
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGADAPTER *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r13d
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int PairingAdapters; // r12d
  struct DXGADAPTER *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGADAPTER *v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rax
  struct DXGADAPTER *v60; // rbx
  signed __int64 v61; // r15
  __int64 v62; // r15
  __int64 v63; // rax
  bool v64; // of
  int v65; // r15d
  __int64 v66; // rt0
  __int64 v67; // rax
  struct DXGADAPTER *v68; // rbx
  __int64 v69; // r9
  __int64 v70; // rcx
  struct DXGADAPTER *v71; // r8
  __int64 v72; // rbx
  unsigned __int64 v73; // rdx
  struct DXGADAPTER *v74; // rbx
  NTSTATUS v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 ProcessWow64Process; // rax
  size_t v83; // rdx
  __int64 v84; // r8
  size_t v85; // r9
  const wchar_t *v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  char *v103; // r15
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rbx
  __int64 v109; // rax
  DXGADAPTER *v110; // rbx
  DXGADAPTER *v111; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER *v113; // rdx
  struct DXGADAPTER *v114; // r9
  int v115; // r8d
  int v116; // edx
  __int64 v117; // r8
  __int64 v118; // r8
  _DWORD *v119; // rcx
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rbx
  __int64 v126; // rdx
  __int64 NumDifferentPhysicalAdapters; // r8
  __int64 v128; // r9
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  void *v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // r13
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  struct DXGADAPTER *v160; // [rsp+30h] [rbp-128h] BYREF
  DXGADAPTER *v161; // [rsp+38h] [rbp-120h] BYREF
  void *v162[2]; // [rsp+40h] [rbp-118h]
  size_t Size; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v164; // [rsp+58h] [rbp-100h] BYREF
  struct DXGADAPTER *v165; // [rsp+60h] [rbp-F8h] BYREF
  DXGADAPTER *v166; // [rsp+68h] [rbp-F0h] BYREF
  char v167; // [rsp+70h] [rbp-E8h]
  void *v168; // [rsp+78h] [rbp-E0h]
  struct DXGADAPTER *v169; // [rsp+80h] [rbp-D8h] BYREF
  char v170; // [rsp+88h] [rbp-D0h]
  __int64 v171; // [rsp+90h] [rbp-C8h] BYREF
  int v172; // [rsp+98h] [rbp-C0h]
  struct DXGPROCESS *v173; // [rsp+A0h] [rbp-B8h]
  BOOL v174[2]; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int *v175; // [rsp+B0h] [rbp-A8h]
  _DXGKARG_QUERYADAPTERINFO v176; // [rsp+B8h] [rbp-A0h] BYREF
  int v177; // [rsp+168h] [rbp+10h]
  int v178; // [rsp+170h] [rbp+18h]
  char *v179; // [rsp+170h] [rbp+18h]
  int v180; // [rsp+178h] [rbp+20h]

  v3 = a1;
  v174[1] = 2015;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2015);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v158 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v158 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v158);
    goto LABEL_234;
  }
  v10 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  v173 = v10;
  if ( !v10 )
  {
LABEL_234:
    v159 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v159 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v159);
LABEL_235:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v37, &EventProfilerExit, v38, 2015);
    return 3221225485LL;
  }
  LODWORD(v11) = 0;
  v168 = 0LL;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v162 = *(_OWORD *)v3;
  Size = *(_QWORD *)(v3 + 16);
  v12 = (char *)_mm_srli_si128(*(__m128i *)v162, 8).m128i_u64[0];
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2015);
    return 3221225485LL;
  }
  v178 = Size;
  if ( !(_DWORD)Size )
  {
    v17 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2015);
    return 3221225485LL;
  }
  v20 = (unsigned int)Size;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B677844u);
  v175 = PoolWithTag;
  v168 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v24, v25);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v26);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2015);
    return 3221225495LL;
  }
  v29 = HIDWORD(v162[0]);
  v180 = HIDWORD(v162[0]);
  switch ( HIDWORD(v162[0]) )
  {
    case 1:
    case 7:
    case 9:
    case 0x10:
    case 0x17:
    case 0x19:
    case 0x1F:
    case 0x22:
      if ( &v12[(unsigned int)Size] < v12 || (unsigned __int64)&v12[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, v12, v20);
      break;
    default:
      memset(PoolWithTag, 0, (unsigned int)Size);
      break;
  }
  v177 = 0;
  if ( v29 == 16 )
    v177 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v10 + 10) + 224LL))(0LL);
  v30 = LODWORD(v162[0]);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v165,
    (unsigned int)v162[0],
    (struct _KTHREAD **)v10,
    &v161);
  v35 = v161;
  if ( !v161 )
  {
    v36 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    *(_QWORD *)(v36 + 24) = v30;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v36);
    operator delete(PoolWithTag);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v165);
    goto LABEL_235;
  }
  v39 = 0;
  if ( v29 == 9 )
  {
    if ( v178 != 48 )
    {
      v40 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      *(_QWORD *)(v40 + 24) = v20;
      *(_QWORD *)(v40 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v40);
      operator delete(PoolWithTag);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v165);
      goto LABEL_235;
    }
    v39 = *PoolWithTag;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v161, v39, &v160, &v164);
  if ( PairingAdapters >= 0 || v180 == 9 )
  {
    v46 = v164;
  }
  else
  {
    v46 = 0LL;
    v164 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v35, v39, &v160, 0LL);
  }
  if ( PairingAdapters < 0 )
  {
    v47 = WdLogNewEntry5_WdError(v42);
    *(_QWORD *)(v47 + 24) = v35;
    *(_QWORD *)(v47 + 32) = v39;
    WdLogEvent5_WdError(v47);
    operator delete(PoolWithTag);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v165);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v48, &EventProfilerExit, v49, 2015);
    return (unsigned int)PairingAdapters;
  }
  v50 = v160;
  if ( v160 != v35 && v46 != v35 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    *(_QWORD *)(v51 + 24) = 5393LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( v46 && !*((_QWORD *)v46 + 247) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    *(_QWORD *)(v52 + 24) = 5395LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( !v50 || !*((_QWORD *)v50 + 248) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    *(_QWORD *)(v53 + 24) = 5397LL;
    WdLogEvent5_WdAssertion(v53);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v176.hKmdProcessHandle, v50, v46);
  v58 = _InterlockedDecrement64((volatile signed __int64 *)v50 + 3);
  if ( !v58 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v160 + 2), v160);
  if ( v58 < 0 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
    *(_QWORD *)(v59 + 24) = 1067LL;
    WdLogEvent5_WdAssertion(v59);
  }
  v60 = v164;
  if ( v164 )
  {
    v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)v164 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v60 = v164;
    v62 = v61 - 1;
    if ( !v62 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v164 + 2), v164);
    if ( v62 < 0 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
      *(_QWORD *)(v63 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v63);
    }
  }
  v64 = __OFSUB__(HIDWORD(v162[0]), 9);
  if ( HIDWORD(v162[0]) == 9 )
  {
    LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v176.hKmdProcessHandle);
    if ( (int)v11 >= 0 )
    {
      if ( !v60 || !*((_QWORD *)v60 + 247) )
      {
        v140 = WdLogNewEntry5_WdAssertion(v137, v136, v138, v139);
        *(_QWORD *)(v140 + 24) = 5425LL;
        WdLogEvent5_WdAssertion(v140);
      }
      if ( (_DWORD)Size == 48 )
      {
        v142 = *((_QWORD *)v60 + 247);
        v143 = *PoolWithTag;
        if ( (unsigned int)v143 < *(_DWORD *)(v142 + 80) )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v142, v143);
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
            v150 = WdLogNewEntry5_WdWarning(v147, v146, v148, v149);
            *(_QWORD *)(v150 + 24) = *PoolWithTag;
            *(_QWORD *)(v150 + 32) = v60;
            WdLogEvent5_WdWarning(v150);
          }
        }
        else
        {
          LODWORD(v11) = -1071774972;
          v144 = WdLogNewEntry5_WdWarning(v142, v143, v138, v139);
          *(_QWORD *)(v144 + 24) = *PoolWithTag;
          *(_QWORD *)(v144 + 32) = *(unsigned int *)(*((_QWORD *)v60 + 247) + 80LL);
          WdLogEvent5_WdWarning(v144);
        }
      }
      else
      {
        LODWORD(v11) = -1073741811;
        v141 = WdLogNewEntry5_WdWarning(v137, v136, v138, v139);
        *(_QWORD *)(v141 + 24) = v20;
        *(_QWORD *)(v141 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v141);
      }
    }
    goto LABEL_219;
  }
  v169 = v160;
  v65 = 1;
  v66 = _InterlockedAdd64((volatile signed __int64 *)v50 + 3, 1uLL);
  if ( (v66 < 0) ^ v64 | (v66 == 0) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
    *(_QWORD *)(v67 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v67);
  }
  KeEnterCriticalRegion();
  v68 = v160;
  v179 = (char *)v160 + 104;
  ExAcquirePushLockSharedEx((char *)v160 + 104, 0LL);
  v170 = 1;
  v166 = v164;
  v167 = 0;
  if ( v164 && v164 != v68 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v166);
  v70 = *((unsigned int *)v161 + 40);
  if ( (_DWORD)v70 != 1 )
    goto LABEL_205;
  v71 = v164;
  if ( !v164 )
    goto LABEL_74;
  if ( *((_DWORD *)v164 + 40) != 1 )
  {
LABEL_205:
    LODWORD(v11) = -1073741130;
    if ( v167 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v166);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v169);
    goto LABEL_219;
  }
  v71 = v164;
LABEL_74:
  v72 = SHIDWORD(v162[0]);
  v73 = 0x1C0000000uLL;
  switch ( HIDWORD(v162[0]) )
  {
    case 0:
      v176.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
      v176.pInputData = 0LL;
      v176.InputDataSize = 0;
      v176.pOutputData = PoolWithTag;
      v176.OutputDataSize = Size;
      LODWORD(v11) = DXGADAPTER::DdiQueryAdapterInfo(v160, &v176, (__int64)v71);
      goto LABEL_197;
    case 1:
      if ( (_DWORD)Size != 524 )
        goto LABEL_192;
      v74 = v160;
      v75 = ADAPTER_RENDER::CopyUmdFileName(
              *((ADAPTER_RENDER **)v160 + 248),
              (struct _D3DKMT_UMDFILENAMEINFO *)PoolWithTag);
      goto LABEL_78;
    case 2:
      if ( (_DWORD)Size != 528 )
        goto LABEL_192;
      v81 = PsGetCurrentProcess(v70);
      ProcessWow64Process = PsGetProcessWow64Process(v81);
      v84 = *((_QWORD *)v160 + 248);
      if ( ProcessWow64Process )
      {
        PoolWithTag[130] = *(_DWORD *)(v84 + 360);
        PoolWithTag[131] = *(_DWORD *)(v84 + 364);
        v85 = *(unsigned __int16 *)(v84 + 344);
        v86 = *(const wchar_t **)(v84 + 352);
      }
      else
      {
        PoolWithTag[130] = *(_DWORD *)(v84 + 336);
        PoolWithTag[131] = *(_DWORD *)(v84 + 340);
        v85 = *(unsigned __int16 *)(v84 + 320);
        v86 = *(const wchar_t **)(v84 + 328);
      }
      LODWORD(v11) = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)PoolWithTag, v83, v86, v85);
      if ( (int)v11 < 0 )
      {
        v88 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v88 + 24) = (int)v11;
        WdLogEvent5_WdError(v88);
      }
      goto LABEL_197;
    case 3:
      if ( (_DWORD)Size != 24 )
        goto LABEL_192;
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(*((_QWORD *)v160 + 248) + 400LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)v160 + 248) + 408LL),
        (unsigned __int64 *)PoolWithTag,
        (unsigned __int64 *)PoolWithTag + 1,
        (unsigned __int64 *)PoolWithTag + 2);
      goto LABEL_197;
    case 4:
      if ( (_DWORD)Size != 16 )
        goto LABEL_192;
      *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v161 + 236);
      goto LABEL_197;
    case 5:
      if ( (_DWORD)Size != 12 )
        goto LABEL_192;
      LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v160 + 248)
                                                                                               + 376LL)
                                                                                   + 8LL)
                                                                       + 416LL))(
                       *(_QWORD *)(*((_QWORD *)v160 + 248) + 384LL),
                       PoolWithTag);
      goto LABEL_197;
    case 6:
      if ( (_DWORD)Size != 12 )
        goto LABEL_192;
      v89 = *(_QWORD *)(*((_QWORD *)v161 + 22) + 64LL);
      *PoolWithTag = *(_DWORD *)(v89 + 1048);
      PoolWithTag[1] = *(unsigned __int16 *)(v89 + 1054);
      PoolWithTag[2] = (unsigned __int16)*(_DWORD *)(v89 + 1052);
      goto LABEL_197;
    case 7:
      if ( (_DWORD)Size != 12 )
        goto LABEL_192;
      LODWORD(v11) = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                       *(VIDMM_EXPORT **)(*((_QWORD *)v160 + 248) + 400LL),
                       v173,
                       (struct _D3DKMT_WORKINGSETINFO *)PoolWithTag);
      goto LABEL_197;
    case 8:
      if ( (_DWORD)Size != 2080 )
        goto LABEL_192;
      LODWORD(v11) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v161 + 22), PoolWithTag);
      goto LABEL_197;
    case 0xB:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = *((unsigned __int8 *)v161 + 164);
      goto LABEL_197;
    case 0xC:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = 0;
      *PoolWithTag ^= (*PoolWithTag ^ ((*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v160 + 248) + 16LL) + 1380LL) & 0x20) != 0)) & 1;
      goto LABEL_197;
    case 0xD:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = DXGADAPTER::GetDriverVersion(v161);
      goto LABEL_197;
    case 0xF:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = *DXGADAPTER::GetAdapterType(v161, v174);
      goto LABEL_197;
    case 0x10:
      if ( (_DWORD)Size != 8 )
        goto LABEL_192;
      v90 = PsGetCurrentProcess(v70);
      v91 = PsGetProcessWin32Process(v90);
      if ( v91 )
      {
        v96 = *(_QWORD *)(v91 + 248);
      }
      else
      {
        v97 = WdLogNewEntry5_WdEvent(v93, v92, v94, v95);
        *(_QWORD *)(v97 + 24) = v90;
        WdLogEvent5_WdEvent(v97);
        v96 = 0LL;
      }
      if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v96 + 80) + 216LL))() )
        goto LABEL_124;
      v170 = 0;
      v103 = v179;
      ExReleasePushLockSharedEx(v179, 0LL);
      KeLeaveCriticalRegion();
      v108 = _InterlockedDecrement64((volatile signed __int64 *)v50 + 3);
      if ( !v108 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v160 + 2), v160);
      if ( v108 < 0 )
      {
        v109 = WdLogNewEntry5_WdAssertion(v105, v104, v106, v107);
        *(_QWORD *)(v109 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v109);
      }
      if ( v167 )
      {
        v167 = 0;
        v110 = v166;
        ExReleasePushLockSharedEx((char *)v166 + 104, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v110);
      }
      v111 = v161;
      if ( v177 )
        v111 = 0LL;
      LODWORD(v11) = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunForAdapter(
                       v111,
                       *PoolWithTag,
                       PoolWithTag,
                       lambda_857611628ac4622a449b8470e16aba1b_::_helper_func_cdecl_);
      goto LABEL_198;
    case 0x11:
      if ( (_DWORD)Size != 12 )
        goto LABEL_192;
      DXGADAPTER::QueryWDDM1_2Caps(v161, (struct _D3DKMT_WDDM_1_2_CAPS *)PoolWithTag);
      goto LABEL_197;
    case 0x12:
      if ( (_DWORD)Size != 8 )
        goto LABEL_192;
      LODWORD(v11) = ADAPTER_RENDER::GetUmdFileVersion(
                       *((ADAPTER_RENDER **)v160 + 248),
                       (union _LARGE_INTEGER *)PoolWithTag);
      goto LABEL_197;
    case 0x13:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v160 + 248) + 16LL) + 1851LL) != 0;
      goto LABEL_197;
    case 0x14:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v160 + 248) + 16LL) + 1852LL) != 0;
      goto LABEL_197;
    case 0x15:
      if ( (_DWORD)Size != 520 )
        goto LABEL_192;
      v74 = v160;
      if ( !byte_1C0046C5C || !*((_BYTE *)v160 + 1855) )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v70, 0x1C0000000uLL, v71, v69);
        v80[3] = PoolWithTag;
        v80[4] = v74;
        LODWORD(v11) = -1073741637;
        v80[5] = -1073741637LL;
        goto LABEL_80;
      }
      v75 = ADAPTER_RENDER::CopyDListFileName(
              *((ADAPTER_RENDER **)v160 + 248),
              (unsigned __int16 *)PoolWithTag,
              (unsigned int)v71);
LABEL_78:
      v11 = v75;
      if ( v75 < 0 )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v77, v76, v78, v79);
        v80[3] = PoolWithTag;
        v80[4] = v74;
        v80[5] = v11;
LABEL_80:
        WdLogEvent5_WdEvent(v80);
      }
LABEL_197:
      v103 = v179;
LABEL_198:
      if ( v167 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v166);
      if ( v170 )
      {
        v170 = 0;
        ExReleasePushLockSharedEx(v103, 0LL);
        KeLeaveCriticalRegion();
        v134 = _InterlockedDecrement64((volatile signed __int64 *)v50 + 3);
        if ( !v134 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v160 + 2), v160);
        if ( v134 < 0 )
        {
          v135 = WdLogNewEntry5_WdAssertion(v131, v130, v132, v133);
          *(_QWORD *)(v135 + 24) = 1067LL;
          WdLogEvent5_WdAssertion(v135);
        }
      }
      break;
    case 0x16:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      DXGADAPTER::QueryWDDM1_3Caps(v161, (struct _D3DKMT_WDDM_1_3_CAPS *)PoolWithTag);
      goto LABEL_197;
    case 0x17:
      if ( (_DWORD)Size != 16 )
        goto LABEL_192;
      if ( !PoolWithTag[1] )
        goto LABEL_149;
      Current = DXGPROCESS::GetCurrent(v70);
      if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
      {
LABEL_124:
        LODWORD(v11) = -1073741790;
        v102 = WdLogNewEntry5_WdWarning(v99, v98, v100, v101);
        *(_QWORD *)(v102 + 24) = -1073741790LL;
        goto LABEL_196;
      }
      if ( PoolWithTag[1] )
      {
        *(_DWORD *)(*((_QWORD *)v160 + 248) + 808LL) = PoolWithTag[3];
      }
      else
      {
LABEL_149:
        v113 = v160;
        PoolWithTag[2] = *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v160 + 248) + 16LL) + 1852LL);
        PoolWithTag[3] = *(_DWORD *)(*((_QWORD *)v113 + 248) + 808LL);
      }
      goto LABEL_197;
    case 0x18:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = 0;
      v114 = v160;
      v115 = ((unsigned __int8)~*((_BYTE *)v160 + 1376) >> 5) & 1;
      *PoolWithTag = v115;
      v116 = v115 ^ ((unsigned __int8)v115 ^ (unsigned __int8)(2 * ((*((_DWORD *)v114 + 345) & 0x60) == 96))) & 2;
      *PoolWithTag = v116;
      *PoolWithTag = v116 ^ ((unsigned __int8)v116 ^ (unsigned __int8)(4 * ((*((_DWORD *)v114 + 345) & 0xA0) == 0xA0))) & 4;
      goto LABEL_197;
    case 0x19:
      if ( (_DWORD)Size != 78 )
        goto LABEL_192;
      LODWORD(v11) = DXGADAPTER::QueryNodeMetadata(v161, *PoolWithTag, (struct _DXGK_NODEMETADATA *)(PoolWithTag + 1));
      goto LABEL_197;
    case 0x1A:
      if ( (_DWORD)Size != 520 )
        goto LABEL_192;
      v74 = v160;
      v117 = *((_QWORD *)v160 + 248);
      *(_WORD *)PoolWithTag = 0;
      v75 = RtlStringCbCopyNW(
              (NTSTRSAFE_PWSTR)PoolWithTag,
              0x1C0000000uLL,
              *(STRSAFE_PCNZWCH *)(v117 + 296),
              *(unsigned __int16 *)(v117 + 288));
      goto LABEL_78;
    case 0x1B:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = BYTE1(*((_DWORD *)v161 + 71)) & 1;
      goto LABEL_197;
    case 0x1C:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      *PoolWithTag = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v160 + 248) + 16LL) + 1372LL) & 0x10) != 0;
      goto LABEL_197;
    case 0x1D:
      if ( (_DWORD)Size != 520 )
        goto LABEL_192;
      v74 = v160;
      v118 = *((_QWORD *)v160 + 248);
      *(_WORD *)PoolWithTag = 0;
      v75 = RtlStringCbCopyNW(
              (NTSTRSAFE_PWSTR)PoolWithTag,
              0x1C0000000uLL,
              *(STRSAFE_PCNZWCH *)(v118 + 312),
              *(unsigned __int16 *)(v118 + 304));
      goto LABEL_78;
    case 0x1E:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      if ( *((int *)v160 + 412) >= 0x2000 )
        v65 = *((_DWORD *)v160 + 58);
      *PoolWithTag = v65;
      goto LABEL_197;
    case 0x1F:
      if ( (_DWORD)Size != 28 )
        goto LABEL_192;
      v72 = *PoolWithTag;
      if ( (unsigned int)v72 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v160) )
        goto LABEL_194;
      _mm_lfence();
      v119 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v160 + 237) + 48 * v72 + 8) + 64LL);
      PoolWithTag[1] = v119[257];
      PoolWithTag[2] = v119[258];
      PoolWithTag[3] = v119[259];
      PoolWithTag[4] = v119[260];
      PoolWithTag[5] = v119[261];
      PoolWithTag[6] = v119[256];
      goto LABEL_197;
    case 0x20:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      QueryDriverCapsExt(v71, (struct _D3DKMT_DRIVERCAPS_EXT *)PoolWithTag);
      goto LABEL_197;
    case 0x21:
      if ( (_DWORD)Size != 4 )
        goto LABEL_192;
      v171 = 0LL;
      v172 = 0;
      v120 = DxgkMiracastQueryMiracastSupportInternal(&v171);
      v125 = v120;
      if ( v120 == -1073741637 )
      {
        *PoolWithTag = 0;
        goto LABEL_197;
      }
      if ( v120 < 0 )
      {
        LODWORD(v11) = v120;
        v102 = WdLogNewEntry5_WdWarning(v122, v121, v123, v124);
        *(_QWORD *)(v102 + 24) = v125;
        goto LABEL_196;
      }
      *PoolWithTag = 2 - ((_BYTE)v172 != 0);
      goto LABEL_197;
    case 0x22:
      if ( (_DWORD)Size != 12 )
        goto LABEL_192;
      NumDifferentPhysicalAdapters = (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v160);
      v129 = *(unsigned int *)(v126 + 1380);
      if ( (v129 & 0x40) == 0 )
      {
        LODWORD(v11) = -1073741811;
        v102 = WdLogNewEntry5_WdWarning(v129, v126, NumDifferentPhysicalAdapters, v128);
        *(_QWORD *)(v102 + 24) = -1073741811LL;
        goto LABEL_196;
      }
      if ( *PoolWithTag >= (unsigned int)NumDifferentPhysicalAdapters )
      {
        LODWORD(v11) = -1073741811;
        v102 = WdLogNewEntry5_WdWarning(v129, v126, NumDifferentPhysicalAdapters, v128);
        *(_QWORD *)(v102 + 24) = *PoolWithTag;
        goto LABEL_195;
      }
      ADAPTER_RENDER::QueryGpuMmuCaps(
        *(ADAPTER_RENDER **)(v126 + 1984),
        *PoolWithTag,
        (struct _D3DKMT_GPUMMU_CAPS *)(PoolWithTag + 1));
      goto LABEL_197;
    case 0x23:
      if ( (_DWORD)Size == 4 )
      {
        *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v160 + 248) + 16LL) + 1941LL) != 0;
      }
      else
      {
LABEL_192:
        LODWORD(v11) = -1073741811;
        v102 = WdLogNewEntry5_WdWarning(v70, 0x1C0000000uLL, v71, v69);
        *(_QWORD *)(v102 + 24) = v20;
LABEL_195:
        *(_QWORD *)(v102 + 32) = -1073741811LL;
LABEL_196:
        WdLogEvent5_WdWarning(v102);
      }
      goto LABEL_197;
    default:
LABEL_194:
      LODWORD(v11) = -1073741811;
      v102 = WdLogNewEntry5_WdWarning(v70, v73, v71, v69);
      *(_QWORD *)(v102 + 24) = v72;
      goto LABEL_195;
  }
LABEL_219:
  if ( (int)v11 >= 0 )
  {
    v151 = v162[1];
    if ( (char *)v162[1] + v20 > (void *)MmUserProbeAddress || (char *)v162[1] + v20 <= v162[1] )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v151, PoolWithTag, v20);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v176.hKmdProcessHandle);
  if ( v165 )
  {
    v156 = _InterlockedDecrement64((volatile signed __int64 *)v165 + 3);
    if ( !v156 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v165 + 2), v165);
    if ( v156 < 0 )
    {
      v157 = WdLogNewEntry5_WdAssertion(v153, v152, v154, v155);
      *(_QWORD *)(v157 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v157);
    }
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v153, &EventProfilerExit, v154, 2015);
  return (unsigned int)v11;
}
