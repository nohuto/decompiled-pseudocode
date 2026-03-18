/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C0066680
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005B4BC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0065FEC (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N@Z @ 0x1C0066300 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0166928 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0001850 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001898 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C000CDF4 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FA40 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_pqPR1XR1 @ 0x1C001FA9C (Template_pqPR1XR1.c)
 *     Template_pqPR1x @ 0x1C001FBF8 (Template_pqPR1x.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ @ 0x1C00BAEFC (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0150F48 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8)
{
  const unsigned __int64 *v8; // rsi
  __int64 v9; // r15
  unsigned int v10; // r14d
  _BYTE *PoolWithTag; // r13
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  struct _KEVENT *v21; // rbx
  unsigned __int8 v22; // bl
  __int64 v23; // r8
  _QWORD *v24; // rax
  struct DXGGLOBAL *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rax
  PERESOURCE *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const unsigned int *v36; // r15
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  unsigned int v41; // ecx
  unsigned int v42; // ebx
  __int64 v43; // r8
  unsigned int v44; // edx
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  struct DXGCONTEXT *v61; // rbx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  struct ADAPTER_RENDER *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // ebx
  unsigned int v69; // ecx
  unsigned int v70; // ebx
  __int64 v71; // r8
  unsigned int v72; // edx
  __int64 v73; // rbx
  struct DXGCONTEXT *v74; // rdi
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  char *v79; // r8
  void *v80; // rcx
  size_t v81; // r8
  unsigned int v82; // r14d
  struct DXGCONTEXT *v83; // r13
  signed __int64 v84; // r15
  __int64 v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  _QWORD *v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  unsigned __int64 v98; // r10
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rbx
  _QWORD *v103; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-1C8h]
  char v105; // [rsp+40h] [rbp-1A8h]
  char v106; // [rsp+41h] [rbp-1A7h]
  PERESOURCE *v107; // [rsp+48h] [rbp-1A0h] BYREF
  char v108; // [rsp+50h] [rbp-198h]
  __int64 v109; // [rsp+58h] [rbp-190h] BYREF
  int v110; // [rsp+60h] [rbp-188h]
  unsigned int v111; // [rsp+68h] [rbp-180h]
  _BYTE v112[16]; // [rsp+70h] [rbp-178h] BYREF
  struct DXGCONTEXT *v113; // [rsp+80h] [rbp-168h] BYREF
  PVOID P; // [rsp+88h] [rbp-160h] BYREF
  _BYTE v115[32]; // [rsp+90h] [rbp-158h] BYREF
  int v116; // [rsp+B0h] [rbp-138h]
  const unsigned int *v117; // [rsp+B8h] [rbp-130h]
  _BYTE *v118; // [rsp+C0h] [rbp-128h]
  LARGE_INTEGER Increment; // [rsp+C8h] [rbp-120h]
  unsigned __int64 v120; // [rsp+D0h] [rbp-118h]
  struct DXGCONTEXT *v121; // [rsp+D8h] [rbp-110h]
  const unsigned __int64 *v122; // [rsp+E0h] [rbp-108h]
  __int64 v123; // [rsp+E8h] [rbp-100h] BYREF
  char v124; // [rsp+F0h] [rbp-F8h]
  __int64 v125; // [rsp+F8h] [rbp-F0h] BYREF
  char v126; // [rsp+100h] [rbp-E8h]
  char v127[8]; // [rsp+110h] [rbp-D8h] BYREF
  char v128[8]; // [rsp+118h] [rbp-D0h] BYREF
  DXGADAPTER *v129; // [rsp+120h] [rbp-C8h]
  char v130; // [rsp+128h] [rbp-C0h]
  char v131[8]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v132; // [rsp+138h] [rbp-B0h]
  __int64 v133; // [rsp+148h] [rbp-A0h]
  char v134; // [rsp+150h] [rbp-98h]
  struct DXGPROCESS *v135; // [rsp+160h] [rbp-88h]
  void *v136; // [rsp+168h] [rbp-80h]
  void *v137; // [rsp+170h] [rbp-78h]
  void *v138; // [rsp+178h] [rbp-70h] BYREF
  char v139; // [rsp+180h] [rbp-68h] BYREF
  unsigned int v140; // [rsp+1A0h] [rbp-48h]

  v120 = a4;
  v8 = a3;
  v117 = a2;
  v9 = a1;
  v111 = a1;
  v122 = a3;
  v135 = a6;
  v10 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v116 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v115;
    P = v115;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      if ( PoolWithTag != v115 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    P = PoolWithTag;
  }
  v118 = PoolWithTag;
  v116 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8 * v9);
  PoolWithTag = P;
  v118 = P;
  if ( !P )
    goto LABEL_7;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112, a5, a6, &v113, a7);
  if ( !v113 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = a6;
    v15[4] = a5;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_13;
  }
  v121 = v113;
  v16 = *((_QWORD *)v113 + 2);
  v109 = v16;
  v110 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v127, v16, 0, v14, a7);
  if ( !a7 )
  {
    if ( a8 )
    {
      v20 = *(_QWORD *)(v16 + 16);
      if ( *(_DWORD *)(v16 + 280) == 2 )
        v21 = (struct _KEVENT *)(v20 + 80);
      else
        v21 = (struct _KEVENT *)(v20 + 56);
      if ( !KeReadStateEvent(v21) )
        KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 80LL));
        v22 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v23, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 80), 1u);
        if ( v22 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v110 = 1;
    }
    if ( v130 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
      v24[3] = 275LL;
      v24[4] = 4LL;
      v24[5] = v128;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v129 + 18) )
    {
      if ( !KeReadStateEvent((PRKEVENT)((char *)v129 + 32)) )
        KeWaitForSingleObject((char *)v129 + 32, Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(v129);
    }
    v130 = 1;
    if ( *(_DWORD *)(v133 + 352) != 1 )
      goto LABEL_42;
    if ( v134 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v131);
      if ( *(_DWORD *)(v132 + 160) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v131);
LABEL_42:
        COREACCESS::Release((COREACCESS *)v128);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
        if ( v109 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v109);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
        if ( P != v115 && P )
          ExFreePoolWithTag(P, 0);
        return 3221226166LL;
      }
    }
    v16 = v109;
    v8 = v122;
  }
  v25 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v26 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v26 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v26);
    v25 = DXGGLOBAL::m_pGlobal;
  }
  v107 = (PERESOURCE *)v25;
  v108 = 0;
  if ( !v25 )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v27 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v27);
    v25 = (struct DXGGLOBAL *)v107;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v25 + 48)) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v31 + 24) = 1385LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v108 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = &v107;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  v33 = v107;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v33[48], 1u);
  v108 = 1;
  v106 = 0;
  v105 = 0;
  if ( !(_DWORD)v9 )
  {
LABEL_150:
    v79 = 0LL;
    v138 = 0LL;
    v140 = 0;
    if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 152LL) == 5 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v138, v9);
      v80 = v138;
      v136 = v138;
      if ( !v138 )
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v138);
        if ( v108 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v107);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
        if ( v16 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v109);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
        PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,4>(&P);
        return 3221225495LL;
      }
      v137 = v138;
      v81 = v140;
      if ( &v8[v81] < v8 || (unsigned __int64)&v8[v81] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v80, v8, v81 * 8);
      v79 = (char *)v138;
      v8 = (const unsigned __int64 *)v138;
      v122 = (const unsigned __int64 *)v138;
    }
    v82 = 0;
    if ( (_DWORD)v9 )
    {
      v83 = v113;
      v84 = v118 - (_BYTE *)v8;
      while ( 1 )
      {
        v85 = *(const unsigned __int64 *)((char *)v8 + v84);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v125, (struct DXGSYNCOBJECT *)v85);
        if ( v126 )
        {
          v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v86, v88);
          v89[3] = 275LL;
          v89[4] = 4LL;
          v89[5] = &v125;
          v89[6] = 0LL;
          v89[7] = 0LL;
          WdLogEvent5_WdCriticalError(v89);
        }
        v90 = v125;
        KeEnterCriticalRegion();
        if ( _InterlockedIncrement((volatile signed __int32 *)(v90 + 8)) > 1 )
        {
          if ( *(struct _KTHREAD **)v90 == KeGetCurrentThread() )
          {
            if ( *(int *)(v90 + 12) <= 0 )
            {
              v93 = WdLogNewEntry5_WdAssertion(v91);
              *(_QWORD *)(v93 + 24) = 328LL;
              WdLogEvent5_WdAssertion(v93);
            }
            ++*(_DWORD *)(v90 + 12);
            goto LABEL_180;
          }
          if ( bTracingEnabled )
          {
            v94 = *(_DWORD *)(v90 + 56);
            if ( v94 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v91, &EventBlockThread, v92, v94);
          }
          Increment.QuadPart = 1LL;
          ExInterlockedAddLargeInteger((PLARGE_INTEGER)(v90 + 16), (LARGE_INTEGER)1LL, (PKSPIN_LOCK)(v90 + 48));
          KeWaitForSingleObject((PVOID)(v90 + 24), Executive, 0, 0, 0LL);
        }
        if ( *(_QWORD *)v90 )
        {
          v95 = WdLogNewEntry5_WdAssertion(v91);
          *(_QWORD *)(v95 + 24) = 354LL;
          WdLogEvent5_WdAssertion(v95);
        }
        if ( *(_DWORD *)(v90 + 12) )
        {
          v96 = WdLogNewEntry5_WdAssertion(v91);
          *(_QWORD *)(v96 + 24) = 355LL;
          WdLogEvent5_WdAssertion(v96);
        }
        *(_QWORD *)v90 = KeGetCurrentThread();
        *(_DWORD *)(v90 + 12) = 1;
