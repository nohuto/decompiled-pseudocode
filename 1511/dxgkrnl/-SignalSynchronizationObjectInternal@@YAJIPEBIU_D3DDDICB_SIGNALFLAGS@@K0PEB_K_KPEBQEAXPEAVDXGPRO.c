/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005B4BC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0076080 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0077430 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00BA268 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0159080 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0166808 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ @ 0x1C000102C (--1-$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001898 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000BD50 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000BDA8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0019150 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00191C4 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FA40 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_qPR0qPR2qx @ 0x1C001FC94 (Template_qPR0qPR2qx.c)
 *     Template_qPR0qqPR3XR3 @ 0x1C001FD58 (Template_qPR0qqPR3XR3.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C005BE6C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C00BAF10 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0150F48 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        __int64 a1,
        const unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        char a7,
        void *const *a8,
        struct DXGPROCESS *a9,
        bool a10,
        char a11)
{
  unsigned __int64 v11; // rsi
  void *const *v13; // r14
  struct DXGPROCESS *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // r13
  _BYTE *v18; // rcx
  _BYTE *PoolWithTag; // r9
  struct DXGCONTEXT **v20; // r15
  char v21; // si
  __int64 v22; // rcx
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  struct _KEVENT *v30; // rsi
  unsigned __int8 v31; // si
  __int64 v32; // r8
  _QWORD *v33; // rax
  struct DXGGLOBAL *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  _QWORD *v41; // rax
  PERESOURCE *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  PVOID v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  unsigned int v52; // r15d
  unsigned int v53; // esi
  char *v54; // rsi
  _QWORD *v55; // r14
  const unsigned int *v56; // r12
  unsigned int v57; // edi
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // r9d
  unsigned int v61; // ecx
  unsigned int v62; // edi
  __int64 v63; // r8
  unsigned int v64; // edx
  __int64 v65; // rdi
  __int64 v66; // r8
  _QWORD *v67; // rax
  unsigned int *v68; // r8
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdi
  _QWORD *v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  void **v79; // rdi
  PVOID v80; // rcx
  char v81; // r14
  unsigned int v82; // r15d
  char *v83; // rsi
  const unsigned int *v84; // r12
  unsigned int v85; // edi
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r9d
  unsigned int v89; // ecx
  unsigned int v90; // edi
  __int64 v91; // r8
  unsigned int v92; // edx
  __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned int v96; // edi
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // r9d
  unsigned int v100; // ecx
  unsigned int v101; // edi
  struct DXGPROCESS *v102; // r14
  __int64 v103; // r8
  unsigned int v104; // edx
  __int64 v105; // rdi
  __int64 v106; // rcx
  __int64 v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  _BYTE *v115; // rcx
  __int64 v116; // r8
  int v117; // edx
  size_t v118; // r8
  void *v119; // rdx
  char *v120; // r12
  __int64 v121; // rcx
  __int64 v122; // rax
  _BYTE *v123; // r15
  unsigned int v124; // r14d
  _QWORD *v125; // rsi
  __int64 v126; // r13
  __int64 v127; // rdi
  __int64 v128; // r8
  __int64 v129; // rcx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // r14
  _BYTE *v135; // r9
  int v136; // r15d
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  _QWORD *v141; // rax
  char v142; // [rsp+50h] [rbp-278h]
  __int64 v143; // [rsp+58h] [rbp-270h] BYREF
  int v144; // [rsp+60h] [rbp-268h]
  PERESOURCE *v145; // [rsp+68h] [rbp-260h] BYREF
  char v146; // [rsp+70h] [rbp-258h]
  unsigned int v147; // [rsp+78h] [rbp-250h]
  PVOID v148; // [rsp+80h] [rbp-248h] BYREF
  _BYTE v149[16]; // [rsp+88h] [rbp-240h] BYREF
  int v150; // [rsp+98h] [rbp-230h]
  _BYTE v151[16]; // [rsp+A0h] [rbp-228h] BYREF
  struct DXGPROCESS *v152; // [rsp+B0h] [rbp-218h]
  struct DXGCONTEXT **v153; // [rsp+B8h] [rbp-210h]
  unsigned int v154; // [rsp+C0h] [rbp-208h]
  PVOID v155; // [rsp+C8h] [rbp-200h] BYREF
  _BYTE v156[16]; // [rsp+D0h] [rbp-1F8h] BYREF
  int v157; // [rsp+E0h] [rbp-1E8h]
  void *const *v158; // [rsp+E8h] [rbp-1E0h]
  const unsigned int *v159; // [rsp+F0h] [rbp-1D8h]
  _QWORD *v160; // [rsp+F8h] [rbp-1D0h]
  _QWORD *v161; // [rsp+100h] [rbp-1C8h]
  void *Src; // [rsp+108h] [rbp-1C0h]
  char v163[8]; // [rsp+110h] [rbp-1B8h] BYREF
  char v164[8]; // [rsp+118h] [rbp-1B0h] BYREF
  DXGADAPTER *v165; // [rsp+120h] [rbp-1A8h]
  char v166; // [rsp+128h] [rbp-1A0h]
  char v167[8]; // [rsp+130h] [rbp-198h] BYREF
  __int64 v168; // [rsp+138h] [rbp-190h]
  __int64 v169; // [rsp+148h] [rbp-180h]
  char v170; // [rsp+150h] [rbp-178h]
  PVOID P; // [rsp+160h] [rbp-168h] BYREF
  _BYTE v172[128]; // [rsp+168h] [rbp-160h] BYREF
  int v173; // [rsp+1E8h] [rbp-E0h]
  PVOID v174; // [rsp+1F0h] [rbp-D8h] BYREF
  _BYTE v175[16]; // [rsp+1F8h] [rbp-D0h] BYREF
  int v176; // [rsp+208h] [rbp-C0h]
  void *v177; // [rsp+210h] [rbp-B8h] BYREF
  unsigned int *v178; // [rsp+218h] [rbp-B0h]
  struct DXGPROCESS *v179; // [rsp+220h] [rbp-A8h]
  _QWORD v180[4]; // [rsp+228h] [rbp-A0h] BYREF
  char v181; // [rsp+248h] [rbp-80h]
  _BYTE *v182; // [rsp+250h] [rbp-78h]
  PVOID v183; // [rsp+258h] [rbp-70h] BYREF
  _BYTE v184[32]; // [rsp+260h] [rbp-68h] BYREF
  unsigned int v185; // [rsp+280h] [rbp-48h]

  v11 = a4;
  v154 = a4;
  v159 = a2;
  v147 = a1;
  v178 = a5;
  Src = a6;
  v13 = a8;
  v158 = a8;
  v14 = a9;
  v152 = a9;
  v179 = a9;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 259LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  LOBYTE(v17) = 0;
  v18 = 0LL;
  v148 = 0LL;
  v150 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v173 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v172;
    P = v172;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v161 = 0LL;
      goto LABEL_11;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v11, 0x4B677844u);
    P = PoolWithTag;
    v18 = v148;
  }
  v173 = v11;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v11);
    v18 = v148;
    PoolWithTag = P;
  }
  v161 = PoolWithTag;
