/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C00C7330
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C006E408 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00C6CCC (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N@Z @ 0x1C00C6FC0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C018E6A8 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0009CEC (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C000BD24 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C000BD6C (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C00211A8 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0026464 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_pqPR1XR1 @ 0x1C00264C0 (Template_pqPR1XR1.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C002661C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     Template_pqPR1x @ 0x1C0026628 (Template_pqPR1x.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ @ 0x1C00C8C40 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01760D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  __int64 v9; // r14
  _BYTE *PoolWithTag; // r12
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct DXGCONTEXT *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rbx
  struct _KEVENT *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 v22; // bl
  __int64 v23; // r8
  _QWORD *v24; // rax
  DXGGLOBAL *v25; // rcx
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
  unsigned int v36; // r15d
  _QWORD *v37; // rsi
  const unsigned int *v38; // r12
  unsigned int v39; // edi
  unsigned int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  unsigned int v44; // ecx
  unsigned int v45; // ebx
  __int64 v46; // r8
  unsigned int v47; // edx
  __int64 v48; // rbx
  unsigned __int8 v49; // r8
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rax
  struct DXGCONTEXT *v63; // rdi
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  struct ADAPTER_RENDER *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // r8
  int v73; // r9d
  unsigned int v74; // ecx
  unsigned int v75; // ebx
  __int64 v76; // r8
  unsigned int v77; // edx
  __int64 v78; // rbx
  __int64 v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  char *v83; // r8
  void *v84; // rcx
  size_t v85; // r8
  unsigned int v86; // r15d
  struct DXGCONTEXT *v87; // r13
  __int64 v88; // r12
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  _QWORD *v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // r9d
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // eax
  unsigned __int64 v103; // r10
  __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // rbx
  _QWORD *v108; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-1F8h]
  char v110; // [rsp+40h] [rbp-1D8h]
  char v111; // [rsp+41h] [rbp-1D7h]
  PERESOURCE *v112; // [rsp+48h] [rbp-1D0h] BYREF
  char v113; // [rsp+50h] [rbp-1C8h]
  __int64 v114; // [rsp+58h] [rbp-1C0h] BYREF
  int v115; // [rsp+60h] [rbp-1B8h]
  unsigned int v116; // [rsp+68h] [rbp-1B0h]
  _BYTE v117[16]; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v118[16]; // [rsp+80h] [rbp-198h] BYREF
  struct DXGCONTEXT *v119; // [rsp+90h] [rbp-188h] BYREF
  PVOID P; // [rsp+98h] [rbp-180h] BYREF
  _BYTE v121[32]; // [rsp+A0h] [rbp-178h] BYREF
  int v122; // [rsp+C0h] [rbp-158h]
  struct DXGCONTEXT *v123; // [rsp+C8h] [rbp-150h]
  const unsigned int *v124; // [rsp+D0h] [rbp-148h]
  const unsigned __int64 *v125; // [rsp+D8h] [rbp-140h]
  _BYTE *v126; // [rsp+E0h] [rbp-138h]
  unsigned __int64 v127; // [rsp+E8h] [rbp-130h]
  __int64 v128; // [rsp+F0h] [rbp-128h] BYREF
  char v129; // [rsp+F8h] [rbp-120h]
  __int64 v130; // [rsp+100h] [rbp-118h] BYREF
  char v131; // [rsp+108h] [rbp-110h]
  _QWORD *v132; // [rsp+110h] [rbp-108h]
  char v133[8]; // [rsp+120h] [rbp-F8h] BYREF
  _BYTE v134[16]; // [rsp+128h] [rbp-F0h] BYREF
  DXGADAPTER *v135; // [rsp+138h] [rbp-E0h]
  char v136; // [rsp+140h] [rbp-D8h]
  _BYTE v137[16]; // [rsp+148h] [rbp-D0h] BYREF
  __int64 v138; // [rsp+158h] [rbp-C0h]
  __int64 v139; // [rsp+168h] [rbp-B0h]
  char v140; // [rsp+170h] [rbp-A8h]
  struct DXGPROCESS *v141; // [rsp+180h] [rbp-98h]
  struct DXGPROCESS *v142; // [rsp+188h] [rbp-90h]
  void *v143; // [rsp+190h] [rbp-88h]
  void *v144; // [rsp+198h] [rbp-80h]
  void *v145; // [rsp+1A0h] [rbp-78h] BYREF
  char v146; // [rsp+1A8h] [rbp-70h] BYREF
  unsigned int v147; // [rsp+1C8h] [rbp-50h]

  v127 = a4;
  v8 = a3;
  v124 = a2;
  v9 = a1;
  v116 = a1;
  v125 = a3;
  v142 = a6;
  v141 = a6;
  PoolWithTag = 0LL;
  P = 0LL;
  v122 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v121;
    P = v121;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      if ( PoolWithTag != v121 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    P = PoolWithTag;
  }
  v126 = PoolWithTag;
  v122 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8 * v9);
  PoolWithTag = P;
  v126 = P;
  if ( !P )
    goto LABEL_7;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118, a5, a6, &v119, a7);
  if ( v119 )
  {
    v14 = v119;
    v123 = v119;
    v15 = *((_QWORD *)v119 + 2);
    v114 = v15;
    v115 = 0;
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117, (struct DXGDEVICE *)v15);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v133, *((_QWORD *)v14 + 2), 0, v16, a7);
    if ( !a7 )
    {
      if ( a8 )
      {
        v17 = *(_QWORD *)(v15 + 16);
        if ( *(_DWORD *)(v15 + 304) == 2 )
          v18 = (struct _KEVENT *)(v17 + 80);
        else
          v18 = (struct _KEVENT *)(v17 + 56);
        if ( !KeReadStateEvent(v18) )
          KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 80), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL));
          v22 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v23, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 80), 1u);
          if ( v22 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v115 = 1;
      }
      else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v14 + 2) + 80LL)) )
      {
        DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v117);
      }
      if ( v136 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
        v24[3] = 275LL;
        v24[4] = 4LL;
        v24[5] = v134;
        v24[6] = 0LL;
        v24[7] = 0LL;
        WdLogEvent5_WdCriticalError(v24);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v135 + 20) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v135 + 2) )
          KeWaitForSingleObject((char *)v135 + 48, Executive, 0, 0, 0LL);
        DXGADAPTER::AcquireCoreResourceShared(v135);
      }
      v136 = 1;
      if ( *(_DWORD *)(v139 + 376) != 1 )
        goto LABEL_44;
      if ( v140 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v137);
        if ( *(_DWORD *)(v138 + 176) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v137);