LABEL_180:
        v126 = 1;
        v97 = *(_DWORD *)(v85 + 152);
        if ( v97 == 5 )
        {
          v98 = *v8;
        }
        else
        {
          v98 = 0LL;
          if ( v97 == 3 )
            v98 = v120;
        }
        if ( (*(_DWORD *)(v85 + 156) & 4) != 0 )
          v99 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v85,
                              *(struct ADAPTER_RENDER **)(*((_QWORD *)v121 + 2) + 16LL))
                + 4);
        else
          v99 = *(_QWORD *)(v85 + 272);
        v100 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v121 + 2) + 16LL) + 400LL)
                                                                                        + 8LL)
                                                                            + 536LL))(
                 *((_QWORD *)v83 + 27),
                 v99,
                 v98);
        v102 = v100;
        if ( v100 < 0 )
        {
          v103 = (_QWORD *)WdLogNewEntry5_WdError(v101);
          v103[3] = a6;
          v103[4] = v117[v82];
          v103[5] = v82;
          v103[6] = v102;
          WdLogEvent5_WdError(v103);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v125);
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v138);
          if ( v108 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v107);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
          if ( v109 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v109);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
          if ( P != v115 && P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v102;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v125);
        ++v82;
        ++v8;
        if ( v82 >= v111 )
        {
          v16 = v109;
          v79 = (char *)v138;
          v8 = v122;
          LODWORD(v9) = v111;
          PoolWithTag = v118;
          break;
        }
      }
    }
    if ( v105 )
    {
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_206;
      LODWORD(Timeout) = v9;
      Template_pqPR1XR1(v35, &EventWaitForSynchronizationObjectFromGpu, (__int64)v79, v113, Timeout, PoolWithTag, v8);
    }
    else
    {
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_206;
      LODWORD(Timeout) = v9;
      Template_pqPR1x(v35, v34, (__int64)v79, v113, Timeout, PoolWithTag, v120);
    }
    v79 = (char *)v138;