LABEL_11:
  if ( (unsigned int)v11 <= 2 )
  {
    v18 = v149;
    v148 = v149;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v20 = 0LL;
      goto LABEL_19;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, 8 * v11, 0x4B677844u);
    v148 = v18;
    PoolWithTag = P;
  }
  v150 = v11;
  if ( v18 )
  {
    memset(v18, 0, 8 * v11);
    v18 = v148;
    PoolWithTag = P;
  }
  v20 = (struct DXGCONTEXT **)v18;
LABEL_19:
  v153 = v20;
  if ( !v161 || !v20 )
  {
    if ( PoolWithTag == v172 || !PoolWithTag )
      goto LABEL_473;
    v80 = PoolWithTag;
LABEL_471:
    ExFreePoolWithTag(v80, 0);
LABEL_472:
    v18 = v148;
LABEL_473:
    if ( v18 != v149 && v18 )
      ExFreePoolWithTag(v18, 0);
    return 3221225495LL;
  }
  v21 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151, *a5, v14, v20, a11);
  if ( !*v20 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v24[3] = v152;
    v24[4] = *a5;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    if ( P != v172 && P )
      ExFreePoolWithTag(P, 0);
    if ( v148 != v149 )
    {
      if ( v148 )
        ExFreePoolWithTag(v148, 0);
    }
    return 3221225485LL;
  }
  v25 = *((_QWORD *)*v20 + 2);
  v143 = v25;
  v144 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v163, v25, 0, v23, v21);
  if ( !v21 )
  {
    if ( a10 || *(_DWORD *)(*((_QWORD *)*v20 + 2) + 280LL) == 2 )
    {
      v29 = *(_QWORD *)(v25 + 16);
      if ( *(_DWORD *)(v25 + 280) == 2 )
        v30 = (struct _KEVENT *)(v29 + 80);
      else
        v30 = (struct _KEVENT *)(v29 + 56);
      if ( !KeReadStateEvent(v30) )
        KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v25 + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 80LL));
        v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v25 + 80), 1u);
        if ( v31 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v144 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      if ( v148 != v149 && v148 )
        ExFreePoolWithTag(v148, 0);
      return 2147483665LL;
    }
    if ( v166 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
      v33[3] = 275LL;
      v33[4] = 4LL;
      v33[5] = v164;
      v33[6] = 0LL;
      v33[7] = 0LL;
      WdLogEvent5_WdCriticalError(v33);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v165 + 18) )
    {
      if ( !KeReadStateEvent((PRKEVENT)((char *)v165 + 32)) )
        KeWaitForSingleObject((char *)v165 + 32, Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(v165);
    }
    v166 = 1;
    if ( *(_DWORD *)(v169 + 352) != 1 )
      goto LABEL_65;
    if ( v170 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v167);
      if ( *(_DWORD *)(v168 + 160) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v167);
LABEL_65:
        COREACCESS::Release((COREACCESS *)v164);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
        if ( P != v172 && P )
          ExFreePoolWithTag(P, 0);
        if ( v148 != v149 && v148 )
          ExFreePoolWithTag(v148, 0);
        return 3221226166LL;
      }
    }
  }
  v34 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v35 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v35 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v35);
    v34 = DXGGLOBAL::m_pGlobal;
  }
  v145 = (PERESOURCE *)v34;
  v146 = 0;
  if ( !v34 )
  {
    v36 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v36 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v36);
    v34 = (struct DXGGLOBAL *)v145;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v34 + 48)) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v40 + 24) = 1385LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( v146 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37, v39);
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[5] = &v145;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  v42 = v145;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v42[48], 1u);
  v146 = 1;
  v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v20 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v43 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v43 + 128)) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v44);
    *(_QWORD *)(v45 + 24) = 332LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( a10 )
  {
    v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v20 + 2) + 16LL) + 16LL) + 176LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v46 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v46);
        v47[3] = *a5;
        v47[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v47[5] = -1073741811LL;
        WdLogEvent5_WdError(v47);
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
        if ( P != v172 && P )
          ExFreePoolWithTag(P, 0);
        v48 = v148;
        if ( v148 != v149 && v148 )
          goto LABEL_424;
        return 3221225485LL;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v49 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v49 + 24) = 350LL;
        WdLogEvent5_WdError(v49);
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
        if ( P != v172 && P )
          ExFreePoolWithTag(P, 0);
        v48 = v148;
        if ( v148 != v149 && v148 )
          goto LABEL_424;
        return 3221225485LL;
      }
    }
  }
  v50 = *((_QWORD *)*v20 + 27);
  v51 = v161;
  *v161 = v50;
  v52 = 1;
  v53 = v154;
  if ( v154 > 1 )
  {
    v54 = (char *)v152 + 192;
    v55 = v51 + 1;
    v56 = a5 + 1;
    v160 = (_QWORD *)((char *)v153 - (char *)v51);
    while ( 1 )
    {
      v57 = *v56;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v54, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v60 = *((_DWORD *)v54 + 4);
          if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v58, &EventBlockThread, v59, v60);
        }
        ExAcquirePushLockSharedEx(v54, 0LL);
      }
      v61 = (v57 >> 6) & 0xFFFFFF;
      v62 = v57 >> 30;
      if ( v61 < *((_DWORD *)v152 + 58)
        && (v63 = *((_QWORD *)v152 + 27), v64 = *(_DWORD *)(v63 + 16LL * v61 + 8), v62 == ((v64 >> 4) & 3))
        && (v64 & 0x1000) == 0
        && (v64 & 0xF) != 0
        && (*(_BYTE *)(v63 + 16LL * v61 + 8) & 0xF) == 7 )
      {
        v65 = *(_QWORD *)(v63 + 16LL * v61);
      }
      else
      {
        v65 = 0LL;
      }
      ExReleasePushLockSharedEx(v54, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)((char *)v55 + (_QWORD)v160) = v65;
      if ( !v65 )
        break;
      v66 = (__int64)v153;
      if ( *(_QWORD *)(v65 + 16) != *((_QWORD *)*v153 + 2) )
        break;
      *v55 = *(_QWORD *)(v65 + 216);
      ++v52;
      ++v56;
      ++v55;
      if ( v52 >= v154 )
      {
        v13 = v158;
        v53 = v154;
        v51 = v161;
        goto LABEL_139;
      }
    }
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v50);
    v68 = v178;
    v67[3] = *v178;
    v67[4] = v68[v52];
    v67[5] = v52;
    v67[6] = -1073741811LL;
    WdLogEvent5_WdError(v67);
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    if ( P != v172 && P )
      ExFreePoolWithTag(P, 0);
    v48 = v148;
    if ( v148 != v149 && v148 )
      goto LABEL_424;
    return 3221225485LL;
  }
  v66 = (__int64)v153;