LABEL_44:
          COREACCESS::Release((COREACCESS *)v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117);
          if ( v114 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v114);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
          if ( P != v121 && P )
            ExFreePoolWithTag(P, 0);
          return 3221226166LL;
        }
      }
      v15 = v114;
      v8 = v125;
    }
    v25 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v26 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v26 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v26);
      v25 = DXGGLOBAL::m_pGlobal;
    }
    v112 = (PERESOURCE *)v25;
    v113 = 0;
    if ( !v25 )
    {
      v27 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v27 + 24) = 1264LL;
      WdLogEvent5_WdAssertion(v27);
      v25 = (DXGGLOBAL *)v112;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v25 + 39)) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v31 + 24) = 1269LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v113 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
      v32[3] = 275LL;
      v32[4] = 4LL;
      v32[5] = &v112;
      v32[6] = 0LL;
      v32[7] = 0LL;
      WdLogEvent5_WdCriticalError(v32);
    }
    v33 = v112;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v33[39], 1u);
    v113 = 1;
    v111 = 0;
    v110 = 0;
    v36 = 0;
    if ( (_DWORD)v9 )
    {
      v37 = PoolWithTag;
      v132 = PoolWithTag;
      v38 = v124;
      v39 = v116;
      while ( 1 )
      {
        v40 = *v38;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a6 + 184, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v43 = *((_DWORD *)a6 + 50);
            if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v41, &EventBlockThread, v42, v43);
          }
          ExAcquirePushLockSharedEx((char *)a6 + 184, 0LL);
        }
        v44 = (v40 >> 6) & 0xFFFFFF;
        v45 = v40 >> 30;
        if ( v44 < *((_DWORD *)a6 + 56)
          && (v46 = *((_QWORD *)a6 + 26), v47 = *(_DWORD *)(v46 + 16LL * v44 + 8), v45 == ((v47 >> 4) & 3))
          && (v47 & 0x1000) == 0
          && (v47 & 0xF) != 0
          && (*(_BYTE *)(v46 + 16LL * v44 + 8) & 0xF) == 8 )
        {
          v48 = *(_QWORD *)(v46 + 16LL * v44);
        }
        else
        {
          v48 = 0LL;
        }
        ExReleasePushLockSharedEx((char *)a6 + 184, 0LL);
        KeLeaveCriticalRegion();
        if ( v48 )
        {
          if ( *(_DWORD *)(v48 + 128) == 5 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v35);
            *(_QWORD *)(v50 + 24) = 899LL;
            WdLogEvent5_WdAssertion(v50);
          }
          v111 = 1;
          if ( v110 )
          {
LABEL_141:
            v80 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            goto LABEL_142;
          }
          v51 = *(_DWORD *)(v48 + 128);
          if ( v51 == 4 )
            goto LABEL_140;
          if ( v51 == 3 && v39 != 1 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v80[4] = v39;
LABEL_142:
            v80[3] = a6;
            goto LABEL_143;
          }
          DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v128, (struct DXGSYNCOBJECT *)v48, v49);
          if ( v129 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52, v54);
            v55[3] = 275LL;
            v55[4] = 4LL;
            v55[5] = &v128;
            v55[6] = 0LL;
            v55[7] = 0LL;
            WdLogEvent5_WdCriticalError(v55);
          }
          v56 = v128;
          KeEnterCriticalRegion();
          if ( *(struct _KTHREAD **)(v56 + 8) == KeGetCurrentThread() )
          {
            if ( *(int *)(v56 + 24) <= 0 )
            {
              v58 = WdLogNewEntry5_WdAssertion(v57);
              *(_QWORD *)(v58 + 24) = 326LL;
              WdLogEvent5_WdAssertion(v58);
            }
            ++*(_DWORD *)(v56 + 24);
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v56 + 16, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v60 = *(_DWORD *)(v56 + 28);
                if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_q(v57, &EventBlockThread, v59, v60);
              }
              _InterlockedIncrement64((volatile signed __int64 *)v56);
              ExAcquirePushLockExclusiveEx(v56 + 16, 0LL);
            }
            if ( *(_QWORD *)(v56 + 8) )
            {
              v61 = WdLogNewEntry5_WdAssertion(v57);
              *(_QWORD *)(v61 + 24) = 350LL;
              WdLogEvent5_WdAssertion(v61);
            }
            if ( *(_DWORD *)(v56 + 24) )
            {
              v62 = WdLogNewEntry5_WdAssertion(v57);
              *(_QWORD *)(v62 + 24) = 351LL;
              WdLogEvent5_WdAssertion(v62);
            }
            *(_QWORD *)(v56 + 8) = KeGetCurrentThread();
            *(_DWORD *)(v56 + 24) = 1;
            v37 = v132;
          }
          v129 = 1;
          v63 = v123;
          if ( (*(_DWORD *)(v48 + 132) & 4) != 0 )
            DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                     (DXGSYNCOBJECTCA *)v48,
                                     *(struct ADAPTER_RENDER **)(*((_QWORD *)v123 + 2) + 16LL));
          else
            DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v48 + 216);
          if ( !DxgAdapterSyncObject )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdError(v57);
            v81[3] = a6;
            v81[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) + 16LL);
            v81[5] = -1073741811LL;
            goto LABEL_138;
          }
          v65 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v63 + 2) + 16LL);
          if ( (*(_DWORD *)(v48 + 132) & 4) != 0 )
            v66 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v48, v65) + 4);
          else
            v66 = *(_QWORD *)(v48 + 248);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v65 + 47) + 8LL)
                                                                            + 736LL))(
                 v66,
                 v127) )
          {
            v67 = *((_QWORD *)v63 + 2);
            if ( *(_BYTE *)(*(_QWORD *)(v67 + 16) + 632LL) )
            {
              v68 = *(unsigned __int8 *)(*(_QWORD *)(v67 + 40) + 290LL);
              if ( !(_BYTE)v68 || (*((_DWORD *)v119 + 83) & 8) == 0 )
              {
                if ( (*(_BYTE *)(v48 + 132) & 1) == 0 || !*(_BYTE *)(v67 + 2871) )
                  goto LABEL_137;
                if ( *(_DWORD *)(v48 + 128) != 3 )
                {
                  v69 = WdLogNewEntry5_WdAssertion(v68);
                  *(_QWORD *)(v69 + 24) = 268LL;
                  WdLogEvent5_WdAssertion(v69);
                }
                if ( v127 > *(_QWORD *)(v48 + 80) )
                {
LABEL_137:
                  v81 = (_QWORD *)WdLogNewEntry5_WdError(v68);
                  v81[3] = a6;
                  v81[4] = -1073741811LL;
LABEL_138:
                  WdLogEvent5_WdError(v81);
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
                  goto LABEL_144;
                }
              }
            }
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
          v39 = v116;
        }
        else
        {
          v70 = *v38;
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a6 + 184, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v73 = *((_DWORD *)a6 + 50);
              if ( v73 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v71, &EventBlockThread, v72, v73);
            }
            ExAcquirePushLockSharedEx((char *)a6 + 184, 0LL);
          }
          v74 = (v70 >> 6) & 0xFFFFFF;
          v75 = v70 >> 30;
          if ( v74 < *((_DWORD *)a6 + 56)
            && (v76 = *((_QWORD *)a6 + 26), v77 = *(_DWORD *)(v76 + 16LL * v74 + 8), v75 == ((v77 >> 4) & 3))
            && (v77 & 0x1000) == 0
            && (v77 & 0xF) != 0
            && (*(_BYTE *)(v76 + 16LL * v74 + 8) & 0xF) == 0xB )
          {
            v78 = *(_QWORD *)(v76 + 16LL * v74);
          }
          else
          {
            v78 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)a6 + 184, 0LL);
          KeLeaveCriticalRegion();
          if ( !v78 )
          {
LABEL_140:
            v80 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v80[3] = a6;
            v80[4] = v124[v36];
            v80[5] = v36;
            goto LABEL_143;
          }
          v110 = 1;
          if ( v111 )
            goto LABEL_141;
          if ( *(_QWORD *)(v78 + 16) != *((_QWORD *)v123 + 2) )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v80[3] = *((_QWORD *)v123 + 2);
            v80[4] = *(_QWORD *)(v78 + 16);
