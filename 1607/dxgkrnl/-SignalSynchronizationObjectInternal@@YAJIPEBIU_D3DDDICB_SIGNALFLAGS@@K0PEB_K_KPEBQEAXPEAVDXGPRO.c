/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C009FEF0
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C006E408 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C009F230 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00CE718 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00CE958 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017DDAC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C018E588 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ @ 0x1C00011AC (--1-$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0004428 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C000BD6C (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000BD84 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000BE10 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C001D2FC (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0026464 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_qPR0qPR2qx @ 0x1C00266C4 (Template_qPR0qPR2qx.c)
 *     Template_qPR0qqPR3XR3 @ 0x1C0026788 (Template_qPR0qqPR3XR3.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C00704B4 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C00C8C54 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01760D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
        bool a11)
{
  unsigned __int64 v11; // rdi
  unsigned __int64 v13; // r13
  void *const *v14; // r12
  __int64 v15; // rax
  __int64 v17; // r15
  _BYTE *v18; // rcx
  _BYTE *PoolWithTag; // r9
  _QWORD *v20; // rsi
  struct DXGCONTEXT **v21; // rdi
  char v22; // si
  __int64 v23; // rcx
  __int64 v24; // r9
  struct DXGCONTEXT *v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  struct _KEVENT *v32; // rsi
  unsigned __int8 v33; // si
  __int64 v34; // r8
  _QWORD *v35; // rax
  DXGGLOBAL *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rax
  PERESOURCE *v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  PVOID v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // edi
  _QWORD *v54; // r9
  const unsigned int *v55; // r11
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r10
  unsigned int v59; // r8d
  __int64 v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // r14d
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdi
  _QWORD *v71; // rax
  __int64 v72; // rax
  _BYTE *v73; // rsi
  PVOID v74; // rcx
  char v75; // r14
  unsigned int v76; // r12d
  DXGPUSHLOCK *v77; // rcx
  const unsigned int *v78; // rax
  unsigned int v79; // edi
  unsigned int v80; // ecx
  unsigned int v81; // edi
  __int64 v82; // r8
  unsigned int v83; // edx
  __int64 v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned int v87; // edi
  DXGPUSHLOCK *v88; // r14
  unsigned int v89; // ecx
  unsigned int v90; // edi
  __int64 v91; // r8
  unsigned int v92; // edx
  __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rax
  _QWORD *v96; // rcx
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  DXGPUSHLOCK *v103; // rcx
  unsigned __int64 v104; // r8
  int v105; // edx
  size_t v106; // r8
  void *v107; // rdx
  char *v108; // r13
  __int64 v109; // rcx
  __int64 v110; // rax
  unsigned int v111; // r10d
  _BYTE *v112; // r12
  unsigned int v113; // r14d
  _QWORD *v114; // rsi
  struct DXGPROCESS *v115; // rax
  __int64 v116; // rdi
  struct DXGCONTEXT **v117; // r8
  __int64 v118; // rcx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // r14
  _BYTE *v124; // r9
  int v125; // r12d
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  _QWORD *v130; // rax
  char v131; // [rsp+50h] [rbp-2A8h]
  PERESOURCE *v132; // [rsp+58h] [rbp-2A0h] BYREF
  char v133; // [rsp+60h] [rbp-298h]
  __int64 v134; // [rsp+68h] [rbp-290h] BYREF
  int v135; // [rsp+70h] [rbp-288h]
  unsigned int v136; // [rsp+78h] [rbp-280h]
  PVOID v137; // [rsp+80h] [rbp-278h] BYREF
  _BYTE v138[16]; // [rsp+88h] [rbp-270h] BYREF
  int v139; // [rsp+98h] [rbp-260h]
  struct DXGPROCESS *v140; // [rsp+A0h] [rbp-258h]
  _BYTE v141[16]; // [rsp+A8h] [rbp-250h] BYREF
  struct DXGCONTEXT **v142; // [rsp+B8h] [rbp-240h]
  unsigned int v143; // [rsp+C0h] [rbp-238h]
  PVOID v144; // [rsp+C8h] [rbp-230h] BYREF
  _BYTE v145[16]; // [rsp+D0h] [rbp-228h] BYREF
  int v146; // [rsp+E0h] [rbp-218h]
  _QWORD *v147; // [rsp+E8h] [rbp-210h]
  const unsigned int *v148; // [rsp+F0h] [rbp-208h]
  _BYTE *v149; // [rsp+F8h] [rbp-200h]
  DXGPUSHLOCK *v150; // [rsp+100h] [rbp-1F8h]
  const unsigned int *v151; // [rsp+108h] [rbp-1F0h]
  void *Src; // [rsp+110h] [rbp-1E8h]
  _QWORD *v153; // [rsp+118h] [rbp-1E0h]
  struct DXGPROCESS *v154; // [rsp+120h] [rbp-1D8h]
  char v155[8]; // [rsp+130h] [rbp-1C8h] BYREF
  _BYTE v156[16]; // [rsp+138h] [rbp-1C0h] BYREF
  DXGADAPTER *v157; // [rsp+148h] [rbp-1B0h]
  char v158; // [rsp+150h] [rbp-1A8h]
  _BYTE v159[16]; // [rsp+158h] [rbp-1A0h] BYREF
  __int64 v160; // [rsp+168h] [rbp-190h]
  __int64 v161; // [rsp+178h] [rbp-180h]
  char v162; // [rsp+180h] [rbp-178h]
  PVOID P; // [rsp+190h] [rbp-168h] BYREF
  _BYTE v164[128]; // [rsp+198h] [rbp-160h] BYREF
  int v165; // [rsp+218h] [rbp-E0h]
  PVOID v166; // [rsp+220h] [rbp-D8h] BYREF
  _BYTE v167[16]; // [rsp+228h] [rbp-D0h] BYREF
  unsigned int v168; // [rsp+238h] [rbp-C0h]
  void *v169; // [rsp+240h] [rbp-B8h] BYREF
  _QWORD v170[4]; // [rsp+248h] [rbp-B0h] BYREF
  char v171; // [rsp+268h] [rbp-90h]
  _BYTE v172[24]; // [rsp+270h] [rbp-88h] BYREF
  PVOID v173; // [rsp+288h] [rbp-70h] BYREF
  _BYTE v174[32]; // [rsp+290h] [rbp-68h] BYREF
  unsigned int v175; // [rsp+2B0h] [rbp-48h]

  v11 = a4;
  v143 = a4;
  v148 = a2;
  v13 = (unsigned int)a1;
  v136 = a1;
  Src = a6;
  v14 = a8;
  v140 = a9;
  v154 = a9;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 279LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  LOBYTE(v17) = 0;
  v18 = 0LL;
  v137 = 0LL;
  v139 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v165 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v164;
    P = v164;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v20 = 0LL;
      goto LABEL_11;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v11, 0x4B677844u);
    P = PoolWithTag;
    v18 = v137;
  }
  v165 = v11;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v11);
    v18 = v137;
    PoolWithTag = P;
  }
  v20 = PoolWithTag;