LABEL_206:
    if ( v79 != &v139 && v79 )
      ExFreePoolWithTag(v79, 0);
    if ( v108 )
    {
      v108 = 0;
      ExReleaseResourceLite(v107[48]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
    if ( v16 && v110 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 80));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v36 = v117;
  while ( 1 )
  {
    v37 = *v36;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a6 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v40 = *((_DWORD *)a6 + 52);
        if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v38, &EventBlockThread, v39, v40);
      }
      ExAcquirePushLockSharedEx((char *)a6 + 192, 0LL);
    }
    v41 = (v37 >> 6) & 0xFFFFFF;
    v42 = v37 >> 30;
    if ( v41 < *((_DWORD *)a6 + 58)
      && (v43 = *((_QWORD *)a6 + 27), v44 = *(_DWORD *)(v43 + 16LL * v41 + 8), v42 == ((v44 >> 4) & 3))
      && (v44 & 0x1000) == 0
      && (v44 & 0xF) != 0
      && (*(_BYTE *)(v43 + 16LL * v41 + 8) & 0xF) == 8 )
    {
      v45 = *(_QWORD *)(v43 + 16LL * v41);
    }
    else
    {
      v45 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a6 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v45 )
      break;
    if ( *(_DWORD *)(v45 + 152) == 5 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v46);
      *(_QWORD *)(v47 + 24) = 865LL;
      WdLogEvent5_WdAssertion(v47);
    }
    v106 = 1;
    if ( v105 )
    {
LABEL_133:
      v76 = (_QWORD *)WdLogNewEntry5_WdError(v46);
      goto LABEL_134;
    }
    v48 = *(_DWORD *)(v45 + 152);
    if ( v48 == 4 )
      goto LABEL_132;
    if ( v48 == 3 )
    {
      v49 = v111;
      if ( v111 != 1 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v46);
        v76[4] = v49;
LABEL_134:
        v76[3] = a6;
        goto LABEL_135;
      }
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v123, (struct DXGSYNCOBJECT *)v45);
    if ( v124 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v52);
      v53[3] = 275LL;
      v53[4] = 4LL;
      v53[5] = &v123;
      v53[6] = 0LL;
      v53[7] = 0LL;
      WdLogEvent5_WdCriticalError(v53);
    }
    v54 = v123;
    KeEnterCriticalRegion();
    if ( _InterlockedIncrement((volatile signed __int32 *)(v54 + 8)) > 1 )
    {
      if ( *(struct _KTHREAD **)v54 == KeGetCurrentThread() )
      {
        if ( *(int *)(v54 + 12) <= 0 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v55);
          *(_QWORD *)(v57 + 24) = 328LL;
          WdLogEvent5_WdAssertion(v57);
        }
        ++*(_DWORD *)(v54 + 12);
        goto LABEL_96;
      }
      if ( bTracingEnabled )
      {
        v58 = *(_DWORD *)(v54 + 56);
        if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v55, &EventBlockThread, v56, v58);
      }
      Increment.QuadPart = 1LL;
      ExInterlockedAddLargeInteger((PLARGE_INTEGER)(v54 + 16), (LARGE_INTEGER)1LL, (PKSPIN_LOCK)(v54 + 48));
      KeWaitForSingleObject((PVOID)(v54 + 24), Executive, 0, 0, 0LL);
    }
    if ( *(_QWORD *)v54 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v59 + 24) = 354LL;
      WdLogEvent5_WdAssertion(v59);
    }
    if ( *(_DWORD *)(v54 + 12) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v60 + 24) = 355LL;
      WdLogEvent5_WdAssertion(v60);
    }
    *(_QWORD *)v54 = KeGetCurrentThread();
    *(_DWORD *)(v54 + 12) = 1;