LABEL_143:
            WdLogEvent5_WdError(v80);
LABEL_144:
            if ( v113 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v112);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117);
            if ( v114 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v114);
            goto LABEL_13;
          }
          if ( (*(_DWORD *)(v78 + 64) & 0x20) != 0 )
          {
            v82 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v82 + 24) = v124[v36];
            WdLogEvent5_WdError(v82);
            if ( v113 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v112);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117);
            if ( v114 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v114);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
            if ( P != v121 && P )
              ExFreePoolWithTag(P, 0);
            return 3221225506LL;
          }
          v48 = *(_QWORD *)(v78 + 32);
          if ( *(_DWORD *)(v48 + 128) != 5 )
          {
            v79 = WdLogNewEntry5_WdAssertion(v35);
            *(_QWORD *)(v79 + 24) = 1032LL;
            WdLogEvent5_WdAssertion(v79);
          }
        }
        *v37 = v48;
        ++v36;
        ++v38;
        v132 = ++v37;
        if ( v36 >= v39 )
        {
          v15 = v114;
          v8 = v125;
          LODWORD(v9) = v116;
          PoolWithTag = v126;
          break;
        }
      }
    }
    v83 = 0LL;
    v145 = 0LL;
    v147 = 0;
    if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 128LL) == 5 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v145, v9);
      v84 = v145;
      v143 = v145;
      if ( !v145 )
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v145);
        if ( v113 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v112);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117);
        if ( v15 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v114);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
        PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,4>(&P);
        return 3221225495LL;
      }
      v144 = v145;
      v85 = v147;
      if ( &v8[v85] < v8 || (unsigned __int64)&v8[v85] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v84, v8, v85 * 8);
      v83 = (char *)v145;
      v8 = (const unsigned __int64 *)v145;
      v125 = (const unsigned __int64 *)v145;
    }
    v86 = 0;
    if ( (_DWORD)v9 )
    {
      v87 = v119;
      v88 = PoolWithTag - (_BYTE *)v8;
      while ( 1 )
      {
        v89 = *(const unsigned __int64 *)((char *)v8 + v88);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
          (DXGSYNCOBJECTMUTEX *)&v130,
          (struct DXGSYNCOBJECT *)v89,
          (unsigned __int8)v83);
        if ( v131 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v91, v90, v92);
          v93[3] = 275LL;
          v93[4] = 4LL;
          v93[5] = &v130;
          v93[6] = 0LL;
          v93[7] = 0LL;
          WdLogEvent5_WdCriticalError(v93);
        }
        v94 = v130;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v94 + 8) == KeGetCurrentThread() )
        {
          if ( *(int *)(v94 + 24) <= 0 )
          {
            v96 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v96 + 24) = 326LL;
            WdLogEvent5_WdAssertion(v96);
          }
          ++*(_DWORD *)(v94 + 24);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v94 + 16, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v99 = *(_DWORD *)(v94 + 28);
              if ( v99 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v97, &EventBlockThread, v98, v99);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v94);
            ExAcquirePushLockExclusiveEx(v94 + 16, 0LL);
          }
          if ( *(_QWORD *)(v94 + 8) )
          {
            v100 = WdLogNewEntry5_WdAssertion(v97);
            *(_QWORD *)(v100 + 24) = 350LL;
            WdLogEvent5_WdAssertion(v100);
          }
          if ( *(_DWORD *)(v94 + 24) )
          {
            v101 = WdLogNewEntry5_WdAssertion(v97);
            *(_QWORD *)(v101 + 24) = 351LL;
            WdLogEvent5_WdAssertion(v101);
          }
          *(_QWORD *)(v94 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v94 + 24) = 1;
          LODWORD(v9) = v116;
        }
        v131 = 1;
        v102 = *(_DWORD *)(v89 + 128);
        if ( v102 == 5 )
        {
          v103 = *v8;
        }
        else
        {
          v103 = 0LL;
          if ( v102 == 3 )
            v103 = v127;
        }
        v104 = (*(_DWORD *)(v89 + 132) & 4) != 0
             ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                             (DXGSYNCOBJECTCA *)v89,
                             *(struct ADAPTER_RENDER **)(*((_QWORD *)v123 + 2) + 16LL))
               + 4)
             : *(_QWORD *)(v89 + 248);
        v105 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v123 + 2) + 16LL) + 376LL)
                                                                                        + 8LL)
                                                                            + 536LL))(
                 *((_QWORD *)v87 + 27),
                 v104,
                 v103);
        v107 = v105;
        if ( v105 < 0 )
          break;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
        ++v86;
        ++v8;
        if ( v86 >= (unsigned int)v9 )
        {
          v15 = v114;
          v83 = (char *)v145;
          v8 = v125;
          PoolWithTag = v126;
          goto LABEL_206;
        }
      }
      v108 = (_QWORD *)WdLogNewEntry5_WdError(v106);
      v108[3] = v142;
      v108[4] = v124[v86];
      v108[5] = v86;
      v108[6] = v107;
      WdLogEvent5_WdError(v108);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v145);
      if ( v113 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v112);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117);
      if ( v114 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v114);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
      if ( P != v121 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v107;
    }
LABEL_206:
    if ( v110 )
    {
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_214;
      LODWORD(Timeout) = v9;
      Template_pqPR1XR1(v35, &EventWaitForSynchronizationObjectFromGpu, (__int64)v83, v119, Timeout, PoolWithTag, v8);
    }
    else
    {
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_214;
      LODWORD(Timeout) = v9;
      Template_pqPR1x(v35, v34, (__int64)v83, v119, Timeout, PoolWithTag, v127);
    }
    v83 = (char *)v145;
LABEL_214:
    if ( v83 != &v146 && v83 )
      ExFreePoolWithTag(v83, 0);
    if ( v113 )
    {
      v113 = 0;
      ExReleaseResourceLite(v112[39]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v117);
    if ( v15 && v115 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v15 + 80));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
    if ( P != v121 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v13[3] = a6;
  v13[4] = a5;
  v13[5] = -1073741811LL;
  WdLogEvent5_WdError(v13);
LABEL_13:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
  if ( P != v121 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225485LL;
}