LABEL_11:
  v147 = v20;
  if ( (unsigned int)v11 <= 2 )
  {
    v18 = v138;
    v137 = v138;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v21 = 0LL;
      goto LABEL_19;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, 8 * v11, 0x4B677844u);
    v137 = v18;
    PoolWithTag = P;
  }
  v139 = v11;
  if ( v18 )
  {
    memset(v18, 0, 8 * v11);
    v18 = v137;
    PoolWithTag = P;
  }
  v21 = (struct DXGCONTEXT **)v18;
LABEL_19:
  v142 = v21;
  if ( !v20 || !v21 )
  {
    if ( PoolWithTag == v164 || !PoolWithTag )
      goto LABEL_452;
    v74 = PoolWithTag;
LABEL_450:
    ExFreePoolWithTag(v74, 0);
LABEL_451:
    v18 = v137;
LABEL_452:
    if ( v18 != v138 && v18 )
      ExFreePoolWithTag(v18, 0);
    return 3221225495LL;
  }
  v22 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141, *a5, v140, v21, a11);
  v25 = *v21;
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v26[3] = v140;
    v26[4] = *a5;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
    if ( P != v164 && P )
      ExFreePoolWithTag(P, 0);
    if ( v137 != v138 )
    {
      if ( v137 )
        ExFreePoolWithTag(v137, 0);
    }
    return 3221225485LL;
  }
  v27 = *((_QWORD *)v25 + 2);
  v134 = v27;
  v135 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v155, v27, 0, v24, v22);
  if ( !v22 )
  {
    if ( a10 || *(_DWORD *)(*((_QWORD *)*v142 + 2) + 304LL) == 2 )
    {
      v31 = *(_QWORD *)(v27 + 16);
      if ( *(_DWORD *)(v27 + 304) == 2 )
        v32 = (struct _KEVENT *)(v31 + 80);
      else
        v32 = (struct _KEVENT *)(v31 + 56);
      if ( !KeReadStateEvent(v32) )
        KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
        v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v34, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 80), 1u);
        if ( v33 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v135 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
      if ( P != v164 && P )
        ExFreePoolWithTag(P, 0);
      if ( v137 != v138 && v137 )
        ExFreePoolWithTag(v137, 0);
      return 2147483665LL;
    }
    if ( v158 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
      v35[3] = 275LL;
      v35[4] = 4LL;
      v35[5] = v156;
      v35[6] = 0LL;
      v35[7] = 0LL;
      WdLogEvent5_WdCriticalError(v35);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v157 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v157 + 2) )
        KeWaitForSingleObject((char *)v157 + 48, Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(v157);
    }
    v158 = 1;
    if ( *(_DWORD *)(v161 + 376) != 1 )
      goto LABEL_65;
    if ( v162 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v159);
      if ( *(_DWORD *)(v160 + 176) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v159);
