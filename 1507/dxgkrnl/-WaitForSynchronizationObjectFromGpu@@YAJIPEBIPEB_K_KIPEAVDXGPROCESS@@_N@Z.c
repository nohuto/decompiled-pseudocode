/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005A310 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A1B80 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C014F8D0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01622F8 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0002850 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00098F4 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00176B0 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C001C168 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FD44 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_pqPR1XR1 @ 0x1C001FDA0 (Template_pqPR1XR1.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C001FEFC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     Template_pqPR1x @ 0x1C001FF08 (Template_pqPR1x.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C014C920 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7)
{
  const unsigned __int64 *v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // r15d
  _BYTE *PoolWithTag; // rax
  __int64 v12; // rcx
  struct DXGCONTEXT *v13; // r13
  _QWORD *v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  struct DXGGLOBAL *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  PERESOURCE *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rsi
  const unsigned int *v35; // r13
  unsigned int v36; // edi
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  unsigned int v41; // ecx
  unsigned int v42; // ebx
  __int64 v43; // r8
  unsigned int v44; // edx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // rax
  char *v67; // rdi
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  struct ADAPTER_RENDER *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // ebx
  unsigned int v77; // ecx
  unsigned int v78; // ebx
  __int64 v79; // r8
  unsigned int v80; // edx
  __int64 v81; // rbx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  char *v88; // r8
  char *v89; // rbx
  void *v90; // rcx
  size_t v91; // r8
  __int64 v92; // r15
  signed __int64 v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  _QWORD *v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // r9d
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // eax
  unsigned __int64 v113; // r10
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rbx
  _QWORD *v118; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-1C8h]
  char v120; // [rsp+40h] [rbp-1A8h]
  char v121; // [rsp+41h] [rbp-1A7h]
  PERESOURCE *v122; // [rsp+48h] [rbp-1A0h] BYREF
  char v123; // [rsp+50h] [rbp-198h]
  unsigned int v124; // [rsp+58h] [rbp-190h]
  _BYTE v125[16]; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v126[16]; // [rsp+70h] [rbp-178h] BYREF
  _QWORD *v127; // [rsp+80h] [rbp-168h]
  const unsigned int *v128; // [rsp+88h] [rbp-160h]
  char *v129; // [rsp+90h] [rbp-158h]
  unsigned __int64 v130; // [rsp+98h] [rbp-150h]
  struct DXGCONTEXT *v131; // [rsp+A0h] [rbp-148h] BYREF
  const unsigned __int64 *v132; // [rsp+A8h] [rbp-140h]
  PVOID P; // [rsp+B0h] [rbp-138h] BYREF
  _BYTE v134[32]; // [rsp+B8h] [rbp-130h] BYREF
  int v135; // [rsp+D8h] [rbp-110h]
  __int64 v136; // [rsp+E0h] [rbp-108h] BYREF
  char v137; // [rsp+E8h] [rbp-100h]
  __int64 v138; // [rsp+F0h] [rbp-F8h] BYREF
  char v139; // [rsp+F8h] [rbp-F0h]
  char v140[8]; // [rsp+100h] [rbp-E8h] BYREF
  char v141[8]; // [rsp+108h] [rbp-E0h] BYREF
  DXGADAPTER *v142; // [rsp+110h] [rbp-D8h]
  char v143; // [rsp+118h] [rbp-D0h]
  char v144[8]; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v145; // [rsp+128h] [rbp-C0h]
  __int64 v146; // [rsp+138h] [rbp-B0h]
  char v147; // [rsp+140h] [rbp-A8h]
  _QWORD *v148; // [rsp+150h] [rbp-98h]
  struct DXGPROCESS *v149; // [rsp+158h] [rbp-90h]
  struct DXGPROCESS *v150; // [rsp+160h] [rbp-88h]
  void *v151; // [rsp+168h] [rbp-80h]
  void *v152; // [rsp+170h] [rbp-78h]
  void *v153; // [rsp+178h] [rbp-70h] BYREF
  char v154; // [rsp+180h] [rbp-68h] BYREF
  unsigned int v155; // [rsp+1A0h] [rbp-48h]

  v130 = a4;
  v7 = a3;
  v128 = a2;
  v8 = a1;
  v124 = a1;
  v132 = a3;
  v150 = a6;
  v149 = a6;
  v9 = 0;
  P = 0LL;
  v135 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v134;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
  }
  P = PoolWithTag;
  v127 = PoolWithTag;
  v135 = v8;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8 * v8);
  v127 = P;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126, a5, a6, &v131, a7);
  v13 = v131;
  if ( v131 )
  {
    v15 = (__int64 *)((char *)v131 + 16);
    v129 = (char *)v131 + 16;
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
      (DXGDEVICEACCESSLOCKSHARED *)v125,
      *((struct DXGDEVICE **)v131 + 2));
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v140, *v15, 0, v16, a7);
    if ( !a7 )
    {
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*v15 + 80)) )
        DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v125);
      if ( v143 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v17, v18);
        v21[3] = 275LL;
        v21[4] = 4LL;
        v21[5] = v141;
        v21[6] = 0LL;
        v21[7] = 0LL;
        WdLogEvent5_WdCriticalError(v21);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 18) )
      {
        if ( !KeReadStateEvent((PRKEVENT)((char *)v142 + 32)) )
          KeWaitForSingleObject((char *)v142 + 32, Executive, 0, 0, 0LL);
        DXGADAPTER::AcquireCoreResourceShared(v142);
      }
      v143 = 1;
      if ( *(_DWORD *)(v146 + 352) != 1 )
        goto LABEL_24;
      if ( v147 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v144);
        if ( *(_DWORD *)(v145 + 160) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v144);
