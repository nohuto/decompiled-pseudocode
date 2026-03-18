/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005A310 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00879B0 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00A7BD0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C014C184 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0154D9C (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01621D8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ @ 0x1C00010BC (--1-$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00098F4 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000F934 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000F980 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C001763C (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00176B0 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FD44 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_qPR0qPR2qx @ 0x1C001FFA4 (Template_qPR0qPR2qx.c)
 *     Template_qPR0qqPR3XR3 @ 0x1C0020068 (Template_qPR0qqPR3XR3.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C005BC8C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C014C920 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  unsigned int v13; // r13d
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
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rsi
  struct _KEVENT *v33; // rsi
  unsigned __int8 v34; // si
  __int64 v35; // r8
  _QWORD *v36; // rax
  struct DXGGLOBAL *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  PERESOURCE *v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  PVOID v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // edi
  _QWORD *v59; // r9
  const unsigned int *v60; // r11
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // r10
  unsigned int v64; // r8d
  __int64 v65; // r8
  _QWORD *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // r14d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdi
  _QWORD *v76; // rax
  __int64 v77; // rax
  _BYTE *v78; // r9
  PVOID v79; // rcx
  char v80; // si
  unsigned int v81; // r14d
  DXGPUSHLOCK *v82; // r13
  const unsigned int *v83; // r12
  unsigned int v84; // edi
  unsigned int v85; // ecx
  unsigned int v86; // edi
  __int64 v87; // r8
  unsigned int v88; // edx
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  unsigned int v95; // edi
  unsigned int v96; // ecx
  unsigned int v97; // edi
  struct DXGPROCESS *v98; // rsi
  __int64 v99; // r8
  unsigned int v100; // edx
  __int64 v101; // rdi
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rax
  _QWORD *v107; // rax
  unsigned int v108; // edi
  _QWORD *v109; // rax
  __int64 v110; // rax
  PVOID v111; // r9
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  int v116; // ecx
  PVOID v117; // rcx
  size_t v118; // r8
  void *v119; // rdx
  char *v120; // r13
  __int64 v121; // rcx
  char v122; // r15
  __int64 v123; // rax
  _BYTE *v124; // r12
  unsigned int v125; // r14d
  _QWORD *v126; // rsi
  struct DXGPROCESS *v127; // rax
  __int64 v128; // rdi
  struct DXGCONTEXT **v129; // r8
  __int64 v130; // rcx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rsi
  int v136; // r14d
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  _QWORD *v141; // rax
  char v142; // [rsp+50h] [rbp-298h]
  __int64 v143; // [rsp+58h] [rbp-290h] BYREF
  int v144; // [rsp+60h] [rbp-288h]
  PERESOURCE *v145; // [rsp+68h] [rbp-280h] BYREF
  char v146; // [rsp+70h] [rbp-278h]
  unsigned int v147; // [rsp+78h] [rbp-270h]
  PVOID v148; // [rsp+80h] [rbp-268h] BYREF
  _BYTE v149[16]; // [rsp+88h] [rbp-260h] BYREF
  int v150; // [rsp+98h] [rbp-250h]
  struct DXGPROCESS *v151; // [rsp+A0h] [rbp-248h]
  _BYTE v152[16]; // [rsp+A8h] [rbp-240h] BYREF
  struct DXGCONTEXT **v153; // [rsp+B8h] [rbp-230h]
  unsigned int v154; // [rsp+C0h] [rbp-228h]
  PVOID v155; // [rsp+C8h] [rbp-220h]
  _QWORD *v156; // [rsp+D0h] [rbp-218h]
  const unsigned int *v157; // [rsp+D8h] [rbp-210h]
  PVOID v158; // [rsp+E0h] [rbp-208h] BYREF
  _BYTE v159[16]; // [rsp+E8h] [rbp-200h] BYREF
  unsigned int v160; // [rsp+F8h] [rbp-1F0h]
  char v161[8]; // [rsp+100h] [rbp-1E8h] BYREF
  char v162[8]; // [rsp+108h] [rbp-1E0h] BYREF
  DXGADAPTER *v163; // [rsp+110h] [rbp-1D8h]
  char v164; // [rsp+118h] [rbp-1D0h]
  char v165[8]; // [rsp+120h] [rbp-1C8h] BYREF
  __int64 v166; // [rsp+128h] [rbp-1C0h]
  __int64 v167; // [rsp+138h] [rbp-1B0h]
  char v168; // [rsp+140h] [rbp-1A8h]
  struct DXGPROCESS *v169; // [rsp+150h] [rbp-198h]
  _QWORD *v170; // [rsp+158h] [rbp-190h]
  void *Src; // [rsp+160h] [rbp-188h]
  PVOID P; // [rsp+170h] [rbp-178h] BYREF
  _BYTE v173[128]; // [rsp+178h] [rbp-170h] BYREF
  int v174; // [rsp+1F8h] [rbp-F0h]
  PVOID v175; // [rsp+200h] [rbp-E8h] BYREF
  _BYTE v176[16]; // [rsp+208h] [rbp-E0h] BYREF
  unsigned int v177; // [rsp+218h] [rbp-D0h]
  void *v178; // [rsp+220h] [rbp-C8h] BYREF
  _QWORD v179[4]; // [rsp+228h] [rbp-C0h] BYREF
  char v180; // [rsp+248h] [rbp-A0h]
  PVOID v181; // [rsp+250h] [rbp-98h]
  _BYTE v182[24]; // [rsp+258h] [rbp-90h] BYREF
  PVOID v183; // [rsp+270h] [rbp-78h] BYREF
  char v184; // [rsp+278h] [rbp-70h] BYREF
  unsigned int v185; // [rsp+298h] [rbp-50h]

  v11 = a4;
  v154 = a4;
  v157 = a2;
  v13 = a1;
  v147 = a1;
  Src = a6;
  v14 = a8;
  v151 = a9;
  v169 = a9;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 286LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  LOBYTE(v17) = 0;
  v18 = 0LL;
  v148 = 0LL;
  v150 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v174 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v173;
    P = v173;
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
    v18 = v148;
  }
  v174 = v11;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v11);
    v18 = v148;
    PoolWithTag = P;
  }
  v20 = PoolWithTag;
LABEL_11:
  v156 = v20;
  if ( (unsigned int)v11 <= 2 )
  {
    v18 = v149;
    v148 = v149;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v21 = 0LL;
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
  v21 = (struct DXGCONTEXT **)v18;
LABEL_19:
  v153 = v21;
  if ( !v20 || !v21 )
  {
    if ( PoolWithTag == v173 || !PoolWithTag )
      goto LABEL_411;
    v79 = PoolWithTag;
LABEL_409:
    ExFreePoolWithTag(v79, 0);
LABEL_410:
    v18 = v148;
LABEL_411:
    if ( v18 != v149 && v18 )
      ExFreePoolWithTag(v18, 0);
    return 3221225495LL;
  }
  v22 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152, *a5, v151, v21, a11);
  v25 = *v21;
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v26[3] = v151;
    v26[4] = *a5;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    if ( v148 != v149 )
    {
      if ( v148 )
        ExFreePoolWithTag(v148, 0);
    }
    return 3221225485LL;
  }
  v27 = *((_QWORD *)v25 + 2);
  v143 = v27;
  v144 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, v27, 0, v24, v22);
  if ( !v22 )
  {
    if ( a10 || *(_DWORD *)(*((_QWORD *)*v153 + 2) + 280LL) == 2 )
    {
      v32 = *(_QWORD *)(v27 + 16);
      if ( *(_DWORD *)(v27 + 280) == 2 )
        v33 = (struct _KEVENT *)(v32 + 80);
      else
        v33 = (struct _KEVENT *)(v32 + 56);
      if ( !KeReadStateEvent(v33) )
        KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 80LL));
        v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v35, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 80), 1u);
        if ( v34 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v144 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
      if ( P != v173 && P )
        ExFreePoolWithTag(P, 0);
      if ( v148 != v149 && v148 )
        ExFreePoolWithTag(v148, 0);
      return 2147483665LL;
    }
    if ( v164 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v28, v29);
      v36[3] = 275LL;
      v36[4] = 4LL;
      v36[5] = v162;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v163 + 18) )
    {
      if ( !KeReadStateEvent((PRKEVENT)((char *)v163 + 32)) )
        KeWaitForSingleObject((char *)v163 + 32, Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(v163);
    }
    v164 = 1;
    if ( *(_DWORD *)(v167 + 352) != 1 )
      goto LABEL_65;
    if ( v168 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v165);
      if ( *(_DWORD *)(v166 + 160) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v165);
LABEL_65:
        COREACCESS::Release((COREACCESS *)v162);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
        if ( P != v173 && P )
          ExFreePoolWithTag(P, 0);
        if ( v148 != v149 && v148 )
          ExFreePoolWithTag(v148, 0);
        return 3221226166LL;
      }
    }
  }
  v37 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v38 = WdLogNewEntry5_WdAssertion(0LL, v28, v29, v30);
    *(_QWORD *)(v38 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v38);
    v37 = DXGGLOBAL::m_pGlobal;
  }
  v145 = (PERESOURCE *)v37;
  v146 = 0;
  if ( !v37 )
  {
    v39 = WdLogNewEntry5_WdAssertion(0LL, v28, v29, v30);
    *(_QWORD *)(v39 + 24) = 1277LL;
    WdLogEvent5_WdAssertion(v39);
    v37 = (struct DXGGLOBAL *)v145;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v37 + 39)) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
    *(_QWORD *)(v44 + 24) = 1282LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v146 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40, v42);
    v45[3] = 275LL;
    v45[4] = 4LL;
    v45[5] = &v145;
    v45[6] = 0LL;
    v45[7] = 0LL;
    WdLogEvent5_WdCriticalError(v45);
  }
  v46 = v145;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v46[39], 1u);
  v146 = 1;
  v47 = (__int64)v153;
  v48 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v153 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v48 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v48 + 128)) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
    *(_QWORD *)(v53 + 24) = 359LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( a10 )
  {
    v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 16LL) + 16LL) + 16LL) + 176LL)
                    + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v54 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v54);
        v55[3] = *a5;
        v55[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v55[5] = -1073741811LL;
        WdLogEvent5_WdError(v55);
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
        if ( P != v173 && P )
          ExFreePoolWithTag(P, 0);
        v56 = v148;
        if ( v148 == v149 || !v148 )
          return 3221225485LL;
        goto LABEL_365;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v57 = WdLogNewEntry5_WdError(v54);
        *(_QWORD *)(v57 + 24) = 377LL;
        WdLogEvent5_WdError(v57);
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        if ( v143 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
        if ( P != v173 && P )
          ExFreePoolWithTag(P, 0);
        v56 = v148;
        if ( v148 == v149 || !v148 )
          return 3221225485LL;
        goto LABEL_365;
      }
    }
  }
  *v156 = *(_QWORD *)(*(_QWORD *)v47 + 216LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182, v151);
  v58 = 1;
  if ( v154 > 1 )
  {
    v59 = v156 + 1;
    v60 = a5 + 1;
    v61 = v47 - (_QWORD)v156;
    while ( 1 )
    {
      v62 = (*v60 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v62 < *((_DWORD *)v151 + 58)
        && (v63 = *((_QWORD *)v151 + 27),
            v64 = *(_DWORD *)(v63 + 16LL * (unsigned int)v62 + 8),
            *v60 >> 30 == ((v64 >> 4) & 3))
        && (v64 & 0x1000) == 0
        && (v64 & 0xF) != 0
        && (*(_BYTE *)(v63 + 16LL * (unsigned int)v62 + 8) & 0xF) == 7 )
      {
        v65 = *(_QWORD *)(v63 + 16LL * (unsigned int)v62);
      }
      else
      {
        v65 = 0LL;
      }
      *(_QWORD *)((char *)v59 + v61) = v65;
      if ( !v65 || *(_QWORD *)(v65 + 16) != *((_QWORD *)*v153 + 2) )
        break;
      *v59 = *(_QWORD *)(v65 + 216);
      ++v58;
      ++v60;
      ++v59;
      if ( v58 >= v154 )
      {
        v47 = (__int64)v153;
        goto LABEL_132;
      }
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v66[3] = *a5;
    v66[4] = a5[v58];
    v66[5] = v58;
    v66[6] = -1073741811LL;
    WdLogEvent5_WdError(v66);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182);
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    v56 = v148;
    if ( v148 == v149 || !v148 )
      return 3221225485LL;
    goto LABEL_365;
  }