LABEL_65:
        COREACCESS::Release((COREACCESS *)v156);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
        if ( P != v164 && P )
          ExFreePoolWithTag(P, 0);
        if ( v137 != v138 && v137 )
          ExFreePoolWithTag(v137, 0);
        return 3221226166LL;
      }
    }
  }
  v36 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v37 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v37 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v37);
    v36 = DXGGLOBAL::m_pGlobal;
  }
  v132 = (PERESOURCE *)v36;
  v133 = 0;
  if ( !v36 )
  {
    v38 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v38 + 24) = 1264LL;
    WdLogEvent5_WdAssertion(v38);
    v36 = (DXGGLOBAL *)v132;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v36 + 39)) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v42 + 24) = 1269LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( v133 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
    v43[3] = 275LL;
    v43[4] = 4LL;
    v43[5] = &v132;
    v43[6] = 0LL;
    v43[7] = 0LL;
    WdLogEvent5_WdCriticalError(v43);
  }
  v44 = v132;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v44[39], 1u);
  v133 = 1;
  v45 = (__int64)v142;
  v46 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v142 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v46 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v46 + 144)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v47);
    *(_QWORD *)(v48 + 24) = 352LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( a10 )
  {
    v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 16LL) + 16LL) + 16LL) + 192LL)
                    + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v49 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v49);
        v50[3] = *a5;
        v50[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v50[5] = -1073741811LL;
        WdLogEvent5_WdError(v50);
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
        if ( P != v164 && P )
          ExFreePoolWithTag(P, 0);
        v51 = v137;
        if ( v137 == v138 || !v137 )
          return 3221225485LL;
        goto LABEL_403;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v52 = WdLogNewEntry5_WdError(v49);
        *(_QWORD *)(v52 + 24) = 370LL;
        WdLogEvent5_WdError(v52);
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
        if ( P != v164 && P )
          ExFreePoolWithTag(P, 0);
        v51 = v137;
        if ( v137 == v138 || !v137 )
          return 3221225485LL;
        goto LABEL_403;
      }
    }
  }
  *v147 = *(_QWORD *)(*(_QWORD *)v45 + 216LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v172, (struct _KTHREAD **)v140);
  v53 = 1;
  if ( v143 > 1 )
  {
    v54 = v147 + 1;
    v55 = a5 + 1;
    v56 = v45 - (_QWORD)v147;
    while ( 1 )
    {
      v57 = (*v55 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v57 < *((_DWORD *)v140 + 56)
        && (v58 = *((_QWORD *)v140 + 26),
            v59 = *(_DWORD *)(v58 + 16LL * (unsigned int)v57 + 8),
            *v55 >> 30 == ((v59 >> 4) & 3))
        && (v59 & 0x1000) == 0
        && (v59 & 0xF) != 0
        && (*(_BYTE *)(v58 + 16LL * (unsigned int)v57 + 8) & 0xF) == 7 )
      {
        v60 = *(_QWORD *)(v58 + 16LL * (unsigned int)v57);
      }
      else
      {
        v60 = 0LL;
      }
      *(_QWORD *)((char *)v54 + v56) = v60;
      if ( !v60 || *(_QWORD *)(v60 + 16) != *((_QWORD *)*v142 + 2) )
        break;
      *v54 = *(_QWORD *)(v60 + 216);
      ++v53;
      ++v55;
      ++v54;
      if ( v53 >= v143 )
      {
        v45 = (__int64)v142;
        goto LABEL_132;
      }
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v57);
    v61[3] = *a5;
    v61[4] = a5[v53];
    v61[5] = v53;
    v61[6] = -1073741811LL;
    WdLogEvent5_WdError(v61);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172);
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
    if ( P != v164 && P )
      ExFreePoolWithTag(P, 0);
    v51 = v137;
    if ( v137 == v138 || !v137 )
      return 3221225485LL;
    goto LABEL_403;
  }