LABEL_24:
          COREACCESS::Release((COREACCESS *)v141);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v125);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
          return 3221226166LL;
        }
      }
      v13 = v131;
      v7 = v132;
    }
    v22 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL, v17, v18, v19);
      *(_QWORD *)(v23 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v23);
      v22 = DXGGLOBAL::m_pGlobal;
    }
    v122 = (PERESOURCE *)v22;
    v123 = 0;
    if ( !v22 )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL, v17, v18, v19);
      *(_QWORD *)(v24 + 24) = 1277LL;
      WdLogEvent5_WdAssertion(v24);
      v22 = (struct DXGGLOBAL *)v122;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v22 + 39)) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = 1282LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v123 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
      v30[3] = 275LL;
      v30[4] = 4LL;
      v30[5] = &v122;
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    v31 = v122;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v31[39], 1u);
    v123 = 1;
    v121 = 0;
    v120 = 0;
    if ( (_DWORD)v8 )
    {
      v34 = v127;
      v148 = v127;
      v35 = v128;
      v36 = v124;
      while ( 1 )
      {
        v37 = *v35;
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
        if ( v45 )
        {
          if ( *(_DWORD *)(v45 + 128) == 5 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v33, v46, v47, v48);
            *(_QWORD *)(v49 + 24) = 894LL;
            WdLogEvent5_WdAssertion(v49);
          }
          v121 = 1;
          if ( v120 )
          {
LABEL_108:
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v33);
            goto LABEL_109;
          }
          v50 = *(_DWORD *)(v45 + 128);
          if ( v50 == 4 )
            goto LABEL_107;
          if ( v50 == 3 && v36 != 1 )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v33);
            v85[4] = v36;
