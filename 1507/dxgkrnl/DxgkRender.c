/*
 * XREFs of DxgkRender @ 0x1C00763F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0072CDC (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0074DF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C011F9A4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C012CD6C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C012CF0C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rdi
  _OWORD *v11; // rax
  _D3DKMT_RENDER *v12; // rcx
  __int64 v13; // rdx
  __int64 hDevice; // rbx
  __int64 v15; // rcx
  DXGCONTEXT *v16; // r13
  _QWORD *v17; // rax
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // r14
  __int64 v27; // rcx
  int v28; // esi
  int v29; // ebx
  __int64 v30; // rdi
  void *v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // bl
  __int64 v37; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v39; // rax
  __int64 v40; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  ULONG v46; // ebx
  unsigned int v47; // edi
  D3DKMT_HANDLE v48; // ecx
  __int64 v49; // r8
  unsigned int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  signed __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  DXGCONTEXT *v73; // rbx
  unsigned __int64 v74; // rcx
  __int64 CommandOffset; // rdi
  _QWORD *v76; // rax
  D3DDDI_ALLOCATIONLIST *CommandLength; // rdx
  __int64 v78; // r14
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 AllocationCount; // r12
  __int64 PatchLocationCount; // rdi
  char Flags; // r14
  __int64 v84; // rax
  bool v85; // r13
  struct DXGALLOCATION **v86; // r15
  struct DXGALLOCATION **v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  UINT NewCommandBufferSize; // r12d
  UINT NewAllocationListSize; // r15d
  bool v95; // zf
  UINT NewPatchLocationListSize; // r14d
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  _QWORD *v102; // rax
  DXGCONTEXT *v103; // rsi
  __int64 v104; // rdx
  ULONG64 v105; // r10
  struct DXGADAPTER *v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rcx
  __int64 v116; // [rsp+30h] [rbp-428h]
  _BYTE v117[16]; // [rsp+38h] [rbp-420h] BYREF
  DXGCONTEXT *v118; // [rsp+48h] [rbp-410h] BYREF
  struct DXGPROCESS *v119; // [rsp+50h] [rbp-408h] BYREF
  int v120; // [rsp+58h] [rbp-400h] BYREF
  __int64 v121; // [rsp+60h] [rbp-3F8h] BYREF
  int v122; // [rsp+68h] [rbp-3F0h]
  int v123; // [rsp+70h] [rbp-3E8h] BYREF
  PVOID P; // [rsp+78h] [rbp-3E0h]
  _BYTE v125[32]; // [rsp+80h] [rbp-3D8h] BYREF
  unsigned int v126; // [rsp+A0h] [rbp-3B8h]
  struct DXGADAPTER *v127; // [rsp+A8h] [rbp-3B0h] BYREF
  char v128; // [rsp+B0h] [rbp-3A8h]
  struct DXGPROCESS *v129; // [rsp+B8h] [rbp-3A0h]
  __int64 v130; // [rsp+C0h] [rbp-398h] BYREF
  DXGCONTEXT *v131; // [rsp+C8h] [rbp-390h]
  char v132[8]; // [rsp+D0h] [rbp-388h] BYREF
  char v133[8]; // [rsp+D8h] [rbp-380h] BYREF
  DXGADAPTER *v134; // [rsp+E0h] [rbp-378h]
  char v135; // [rsp+E8h] [rbp-370h]
  char v136[8]; // [rsp+F0h] [rbp-368h] BYREF
  __int64 v137; // [rsp+F8h] [rbp-360h]
  __int64 v138; // [rsp+108h] [rbp-350h]
  char v139; // [rsp+110h] [rbp-348h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+120h] [rbp-338h]
  __int64 v141; // [rsp+128h] [rbp-330h]
  ULONG64 v142; // [rsp+130h] [rbp-328h]
  _QWORD v143[6]; // [rsp+138h] [rbp-320h] BYREF
  char v144; // [rsp+168h] [rbp-2F0h]
  __int64 v145; // [rsp+170h] [rbp-2E8h]
  _BYTE v146[24]; // [rsp+178h] [rbp-2E0h] BYREF
  __int64 v147; // [rsp+190h] [rbp-2C8h]
  __int64 v148; // [rsp+198h] [rbp-2C0h]
  PVOID v149; // [rsp+1A0h] [rbp-2B8h] BYREF
  char v150; // [rsp+1A8h] [rbp-2B0h] BYREF
  int v151; // [rsp+2A8h] [rbp-1B0h]
  _D3DKMT_RENDER v152; // [rsp+2B0h] [rbp-1A8h] BYREF

  v142 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2013);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v113 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v113 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v113);
    goto LABEL_182;
  }
  v10 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  v119 = v10;
  v129 = v10;
  if ( !v10 )
  {
LABEL_182:
    v114 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v114 + 24) = PsGetCurrentProcess(v115);
    v18 = -1073741811;
    *(_QWORD *)(v114 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v114);
    goto LABEL_183;
  }
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v12 = &v152;
  v13 = 2LL;
  do
  {
    *(_OWORD *)&v12->hDevice = *v11;
    *(_OWORD *)&v12->PatchLocationCount = v11[1];
    *(_OWORD *)&v12->NewCommandBufferSize = v11[2];
    *(_OWORD *)&v12->NewAllocationListSize = v11[3];
    *(_OWORD *)&v12->NewPatchLocationListSize = v11[4];
    *(_OWORD *)&v12->BroadcastContextCount = v11[5];
    *(_OWORD *)&v12->BroadcastContext[3] = v11[6];
    v12 = (_D3DKMT_RENDER *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].pPrivateDriverData = v11[7];
    v11 += 8;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->hDevice = *v11;
  *(_OWORD *)&v12->PatchLocationCount = v11[1];
  *(_OWORD *)&v12->NewCommandBufferSize = v11[2];
  *(_OWORD *)&v12->NewAllocationListSize = v11[3];
  *(_OWORD *)&v12->NewPatchLocationListSize = v11[4];
  *(_OWORD *)&v12->BroadcastContextCount = v11[5];
  *(_OWORD *)&v12->BroadcastContext[3] = v11[6];
  hDevice = v152.hDevice;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117, v152.hDevice, v10, &v118, 0);
  v16 = v118;
  v131 = v118;
  if ( !v118 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v17[3] = v10;
    v17[4] = hDevice;
    v18 = -1073741811;
    v17[5] = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v17);
LABEL_13:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
LABEL_183:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2013);
    return (unsigned int)v18;
  }
  v21 = (unsigned int)(*(_DWORD *)&v152.Flags | (*(_DWORD *)&v152.Flags >> 1));
  if ( ((*(_BYTE *)&v152.Flags | (unsigned __int8)(*(_DWORD *)&v152.Flags >> 1)) & 0x20) != 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v17[3] = hDevice;
    v18 = -1073741811;
    v17[4] = -1073741811LL;
    goto LABEL_12;
  }
  if ( *((_BYTE *)v118 + 350) )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = hDevice;
    WdLogEvent5_WdError(v22);
LABEL_18:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2013);
    return -1073741811LL;
  }
  v26 = *((_QWORD *)v118 + 2);
  v116 = v26;
  v141 = v26;
  v121 = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
  if ( *(int *)(v27 + 1648) >= 0x2000 || *(_BYTE *)(v27 + 1932) )
  {
    v29 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 195);
    v28 = 0;
  }
  else
  {
    v28 = 0;
    v29 = 0;
  }
  v122 = v29;
  v30 = *(_QWORD *)(v26 + 16);
  if ( *(_DWORD *)(v26 + 280) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v30 + 80)) )
      goto LABEL_32;
    v31 = (void *)(v30 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v30 + 56)) )
      goto LABEL_32;
    v31 = (void *)(v30 + 56);
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_32:
  KeEnterCriticalRegion();
  if ( v29 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v26 + 88, 0LL) )
      goto LABEL_43;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 80LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v26 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 80), 0) )
      goto LABEL_43;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 80LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 80), 1u);
  }
  if ( v36 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_43:
  BroadcastContextCount = v152.BroadcastContextCount;
  if ( v152.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL))
    || BroadcastContextCount > 0x40 )
  {
    v39 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    *(_QWORD *)(v39 + 24) = v16;
    v18 = -1073741811;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
LABEL_46:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v121);
    goto LABEL_13;
  }
  v40 = BroadcastContextCount + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v126 = 0;
  if ( (unsigned int)v40 <= 4 )
  {
    PoolWithTag = v125;
    P = v125;
  }
  else
  {
    v34 = (unsigned int)v40;
    v32 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v40;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v40 < 8 )
      goto LABEL_54;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v40, 0x4B677844u);
    P = PoolWithTag;
  }
  v126 = BroadcastContextCount + 1;
  if ( !PoolWithTag )
  {
LABEL_55:
    v42 = WdLogNewEntry5_WdWarning(PoolWithTag, v32, v34, v35);
    *(_QWORD *)(v42 + 24) = 119LL;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_56;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v40);
  PoolWithTag = P;
LABEL_54:
  if ( !PoolWithTag )
    goto LABEL_55;
  *PoolWithTag = v16;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v146, v119);
  v46 = 0;
  if ( BroadcastContextCount )
  {
    v47 = 1;
    while ( 1 )
    {
      v48 = (v152.BroadcastContext[v46] >> 6) & 0xFFFFFF;
      v49 = v152.BroadcastContext[v46] >> 30;
      if ( v48 < *((_DWORD *)v119 + 58)
        && (v45 = *((_QWORD *)v119 + 27), v50 = *(_DWORD *)(v45 + 16LL * v48 + 8), (_DWORD)v49 == ((v50 >> 4) & 3))
        && (v50 & 0x1000) == 0
        && (v50 & 0xF) != 0
        && (*(_BYTE *)(v45 + 16LL * v48 + 8) & 0xF) == 7 )
      {
        v51 = *(_QWORD *)(v45 + 16LL * v48);
      }
      else
      {
        v51 = 0LL;
      }
      v52 = 8LL * v47;
      *(_QWORD *)((char *)P + v52) = v51;
      v53 = *(_QWORD *)((char *)P + v52);
      if ( !v53 )
        break;
      v52 = *(_QWORD *)(v53 + 16);
      if ( v52 != *((_QWORD *)v16 + 2) )
        break;
      if ( *(_BYTE *)(v53 + 350) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v52, v53, v49, v45);
        *(_QWORD *)(v54 + 24) = 162LL;
        WdLogEvent5_WdAssertion(v54);
      }
      ++v46;
      ++v47;
      if ( v46 >= BroadcastContextCount )
        goto LABEL_81;
    }
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v52);
    v55[3] = v16;
    v55[4] = v152.BroadcastContext[v46];
    v55[5] = v46;
    v18 = -1073741811;
    v55[6] = -1073741811LL;
    WdLogEvent5_WdError(v55);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v146);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_46;
  }
LABEL_81:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v146);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v143,
    P,
    v126);
  if ( v144 )
  {
    if ( v143[0] )
    {
      v61 = WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
      *(_QWORD *)(v61 + 24) = 179LL;
      WdLogEvent5_WdWarning(v61);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
      if ( P != v125 && P )
        ExFreePoolWithTag(P, 0);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v121);
      goto LABEL_18;
    }
    v60 = WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
    *(_QWORD *)(v60 + 24) = 174LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_84;
  }
  v62 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  v127 = *(struct DXGADAPTER **)(v62 + 16);
  v63 = _InterlockedExchangeAdd64((volatile signed __int64 *)v127 + 3, 1uLL);
  if ( (v63 + 1 < 0) ^ __OFADD__(1LL, v63) | (v63 == -1) )
  {
    v64 = WdLogNewEntry5_WdAssertion(v62, v56, v58, v59);
    *(_QWORD *)(v64 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v64);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v127 + 104, 0LL);
  v128 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v132, *((_QWORD *)v16 + 2), 0, v65, 0);
  if ( v135 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v67, v66, v68);
    v70[3] = 275LL;
    v70[4] = 4LL;
    v70[5] = v133;
    v70[6] = 0LL;
    v70[7] = 0LL;
    WdLogEvent5_WdCriticalError(v70);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v134 + 32)) )
      KeWaitForSingleObject((char *)v134 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v134);
  }
  v135 = 1;
  if ( *(_DWORD *)(v138 + 352) == 1 )
  {
    if ( v139 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v136);
      if ( *(_DWORD *)(v137 + 160) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v136);
        goto LABEL_101;
      }
    }
    v73 = v118;
    v74 = *((_QWORD *)v118 + 6);
    CommandOffset = v152.CommandOffset;
    if ( v152.CommandOffset >= v74 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v66, v68, v69);
      v76[3] = v73;
      v76[4] = CommandOffset;
      v76[5] = *((_QWORD *)v73 + 6);
      v18 = -1073741811;
      v76[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v76);
LABEL_160:
      v130 = 0LL;
      v99 = 0LL;
      v123 = 0;
      v100 = 0LL;
      v120 = 0;
      v101 = 0LL;
      if ( v18 != -1073741130 )
      {
        if ( v139 )
          COREACCESS::Release((COREACCESS *)v136);
        if ( !v135 )
        {
          v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v74, v99, v100);
          v102[3] = 275LL;
          v102[4] = 4LL;
          v102[5] = v133;
          v102[6] = 0LL;
          v102[7] = 0LL;
          WdLogEvent5_WdCriticalError(v102);
        }
        v135 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 18) )
          DXGADAPTER::ReleaseCoreResource(v134);
        v103 = v131;
        v73 = v118;
        if ( !*((_BYTE *)v131 + 350) )
          (*(void (__fastcall **)(_QWORD, __int64 *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v131 + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 464LL))(
            *((_QWORD *)v118 + 26),
            &v130,
            &v123,
            &v120);
        v104 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v103 + 2) + 16LL) + 376LL) + 8LL);
        LODWORD(v101) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v104 + 360))(
                          *((_QWORD *)v73 + 27),
                          v104,
                          v100,
                          v101);
        v28 = v130;
        LODWORD(v99) = v123;
        LODWORD(v100) = v120;
      }
      v145 = *((_QWORD *)v73 + 7);
      v105 = v142;
      *(_QWORD *)(v142 + 24) = v145;
      *(_DWORD *)(v105 + 32) = v28;
      v148 = *((_QWORD *)v73 + 10);
      *(_QWORD *)(v105 + 40) = v148;
      *(_DWORD *)(v105 + 48) = v99;
      v147 = *((_QWORD *)v73 + 14);
      *(_QWORD *)(v105 + 56) = v147;
      *(_DWORD *)(v105 + 64) = v100;
      *(_DWORD *)(v105 + 340) = v101;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
      v106 = v127;
      ExReleasePushLockSharedEx((char *)v127 + 104, 0LL);
      KeLeaveCriticalRegion();
      v111 = _InterlockedDecrement64((volatile signed __int64 *)v106 + 3);
      if ( !v111 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v127 + 2), v127);
      if ( v111 < 0 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v108, v107, v109, v110);
        *(_QWORD *)(v112 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v112);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
      if ( P != v125 && P )
        ExFreePoolWithTag(P, 0);
      if ( v122 )
        ExReleasePushLockSharedEx(v26 + 88, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v26 + 80));
      KeLeaveCriticalRegion();
      goto LABEL_13;
    }
    CommandLength = (D3DDDI_ALLOCATIONLIST *)v152.CommandLength;
    v78 = v152.CommandLength;
    if ( v152.CommandLength + (unsigned __int64)v152.CommandOffset <= v74 )
    {
      AllocationCount = v152.AllocationCount;
      if ( v152.AllocationCount <= *((_DWORD *)v118 + 16) )
      {
        PatchLocationCount = v152.PatchLocationCount;
        if ( v152.PatchLocationCount <= *((_DWORD *)v118 + 24) )
        {
          v18 = 0;
          Flags = (char)v152.Flags;
          if ( v152.CommandLength )
          {
            if ( (*(_BYTE *)&v152.Flags & 0x20) != 0 )
            {
              CommandLength = v152.pNewAllocationList;
              pNewAllocationList = v152.pNewAllocationList;
            }
            else
            {
              pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v118 + 10);
            }
            v84 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
            v85 = *(int *)(v84 + 1648) >= 0x2000 || *(_BYTE *)(v84 + 1932);
            LODWORD(v119) = v152.AllocationCount;
            v74 = 0LL;
            v149 = 0LL;
            v151 = 0;
            v86 = 0LL;
            if ( v85 )
            {
              v87 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                               &v149,
                                               v152.AllocationCount);
              v86 = v87;
              if ( !v87 )
              {
                v92 = WdLogNewEntry5_WdWarning(v89, v88, v90, v91);
                *(_QWORD *)(v92 + 24) = 262LL;
                WdLogEvent5_WdWarning(v92);
                PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v149);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v127);
LABEL_84:
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
LABEL_56:
                if ( P != v125 && P )
                  ExFreePoolWithTag(P, 0);
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v121);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
                if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                  Template_q(v43, &EventProfilerExit, v44, 2013);
                return 3221225495LL;
              }
              v18 = DxgkReferenceAllocationList(
                      (unsigned int *)&v119,
                      pNewAllocationList,
                      v87,
                      *((struct DXGDEVICE **)v131 + 2));
              LODWORD(AllocationCount) = (_DWORD)v119;
              v74 = (unsigned __int64)v149;
            }
            if ( v18 >= 0 )
            {
              v18 = DXGCONTEXT::Render(v73, &v152, (struct COREDEVICEACCESS *)v132, (struct DXGCONTEXT **)P, v86);
              Flags = (char)v152.Flags;
              v74 = (unsigned __int64)v149;
            }
            if ( v85 )
            {
              DxgkUnreferenceAllocationList(AllocationCount, v86);
              v74 = (unsigned __int64)v149;
            }
            if ( (char *)v74 != &v150 && v74 )
              ExFreePoolWithTag((PVOID)v74, 0);
            if ( v18 < 0 )
              goto LABEL_159;
          }
          if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
            goto LABEL_159;
          NewCommandBufferSize = v152.NewCommandBufferSize;
          if ( (Flags & 1) == 0 )
            NewCommandBufferSize = *((_DWORD *)v73 + 44);
          NewAllocationListSize = v152.NewAllocationListSize;
          if ( (Flags & 2) == 0 )
            NewAllocationListSize = *((_DWORD *)v73 + 47);
          v95 = (Flags & 4) == 0;
          NewPatchLocationListSize = v152.NewPatchLocationListSize;
          if ( v95 )
            NewPatchLocationListSize = *((_DWORD *)v73 + 48);
          v74 = *((unsigned int *)v73 + 44);
          if ( NewCommandBufferSize < (unsigned int)v74 )
            goto LABEL_153;
          if ( NewAllocationListSize >= *((_DWORD *)v73 + 47) && NewPatchLocationListSize >= *((_DWORD *)v73 + 48) )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(v134) )
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)v132);
            DXGCONTEXT::ResizeUserModeBuffers(
              v73,
              *((struct VIDMM_DMA_POOL **)v73 + 26),
              NewCommandBufferSize,
              NewAllocationListSize,
              NewPatchLocationListSize);
            v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v132);
            goto LABEL_159;
          }
          if ( NewCommandBufferSize < (unsigned int)v74 )
          {
LABEL_153:
            v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, CommandLength, v68, v69);
            v97[3] = v73;
            v97[4] = NewCommandBufferSize;
            v97[5] = *((unsigned int *)v73 + 44);
            WdLogEvent5_WdWarning(v97);
          }
          if ( NewAllocationListSize < *((_DWORD *)v73 + 47) )
          {
            v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, CommandLength, v68, v69);
            v98[3] = v73;
            v98[4] = NewAllocationListSize;
            v98[5] = *((unsigned int *)v73 + 47);
            WdLogEvent5_WdWarning(v98);
          }
          if ( NewPatchLocationListSize >= *((_DWORD *)v73 + 48) )
            goto LABEL_159;
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, CommandLength, v68, v69);
          v79[3] = v73;
          v79[4] = NewPatchLocationListSize;
          v79[5] = *((unsigned int *)v73 + 48);
LABEL_158:
          WdLogEvent5_WdWarning(v79);
LABEL_159:
          v26 = v116;
          goto LABEL_160;
        }
        v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v152.CommandLength, v68, v69);
        v79[3] = v73;
        v79[4] = PatchLocationCount;
        v80 = *((unsigned int *)v73 + 24);
      }
      else
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v152.CommandLength, v68, v69);
        v79[3] = v73;
        v79[4] = AllocationCount;
        v80 = *((unsigned int *)v73 + 16);
      }
    }
    else
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v152.CommandLength, v68, v69);
      v79[3] = v73;
      v79[4] = v78;
      v80 = *((_QWORD *)v73 + 6);
    }
    v79[5] = v80;
    v18 = -1073741811;
    v79[6] = -1073741811LL;
    goto LABEL_158;
  }
LABEL_101:
  COREACCESS::Release((COREACCESS *)v133);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v127);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
  if ( P != v125 && P )
    ExFreePoolWithTag(P, 0);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v121);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v71, &EventProfilerExit, v72, 2013);
  return 3221226166LL;
}