LABEL_132:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182);
  if ( (*(_BYTE *)&a3.0 & 2) == 0 )
  {
    if ( !v13 )
    {
      v77 = WdLogNewEntry5_WdError(v67);
      *(_QWORD *)(v77 + 24) = 459LL;
      WdLogEvent5_WdError(v77);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
      if ( P != v173 && P )
        ExFreePoolWithTag(P, 0);
      v56 = v148;
      if ( v148 == v149 || !v148 )
        return 3221225485LL;
      goto LABEL_365;
    }
    v158 = 0LL;
    v160 = 0;
    if ( v13 <= 2 )
    {
      v78 = v159;
      v158 = v159;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
        goto LABEL_198;
      v78 = ExAllocatePoolWithTag(PagedPool, 8LL * v13, 0x4B677844u);
      v158 = v78;
    }
    v155 = v78;
    v160 = v13;
    if ( !v78 || (memset(v78, 0, 8LL * v13), (v155 = v158) == 0LL) )
    {
LABEL_198:
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
LABEL_200:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
      v79 = P;
      if ( P == v173 || !P )
        goto LABEL_410;
      goto LABEL_409;
    }
    v142 = 0;
    v80 = 0;
    v81 = 0;
    v82 = (struct DXGPROCESS *)((char *)v151 + 192);
    v170 = v158;
    v83 = v157;
    do
    {
      v84 = *v83;
      DXGPUSHLOCK::AcquireShared(v82);
      v85 = (v84 >> 6) & 0xFFFFFF;
      v86 = v84 >> 30;
      if ( v85 < *((_DWORD *)v151 + 58)
        && (v87 = *((_QWORD *)v151 + 27), v88 = *(_DWORD *)(v87 + 16LL * v85 + 8), v86 == ((v88 >> 4) & 3))
        && (v88 & 0x1000) == 0
        && (v88 & 0xF) != 0
        && (*(_BYTE *)(v87 + 16LL * v85 + 8) & 0xF) == 8 )
      {
        v89 = *(_QWORD *)(v87 + 16LL * v85);
      }
      else
      {
        v89 = 0LL;
      }
      ExReleasePushLockSharedEx(v82, 0LL);
      KeLeaveCriticalRegion();
      if ( v89 )
      {
        if ( *(_DWORD *)(v89 + 128) == 5 )
        {
          v94 = WdLogNewEntry5_WdAssertion(v91, v90, v92, v93);
          *(_QWORD *)(v94 + 24) = 493LL;
          WdLogEvent5_WdAssertion(v94);
        }
        v142 = 1;
        if ( v80 )
        {
          v110 = WdLogNewEntry5_WdError(v91);
          *(_QWORD *)(v110 + 24) = v151;
          WdLogEvent5_WdError(v110);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          v56 = v148;
          if ( v148 == v149 || !v148 )
            return 3221225485LL;
          goto LABEL_365;
        }
        if ( *(_DWORD *)(v89 + 128) == 3 && v147 != 1 )
        {
          v109 = (_QWORD *)WdLogNewEntry5_WdError(v91);
          v109[3] = v151;
          v109[4] = v157[v81];
          v109[5] = v147;
          v109[6] = -1073741811LL;
          WdLogEvent5_WdError(v109);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          v56 = v148;
          if ( v148 == v149 || !v148 )
            return 3221225485LL;
          goto LABEL_365;
        }
      }
      else
      {
        v95 = *v83;
        DXGPUSHLOCK::AcquireShared(v82);
        v96 = (v95 >> 6) & 0xFFFFFF;
        v97 = v95 >> 30;
        v98 = v151;
        if ( v96 < *((_DWORD *)v151 + 58)
          && (v99 = *((_QWORD *)v151 + 27), v100 = *(_DWORD *)(v99 + 16LL * v96 + 8), v97 == ((v100 >> 4) & 3))
          && (v100 & 0x1000) == 0
          && (v100 & 0xF) != 0
          && (*(_BYTE *)(v99 + 16LL * v96 + 8) & 0xF) == 0xB )
        {
          v101 = *(_QWORD *)(v99 + 16LL * v96);
        }
        else
        {
          v101 = 0LL;
        }
        ExReleasePushLockSharedEx(v82, 0LL);
        KeLeaveCriticalRegion();
        if ( !v101 )
        {
          v115 = (_QWORD *)WdLogNewEntry5_WdError(v102);
          v115[3] = v98;
          v115[4] = v157[v81];
          v115[5] = v81;
          v115[6] = -1073741811LL;
          WdLogEvent5_WdError(v115);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          v56 = v148;
          if ( v148 == v149 || !v148 )
            return 3221225485LL;
          goto LABEL_365;
        }
        v80 = 1;
        if ( v142 )
        {
          v114 = WdLogNewEntry5_WdError(v102);
          *(_QWORD *)(v114 + 24) = v151;
          WdLogEvent5_WdError(v114);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          v56 = v148;
          if ( v148 == v149 || !v148 )
            return 3221225485LL;
          goto LABEL_365;
        }
        if ( (*(_DWORD *)(v101 + 64) & 0x10) != 0 )
        {
          v113 = WdLogNewEntry5_WdError(v102);
          *(_QWORD *)(v113 + 24) = v157[v81];
          WdLogEvent5_WdError(v113);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          if ( v148 != v149 && v148 )
            ExFreePoolWithTag(v148, 0);
          return 3221225506LL;
        }
        v105 = *(_QWORD *)(v101 + 16);
        if ( v105 != *((_QWORD *)*v153 + 2) )
        {
          v112 = WdLogNewEntry5_WdError(v102);
          *(_QWORD *)(v112 + 24) = *((_QWORD *)*v153 + 2);
          *(_QWORD *)(v112 + 32) = *(_QWORD *)(v101 + 16);
          WdLogEvent5_WdError(v112);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          v56 = v148;
          if ( v148 == v149 || !v148 )
            return 3221225485LL;
          goto LABEL_365;
        }
        v89 = *(_QWORD *)(v101 + 32);
        if ( *(_DWORD *)(v89 + 128) != 5 )
        {
          v106 = WdLogNewEntry5_WdAssertion(v102, v105, v103, v104);
          *(_QWORD *)(v106 + 24) = 564LL;
          WdLogEvent5_WdAssertion(v106);
        }
      }
      v107 = v170;
      *v170 = v89;
      ++v81;
      ++v83;
      v170 = v107 + 1;
      v108 = v147;
    }
    while ( v81 < v147 );
    v111 = v155;
    v183 = 0LL;
    v185 = 0;
    v116 = *(_DWORD *)(*(_QWORD *)v155 + 128LL);
    if ( v116 == 5 )
    {
      if ( a10 )
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v183, v147);
        v117 = v183;
        v170 = v183;
        if ( !v183 )
        {
          NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v183);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>::~NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>(&P);
          PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v148);
          return 3221225495LL;
        }
        v181 = v183;
        v118 = 8LL * v185;
        v119 = Src;
        if ( (char *)Src + v118 < Src || (unsigned __int64)Src + v118 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v117, v119, v118);
        v120 = (char *)v183;
        Src = v183;
        v111 = v155;
      }
      else
      {
        v120 = (char *)Src;
      }
    }
    else
    {
      v120 = &a7;
      if ( v116 != 3 )
        v120 = 0LL;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v179,
      v111,
      v108);
    if ( v180 )
    {
      v122 = v179[0] != 0LL;
      if ( !v179[0] )
      {
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v179);
        NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v183);
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
        if ( v146 != v122 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        goto LABEL_200;
      }
      v123 = WdLogNewEntry5_WdError(v121);
      *(_QWORD *)(v123 + 24) = 632LL;
      WdLogEvent5_WdError(v123);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v179);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v183);
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      if ( v143 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
      if ( P != v173 && P )
        ExFreePoolWithTag(P, 0);
      v56 = v148;
      if ( v148 == v149 || !v148 )
        return 3221225485LL;
LABEL_365:
      ExFreePoolWithTag(v56, 0);
      return 3221225485LL;
    }
    v175 = 0LL;
    v177 = 0;
    if ( v108 <= 2 )
    {
      v124 = v176;
      v175 = v176;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v108 < 8 )
      {
        v124 = 0LL;
LABEL_334:
        v125 = 0;
        if ( v108 )
        {
          v126 = v124;
          v127 = (struct DXGPROCESS *)((_BYTE *)v155 - v124);
          v169 = (struct DXGPROCESS *)((_BYTE *)v155 - v124);
          while ( 1 )
          {
            v128 = *(_QWORD *)((char *)v126 + (_QWORD)v127);
            v129 = v153;
            v130 = *((_QWORD *)*v153 + 2);
            if ( (*(_DWORD *)(v128 + 132) & 4) != 0 )
            {
              DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                       (DXGSYNCOBJECTCA *)v128,
                                       *(struct ADAPTER_RENDER **)(v130 + 16));
              v129 = v153;
            }
            else
            {
              DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v128 + 216);
            }
            if ( !DxgAdapterSyncObject )
              break;
            if ( (*(_DWORD *)(v128 + 132) & 4) != 0 )
              v132 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                   (DXGSYNCOBJECTCA *)v128,
                                   *(struct ADAPTER_RENDER **)(*((_QWORD *)*v129 + 2) + 16LL))
                     + 4);
            else
              v132 = *(_QWORD *)(v128 + 248);
            *v126 = v132;
            if ( !v132 )
            {
              v133 = WdLogNewEntry5_WdError(v130);
              *(_QWORD *)(v133 + 24) = v128;
              WdLogEvent5_WdError(v133);
              NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v175);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v179);
              NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v183);
              PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
              if ( v146 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
              if ( v143 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
              if ( P != v173 && P )
                ExFreePoolWithTag(P, 0);
              v56 = v148;
              if ( v148 == v149 || !v148 )
                return 3221225485LL;
              goto LABEL_365;
            }
            ++v125;
            ++v126;
            v108 = v147;
            v127 = v169;
            if ( v125 >= v147 )
              goto LABEL_366;
          }
          v134 = (_QWORD *)WdLogNewEntry5_WdError(v130);
          v134[3] = v151;
          v134[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v153 + 2) + 16LL) + 16LL);
          v134[5] = -1073741811LL;
          WdLogEvent5_WdError(v134);
          NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v175);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v179);
          NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v183);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          v56 = v148;
          if ( v148 == v149 || !v148 )
            return 3221225485LL;
          goto LABEL_365;
        }
