/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0061660 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0096C80 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C0096ED8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C00C2440 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0147720 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00035F4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_ppqqpqq @ 0x1C0011B4C (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0011C10 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0011CC4 (Template_ppqqpx.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I_N@Z @ 0x1C00899D4 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0150F48 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0152E7C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a9)
{
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct _KTHREAD **v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rsi
  unsigned int v35; // ebx
  __int64 v36; // rax
  _QWORD *v37; // rax
  struct _KTHREAD **v38; // rdi
  struct _KTHREAD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  DXGDEVICESYNCOBJECT *v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // esi
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rsi
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int128 v75; // xmm1
  __int64 v76; // rax
  __int64 v77; // rax
  struct DXGGLOBAL *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  _QWORD *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // r9
  __int128 v104; // xmm1
  __int64 v105; // rax
  struct _KTHREAD **v107; // [rsp+50h] [rbp-B0h] BYREF
  char v108; // [rsp+58h] [rbp-A8h]
  __int128 v109; // [rsp+60h] [rbp-A0h]
  __int128 v110; // [rsp+A0h] [rbp-60h]
  __int128 v111; // [rsp+B0h] [rbp-50h]
  __int128 v112; // [rsp+F0h] [rbp-10h]
  char v113[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v114; // [rsp+108h] [rbp+8h]
  int v115; // [rsp+110h] [rbp+10h]
  int Increment; // [rsp+150h] [rbp+50h]

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v19 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v20 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v20);
    v19 = 0LL;
  }
  v108 = 0;
  v107 = (struct _KTHREAD **)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v21 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *v107 == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v23 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v108 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v15, v17);
    v24[5] = &v107;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v25 = v107;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)v25 + 2) > 1 )
  {
    if ( *v25 == KeGetCurrentThread() )
    {
      if ( *((int *)v25 + 3) <= 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v29 + 24) = 328LL;
        WdLogEvent5_WdAssertion(v29);
      }
      ++*((_DWORD *)v25 + 3);
      goto LABEL_25;
    }
    if ( bTracingEnabled )
    {
      v30 = *((_DWORD *)v25 + 14);
      if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v27, &EventBlockThread, v28, v30);
    }
    Increment = 1;
    ExInterlockedAddLargeInteger((PLARGE_INTEGER)v25 + 2, (LARGE_INTEGER)1LL, (PKSPIN_LOCK)v25 + 6);
    KeWaitForSingleObject(v25 + 3, Executive, 0, 0, 0LL);
  }
  if ( *v25 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v31 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( *((_DWORD *)v25 + 3) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v32 + 24) = 355LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *v25 = KeGetCurrentThread();
  *((_DWORD *)v25 + 3) = 1;
LABEL_25:
  v33 = *((_DWORD *)this + 39) >> 2;
  v108 = 1;
  if ( (v33 & 1) != 0 )
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
  else
    DxgAdapterSyncObject = (DXGSYNCOBJECT *)((char *)this + 240);
  if ( !DxgAdapterSyncObject && a2 )
  {
    v35 = -1073741801;
    goto LABEL_126;
  }
  if ( ((*(_BYTE *)&a9.0 ^ *((_BYTE *)this + 156)) & 0x80u) != 0 )
  {
    v36 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v36 + 24) = 1405LL;
    WdLogEvent5_WdError(v36);
    v35 = -1073741811;
    goto LABEL_126;
  }
  if ( !v108 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
    v37[5] = &v107;
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  v38 = v107;
  v108 = 0;
  v39 = KeGetCurrentThread();
  if ( *v107 != v39 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v26, v28);
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[5] = v38;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( *((int *)v38 + 3) <= 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v39);
    *(_QWORD *)(v41 + 24) = 374LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( (*((_DWORD *)v38 + 3))-- == 1 )
  {
    *v38 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v38 + 2, 0xFFFFFFFF) != 1 )
      KeSetEvent((PRKEVENT)v38 + 1, 0, 0);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)v38 + 2);
  }
  KeLeaveCriticalRegion();
  if ( DxgAdapterSyncObject && *((_BYTE *)DxgAdapterSyncObject + 25) )
  {
    v47 = WdLogNewEntry5_WdEvent(v44, v43, v45, v46);
    *(_QWORD *)(v47 + 24) = this;
    *(_QWORD *)(v47 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v47);
    v35 = -1073741823;
    goto LABEL_126;
  }
  if ( *((_DWORD *)this + 38) == 5 )
  {
    if ( !a5 || !a3 || !a2 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v48 + 24) = 1424LL;
      WdLogEvent5_WdAssertion(v48);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x48uLL, 0x4B677844u);
    v54 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      v77 = WdLogNewEntry5_WdLowResource(v51, v50, v52, v53);
      *(_QWORD *)(v77 + 24) = this;
      *(_QWORD *)(v77 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v77);
      v60 = Increment;
      goto LABEL_82;
    }
    *((_QWORD *)PoolWithQuotaTag + 2) = a3;
    *(_QWORD *)PoolWithQuotaTag = 0LL;
    *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
    v55 = *((_QWORD *)PoolWithQuotaTag + 2);
    *((_BYTE *)PoolWithQuotaTag + 68) &= 0xFCu;
    *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
    *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 10) = 0;
    *((_QWORD *)PoolWithQuotaTag + 6) = 0LL;
    *((_QWORD *)PoolWithQuotaTag + 7) = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 16) = 0;
    if ( !*(_DWORD *)(v55 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v55 + 80)) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v56);
      *(_QWORD *)(v57 + 24) = 6914LL;
      WdLogEvent5_WdAssertion(v57);
    }
    v58 = *(_QWORD *)(v55 + 336);
    *(_QWORD *)v54 = v58;
    *((_QWORD *)v54 + 1) = v55 + 336;
    if ( *(_QWORD *)(v58 + 8) != v55 + 336 )
      __fastfail(3u);
    *(_QWORD *)(v58 + 8) = v54;
    *(_QWORD *)(v55 + 336) = v54;
    v60 = DXGDEVICESYNCOBJECT::Initialize(v54, this, a9, a8, a4 == 0LL);
    if ( v60 < 0 )
    {
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v54);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v54);
LABEL_82:
      if ( a4 )
        *a4 = 0LL;
      v35 = v60;
      goto LABEL_126;
    }
    *a5 = *((_DWORD *)v54 + 10);
    *a6 = (void *)*((_QWORD *)v54 + 7);
    v63 = *((_QWORD *)v54 + 6);
    *a7 = v63;
    v64 = (_QWORD *)WdLogNewEntry5_WdEvent(v63, v59, v61, v62);
    v64[3] = this;
    v64[4] = *a5;
    v65 = PsGetCurrentProcess();
    v66 = PsGetProcessWin32Process(v65);
    if ( v66 )
    {
      v71 = *(_QWORD *)(v66 + 248);
    }
    else
    {
      v72 = WdLogNewEntry5_WdEvent(v68, v67, v69, v70);
      *(_QWORD *)(v72 + 24) = v65;
      WdLogEvent5_WdEvent(v72);
      v71 = 0LL;
    }
    v64[5] = v71;
    WdLogEvent5_WdEvent(v64);
    v74 = *((_QWORD *)a2 + 2);
    v75 = *(_OWORD *)((char *)this + 216);
    v111 = *(_OWORD *)((char *)this + 152);
    v112 = v75;
    switch ( (_DWORD)v111 )
    {
      case 1:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpt(
            DWORD2(v112),
            &EventOpenSynchronizationMutex,
            v73,
            v74,
            this,
            2,
            DWORD1(v111),
            DWORD2(v112),
            DWORD2(v111));
        break;
      case 2:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpqq(
            DWORD2(v112),
            &EventOpenSemaphore,
            v73,
            v74,
            this,
            2,
            DWORD1(v111),
            DWORD2(v112),
            DWORD2(v111),
            HIDWORD(v111));
        break;
      case 3:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpx(
            DWORD2(v112),
            &EventOpenFence,
            v73,
            v74,
            this,
            2,
            DWORD1(v111),
            DWORD2(v112),
            *((_QWORD *)&v111 + 1));
        break;
      case 4:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpx(
            DWORD2(v112),
            &EventOpenCPUNotification,
            v73,
            v74,
            this,
            2,
            DWORD1(v111),
            DWORD2(v112),
            *((_QWORD *)&v111 + 1));
        break;
      case 5:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpx(
            DWORD2(v112),
            &EventOpenMonitoredFence,
            v73,
            v74,
            this,
            2,
            DWORD1(v111),
            DWORD2(v112),
            *((_QWORD *)&v111 + 1));
        break;
      default:
        v76 = WdLogNewEntry5_WdAssertion((unsigned int)(v111 - 4));
        *(_QWORD *)(v76 + 24) = 864LL;
        WdLogEvent5_WdAssertion(v76);
        break;
    }
    if ( a4 )
      *a4 = v54;
    v35 = 0;
  }
  else
  {
    if ( a5 )
    {
      v78 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v79 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v79 + 24) = 1016LL;
        WdLogEvent5_WdAssertion(v79);
        v78 = DXGGLOBAL::m_pGlobal;
      }
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v78 + 48)) )
      {
        v81 = WdLogNewEntry5_WdAssertion(v80);
        *(_QWORD *)(v81 + 24) = 1496LL;
        WdLogEvent5_WdAssertion(v81);
      }
      v114 = v19 + 192;
      if ( v19 != -192 && *(struct _KTHREAD **)(v19 + 200) == KeGetCurrentThread() )
      {
        v82 = WdLogNewEntry5_WdAssertion(v80);
        *(_QWORD *)(v82 + 24) = 1155LL;
        WdLogEvent5_WdAssertion(v82);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 192, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v85 = *(_DWORD *)(v19 + 208);
          if ( v85 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v83, &EventBlockThread, v84, v85);
        }
        ExAcquirePushLockExclusiveEx(v19 + 192, 0LL);
      }
      *(_QWORD *)(v19 + 200) = KeGetCurrentThread();
      v115 = 2;
      v86 = HMGRTABLE::AllocHandle((unsigned int *)(v19 + 216), (__int64)this, 8, 0);
      *a5 = v86;
      if ( !v86 )
      {
        v91 = WdLogNewEntry5_WdLowResource(v88, v87, v89, v90);
        *(_QWORD *)(v91 + 24) = this;
        v35 = -1073741801;
        *(_QWORD *)(v91 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v91);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v113);
        goto LABEL_126;
      }
      *(_QWORD *)(v19 + 200) = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 192, 0LL);
      KeLeaveCriticalRegion();
    }
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v92 = (_QWORD *)WdLogNewEntry5_WdEvent(v44, v43, v45, v46);
    v92[3] = this;
    if ( a5 )
      v93 = *a5;
    else
      v93 = 0LL;
    v92[4] = v93;
    v94 = PsGetCurrentProcess();
    v95 = PsGetProcessWin32Process(v94);
    if ( v95 )
    {
      v100 = *(_QWORD *)(v95 + 248);
    }
    else
    {
      v101 = WdLogNewEntry5_WdEvent(v97, v96, v98, v99);
      *(_QWORD *)(v101 + 24) = v94;
      WdLogEvent5_WdEvent(v101);
      v100 = 0LL;
    }
    v92[5] = v100;
    WdLogEvent5_WdEvent(v92);
    if ( a2 )
    {
      v103 = *((_QWORD *)a2 + 2);
      v104 = *(_OWORD *)((char *)this + 216);
      v109 = *(_OWORD *)((char *)this + 152);
      v110 = v104;
      switch ( (_DWORD)v109 )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpt(
              DWORD2(v110),
              &EventOpenSynchronizationMutex,
              v102,
              v103,
              this,
              2,
              DWORD1(v109),
              DWORD2(v110),
              DWORD2(v109));
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpqq(
              DWORD2(v110),
              &EventOpenSemaphore,
              v102,
              v103,
              this,
              2,
              DWORD1(v109),
              DWORD2(v110),
              DWORD2(v109),
              HIDWORD(v109));
          break;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v110),
              &EventOpenFence,
              v102,
              v103,
              this,
              2,
              DWORD1(v109),
              DWORD2(v110),
              *((_QWORD *)&v109 + 1));
          break;
        case 4:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v110),
              &EventOpenCPUNotification,
              v102,
              v103,
              this,
              2,
              DWORD1(v109),
              DWORD2(v110),
              *((_QWORD *)&v109 + 1));
          break;
        case 5:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v110),
              &EventOpenMonitoredFence,
              v102,
              v103,
              this,
              2,
              DWORD1(v109),
              DWORD2(v110),
              *((_QWORD *)&v109 + 1));
          break;
        default:
          v105 = WdLogNewEntry5_WdAssertion((unsigned int)(v109 - 4));
          *(_QWORD *)(v105 + 24) = 864LL;
          WdLogEvent5_WdAssertion(v105);
          break;
      }
    }
    v35 = 0;
  }
LABEL_126:
  if ( v108 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v107);
  return v35;
}