LABEL_139:
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v147 )
    {
      v69 = WdLogNewEntry5_WdError(v50);
      *(_QWORD *)(v69 + 24) = 391LL;
      WdLogEvent5_WdError(v69);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      v48 = v148;
      if ( v148 != v149 && v148 )
        goto LABEL_424;
      return 3221225485LL;
    }
    if ( !*v13 )
    {
      v70 = WdLogNewEntry5_WdError(v50);
      *(_QWORD *)(v70 + 24) = 396LL;
      WdLogEvent5_WdError(v70);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      v48 = v148;
      if ( v148 != v149 && v148 )
        goto LABEL_424;
      return 3221225485LL;
    }
    v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v66 + 16LL)
                                                                                                  + 16LL)
                                                                                      + 400LL)
                                                                          + 8LL)
                                                              + 720LL))(
            v53,
            v51,
            a3.Value);
    v75 = v71;
    if ( v71 < 0 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdError(v73);
      v76[3] = v152;
      v76[4] = *v13;
      v76[5] = v75;
      WdLogEvent5_WdError(v76);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      if ( v148 != v149 && v148 )
        ExFreePoolWithTag(v148, 0);
      return (unsigned int)v75;
    }
    if ( bTracingEnabled )
    {
      v177 = *v13;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qPR0qPR2qx((__int64)v153, v72, v74, v53, (__int64)v153, 1, (__int64)&v177, *(_BYTE *)&a3.0, 0);
    }
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    if ( P != v172 && P )
      ExFreePoolWithTag(P, 0);
    if ( v148 != v149 && v148 )
      ExFreePoolWithTag(v148, 0);
    return 0LL;
  }
  v77 = v147;
  if ( !v147 )
  {
    v78 = WdLogNewEntry5_WdError(v50);
    *(_QWORD *)(v78 + 24) = 429LL;
    WdLogEvent5_WdError(v78);
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    if ( P != v172 && P )
      ExFreePoolWithTag(P, 0);
    v48 = v148;
    if ( v148 != v149 && v148 )
      goto LABEL_424;
    return 3221225485LL;
  }
  v79 = 0LL;
  v155 = 0LL;
  v157 = 0;
  if ( v147 <= 2 )
  {
    v79 = (void **)v156;
    v155 = v156;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v147 < 8 )
    {
LABEL_205:
      if ( v79 != (void **)v156 && v79 )
        ExFreePoolWithTag(v79, 0);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      goto LABEL_210;
    }
    v79 = (void **)ExAllocatePoolWithTag(PagedPool, 8LL * v147, 0x4B677844u);
    v155 = v79;
  }
  v158 = v79;
  v157 = v77;
  if ( !v79 )
    goto LABEL_205;
  memset(v79, 0, 8 * v77);
  v79 = (void **)v155;
  v158 = (void *const *)v155;
  if ( !v155 )
    goto LABEL_205;
  v142 = 0;
  v81 = 0;
  v82 = 0;
  if ( !(_DWORD)v77 )
  {
LABEL_338:
    v115 = 0LL;
    v183 = 0LL;
    v116 = 0LL;
    v185 = 0;
    v117 = *((_DWORD *)*v79 + 38);
    if ( v117 != 5 )
    {
      v120 = &a7;
      if ( v117 != 3 )
        v120 = (char *)Src;
      goto LABEL_359;
    }
    if ( !a10 )
    {
      v120 = (char *)Src;
      goto LABEL_359;
    }
    if ( (unsigned int)v77 <= 4 )
    {
      v115 = v184;
      v183 = v184;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v77 < 8 )
      {
LABEL_346:
        v160 = v115;
        if ( !v115 )
        {
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v183);
          PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v155);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
          NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>::~NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>(&P);
          PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v148);
          return 3221225495LL;
        }
        v182 = v115;
        v118 = 8 * v116;
        v119 = Src;
        if ( (char *)Src + v118 < Src || (unsigned __int64)Src + v118 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v115, v119, v118);
        v120 = (char *)v183;
        Src = v183;
