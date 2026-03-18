/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C00AEEF0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00C3020 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0141C60 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000973C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_ppqqpqq @ 0x1C00103DC (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C00104A0 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0010554 (Template_ppqqpx.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C001E7D8 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C014C920 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C014F46C (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C014F524 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C014F5B0 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
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
  __int64 CurrentProcess; // rbx
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
  int *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  struct DXGADAPTERSYNCOBJECT *v35; // rsi
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rax
  int *v40; // rbx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  DXGDEVICESYNCOBJECT *v50; // rax
  __int64 v51; // rcx
  DXGDEVICESYNCOBJECT *v52; // rax
  DXGDEVICESYNCOBJECT *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rcx
  _QWORD *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int128 v63; // xmm1
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  struct DXGGLOBAL *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // r9d
  unsigned int v84; // eax
  __int64 v85; // rcx
  unsigned int v86; // edx
  __int64 v87; // rax
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // r9
  int v91; // r8d
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  _QWORD *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  __int128 v111; // xmm1
  __int64 v112; // rax
  struct _KTHREAD **v114; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v115; // [rsp+58h] [rbp-A8h]
  __int128 v116; // [rsp+60h] [rbp-A0h]
  __int128 v117; // [rsp+A0h] [rbp-60h]
  __int128 v118; // [rsp+B0h] [rbp-50h]
  __int128 v119; // [rsp+F0h] [rbp-10h]
  char v120[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v121; // [rsp+108h] [rbp+8h]
  int v122; // [rsp+110h] [rbp+10h]
  int v123; // [rsp+150h] [rbp+50h]

  CurrentProcess = PsGetCurrentProcess(this);
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
  v115 = 0;
  v114 = (struct _KTHREAD **)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v21 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v114[1] == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread, v15, v17, v18);
    *(_QWORD *)(v23 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v115 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v15, v17);
    v24[5] = &v114;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v25 = (int *)v114;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v25 + 1) == KeGetCurrentThread() )
  {
    if ( v25[6] <= 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v30 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v30);
    }
    ++v25[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v25 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = v25[7];
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v27, &EventBlockThread, v28, v31);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v25);
      ExAcquirePushLockExclusiveEx(v25 + 4, 0LL);
    }
    if ( *((_QWORD *)v25 + 1) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v32 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v25[6] )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v33 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v33);
    }
    *((_QWORD *)v25 + 1) = KeGetCurrentThread();
    v25[6] = 1;
  }
  LOBYTE(v27) = 1;
  v34 = *((_DWORD *)this + 33) >> 2;
  v115 = 1;
  if ( (v34 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
    v27 = v115;
    v35 = DxgAdapterSyncObject;
  }
  else
  {
    v35 = (DXGSYNCOBJECT *)((char *)this + 216);
  }
  if ( !v35 && a2 )
  {
    LODWORD(v37) = -1073741801;
    goto LABEL_128;
  }
  if ( ((*(_BYTE *)&a9.0 ^ *((_BYTE *)this + 132)) & 0x80u) != 0 )
  {
    v38 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v38 + 24) = 1348LL;
    WdLogEvent5_WdError(v38);
    LODWORD(v37) = -1073741811;
    goto LABEL_128;
  }
  if ( !(_BYTE)v27 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
    v39[5] = &v114;
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  v40 = (int *)v114;
  v115 = 0;
  if ( v114[1] != KeGetCurrentThread() )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[5] = v40;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( v40[6] <= 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    *(_QWORD *)(v42 + 24) = 363LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( v40[6]-- == 1 )
  {
    *((_QWORD *)v40 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v40 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v35 && *((_BYTE *)v35 + 25) )
  {
    v48 = WdLogNewEntry5_WdEvent(v45, v44, v46, v47);
    *(_QWORD *)(v48 + 24) = this;
    *(_QWORD *)(v48 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v48);
    LODWORD(v37) = -1073741823;
    goto LABEL_128;
  }
  if ( *((_DWORD *)this + 32) == 5 )
  {
    if ( !a3 || !a2 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
      *(_QWORD *)(v49 + 24) = 1366LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v50 = (DXGDEVICESYNCOBJECT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x48uLL);
    if ( !v50 || (v52 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(v50, a3, a4 == 0LL, a5 != 0LL), (v53 = v52) == 0LL) )
    {
      v65 = WdLogNewEntry5_WdLowResource(v51);
      *(_QWORD *)(v65 + 24) = this;
      *(_QWORD *)(v65 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v65);
      LODWORD(v37) = v123;
LABEL_73:
      if ( a4 )
        *a4 = 0LL;
      goto LABEL_128;
    }
    LODWORD(v37) = DXGDEVICESYNCOBJECT::Initialize(v52, this, a9, a8);
    if ( (int)v37 < 0 )
    {
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v53);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v53);
      goto LABEL_73;
    }
    if ( a5 )
      *a5 = *((_DWORD *)v53 + 10);
    *a6 = (void *)*((_QWORD *)v53 + 7);
    v57 = *((_QWORD *)v53 + 6);
    *a7 = v57;
    v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v57, v54, v55, v56);
    v58[3] = this;
    v59 = *((unsigned int *)v53 + 10);
    v58[4] = v59;
    v58[5] = DXGPROCESS::GetCurrent(v59);
    WdLogEvent5_WdEvent(v58);
    v62 = *((_QWORD *)a2 + 2);
    v63 = *((_OWORD *)this + 12);
    v118 = *((_OWORD *)this + 8);
    v119 = v63;
    switch ( (_DWORD)v118 )
    {
      case 1:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpt(
            DWORD2(v119),
            &EventOpenSynchronizationMutex,
            v61,
            v62,
            this,
            2,
            DWORD1(v118),
            DWORD2(v119),
            DWORD2(v118));
        break;
      case 2:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpqq(
            DWORD2(v119),
            &EventOpenSemaphore,
            v61,
            v62,
            this,
            2,
            DWORD1(v118),
            DWORD2(v119),
            DWORD2(v118),
            HIDWORD(v118));
        break;
      case 3:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpx(
            DWORD2(v119),
            &EventOpenFence,
            v61,
            v62,
            this,
            2,
            DWORD1(v118),
            DWORD2(v119),
            *((_QWORD *)&v118 + 1));
        break;
      case 4:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpx(
            DWORD2(v119),
            &EventOpenCPUNotification,
            v61,
            v62,
            this,
            2,
            DWORD1(v118),
            DWORD2(v119),
            *((_QWORD *)&v118 + 1));
        break;
      case 5:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpx(
            DWORD2(v119),
            &EventOpenMonitoredFence,
            v61,
            v62,
            this,
            2,
            DWORD1(v118),
            DWORD2(v119),
            *((_QWORD *)&v118 + 1));
        break;
      default:
        v64 = WdLogNewEntry5_WdAssertion((unsigned int)(v118 - 4), v60, v61, v62);
        *(_QWORD *)(v64 + 24) = 864LL;
        WdLogEvent5_WdAssertion(v64);
        break;
    }
    if ( a4 )
      *a4 = v53;
LABEL_127:
    LODWORD(v37) = 0;
    goto LABEL_128;
  }
  LOBYTE(v66) = EvaluateCurrentState((int **)&g_Feature_2402071864_57775485_FeatureDescriptorDetails);
  if ( v66 )
  {
    v70 = DXGSYNCOBJECT::AddReference(this);
    v37 = v70;
    if ( v70 < 0 )
    {
      v72 = WdLogNewEntry5_WdWarning(v71, v67, v68, v69);
      *(_QWORD *)(v72 + 24) = this;
      *(_QWORD *)(v72 + 32) = v37;
      WdLogEvent5_WdWarning(v72);
      goto LABEL_128;
    }
  }
  if ( !a5 )
  {
LABEL_102:
    LOBYTE(v92) = EvaluateCurrentState((int **)&g_Feature_2402071864_57775485_FeatureDescriptorDetails);
    if ( !v92 )
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v98 = (_QWORD *)WdLogNewEntry5_WdEvent(v94, v93, v95, v96);
    v98[3] = this;
    if ( a5 )
      v99 = *a5;
    else
      v99 = 0LL;
    v98[4] = v99;
    v100 = PsGetCurrentProcess(v97);
    v101 = PsGetProcessWin32Process(v100);
    if ( v101 )
    {
      v106 = *(_QWORD *)(v101 + 248);
    }
    else
    {
      v107 = WdLogNewEntry5_WdEvent(v103, v102, v104, v105);
      *(_QWORD *)(v107 + 24) = v100;
      WdLogEvent5_WdEvent(v107);
      v106 = 0LL;
    }
    v98[5] = v106;
    WdLogEvent5_WdEvent(v98);
    if ( a2 )
    {
      v110 = *((_QWORD *)a2 + 2);
      v111 = *((_OWORD *)this + 12);
      v116 = *((_OWORD *)this + 8);
      v117 = v111;
      switch ( (_DWORD)v116 )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpt(
              DWORD2(v117),
              &EventOpenSynchronizationMutex,
              v109,
              v110,
              this,
              2,
              DWORD1(v116),
              DWORD2(v117),
              DWORD2(v116));
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpqq(
              DWORD2(v117),
              &EventOpenSemaphore,
              v109,
              v110,
              this,
              2,
              DWORD1(v116),
              DWORD2(v117),
              DWORD2(v116),
              HIDWORD(v116));
          break;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v117),
              &EventOpenFence,
              v109,
              v110,
              this,
              2,
              DWORD1(v116),
              DWORD2(v117),
              *((_QWORD *)&v116 + 1));
          break;
        case 4:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v117),
              &EventOpenCPUNotification,
              v109,
              v110,
              this,
              2,
              DWORD1(v116),
              DWORD2(v117),
              *((_QWORD *)&v116 + 1));
          break;
        case 5:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v117),
              &EventOpenMonitoredFence,
              v109,
              v110,
              this,
              2,
              DWORD1(v116),
              DWORD2(v117),
              *((_QWORD *)&v116 + 1));
          break;
        default:
          v112 = WdLogNewEntry5_WdAssertion((unsigned int)(v116 - 4), v108, v109, v110);
          *(_QWORD *)(v112 + 24) = 864LL;
          WdLogEvent5_WdAssertion(v112);
          break;
      }
    }
    goto LABEL_127;
  }
  v73 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v74 = WdLogNewEntry5_WdAssertion(0LL, v67, v68, v69);
    *(_QWORD *)(v74 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v74);
    v73 = DXGGLOBAL::m_pGlobal;
  }
  if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v73 + 39)) )
  {
    v79 = WdLogNewEntry5_WdAssertion(v76, v75, v77, v78);
    *(_QWORD *)(v79 + 24) = 1468LL;
    WdLogEvent5_WdAssertion(v79);
  }
  v121 = v19 + 192;
  if ( v19 != -192 && *(struct _KTHREAD **)(v19 + 200) == KeGetCurrentThread() )
  {
    v80 = WdLogNewEntry5_WdAssertion(v76, v75, v77, v78);
    *(_QWORD *)(v80 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v80);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v83 = *(_DWORD *)(v19 + 208);
      if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v81, &EventBlockThread, v82, v83);
    }
    ExAcquirePushLockExclusiveEx(v19 + 192, 0LL);
  }
  *(_QWORD *)(v19 + 200) = KeGetCurrentThread();
  v122 = 2;
  v84 = HMGRTABLE::AllocHandle(v19 + 216, this, 8LL);
  *a5 = v84;
  v86 = v84;
  if ( v84 )
  {
    v89 = (v84 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v89 < *(_DWORD *)(v19 + 232) )
    {
      v90 = *(_QWORD *)(v19 + 216);
      v91 = *(_DWORD *)(v90 + 16 * v89 + 8);
      if ( ((v86 >> 26) & 0x30) == (*(_BYTE *)(v90 + 16 * v89 + 8) & 0x30) && (v91 & 0x1000) == 0 && (v91 & 0xF) != 0 )
        *(_DWORD *)(v90 + 16LL * ((v86 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    *(_QWORD *)(v19 + 200) = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 192, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_102;
  }
  v87 = WdLogNewEntry5_WdLowResource(v85);
  LODWORD(v37) = -1073741801;
  *(_QWORD *)(v87 + 24) = this;
  *(_QWORD *)(v87 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v87);
  LOBYTE(v88) = EvaluateCurrentState((int **)&g_Feature_2402071864_57775485_FeatureDescriptorDetails);
  if ( v88 )
    _InterlockedDecrement((volatile signed __int32 *)this + 6);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v120);
LABEL_128:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v114);
  return (unsigned int)v37;
}
