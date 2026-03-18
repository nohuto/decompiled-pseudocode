/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C008BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0003228 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     RtlStringCbCopyNW @ 0x1C000B538 (RtlStringCbCopyNW.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C00100AC (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C001BDAC (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C00689F8 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C006A1CC (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C006A5EC (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C0079B78 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0079C70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0125DBC (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C012D748 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C012D8DC (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C0159480 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPE.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C016B814 (DpiQueryAdapterRegistryInfo.c)
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
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct DXGADAPTER *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // r13d
  __int64 v39; // rax
  __int64 v40; // rcx
  int PairingAdapters; // r12d
  struct DXGADAPTER *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  DXGADAPTER *v46; // r12
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  struct DXGADAPTER *v53; // rbx
  signed __int64 v54; // r15
  __int64 v55; // r15
  __int64 v56; // rax
  bool v57; // of
  int v58; // r15d
  __int64 v59; // rt0
  __int64 v60; // rax
  struct DXGADAPTER *v61; // rbx
  __int64 v62; // r9
  __int64 v63; // rcx
  struct DXGADAPTER *v64; // r8
  __int64 v65; // rbx
  unsigned __int64 v66; // rdx
  DXGADAPTER *v67; // rbx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 ProcessWow64Process; // rax
  size_t v76; // rdx
  __int64 v77; // r8
  size_t v78; // r9
  const wchar_t *v79; // r8
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  char *v96; // r15
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rax
  DXGADAPTER *v100; // rbx
  DXGADAPTER *v101; // rcx
  struct DXGPROCESS *Current; // rax
  DXGADAPTER *v103; // rdx
  DXGADAPTER *v104; // r9
  int v105; // r8d
  int v106; // edx
  __int64 v107; // r8
  __int64 v108; // r8
  _DWORD *v109; // rcx
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 NumDifferentPhysicalAdapters; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  void *v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r13
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  DXGADAPTER *v145; // [rsp+30h] [rbp-128h] BYREF
  void *v146[2]; // [rsp+38h] [rbp-120h]
  size_t Size; // [rsp+48h] [rbp-110h]
  DXGADAPTER *v148; // [rsp+50h] [rbp-108h] BYREF
  struct DXGADAPTER *v149; // [rsp+58h] [rbp-100h] BYREF
  struct DXGADAPTER *v150; // [rsp+60h] [rbp-F8h] BYREF
  DXGADAPTER *v151; // [rsp+68h] [rbp-F0h] BYREF
  char v152; // [rsp+70h] [rbp-E8h]
  void *v153; // [rsp+78h] [rbp-E0h]
  DXGADAPTER *v154; // [rsp+80h] [rbp-D8h] BYREF
  char v155; // [rsp+88h] [rbp-D0h]
  __int64 v156; // [rsp+90h] [rbp-C8h] BYREF
  int v157; // [rsp+98h] [rbp-C0h]
  struct DXGPROCESS *v158; // [rsp+A0h] [rbp-B8h]
  BOOL v159[2]; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int *v160; // [rsp+B0h] [rbp-A8h]
  _DXGKARG_QUERYADAPTERINFO v161; // [rsp+B8h] [rbp-A0h] BYREF
  int v162; // [rsp+168h] [rbp+10h]
  int v163; // [rsp+170h] [rbp+18h]
  char *v164; // [rsp+170h] [rbp+18h]
  int v165; // [rsp+178h] [rbp+20h]

  v3 = a1;
  v159[1] = 2015;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2015);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v143 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v143 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v143);
    goto LABEL_239;
  }
  v10 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  v158 = v10;
  if ( !v10 )
  {
LABEL_239:
    v144 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v144 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v144);
LABEL_240:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v36, &EventProfilerExit, v37, 2015);
    return 3221225485LL;
  }
  LODWORD(v11) = 0;
  v153 = 0LL;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v146 = *(_OWORD *)v3;
  Size = *(_QWORD *)(v3 + 16);
  v12 = (char *)_mm_srli_si128(*(__m128i *)v146, 8).m128i_u64[0];
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2015);
    return 3221225485LL;
  }
  v163 = Size;
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
  v160 = PoolWithTag;
  v153 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v24, v25);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v26);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2015);
    return 3221225495LL;
  }
  v29 = HIDWORD(v146[0]);
  v165 = HIDWORD(v146[0]);
  switch ( HIDWORD(v146[0]) )
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
  v162 = 0;
  if ( v29 == 16 )
    v162 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v10 + 10) + 224LL))(0LL);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v150,
    (unsigned int)v146[0],
    (struct _KTHREAD **)v10,
    &v148);
  v34 = v148;
  if ( !v148 )
  {
    v35 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(_QWORD *)(v35 + 24) = LODWORD(v146[0]);
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v35);
    operator delete(PoolWithTag);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v150);
    goto LABEL_240;
  }
  v38 = 0;
  if ( v29 == 9 )
  {
    if ( v163 != 48 )
    {
      v39 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v39 + 24) = v20;
      *(_QWORD *)(v39 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v39);
      operator delete(PoolWithTag);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v150);
      goto LABEL_240;
    }
    v38 = *PoolWithTag;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v148, v38, &v145, &v149);
  if ( PairingAdapters >= 0 || v165 == 9 )
  {
    v42 = v149;
  }
  else
  {
    v42 = 0LL;
    v149 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v34, v38, &v145, 0LL);
  }
  if ( PairingAdapters < 0 )
  {
    v43 = WdLogNewEntry5_WdError(v40);
    *(_QWORD *)(v43 + 24) = v34;
    *(_QWORD *)(v43 + 32) = v38;
    WdLogEvent5_WdError(v43);
    operator delete(PoolWithTag);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v150);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v44, &EventProfilerExit, v45, 2015);
    return (unsigned int)PairingAdapters;
  }
  v46 = v145;
  if ( v145 != v34 && v42 != v34 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v47 + 24) = 5502LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( v42 && !*((_QWORD *)v42 + 248) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v48 + 24) = 5504LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !v46 || !*((_QWORD *)v46 + 249) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v49 + 24) = 5506LL;
    WdLogEvent5_WdAssertion(v49);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v161.hKmdProcessHandle, v46, v42);
  v51 = _InterlockedDecrement64((volatile signed __int64 *)v46 + 3);
  if ( !v51 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v145 + 2), v145);
  if ( v51 < 0 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v50);
    *(_QWORD *)(v52 + 24) = 1158LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v53 = v149;
  if ( v149 )
  {
    v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)v149 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v53 = v149;
    v55 = v54 - 1;
    if ( !v55 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v149 + 2), v149);
    if ( v55 < 0 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v50);
      *(_QWORD *)(v56 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v56);
    }
  }
  v57 = __OFSUB__(HIDWORD(v146[0]), 9);
  if ( HIDWORD(v146[0]) == 9 )
  {
    LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v161.hKmdProcessHandle);
    if ( (int)v11 >= 0 )
    {
      if ( !v53 || !*((_QWORD *)v53 + 248) )
      {
        v127 = WdLogNewEntry5_WdAssertion(v124);
        *(_QWORD *)(v127 + 24) = 5534LL;
        WdLogEvent5_WdAssertion(v127);
      }
      if ( (_DWORD)Size == 48 )
      {
        v129 = *((_QWORD *)v53 + 248);
        v130 = *PoolWithTag;
        if ( (unsigned int)v130 < *(_DWORD *)(v129 + 104) )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v129, v130);
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
            v137 = WdLogNewEntry5_WdWarning(v134, v133, v135, v136);
            *(_QWORD *)(v137 + 24) = *PoolWithTag;
            *(_QWORD *)(v137 + 32) = v53;
            WdLogEvent5_WdWarning(v137);
          }
        }
        else
        {
          LODWORD(v11) = -1071774972;
          v131 = WdLogNewEntry5_WdWarning(v129, v130, v125, v126);
          *(_QWORD *)(v131 + 24) = *PoolWithTag;
          *(_QWORD *)(v131 + 32) = *(unsigned int *)(*((_QWORD *)v53 + 248) + 104LL);
          WdLogEvent5_WdWarning(v131);
        }
      }
      else
      {
        LODWORD(v11) = -1073741811;
        v128 = WdLogNewEntry5_WdWarning(v124, v123, v125, v126);
        *(_QWORD *)(v128 + 24) = v20;
        *(_QWORD *)(v128 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v128);
      }
    }
    goto LABEL_224;
  }
  v154 = v145;
  v58 = 1;
  v59 = _InterlockedAdd64((volatile signed __int64 *)v46 + 3, 1uLL);
  if ( (v59 < 0) ^ v57 | (v59 == 0) )
  {
    v60 = WdLogNewEntry5_WdAssertion(v50);
    *(_QWORD *)(v60 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v60);
  }
  KeEnterCriticalRegion();
  v61 = v145;
  v164 = (char *)v145 + 104;
  ExAcquirePushLockSharedEx((char *)v145 + 104, 0LL);
  v155 = 1;
  v151 = v149;
  v152 = 0;
  if ( v149 && v149 != v61 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
  v63 = *((unsigned int *)v148 + 40);
  if ( (_DWORD)v63 != 1 )
    goto LABEL_210;
  v64 = v149;
  if ( !v149 )
    goto LABEL_74;
  if ( *((_DWORD *)v149 + 40) != 1 )
  {
LABEL_210:
    LODWORD(v11) = -1073741130;
    if ( v152 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v154);
    goto LABEL_224;
  }
  v64 = v149;
LABEL_74:
  v65 = SHIDWORD(v146[0]);
  v66 = 0x1C0000000uLL;
  switch ( HIDWORD(v146[0]) )
  {
    case 0:
      v161.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
      v161.pInputData = 0LL;
      v161.InputDataSize = 0;
      v161.pOutputData = PoolWithTag;
      v161.OutputDataSize = Size;
      LODWORD(v11) = DXGADAPTER::DdiQueryAdapterInfo(v145, &v161, (__int64)v64);
      goto LABEL_202;
    case 1:
      if ( (_DWORD)Size != 524 )
        goto LABEL_197;
      v67 = v145;
      v68 = ADAPTER_RENDER::CopyUmdFileName(
              *((ADAPTER_RENDER **)v145 + 249),
              (struct _D3DKMT_UMDFILENAMEINFO *)PoolWithTag);
      goto LABEL_78;
    case 2:
      if ( (_DWORD)Size != 528 )
        goto LABEL_197;
      v74 = PsGetCurrentProcess();
      ProcessWow64Process = PsGetProcessWow64Process(v74);
      v77 = *((_QWORD *)v145 + 249);
      if ( ProcessWow64Process )
      {
        PoolWithTag[130] = *(_DWORD *)(v77 + 384);
        PoolWithTag[131] = *(_DWORD *)(v77 + 388);
        v78 = *(unsigned __int16 *)(v77 + 368);
        v79 = *(const wchar_t **)(v77 + 376);
      }
      else
      {
        PoolWithTag[130] = *(_DWORD *)(v77 + 360);
        PoolWithTag[131] = *(_DWORD *)(v77 + 364);
        v78 = *(unsigned __int16 *)(v77 + 344);
        v79 = *(const wchar_t **)(v77 + 352);
      }
      LODWORD(v11) = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)PoolWithTag, v76, v79, v78);
      if ( (int)v11 < 0 )
      {
        v81 = WdLogNewEntry5_WdError(v80);
        *(_QWORD *)(v81 + 24) = (int)v11;
        WdLogEvent5_WdError(v81);
      }
      goto LABEL_202;
    case 3:
      if ( (_DWORD)Size != 24 )
        goto LABEL_197;
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(*((_QWORD *)v145 + 249) + 424LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)v145 + 249) + 432LL),
        (unsigned __int64 *)PoolWithTag,
        (unsigned __int64 *)PoolWithTag + 1,
        (unsigned __int64 *)PoolWithTag + 2);
      goto LABEL_202;
    case 4:
      if ( (_DWORD)Size != 16 )
        goto LABEL_197;
      *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v148 + 236);
      goto LABEL_202;
    case 5:
      if ( (_DWORD)Size != 12 )
        goto LABEL_197;
      LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v145 + 249)
                                                                                               + 400LL)
                                                                                   + 8LL)
                                                                       + 416LL))(
                       *(_QWORD *)(*((_QWORD *)v145 + 249) + 408LL),
                       PoolWithTag);
      goto LABEL_202;
    case 6:
      if ( (_DWORD)Size != 12 )
        goto LABEL_197;
      v82 = *(_QWORD *)(*((_QWORD *)v148 + 22) + 64LL);
      *PoolWithTag = *(_DWORD *)(v82 + 1080);
      PoolWithTag[1] = *(unsigned __int16 *)(v82 + 1086);
      PoolWithTag[2] = (unsigned __int16)*(_DWORD *)(v82 + 1084);
      goto LABEL_202;
    case 7:
      if ( (_DWORD)Size != 12 )
        goto LABEL_197;
      LODWORD(v11) = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                       *(VIDMM_EXPORT **)(*((_QWORD *)v145 + 249) + 424LL),
                       v158,
                       (struct _D3DKMT_WORKINGSETINFO *)PoolWithTag);
      goto LABEL_202;
    case 8:
      if ( (_DWORD)Size != 2080 )
        goto LABEL_197;
      LODWORD(v11) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v148 + 22), PoolWithTag);
      goto LABEL_202;
    case 0xB:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = *((unsigned __int8 *)v148 + 164);
      goto LABEL_202;
    case 0xC:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = 0;
      *PoolWithTag ^= (*PoolWithTag ^ ((*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1388LL) & 0x20) != 0)) & 1;
      goto LABEL_202;
    case 0xD:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = DXGADAPTER::GetDriverVersion(v148);
      goto LABEL_202;
    case 0xF:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = *DXGADAPTER::GetAdapterType(v148, v159);
      goto LABEL_202;
    case 0x10:
      if ( (_DWORD)Size != 8 )
        goto LABEL_197;
      v83 = PsGetCurrentProcess();
      v84 = PsGetProcessWin32Process(v83);
      if ( v84 )
      {
        v89 = *(_QWORD *)(v84 + 248);
      }
      else
      {
        v90 = WdLogNewEntry5_WdEvent(v86, v85, v87, v88);
        *(_QWORD *)(v90 + 24) = v83;
        WdLogEvent5_WdEvent(v90);
        v89 = 0LL;
      }
      if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v89 + 80) + 216LL))() )
        goto LABEL_124;
      v155 = 0;
      v96 = v164;
      ExReleasePushLockSharedEx(v164, 0LL);
      KeLeaveCriticalRegion();
      v98 = _InterlockedDecrement64((volatile signed __int64 *)v46 + 3);
      if ( !v98 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v145 + 2), v145);
      if ( v98 < 0 )
      {
        v99 = WdLogNewEntry5_WdAssertion(v97);
        *(_QWORD *)(v99 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v99);
      }
      if ( v152 )
      {
        v152 = 0;
        v100 = v151;
        ExReleasePushLockSharedEx((char *)v151 + 104, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v100);
      }
      v101 = v148;
      if ( v162 )
        v101 = 0LL;
      LODWORD(v11) = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunForAdapter(
                       v101,
                       *PoolWithTag,
                       PoolWithTag,
                       sub_1C0097470);
      goto LABEL_203;
    case 0x11:
      if ( (_DWORD)Size != 12 )
        goto LABEL_197;
      DXGADAPTER::QueryWDDM1_2Caps(v148, (struct _D3DKMT_WDDM_1_2_CAPS *)PoolWithTag);
      goto LABEL_202;
    case 0x12:
      if ( (_DWORD)Size != 8 )
        goto LABEL_197;
      LODWORD(v11) = ADAPTER_RENDER::GetUmdFileVersion(
                       *((ADAPTER_RENDER **)v145 + 249),
                       (union _LARGE_INTEGER *)PoolWithTag);
      goto LABEL_202;
    case 0x13:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1859LL) != 0;
      goto LABEL_202;
    case 0x14:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1860LL) != 0;
      goto LABEL_202;
    case 0x15:
      if ( (_DWORD)Size != 520 )
        goto LABEL_197;
      v67 = v145;
      if ( !byte_1C0046CDC || !*((_BYTE *)v145 + 1863) )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdEvent(v63, 0x1C0000000uLL, v64, v62);
        v73[3] = PoolWithTag;
        v73[4] = v67;
        LODWORD(v11) = -1073741637;
        v73[5] = -1073741637LL;
        goto LABEL_80;
      }
      v68 = ADAPTER_RENDER::CopyDListFileName(
              *((ADAPTER_RENDER **)v145 + 249),
              (unsigned __int16 *)PoolWithTag,
              (unsigned int)v64);
