/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D2AA0 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0143E0C (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C016BF80 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C016C300 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0006F8C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_ppqqpqq @ 0x1C0011F20 (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0011FE4 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0012098 (Template_ppqqpx.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0025664 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01760D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C0177B2C (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0177BE4 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0177C70 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
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
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 ProcessDxgProcess; // r14
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  int *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  struct DXGADAPTERSYNCOBJECT *v32; // rsi
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rax
  int *v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v48; // rcx
  DXGDEVICESYNCOBJECT *v49; // rax
  DXGDEVICESYNCOBJECT *v50; // rsi
  unsigned __int64 v51; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int128 v58; // xmm1
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  DXGGLOBAL *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  unsigned int v75; // eax
  __int64 v76; // rcx
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r9
  int v81; // r8d
  __int64 v82; // rcx
  _QWORD *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int128 v89; // xmm1
  __int64 v90; // rax
  struct _KTHREAD **v92; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v93; // [rsp+58h] [rbp-A8h]
  __int128 v94; // [rsp+60h] [rbp-A0h]
  __int128 v95; // [rsp+A0h] [rbp-60h]
  __int128 v96; // [rsp+B0h] [rbp-50h]
  __int128 v97; // [rsp+F0h] [rbp-10h]
  char v98[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v99; // [rsp+108h] [rbp+8h]
  int v100; // [rsp+110h] [rbp+10h]

  CurrentProcess = PsGetCurrentProcess(this);
  v93 = 0;
  v92 = (struct _KTHREAD **)((char *)this + 32);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v14);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v19 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v92[1] == CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v21 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( v93 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v15, v17);
    v22[5] = &v92;
    v22[3] = 275LL;
    v22[4] = 4LL;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v23 = (int *)v92;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v23 + 1) == KeGetCurrentThread() )
  {
    if ( v23[6] <= 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v27 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v27);
    }
    ++v23[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v28 = v23[7];
        if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v25, &EventBlockThread, v26, v28);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v23);
      ExAcquirePushLockExclusiveEx(v23 + 4, 0LL);
    }
    if ( *((_QWORD *)v23 + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v29 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v23[6] )
    {
      v30 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v30 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v30);
    }
    *((_QWORD *)v23 + 1) = KeGetCurrentThread();
    v23[6] = 1;
  }
  LOBYTE(v25) = 1;
  v31 = *((_DWORD *)this + 33) >> 2;
  v93 = 1;
  if ( (v31 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
    v25 = v93;
    v32 = DxgAdapterSyncObject;
  }
  else
  {
    v32 = (DXGSYNCOBJECT *)((char *)this + 216);
  }
  if ( !v32 && a2 )
  {
    LODWORD(v34) = -1073741801;
    goto LABEL_117;
  }
  if ( ((*(_BYTE *)&a9.0 ^ *((_BYTE *)this + 132)) & 0x80u) != 0 )
  {
    v35 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v35 + 24) = 1458LL;
    WdLogEvent5_WdError(v35);
    LODWORD(v34) = -1073741811;
    goto LABEL_117;
  }
  if ( !(_BYTE)v25 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
    v36[5] = &v92;
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  v37 = (int *)v92;
  v93 = 0;
  if ( v92[1] != KeGetCurrentThread() )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = v37;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( v37[6] <= 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v39 + 24) = 370LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( v37[6]-- == 1 )
  {
    *((_QWORD *)v37 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v37 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v32 && *((_BYTE *)v32 + 25) )
  {
    v45 = WdLogNewEntry5_WdEvent(v42);
    *(_QWORD *)(v45 + 24) = this;
    *(_QWORD *)(v45 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v45);
    LODWORD(v34) = -1073741823;
    goto LABEL_117;
  }
  if ( *((_DWORD *)this + 32) != 5 )
  {
    v61 = DXGSYNCOBJECT::AddReference(this, v41, v43, v44);
    v34 = v61;
    if ( v61 < 0 )
    {
      v66 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
      *(_QWORD *)(v66 + 24) = this;
      *(_QWORD *)(v66 + 32) = v34;
      WdLogEvent5_WdWarning(v66);
      goto LABEL_117;
    }
    if ( a5 )
    {
      v67 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v68 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v68 + 24) = 982LL;
        WdLogEvent5_WdAssertion(v68);
        v67 = DXGGLOBAL::m_pGlobal;
      }
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v67 + 39)) )
      {
        v70 = WdLogNewEntry5_WdAssertion(v69);
        *(_QWORD *)(v70 + 24) = 1578LL;
        WdLogEvent5_WdAssertion(v70);
      }
      v99 = ProcessDxgProcess + 184;
      if ( ProcessDxgProcess != -184 && *(struct _KTHREAD **)(ProcessDxgProcess + 192) == KeGetCurrentThread() )
      {
        v71 = WdLogNewEntry5_WdAssertion(v69);
        *(_QWORD *)(v71 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v71);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v74 = *(_DWORD *)(ProcessDxgProcess + 200);
          if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v72, &EventBlockThread, v73, v74);
        }
        ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = KeGetCurrentThread();
      v100 = 2;
      v75 = HMGRTABLE::AllocHandle(ProcessDxgProcess + 208, this, 8LL);
      *a5 = v75;
      v77 = v75;
      if ( !v75 )
      {
        v78 = WdLogNewEntry5_WdLowResource(v76);
        LODWORD(v34) = -1073741801;
        *(_QWORD *)(v78 + 24) = this;
        *(_QWORD *)(v78 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v78);
        _InterlockedDecrement((volatile signed __int32 *)this + 6);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
        goto LABEL_117;
      }
      v79 = (v75 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v79 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v80 = *(_QWORD *)(ProcessDxgProcess + 208);
        v81 = *(_DWORD *)(v80 + 16 * v79 + 8);
        if ( ((v77 >> 26) & 0x30) == (*(_BYTE *)(v80 + 16 * v79 + 8) & 0x30) && (v81 & 0x1000) == 0 && (v81 & 0xF) != 0 )
          *(_DWORD *)(v80 + 16LL * ((v77 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
      ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    v83 = (_QWORD *)WdLogNewEntry5_WdEvent(v63);
    v83[3] = this;
    if ( a5 )
      v84 = *a5;
    else
      v84 = 0LL;
    v83[4] = v84;
    v85 = PsGetCurrentProcess(v82);
    v83[5] = PsGetProcessDxgProcess(v85, v86);
    WdLogEvent5_WdEvent(v83);
    if ( a2 )
    {
      v88 = *((_QWORD *)a2 + 2);
      v89 = *((_OWORD *)this + 12);
      v96 = *((_OWORD *)this + 8);
      v97 = v89;
      switch ( (_DWORD)v96 )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpt(
              DWORD2(v97),
              &EventOpenSynchronizationMutex,
              v87,
              v88,
              this,
              2,
              DWORD1(v96),
              DWORD2(v97),
              DWORD2(v96));
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpqq(
              DWORD2(v97),
              &EventOpenSemaphore,
              v87,
              v88,
              this,
              2,
              DWORD1(v96),
              DWORD2(v97),
              DWORD2(v96),
              HIDWORD(v96));
          break;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              DWORD2(v97),
              &EventOpenFence,
              v87,
              v88,
              this,
              2,
              DWORD1(v96),
              DWORD2(v97),
              *((_QWORD *)&v96 + 1));
          break;
        case 4:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              DWORD2(v97),
              &EventOpenCPUNotification,
              v87,
              v88,
              this,
              2,
              DWORD1(v96),
              DWORD2(v97),
              *((_QWORD *)&v96 + 1));
          break;
        case 5:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              DWORD2(v97),
              &EventOpenMonitoredFence,
              v87,
              v88,
              this,
              2,
              DWORD1(v96),
              DWORD2(v97),
              *((_QWORD *)&v96 + 1));
          break;
        default:
          v90 = WdLogNewEntry5_WdAssertion((unsigned int)(v96 - 4));
          *(_QWORD *)(v90 + 24) = 864LL;
          WdLogEvent5_WdAssertion(v90);
          break;
      }
    }
    goto LABEL_116;
  }
  if ( !a3 || !a2 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v46 + 24) = 1478LL;
    WdLogEvent5_WdAssertion(v46);
  }
  PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x48uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v49 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, a3, a4 == 0LL, a5 != 0LL);
    v50 = v49;
    if ( v49 )
    {
      LODWORD(v34) = DXGDEVICESYNCOBJECT::Initialize(v49, this, a9, a8);
      if ( (int)v34 < 0 )
      {
        DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v50);
        DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v50);
        goto LABEL_70;
      }
      if ( a5 )
        *a5 = *((_DWORD *)v50 + 10);
      *a6 = (void *)*((_QWORD *)v50 + 7);
      v51 = *((_QWORD *)v50 + 6);
      *a7 = v51;
      v52 = (_QWORD *)WdLogNewEntry5_WdEvent(v51);
      v52[3] = this;
      v53 = *((unsigned int *)v50 + 10);
      v52[4] = v53;
      v54 = PsGetCurrentProcess(v53);
      v52[5] = PsGetProcessDxgProcess(v54, v55);
      WdLogEvent5_WdEvent(v52);
      v57 = *((_QWORD *)a2 + 2);
      v58 = *((_OWORD *)this + 12);
      v94 = *((_OWORD *)this + 8);
      v95 = v58;
      switch ( (_DWORD)v94 )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpt(
              DWORD2(v95),
              &EventOpenSynchronizationMutex,
              v56,
              v57,
              this,
              2,
              DWORD1(v94),
              DWORD2(v95),
              DWORD2(v94));
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpqq(
              DWORD2(v95),
              &EventOpenSemaphore,
              v56,
              v57,
              this,
              2,
              DWORD1(v94),
              DWORD2(v95),
              DWORD2(v94),
              HIDWORD(v94));
          break;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              DWORD2(v95),
              &EventOpenFence,
              v56,
              v57,
              this,
              2,
              DWORD1(v94),
              DWORD2(v95),
              *((_QWORD *)&v94 + 1));
          break;
        case 4:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              DWORD2(v95),
              &EventOpenCPUNotification,
              v56,
              v57,
              this,
              2,
              DWORD1(v94),
              DWORD2(v95),
              *((_QWORD *)&v94 + 1));
          break;
        case 5:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              DWORD2(v95),
              &EventOpenMonitoredFence,
              v56,
              v57,
              this,
              2,
              DWORD1(v94),
              DWORD2(v95),
              *((_QWORD *)&v94 + 1));
          break;
        default:
          v59 = WdLogNewEntry5_WdAssertion((unsigned int)(v94 - 4));
          *(_QWORD *)(v59 + 24) = 864LL;
          WdLogEvent5_WdAssertion(v59);
          break;
      }
      if ( a4 )
        *a4 = v50;
LABEL_116:
      LODWORD(v34) = 0;
      goto LABEL_117;
    }
  }
  LODWORD(v34) = -1073741801;
  v60 = WdLogNewEntry5_WdLowResource(v48);
  *(_QWORD *)(v60 + 24) = this;
  *(_QWORD *)(v60 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v60);
LABEL_70:
  if ( a4 )
    *a4 = 0LL;
LABEL_117:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v92);
  return (unsigned int)v34;
}