LABEL_366:
        v135 = (__int64)v153;
        v136 = v154;
        v137 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _BYTE *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v153 + 2) + 16LL) + 376LL) + 8LL) + 544LL))(
                 v154,
                 v156,
                 v108,
                 v124,
                 a3.0,
                 v120);
        v75 = v137;
        if ( v137 < 0 )
        {
          v141 = (_QWORD *)WdLogNewEntry5_WdError(v139);
          v141[3] = v151;
          v141[4] = *v157;
          v141[5] = 0LL;
          v141[6] = v75;
          WdLogEvent5_WdError(v141);
          NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v175);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v179);
          NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v183);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v158);
          if ( v146 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          if ( v143 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
          if ( P != v173 && P )
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
              Template_qPR0qPR2qx(v139, v138, v140, v136, v135, v147, (__int64)v155, *(_BYTE *)&a3.0, v17);
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          Template_qPR0qqPR3XR3(v139, v138, v140, v136, v135, *(_BYTE *)&a3.0, v147, (__int64)v155, (__int64)v120);
        }
        if ( v175 != v176 && v175 )
          ExFreePoolWithTag(v175, 0);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v179);
        if ( v183 != &v184 && v183 )
          ExFreePoolWithTag(v183, 0);
        if ( v158 != v159 && v158 )
          ExFreePoolWithTag(v158, 0);
        if ( v146 )
        {
          v146 = 0;
          ExReleaseResourceLite(v145[39]);
          KeLeaveCriticalRegion();
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        if ( v143 && v144 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v143 + 80));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
        if ( P != v173 && P )
          ExFreePoolWithTag(P, 0);
        if ( v148 != v149 && v148 )
        {
          ExFreePoolWithTag(v148, 0);
          return 0LL;
        }
        return 0LL;
      }
      v124 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v108, 0x4B677844u);
      v175 = v124;
    }
    v177 = v108;
    if ( v124 )
    {
      memset(v124, 0, 8LL * v108);
      v124 = v175;
    }
    goto LABEL_334;
  }
  if ( v13 )
  {
    v68 = WdLogNewEntry5_WdError(v67);
    *(_QWORD *)(v68 + 24) = 421LL;
    WdLogEvent5_WdError(v68);
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    v56 = v148;
    if ( v148 == v149 || !v148 )
      return 3221225485LL;
    goto LABEL_365;
  }
  if ( !*v14 )
  {
    v69 = WdLogNewEntry5_WdError(v67);
    *(_QWORD *)(v69 + 24) = 426LL;
    WdLogEvent5_WdError(v69);
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    v56 = v148;
    if ( v148 == v149 || !v148 )
      return 3221225485LL;
    goto LABEL_365;
  }
  v70 = v154;
  v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 16LL)
                                                                                                + 16LL)
                                                                                    + 376LL)
                                                                        + 8LL)
                                                            + 720LL))(
          v154,
          v156,
          a3.Value);
  v75 = v71;
  if ( v71 >= 0 )
  {
    if ( bTracingEnabled )
    {
      v178 = *v14;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qPR0qPR2qx(v73, v72, v74, v70, v47, 1, (__int64)&v178, *(_BYTE *)&a3.0, 0);
    }
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    if ( v143 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    if ( v148 != v149 && v148 )
      ExFreePoolWithTag(v148, 0);
    return 0LL;
  }
  v76 = (_QWORD *)WdLogNewEntry5_WdError(v73);
  v76[3] = v151;
  v76[4] = *v14;
  v76[5] = v75;
  WdLogEvent5_WdError(v76);
  if ( v146 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
  if ( v143 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v143);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
  if ( P != v173 && P )
    ExFreePoolWithTag(P, 0);
  if ( v148 != v149 && v148 )
    ExFreePoolWithTag(v148, 0);
  return (unsigned int)v75;
}