LABEL_109:
            v85[3] = a6;
            goto LABEL_110;
          }
          DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v136, (struct DXGSYNCOBJECT *)v45, v47);
          if ( v137 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51, v53);
            v54[3] = 275LL;
            v54[4] = 4LL;
            v54[5] = &v136;
            v54[6] = 0LL;
            v54[7] = 0LL;
            WdLogEvent5_WdCriticalError(v54);
          }
          v55 = v136;
          KeEnterCriticalRegion();
          if ( *(struct _KTHREAD **)(v55 + 8) == KeGetCurrentThread() )
          {
            if ( *(int *)(v55 + 24) <= 0 )
            {
              v60 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
              *(_QWORD *)(v60 + 24) = 319LL;
              WdLogEvent5_WdAssertion(v60);
            }
            ++*(_DWORD *)(v55 + 24);
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v55 + 16, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v64 = *(_DWORD *)(v55 + 28);
                if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v57, &EventBlockThread, v62, v64);
              }
              _InterlockedIncrement64((volatile signed __int64 *)v55);
              ExAcquirePushLockExclusiveEx(v55 + 16, 0LL);
            }
            if ( *(_QWORD *)(v55 + 8) )
            {
              v65 = WdLogNewEntry5_WdAssertion(v57, v61, v62, v63);
              *(_QWORD *)(v65 + 24) = 343LL;
              WdLogEvent5_WdAssertion(v65);
            }
            if ( *(_DWORD *)(v55 + 24) )
            {
              v66 = WdLogNewEntry5_WdAssertion(v57, v61, v62, v63);
              *(_QWORD *)(v66 + 24) = 344LL;
              WdLogEvent5_WdAssertion(v66);
            }
            *(_QWORD *)(v55 + 8) = KeGetCurrentThread();
            *(_DWORD *)(v55 + 24) = 1;
            v34 = v148;
          }
          v137 = 1;
          v67 = v129;
          if ( (*(_DWORD *)(v45 + 132) & 4) != 0 )
            DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                     (DXGSYNCOBJECTCA *)v45,
                                     *(struct ADAPTER_RENDER **)(*(_QWORD *)v129 + 16LL));
          else
            DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v45 + 216);
          if ( !DxgAdapterSyncObject )
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdError(v57);
            v86[3] = a6;
            v86[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v67 + 16LL) + 16LL);
            v86[5] = -1073741811LL;
            goto LABEL_105;
          }
          v69 = *(struct ADAPTER_RENDER **)(*(_QWORD *)v67 + 16LL);
          if ( (*(_DWORD *)(v45 + 132) & 4) != 0 )
            v70 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v45, v69) + 4);
          else
            v70 = *(_QWORD *)(v45 + 248);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v69 + 47) + 8LL)
                                                                            + 736LL))(
                 v70,
                 v130) )
          {
            v73 = *(_QWORD *)v67;
            v74 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v67 + 16LL) + 632LL);
            if ( (_BYTE)v74 )
            {
              if ( (*(_BYTE *)(v45 + 132) & 1) == 0 || !*(_BYTE *)(v73 + 18719) )
                goto LABEL_104;
              if ( *(_DWORD *)(v45 + 128) != 3 )
              {
                v75 = WdLogNewEntry5_WdAssertion(v74, v73, v71, v72);
                *(_QWORD *)(v75 + 24) = 269LL;
                WdLogEvent5_WdAssertion(v75);
              }
              if ( v130 > *(_QWORD *)(v45 + 80) )
              {
LABEL_104:
                v86 = (_QWORD *)WdLogNewEntry5_WdError(v74);
                v86[3] = a6;
                v86[4] = -1073741811LL;
LABEL_105:
                WdLogEvent5_WdError(v86);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
                goto LABEL_111;
              }
            }
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
          v36 = v124;
        }
        else
        {
          v76 = *v35;
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a6 + 192));
          v77 = (v76 >> 6) & 0xFFFFFF;
          v78 = v76 >> 30;
          if ( v77 < *((_DWORD *)a6 + 58)
            && (v79 = *((_QWORD *)a6 + 27), v80 = *(_DWORD *)(v79 + 16LL * v77 + 8), v78 == ((v80 >> 4) & 3))
            && (v80 & 0x1000) == 0
            && (v80 & 0xF) != 0
            && (*(_BYTE *)(v79 + 16LL * v77 + 8) & 0xF) == 0xB )
          {
            v81 = *(_QWORD *)(v79 + 16LL * v77);
          }
          else
          {
            v81 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)a6 + 192, 0LL);
          KeLeaveCriticalRegion();
          if ( !v81 )
          {
LABEL_107:
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v33);
            v85[3] = a6;
            v85[4] = v128[v9];
            v85[5] = v9;
            goto LABEL_110;
          }
          v120 = 1;
          if ( v121 )
            goto LABEL_108;
          if ( *(_QWORD *)(v81 + 16) != *(_QWORD *)v129 )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v33);
            v85[3] = *(_QWORD *)v129;
            v85[4] = *(_QWORD *)(v81 + 16);
LABEL_110:
            WdLogEvent5_WdError(v85);