LABEL_96:
    v124 = 1;
    v61 = v121;
    if ( (*(_DWORD *)(v45 + 156) & 4) != 0 )
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECTCA *)v45,
                               *(struct ADAPTER_RENDER **)(*((_QWORD *)v121 + 2) + 16LL));
    else
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v45 + 240);
    if ( !DxgAdapterSyncObject )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v77[3] = a6;
      v77[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 16LL);
      v77[5] = -1073741811LL;
      goto LABEL_130;
    }
    v63 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v61 + 2) + 16LL);
    if ( (*(_DWORD *)(v45 + 156) & 4) != 0 )
      v64 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v45, v63) + 4);
    else
      v64 = *(_QWORD *)(v45 + 272);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v63 + 50) + 8LL) + 736LL))(
           v64,
           v120) )
    {
      v65 = *((_QWORD *)v61 + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v65 + 16) + 704LL) )
      {
        v66 = *(unsigned __int8 *)(*(_QWORD *)(v65 + 40) + 314LL);
        if ( !(_BYTE)v66 || (*((_DWORD *)v113 + 83) & 8) == 0 )
        {
          if ( (*(_BYTE *)(v45 + 156) & 1) == 0 || !*(_BYTE *)(v65 + 2847) )
            goto LABEL_129;
          if ( *(_DWORD *)(v45 + 152) != 3 )
          {
            v67 = WdLogNewEntry5_WdAssertion(v66);
            *(_QWORD *)(v67 + 24) = 234LL;
            WdLogEvent5_WdAssertion(v67);
          }
          if ( v120 > *(_QWORD *)(v45 + 104) )
          {
LABEL_129:
            v77 = (_QWORD *)WdLogNewEntry5_WdError(v66);
            v77[3] = a6;
            v77[4] = -1073741811LL;
LABEL_130:
            WdLogEvent5_WdError(v77);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v123);
            goto LABEL_136;
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v123);
LABEL_126:
    *(_QWORD *)PoolWithTag = v45;
    ++v10;
    ++v36;
    PoolWithTag += 8;
    if ( v10 >= v111 )
    {
      v16 = v109;
      v8 = v122;
      LODWORD(v9) = v111;
      PoolWithTag = v118;
      goto LABEL_150;
    }
  }
  v68 = *v36;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a6 + 192));
  v69 = (v68 >> 6) & 0xFFFFFF;
  v70 = v68 >> 30;
  if ( v69 < *((_DWORD *)a6 + 58)
    && (v71 = *((_QWORD *)a6 + 27), v72 = *(_DWORD *)(v71 + 16LL * v69 + 8), v70 == ((v72 >> 4) & 3))
    && (v72 & 0x1000) == 0
    && (v72 & 0xF) != 0
    && (*(_BYTE *)(v71 + 16LL * v69 + 8) & 0xF) == 0xB )
  {
    v73 = *(_QWORD *)(v71 + 16LL * v69);
  }
  else
  {
    v73 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a6 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v73 )
  {
LABEL_132:
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v46);
    v76[3] = a6;
    v76[4] = v117[v10];
    v76[5] = v10;
    goto LABEL_135;
  }
  v105 = 1;
  if ( v106 )
    goto LABEL_133;
  v35 = *(_QWORD *)(v73 + 16);
  v74 = v121;
  if ( v35 != *((_QWORD *)v121 + 2) )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v76[3] = *((_QWORD *)v74 + 2);
    v76[4] = *(_QWORD *)(v73 + 16);
LABEL_135:
    WdLogEvent5_WdError(v76);
LABEL_136:
    if ( v108 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v107);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
    if ( v109 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v109);
LABEL_13:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(v73 + 64) & 0x20) == 0 )
  {
    v45 = *(_QWORD *)(v73 + 32);
    if ( *(_DWORD *)(v45 + 152) != 5 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v75 + 24) = 998LL;
      WdLogEvent5_WdAssertion(v75);
    }
    goto LABEL_126;
  }
  v78 = WdLogNewEntry5_WdError(v35);
  *(_QWORD *)(v78 + 24) = v117[v10];
  WdLogEvent5_WdError(v78);
  if ( v108 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v107);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
  if ( v109 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v109);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
  if ( P != v115 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225506LL;
}