LABEL_359:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v180,
          v79,
          v77);
        if ( v181 )
        {
          if ( v180[0] )
          {
            v122 = WdLogNewEntry5_WdError(v121);
            *(_QWORD *)(v122 + 24) = 598LL;
            WdLogEvent5_WdError(v122);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v180);
            NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v183);
            if ( v155 != v156 && v155 )
              ExFreePoolWithTag(v155, 0);
            if ( v146 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
            if ( v143 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
            if ( P != v172 && P )
              ExFreePoolWithTag(P, 0);
            v48 = v148;
            if ( v148 != v149 && v148 )
              goto LABEL_424;
            return 3221225485LL;
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v180);
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v183);
          if ( v155 != v156 && v155 )
            ExFreePoolWithTag(v155, 0);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
LABEL_210:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
          v80 = P;
          if ( P == v172 || !P )
            goto LABEL_472;
          goto LABEL_471;
        }
        v174 = 0LL;
        v176 = 0;
        if ( (unsigned int)v77 <= 2 )
        {
          v123 = v175;
          v174 = v175;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v77 < 8 )
          {
            v123 = 0LL;
LABEL_387:
            v124 = 0;
            if ( (_DWORD)v77 )
            {
              v125 = v123;
              v126 = (char *)v79 - v123;
              while ( 1 )
              {
                v127 = *(_QWORD *)((char *)v125 + v126);
                v128 = (__int64)v153;
                v129 = *((_QWORD *)*v153 + 2);
                if ( (*(_DWORD *)(v127 + 156) & 4) != 0 )
                {
                  DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                           *(DXGSYNCOBJECTCA **)((char *)v125 + v126),
                                           *(struct ADAPTER_RENDER **)(v129 + 16));
                  v128 = (__int64)v153;
                }
                else
                {
                  DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v127 + 240);
                }
                if ( !DxgAdapterSyncObject )
                  break;
                if ( (*(_DWORD *)(v127 + 156) & 4) != 0 )
                  v131 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                       (DXGSYNCOBJECTCA *)v127,
                                       *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v128 + 16LL) + 16LL))
                         + 4);
                else
                  v131 = *(_QWORD *)(v127 + 272);
                *v125 = v131;
                if ( !v131 )
                {
                  v132 = WdLogNewEntry5_WdError(v129);
                  *(_QWORD *)(v132 + 24) = v127;
                  WdLogEvent5_WdError(v132);
                  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v174);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v180);
                  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v183);
                  if ( v155 != v156 && v155 )
                    ExFreePoolWithTag(v155, 0);
                  if ( v146 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
                  if ( v143 )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
                  if ( P != v172 && P )
                    ExFreePoolWithTag(P, 0);
                  v48 = v148;
                  if ( v148 == v149 || !v148 )
                    return 3221225485LL;
                  goto LABEL_424;
                }
                ++v124;
                ++v125;
                if ( v124 >= v147 )
                {
                  LOBYTE(v17) = 0;
                  LODWORD(v77) = v147;
                  goto LABEL_425;
                }
              }
              v133 = (_QWORD *)WdLogNewEntry5_WdError(v129);
              v133[3] = v152;
              v133[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v153 + 2) + 16LL) + 16LL);
              v133[5] = -1073741811LL;
              WdLogEvent5_WdError(v133);
              NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v174);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v180);
              NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v183);
              if ( v155 != v156 && v155 )
                ExFreePoolWithTag(v155, 0);
              if ( v146 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
              if ( v143 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
              if ( P != v172 && P )
                ExFreePoolWithTag(P, 0);
              v48 = v148;
              if ( v148 == v149 || !v148 )
                return 3221225485LL;
              goto LABEL_424;
            }
LABEL_425:
            v134 = (__int64)v153;
            v135 = v123;
            v136 = v154;
            v137 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _BYTE *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v153 + 2) + 16LL) + 400LL) + 8LL) + 544LL))(
                     v154,
                     v161,
                     (unsigned int)v77,
                     v135,
                     a3.0,
                     v120);
            v75 = v137;
            if ( v137 < 0 )
            {
              v141 = (_QWORD *)WdLogNewEntry5_WdError(v139);
              v141[3] = v152;
              v141[4] = *v159;
              v141[5] = 0LL;
              v141[6] = v75;
              WdLogEvent5_WdError(v141);
              NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v174);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v180);
              NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v183);
              if ( v155 != v156 && v155 )
                ExFreePoolWithTag(v155, 0);
              if ( v146 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
              if ( v143 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
              if ( P != v172 && P )
                ExFreePoolWithTag(P, 0);
              if ( v148 != v149 && v148 )
              {
                ExFreePoolWithTag(v148, 0);
                return (unsigned int)v75;
              }
              return (unsigned int)v75;
            }
            if ( v142 )
            {
              if ( bTracingEnabled )
              {
                if ( v120 )
                  v17 = *(_QWORD *)v120;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_qPR0qPR2qx(v139, v138, v140, v136, v134, v77, (__int64)v158, *(_BYTE *)&a3.0, v17);
              }
            }
            else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            {
              Template_qPR0qqPR3XR3(v139, v138, v140, v136, v134, *(_BYTE *)&a3.0, v77, (__int64)v158, (__int64)v120);
            }
            if ( v174 != v175 && v174 )
              ExFreePoolWithTag(v174, 0);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v180);
            if ( v183 != v184 && v183 )
              ExFreePoolWithTag(v183, 0);
            if ( v155 != v156 && v155 )
              ExFreePoolWithTag(v155, 0);
            if ( v146 )
            {
              v146 = 0;
              ExReleaseResourceLite(v145[48]);
              KeLeaveCriticalRegion();
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
            if ( v143 && v144 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v143 + 80));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
            if ( P != v172 && P )
              ExFreePoolWithTag(P, 0);
            if ( v148 != v149 && v148 )
            {
              ExFreePoolWithTag(v148, 0);
              return 0LL;
            }
            return 0LL;
          }
          v123 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v77, 0x4B677844u);
          v174 = v123;
        }
        v176 = v77;
        if ( v123 )
        {
          memset(v123, 0, 8LL * (unsigned int)v77);
          v123 = v174;
        }
        goto LABEL_387;
      }
      v115 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v77, 0x4B677844u);
      v183 = v115;
    }
    v116 = (unsigned int)v77;
    v185 = v77;
    if ( v115 )
    {
      memset(v115, 0, 8LL * (unsigned int)v77);
      v116 = v185;
      v115 = v183;
    }
    goto LABEL_346;
  }
  v83 = (char *)v152 + 192;
  v160 = v155;
  v84 = v159;
  while ( 1 )
  {
    v85 = *v84;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v83, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v88 = *((_DWORD *)v83 + 4);
        if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v86, &EventBlockThread, v87, v88);
      }
      ExAcquirePushLockSharedEx(v83, 0LL);
    }
    v89 = (v85 >> 6) & 0xFFFFFF;
    v90 = v85 >> 30;
    if ( v89 < *((_DWORD *)v152 + 58)
      && (v91 = *((_QWORD *)v152 + 27), v92 = *(_DWORD *)(v91 + 16LL * v89 + 8), v90 == ((v92 >> 4) & 3))
      && (v92 & 0x1000) == 0
      && (v92 & 0xF) != 0
      && (*(_BYTE *)(v91 + 16LL * v89 + 8) & 0xF) == 8 )
    {
      v93 = *(_QWORD *)(v91 + 16LL * v89);
    }
    else
    {
      v93 = 0LL;
    }
    ExReleasePushLockSharedEx(v83, 0LL);
    KeLeaveCriticalRegion();
    if ( v93 )
    {
      if ( *(_DWORD *)(v93 + 152) == 5 )
      {
        v95 = WdLogNewEntry5_WdAssertion(v94);
        *(_QWORD *)(v95 + 24) = 463LL;
        WdLogEvent5_WdAssertion(v95);
      }
      v142 = 1;
      if ( v81 )
      {
        v110 = WdLogNewEntry5_WdError(v94);
        *(_QWORD *)(v110 + 24) = v152;
        WdLogEvent5_WdError(v110);
        if ( v155 != v156 && v155 )
          ExFreePoolWithTag(v155, 0);
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
        if ( P != v172 && P )
          ExFreePoolWithTag(P, 0);
        v48 = v148;
        if ( v148 == v149 || !v148 )
          return 3221225485LL;
        goto LABEL_424;
      }
      if ( *(_DWORD *)(v93 + 152) == 3 && v147 != 1 )
      {
        v109 = (_QWORD *)WdLogNewEntry5_WdError(v94);
        v109[3] = v152;
        v109[4] = v159[v82];
        v109[5] = v147;
        v109[6] = -1073741811LL;
        WdLogEvent5_WdError(v109);
        if ( v155 != v156 && v155 )
          ExFreePoolWithTag(v155, 0);
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
        if ( P != v172 && P )
          ExFreePoolWithTag(P, 0);
        v48 = v148;
        if ( v148 == v149 || !v148 )
          return 3221225485LL;
        goto LABEL_424;
      }
      goto LABEL_256;
    }
    v96 = *v84;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v83, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v99 = *((_DWORD *)v83 + 4);
        if ( v99 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v97, &EventBlockThread, v98, v99);
      }
      ExAcquirePushLockSharedEx(v83, 0LL);
    }
    v100 = (v96 >> 6) & 0xFFFFFF;
    v101 = v96 >> 30;
    v102 = v152;
    if ( v100 < *((_DWORD *)v152 + 58)
      && (v103 = *((_QWORD *)v152 + 27), v104 = *(_DWORD *)(v103 + 16LL * v100 + 8), v101 == ((v104 >> 4) & 3))
      && (v104 & 0x1000) == 0
      && (v104 & 0xF) != 0
      && (*(_BYTE *)(v103 + 16LL * v100 + 8) & 0xF) == 0xB )
    {
      v105 = *(_QWORD *)(v103 + 16LL * v100);
    }
    else
    {
      v105 = 0LL;
    }
    ExReleasePushLockSharedEx(v83, 0LL);
    KeLeaveCriticalRegion();
    if ( !v105 )
      break;
    v81 = 1;
    if ( v142 )
    {
      v113 = WdLogNewEntry5_WdError(v106);
      *(_QWORD *)(v113 + 24) = v152;
      WdLogEvent5_WdError(v113);
      if ( v155 != v156 && v155 )
        ExFreePoolWithTag(v155, 0);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      v48 = v148;
      if ( v148 == v149 || !v148 )
        return 3221225485LL;
      goto LABEL_424;
    }
    if ( (*(_DWORD *)(v105 + 64) & 0x10) != 0 )
    {
      v112 = WdLogNewEntry5_WdError(v106);
      *(_QWORD *)(v112 + 24) = v159[v82];
      WdLogEvent5_WdError(v112);
      if ( v155 != v156 && v155 )
        ExFreePoolWithTag(v155, 0);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      if ( v148 != v149 && v148 )
        ExFreePoolWithTag(v148, 0);
      return 3221225506LL;
    }
    if ( *(_QWORD *)(v105 + 16) != *((_QWORD *)*v153 + 2) )
    {
      v111 = WdLogNewEntry5_WdError(v106);
      *(_QWORD *)(v111 + 24) = *((_QWORD *)*v153 + 2);
      *(_QWORD *)(v111 + 32) = *(_QWORD *)(v105 + 16);
      WdLogEvent5_WdError(v111);
      if ( v155 != v156 && v155 )
        ExFreePoolWithTag(v155, 0);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
      if ( P != v172 && P )
        ExFreePoolWithTag(P, 0);
      v48 = v148;
      if ( v148 == v149 || !v148 )
        return 3221225485LL;
      goto LABEL_424;
    }
    v93 = *(_QWORD *)(v105 + 32);
    if ( *(_DWORD *)(v93 + 152) != 5 )
    {
      v107 = WdLogNewEntry5_WdAssertion(v106);
      *(_QWORD *)(v107 + 24) = 534LL;
      WdLogEvent5_WdAssertion(v107);
    }
LABEL_256:
    v108 = v160;
    *v160 = v93;
    ++v82;
    ++v84;
    v160 = v108 + 1;
    if ( v82 >= v147 )
    {
      v79 = (void **)v158;
      LODWORD(v77) = v147;
      goto LABEL_338;
    }
  }
  v114 = (_QWORD *)WdLogNewEntry5_WdError(v106);
  v114[3] = v102;
  v114[4] = v159[v82];
  v114[5] = v82;
  v114[6] = -1073741811LL;
  WdLogEvent5_WdError(v114);
  if ( v155 != v156 && v155 )
    ExFreePoolWithTag(v155, 0);
  if ( v146 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
  if ( v143 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
  if ( P != v172 && P )
    ExFreePoolWithTag(P, 0);
  v48 = v148;
  if ( v148 == v149 || !v148 )
    return 3221225485LL;
LABEL_424:
  ExFreePoolWithTag(v48, 0);
  return 3221225485LL;
}