LABEL_132:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v172);
  if ( (*(_BYTE *)&a3.0 & 2) == 0 )
  {
    if ( !(_DWORD)v13 )
    {
      v72 = WdLogNewEntry5_WdError(v62);
      *(_QWORD *)(v72 + 24) = 452LL;
      WdLogEvent5_WdError(v72);
      if ( v133 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
      if ( P != v164 && P )
        ExFreePoolWithTag(P, 0);
      v51 = v137;
      if ( v137 == v138 || !v137 )
        return 3221225485LL;
      goto LABEL_403;
    }
    v73 = 0LL;
    v144 = 0LL;
    v146 = 0;
    if ( (unsigned int)v13 <= 2 )
    {
      v73 = v145;
      v144 = v145;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
      {
LABEL_198:
        if ( v73 != v145 && v73 )
          ExFreePoolWithTag(v73, 0);
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
LABEL_203:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
        v74 = P;
        if ( P == v164 || !P )
          goto LABEL_451;
        goto LABEL_450;
      }
      v73 = ExAllocatePoolWithTag(PagedPool, 8 * v13, 0x4B677844u);
      v144 = v73;
    }
    v149 = v73;
    v146 = v13;
    if ( !v73 )
      goto LABEL_198;
    memset(v73, 0, 8 * v13);
    v73 = v144;
    v149 = v144;
    if ( !v144 )
      goto LABEL_198;
    v131 = 0;
    v75 = 0;
    v76 = 0;
    v77 = (struct DXGPROCESS *)((char *)v140 + 184);
    v150 = (struct DXGPROCESS *)((char *)v140 + 184);
    v153 = v144;
    v78 = v148;
    v151 = v148;
    while ( 1 )
    {
      v79 = *v78;
      DXGPUSHLOCK::AcquireShared(v77);
      v80 = (v79 >> 6) & 0xFFFFFF;
      v81 = v79 >> 30;
      if ( v80 < *((_DWORD *)v140 + 56)
        && (v82 = *((_QWORD *)v140 + 26), v83 = *(_DWORD *)(v82 + 16LL * v80 + 8), v81 == ((v83 >> 4) & 3))
        && (v83 & 0x1000) == 0
        && (v83 & 0xF) != 0
        && (*(_BYTE *)(v82 + 16LL * v80 + 8) & 0xF) == 8 )
      {
        v84 = *(_QWORD *)(v82 + 16LL * v80);
      }
      else
      {
        v84 = 0LL;
      }
      ExReleasePushLockSharedEx(v150, 0LL);
      KeLeaveCriticalRegion();
      if ( v84 )
      {
        if ( *(_DWORD *)(v84 + 128) == 5 )
        {
          v86 = WdLogNewEntry5_WdAssertion(v85);
          *(_QWORD *)(v86 + 24) = 486LL;
          WdLogEvent5_WdAssertion(v86);
        }
        v131 = 1;
        if ( v75 )
        {
          v98 = WdLogNewEntry5_WdError(v85);
          *(_QWORD *)(v98 + 24) = v140;
          WdLogEvent5_WdError(v98);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          v51 = v137;
          if ( v137 == v138 || !v137 )
            return 3221225485LL;
          goto LABEL_403;
        }
        if ( *(_DWORD *)(v84 + 128) == 3 && (_DWORD)v13 != 1 )
        {
          v97 = (_QWORD *)WdLogNewEntry5_WdError(v85);
          v97[3] = v140;
          v97[4] = v148[v76];
          v97[5] = v13;
          v97[6] = -1073741811LL;
          WdLogEvent5_WdError(v97);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          v51 = v137;
          if ( v137 == v138 || !v137 )
            return 3221225485LL;
          goto LABEL_403;
        }
      }
      else
      {
        v87 = *v151;
        v88 = v150;
        DXGPUSHLOCK::AcquireShared(v150);
        v89 = (v87 >> 6) & 0xFFFFFF;
        v90 = v87 >> 30;
        if ( v89 < *((_DWORD *)v140 + 56)
          && (v91 = *((_QWORD *)v140 + 26), v92 = *(_DWORD *)(v91 + 16LL * v89 + 8), v90 == ((v92 >> 4) & 3))
          && (v92 & 0x1000) == 0
          && (v92 & 0xF) != 0
          && (*(_BYTE *)(v91 + 16LL * v89 + 8) & 0xF) == 0xB )
        {
          v93 = *(_QWORD *)(v91 + 16LL * v89);
        }
        else
        {
          v93 = 0LL;
        }
        ExReleasePushLockSharedEx(v88, 0LL);
        KeLeaveCriticalRegion();
        if ( !v93 )
        {
          v102 = (_QWORD *)WdLogNewEntry5_WdError(v94);
          v102[3] = v140;
          v102[4] = v148[v76];
          v102[5] = v76;
          v102[6] = -1073741811LL;
          WdLogEvent5_WdError(v102);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          v51 = v137;
          if ( v137 == v138 || !v137 )
            return 3221225485LL;
          goto LABEL_403;
        }
        v75 = 1;
        if ( v131 )
        {
          v101 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v101 + 24) = v140;
          WdLogEvent5_WdError(v101);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          v51 = v137;
          if ( v137 == v138 || !v137 )
            return 3221225485LL;
          goto LABEL_403;
        }
        if ( (*(_DWORD *)(v93 + 64) & 0x10) != 0 )
        {
          v100 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v100 + 24) = v148[v76];
          WdLogEvent5_WdError(v100);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          if ( v137 != v138 && v137 )
            ExFreePoolWithTag(v137, 0);
          return 3221225506LL;
        }
        if ( *(_QWORD *)(v93 + 16) != *((_QWORD *)*v142 + 2) )
        {
          v99 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v99 + 24) = *((_QWORD *)*v142 + 2);
          *(_QWORD *)(v99 + 32) = *(_QWORD *)(v93 + 16);
          WdLogEvent5_WdError(v99);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          v51 = v137;
          if ( v137 == v138 || !v137 )
            return 3221225485LL;
          goto LABEL_403;
        }
        v84 = *(_QWORD *)(v93 + 32);
        if ( *(_DWORD *)(v84 + 128) != 5 )
        {
          v95 = WdLogNewEntry5_WdAssertion(v94);
          *(_QWORD *)(v95 + 24) = 557LL;
          WdLogEvent5_WdAssertion(v95);
        }
      }
      v96 = v153;
      *v153 = v84;
      ++v76;
      v78 = ++v151;
      v153 = v96 + 1;
      if ( v76 >= (unsigned int)v13 )
        break;
      v77 = v150;
    }
    v103 = 0LL;
    v173 = 0LL;
    v104 = 0LL;
    v175 = 0;
    v105 = *(_DWORD *)(*(_QWORD *)v73 + 128LL);
    if ( v105 != 5 )
    {
      v108 = &a7;
      if ( v105 != 3 )
        v108 = 0LL;
      goto LABEL_338;
    }
    if ( !a10 )
    {
      v108 = (char *)Src;
      goto LABEL_338;
    }
    if ( (unsigned int)v13 <= 4 )
    {
      v103 = (DXGPUSHLOCK *)v174;
      v173 = v174;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
      {
LABEL_325:
        v153 = v103;
        if ( !v103 )
        {
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v173);
          PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v144);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>::~NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>(&P);
          PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v137);
          return 3221225495LL;
        }
        v150 = v103;
        v106 = 8 * v104;
        v107 = Src;
        if ( (char *)Src + v106 < Src || (unsigned __int64)Src + v106 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v103, v107, v106);
        v108 = (char *)v173;
        Src = v173;