LABEL_78:
      v11 = v68;
      if ( v68 < 0 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdEvent(v70, v69, v71, v72);
        v73[3] = PoolWithTag;
        v73[4] = v67;
        v73[5] = v11;
LABEL_80:
        WdLogEvent5_WdEvent(v73);
      }
LABEL_202:
      v96 = v164;
LABEL_203:
      if ( v152 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
      if ( v155 )
      {
        v155 = 0;
        ExReleasePushLockSharedEx(v96, 0LL);
        KeLeaveCriticalRegion();
        v121 = _InterlockedDecrement64((volatile signed __int64 *)v46 + 3);
        if ( !v121 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v145 + 2), v145);
        if ( v121 < 0 )
        {
          v122 = WdLogNewEntry5_WdAssertion(v120);
          *(_QWORD *)(v122 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v122);
        }
      }
      break;
    case 0x16:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      DXGADAPTER::QueryWDDM1_3Caps(v148, (struct _D3DKMT_WDDM_1_3_CAPS *)PoolWithTag);
      goto LABEL_202;
    case 0x17:
      if ( (_DWORD)Size != 16 )
        goto LABEL_197;
      if ( !PoolWithTag[1] )
        goto LABEL_149;
      Current = DXGPROCESS::GetCurrent();
      if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
      {
LABEL_124:
        LODWORD(v11) = -1073741790;
        v95 = WdLogNewEntry5_WdWarning(v92, v91, v93, v94);
        *(_QWORD *)(v95 + 24) = -1073741790LL;
        goto LABEL_201;
      }
      if ( PoolWithTag[1] )
      {
        *(_DWORD *)(*((_QWORD *)v145 + 249) + 880LL) = PoolWithTag[3];
      }
      else
      {
LABEL_149:
        v103 = v145;
        PoolWithTag[2] = *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1860LL);
        PoolWithTag[3] = *(_DWORD *)(*((_QWORD *)v103 + 249) + 880LL);
      }
      goto LABEL_202;
    case 0x18:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = 0;
      v104 = v145;
      v105 = ((unsigned __int8)~*((_BYTE *)v145 + 1384) >> 5) & 1;
      *PoolWithTag = v105;
      v106 = v105 ^ ((unsigned __int8)v105 ^ (unsigned __int8)(2 * ((*((_DWORD *)v104 + 347) & 0x60) == 96))) & 2;
      *PoolWithTag = v106;
      *PoolWithTag = v106 ^ ((unsigned __int8)v106 ^ (unsigned __int8)(4 * ((*((_DWORD *)v104 + 347) & 0xA0) == 0xA0))) & 4;
      goto LABEL_202;
    case 0x19:
      if ( (_DWORD)Size != 78 )
        goto LABEL_197;
      LODWORD(v11) = DXGADAPTER::QueryNodeMetadata(v148, *PoolWithTag, (struct _DXGK_NODEMETADATA *)(PoolWithTag + 1));
      goto LABEL_202;
    case 0x1A:
      if ( (_DWORD)Size != 520 )
        goto LABEL_197;
      v67 = v145;
      v107 = *((_QWORD *)v145 + 249);
      *(_WORD *)PoolWithTag = 0;
      v68 = RtlStringCbCopyNW(
              (NTSTRSAFE_PWSTR)PoolWithTag,
              0x1C0000000uLL,
              *(STRSAFE_PCNZWCH *)(v107 + 320),
              *(unsigned __int16 *)(v107 + 312));
      goto LABEL_78;
    case 0x1B:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = (*((_DWORD *)v148 + 71) & 0x200) != 0;
      goto LABEL_202;
    case 0x1C:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1380LL) & 0x10) != 0;
      goto LABEL_202;
    case 0x1D:
      if ( (_DWORD)Size != 520 )
        goto LABEL_197;
      v67 = v145;
      v108 = *((_QWORD *)v145 + 249);
      *(_WORD *)PoolWithTag = 0;
      v68 = RtlStringCbCopyNW(
              (NTSTRSAFE_PWSTR)PoolWithTag,
              0x1C0000000uLL,
              *(STRSAFE_PCNZWCH *)(v108 + 336),
              *(unsigned __int16 *)(v108 + 328));
      goto LABEL_78;
    case 0x1E:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      if ( *((int *)v145 + 414) >= 0x2000 )
        v58 = *((_DWORD *)v145 + 58);
      *PoolWithTag = v58;
      goto LABEL_202;
    case 0x1F:
      if ( (_DWORD)Size != 28 )
        goto LABEL_197;
      v65 = *PoolWithTag;
      if ( (unsigned int)v65 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v145) )
        goto LABEL_199;
      _mm_lfence();
      v109 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v145 + 238) + 48 * v65 + 8) + 64LL);
      PoolWithTag[1] = v109[265];
      PoolWithTag[2] = v109[266];
      PoolWithTag[3] = v109[267];
      PoolWithTag[4] = v109[268];
      PoolWithTag[5] = v109[269];
      PoolWithTag[6] = v109[264];
      goto LABEL_202;
    case 0x20:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      QueryDriverCapsExt(v64, (struct _D3DKMT_DRIVERCAPS_EXT *)PoolWithTag);
      goto LABEL_202;
    case 0x21:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      v156 = 0LL;
      v157 = 0;
      v110 = DxgkMiracastQueryMiracastSupportInternal(&v156);
      v115 = v110;
      if ( v110 == -1073741637 )
      {
        *PoolWithTag = 0;
        goto LABEL_202;
      }
      if ( v110 < 0 )
      {
        LODWORD(v11) = v110;
        v95 = WdLogNewEntry5_WdWarning(v112, v111, v113, v114);
        *(_QWORD *)(v95 + 24) = v115;
        goto LABEL_201;
      }
      *PoolWithTag = 2 - ((_BYTE)v157 != 0);
      goto LABEL_202;
    case 0x22:
      if ( (_DWORD)Size != 12 )
        goto LABEL_197;
      NumDifferentPhysicalAdapters = (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v145);
      v119 = *(unsigned int *)(v116 + 1388);
      if ( (v119 & 0x40) == 0 )
      {
        LODWORD(v11) = -1073741811;
        v95 = WdLogNewEntry5_WdWarning(v119, v116, NumDifferentPhysicalAdapters, v118);
        *(_QWORD *)(v95 + 24) = -1073741811LL;
        goto LABEL_201;
      }
      if ( *PoolWithTag >= (unsigned int)NumDifferentPhysicalAdapters )
      {
        LODWORD(v11) = -1073741811;
        v95 = WdLogNewEntry5_WdWarning(v119, v116, NumDifferentPhysicalAdapters, v118);
        *(_QWORD *)(v95 + 24) = *PoolWithTag;
        goto LABEL_200;
      }
      ADAPTER_RENDER::QueryGpuMmuCaps(
        *(ADAPTER_RENDER **)(v116 + 1992),
        *PoolWithTag,
        (struct _D3DKMT_GPUMMU_CAPS *)(PoolWithTag + 1));
      goto LABEL_202;
    case 0x23:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1949LL) != 0;
      goto LABEL_202;
    case 0x24:
      if ( (_DWORD)Size != 4 )
        goto LABEL_197;
      *PoolWithTag = *((_DWORD *)DXGGLOBAL::GetGlobal(v63) + 266);
      goto LABEL_202;
    case 0x25:
      if ( (_DWORD)Size == 4 )
      {
        *PoolWithTag = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v145 + 249) + 16LL) + 1950LL) != 0;
      }
      else
      {
LABEL_197:
        LODWORD(v11) = -1073741811;
        v95 = WdLogNewEntry5_WdWarning(v63, 0x1C0000000uLL, v64, v62);
        *(_QWORD *)(v95 + 24) = v20;
LABEL_200:
        *(_QWORD *)(v95 + 32) = -1073741811LL;
LABEL_201:
        WdLogEvent5_WdWarning(v95);
      }
      goto LABEL_202;
    default:
LABEL_199:
      LODWORD(v11) = -1073741811;
      v95 = WdLogNewEntry5_WdWarning(v63, v66, v64, v62);
      *(_QWORD *)(v95 + 24) = v65;
      goto LABEL_200;
  }
LABEL_224:
  if ( (int)v11 >= 0 )
  {
    v138 = v146[1];
    if ( (char *)v146[1] + v20 > (void *)MmUserProbeAddress || (char *)v146[1] + v20 <= v146[1] )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v138, PoolWithTag, v20);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v161.hKmdProcessHandle);
  if ( v150 )
  {
    v141 = _InterlockedDecrement64((volatile signed __int64 *)v150 + 3);
    if ( !v141 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v150 + 2), v150);
    if ( v141 < 0 )
    {
      v142 = WdLogNewEntry5_WdAssertion(v139);
      *(_QWORD *)(v142 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v142);
    }
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v139, &EventProfilerExit, v140, 2015);
  return (unsigned int)v11;
}