LABEL_111:
            if ( v123 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v122);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v125);
            goto LABEL_10;
          }
          if ( (*(_DWORD *)(v81 + 64) & 0x20) != 0 )
          {
            v87 = WdLogNewEntry5_WdError(v33);
            *(_QWORD *)(v87 + 24) = v128[v9];
            WdLogEvent5_WdError(v87);
            if ( v123 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v122);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v125);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
            PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
            return 3221225506LL;
          }
          v45 = *(_QWORD *)(v81 + 32);
          if ( *(_DWORD *)(v45 + 128) != 5 )
          {
            v84 = WdLogNewEntry5_WdAssertion(v33, v32, v82, v83);
            *(_QWORD *)(v84 + 24) = 1021LL;
            WdLogEvent5_WdAssertion(v84);
          }
        }
        *v34 = v45;
        ++v9;
        ++v35;
        v148 = ++v34;
        if ( v9 >= v36 )
        {
          v13 = v131;
          v7 = v132;
          LODWORD(v8) = v124;
          break;
        }
      }
    }
    v88 = 0LL;
    v153 = 0LL;
    v155 = 0;
    v89 = (char *)v127;
    if ( *(_DWORD *)(*v127 + 128LL) == 5 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v153, v8);
      v90 = v153;
      v152 = v153;
      if ( !v153 )
      {
        NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v153);
        if ( v123 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v122);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v125);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
        return 3221225495LL;
      }
      v151 = v153;
      v91 = v155;
      if ( &v7[v91] < v7 || (unsigned __int64)&v7[v91] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v90, v7, v91 * 8);
      v88 = (char *)v153;
      v7 = (const unsigned __int64 *)v153;
      v132 = (const unsigned __int64 *)v153;
    }
    v92 = 0LL;
    if ( (_DWORD)v8 )
    {
      v93 = v89 - (char *)v7;
      while ( 1 )
      {
        v94 = *(const unsigned __int64 *)((char *)v7 + v93);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
          (DXGSYNCOBJECTMUTEX *)&v138,
          (struct DXGSYNCOBJECT *)v94,
          (unsigned __int8)v88);
        if ( v139 )
        {
          v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v96, v95, v97);
          v98[3] = 275LL;
          v98[4] = 4LL;
          v98[5] = &v138;
          v98[6] = 0LL;
          v98[7] = 0LL;
          WdLogEvent5_WdCriticalError(v98);
        }
        v99 = v138;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v99 + 8) == KeGetCurrentThread() )
        {
          if ( *(int *)(v99 + 24) <= 0 )
          {
            v104 = WdLogNewEntry5_WdAssertion(v101, v100, v102, v103);
            *(_QWORD *)(v104 + 24) = 319LL;
            WdLogEvent5_WdAssertion(v104);
          }
          ++*(_DWORD *)(v99 + 24);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v99 + 16, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v109 = *(_DWORD *)(v99 + 28);
              if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v106, &EventBlockThread, v107, v109);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v99);
            ExAcquirePushLockExclusiveEx(v99 + 16, 0LL);
          }
          if ( *(_QWORD *)(v99 + 8) )
          {
            v110 = WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
            *(_QWORD *)(v110 + 24) = 343LL;
            WdLogEvent5_WdAssertion(v110);
          }
          if ( *(_DWORD *)(v99 + 24) )
          {
            v111 = WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
            *(_QWORD *)(v111 + 24) = 344LL;
            WdLogEvent5_WdAssertion(v111);
          }
          *(_QWORD *)(v99 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v99 + 24) = 1;
          LODWORD(v8) = v124;
        }
        v139 = 1;
        v112 = *(_DWORD *)(v94 + 128);
        if ( v112 == 5 )
        {
          v113 = *v7;
        }
        else
        {
          v113 = 0LL;
          if ( v112 == 3 )
            v113 = v130;
        }
        v114 = (*(_DWORD *)(v94 + 132) & 4) != 0
             ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                             (DXGSYNCOBJECTCA *)v94,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)v129 + 16LL))
               + 4)
             : *(_QWORD *)(v94 + 248);
        v115 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 16LL) + 376LL)
                                                                                        + 8LL)
                                                                            + 536LL))(
                 *((_QWORD *)v13 + 27),
                 v114,
                 v113);
        v117 = v115;
        if ( v115 < 0 )
          break;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v138);
        v92 = (unsigned int)(v92 + 1);
        ++v7;
        if ( (unsigned int)v92 >= (unsigned int)v8 )
        {
          v13 = v131;
          v88 = (char *)v153;
          v7 = v132;
          v89 = (char *)v127;
          goto LABEL_160;
        }
      }
      v118 = (_QWORD *)WdLogNewEntry5_WdError(v116);
      v118[3] = v150;
      v118[4] = v128[v92];
      v118[5] = (unsigned int)v92;
      v118[6] = v117;
      WdLogEvent5_WdError(v118);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v138);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v153);
      if ( v123 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v122);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v125);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
      return (unsigned int)v117;
    }
LABEL_160:
    if ( v120 )
    {
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_168;
      LODWORD(Timeout) = v8;
      Template_pqPR1XR1(v33, &EventWaitForSynchronizationObjectFromGpu, (__int64)v88, v13, Timeout, v89, v7);
    }
    else
    {
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        goto LABEL_168;
      LODWORD(Timeout) = v8;
      Template_pqPR1x(v33, v32, (__int64)v88, v13, Timeout, v89, v130);
    }
    v88 = (char *)v153;
LABEL_168:
    if ( v88 != &v154 && v88 )
      ExFreePoolWithTag(v88, 0);
    if ( v123 )
    {
      v123 = 0;
      ExReleaseResourceLite(v122[39]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v125);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
    if ( P != v134 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v14[3] = a6;
  v14[4] = a5;
  v14[5] = -1073741811LL;
  WdLogEvent5_WdError(v14);
LABEL_10:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
  return 3221225485LL;
}