LABEL_338:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v170,
          v73,
          v136);
        if ( v171 )
        {
          if ( !v170[0] )
          {
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v170);
            NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v173);
            if ( v144 != v145 && v144 )
              ExFreePoolWithTag(v144, 0);
            if ( v133 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
            goto LABEL_203;
          }
          v110 = WdLogNewEntry5_WdError(v109);
          *(_QWORD *)(v110 + 24) = 625LL;
          WdLogEvent5_WdError(v110);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v170);
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v173);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
          if ( P != v164 && P )
            ExFreePoolWithTag(P, 0);
          v51 = v137;
          if ( v137 == v138 || !v137 )
            return 3221225485LL;
LABEL_403:
          ExFreePoolWithTag(v51, 0);
          return 3221225485LL;
        }
        v166 = 0LL;
        v168 = 0;
        v111 = v136;
        if ( v136 <= 2 )
        {
          v112 = v167;
          v166 = v167;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v136 < 8 )
          {
            v112 = 0LL;
LABEL_366:
            v113 = 0;
            if ( v111 )
            {
              v114 = v112;
              v115 = (struct DXGPROCESS *)(v149 - v112);
              v154 = (struct DXGPROCESS *)(v149 - v112);
              while ( 1 )
              {
                v116 = *(_QWORD *)((char *)v114 + (_QWORD)v115);
                v117 = v142;
                v118 = *((_QWORD *)*v142 + 2);
                if ( (*(_DWORD *)(v116 + 132) & 4) != 0 )
                {
                  DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                           (DXGSYNCOBJECTCA *)v116,
                                           *(struct ADAPTER_RENDER **)(v118 + 16));
                  v111 = v136;
                  v117 = v142;
                }
                else
                {
                  DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v116 + 216);
                }
                if ( !DxgAdapterSyncObject )
                  break;
                if ( (*(_DWORD *)(v116 + 132) & 4) != 0 )
                  v120 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                       (DXGSYNCOBJECTCA *)v116,
                                       *(struct ADAPTER_RENDER **)(*((_QWORD *)*v117 + 2) + 16LL))
                         + 4);
                else
                  v120 = *(_QWORD *)(v116 + 248);
                *v114 = v120;
                if ( !v120 )
                {
                  v121 = WdLogNewEntry5_WdError(v118);
                  *(_QWORD *)(v121 + 24) = v116;
                  WdLogEvent5_WdError(v121);
                  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v166);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v170);
                  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v173);
                  if ( v144 != v145 && v144 )
                    ExFreePoolWithTag(v144, 0);
                  if ( v133 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
                  if ( v134 )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
                  if ( P != v164 && P )
                    ExFreePoolWithTag(P, 0);
                  v51 = v137;
                  if ( v137 == v138 || !v137 )
                    return 3221225485LL;
                  goto LABEL_403;
                }
                ++v113;
                ++v114;
                v115 = v154;
                if ( v113 >= v111 )
                {
                  v73 = v149;
                  goto LABEL_404;
                }
              }
              v122 = (_QWORD *)WdLogNewEntry5_WdError(v118);
              v122[3] = v140;
              v122[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v142 + 2) + 16LL) + 16LL);
              v122[5] = -1073741811LL;
              WdLogEvent5_WdError(v122);
              NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v166);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v170);
              NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v173);
              if ( v144 != v145 && v144 )
                ExFreePoolWithTag(v144, 0);
              if ( v133 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
              if ( v134 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
              if ( P != v164 && P )
                ExFreePoolWithTag(P, 0);
              v51 = v137;
              if ( v137 == v138 || !v137 )
                return 3221225485LL;
              goto LABEL_403;
            }
LABEL_404:
            v123 = (__int64)v142;
            v124 = v112;
            v125 = v143;
            v126 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _BYTE *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v142 + 2) + 16LL) + 376LL) + 8LL) + 544LL))(
                     v143,
                     v147,
                     v111,
                     v124,
                     a3.0,
                     v108);
            v70 = v126;
            if ( v126 < 0 )
            {
              v130 = (_QWORD *)WdLogNewEntry5_WdError(v128);
              v130[3] = v140;
              v130[4] = *v148;
              v130[5] = 0LL;
              v130[6] = v70;
              WdLogEvent5_WdError(v130);
              NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v166);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v170);
              NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v173);
              if ( v144 != v145 && v144 )
                ExFreePoolWithTag(v144, 0);
              if ( v133 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
              if ( v134 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
              if ( P != v164 && P )
                ExFreePoolWithTag(P, 0);
              if ( v137 != v138 && v137 )
              {
                ExFreePoolWithTag(v137, 0);
                return (unsigned int)v70;
              }
              return (unsigned int)v70;
            }
            if ( v131 )
            {
              if ( bTracingEnabled )
              {
                if ( v108 )
                  v17 = *(_QWORD *)v108;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_qPR0qPR2qx(v128, v127, v129, v125, v123, v136, (__int64)v73, *(_BYTE *)&a3.0, v17);
              }
            }
            else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              Template_qPR0qqPR3XR3(v128, v127, v129, v125, v123, *(_BYTE *)&a3.0, v136, (__int64)v73, (__int64)v108);
            }
            if ( v166 != v167 && v166 )
              ExFreePoolWithTag(v166, 0);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v170);
            if ( v173 != v174 && v173 )
              ExFreePoolWithTag(v173, 0);
            if ( v144 != v145 && v144 )
              ExFreePoolWithTag(v144, 0);
            if ( v133 )
            {
              v133 = 0;
              ExReleaseResourceLite(v132[39]);
              KeLeaveCriticalRegion();
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
            if ( v134 && v135 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v134 + 80));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
            if ( P != v164 && P )
              ExFreePoolWithTag(P, 0);
            if ( v137 != v138 && v137 )
            {
              ExFreePoolWithTag(v137, 0);
              return 0LL;
            }
            return 0LL;
          }
          v112 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v136, 0x4B677844u);
          v166 = v112;
          v111 = v136;
        }
        v168 = v111;
        if ( v112 )
        {
          memset(v112, 0, 8LL * v111);
          v112 = v166;
          v111 = v136;
        }
        goto LABEL_366;
      }
      v103 = (DXGPUSHLOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v13, 0x4B677844u);
      v173 = v103;
    }
    v104 = v13;
    v175 = v13;
    if ( v103 )
    {
      memset(v103, 0, 8 * v13);
      v104 = v175;
      v103 = (DXGPUSHLOCK *)v173;
    }
    goto LABEL_325;
  }
  if ( (_DWORD)v13 )
  {
    v63 = WdLogNewEntry5_WdError(v62);
    *(_QWORD *)(v63 + 24) = 414LL;
    WdLogEvent5_WdError(v63);
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
    if ( P != v164 && P )
      ExFreePoolWithTag(P, 0);
    v51 = v137;
    if ( v137 == v138 || !v137 )
      return 3221225485LL;
    goto LABEL_403;
  }
  if ( !*v14 )
  {
    v64 = WdLogNewEntry5_WdError(v62);
    *(_QWORD *)(v64 + 24) = 419LL;
    WdLogEvent5_WdError(v64);
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
    if ( P != v164 && P )
      ExFreePoolWithTag(P, 0);
    v51 = v137;
    if ( v137 == v138 || !v137 )
      return 3221225485LL;
    goto LABEL_403;
  }
  v65 = v143;
  v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 16LL)
                                                                                                + 16LL)
                                                                                    + 376LL)
                                                                        + 8LL)
                                                            + 720LL))(
          v143,
          v147,
          a3.Value);
  v70 = v66;
  if ( v66 >= 0 )
  {
    if ( bTracingEnabled )
    {
      v169 = *v14;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qPR0qPR2qx(v68, v67, v69, v65, v45, 1, (__int64)&v169, *(_BYTE *)&a3.0, 0);
    }
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
    if ( P != v164 && P )
      ExFreePoolWithTag(P, 0);
    if ( v137 != v138 && v137 )
      ExFreePoolWithTag(v137, 0);
    return 0LL;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdError(v68);
  v71[3] = v140;
  v71[4] = *v14;
  v71[5] = v70;
  WdLogEvent5_WdError(v71);
  if ( v133 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
  if ( v134 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
  if ( P != v164 && P )
    ExFreePoolWithTag(P, 0);
  if ( v137 != v138 && v137 )
    ExFreePoolWithTag(v137, 0);
  return (unsigned int)v70;
}
