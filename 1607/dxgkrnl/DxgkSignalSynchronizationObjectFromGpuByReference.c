/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C0089640
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0026464 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01760D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  struct DXGCONTEXT *v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rbx
  struct _KEVENT *v22; // rbx
  __int64 v23; // rdx
  volatile signed __int64 *v24; // rcx
  volatile signed __int64 *v25; // rcx
  DXGGLOBAL *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  PERESOURCE *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // rcx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // ebx
  struct DXGADAPTER *v42; // rcx
  DXGADAPTER *v43; // rcx
  __int64 v45; // rax
  int v46; // r9d
  _QWORD *v47; // rax
  unsigned __int8 v48; // bl
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // r9
  DXGFASTMUTEX *v64; // [rsp+40h] [rbp-C0h] BYREF
  char v65; // [rsp+48h] [rbp-B8h]
  PERESOURCE *v66; // [rsp+50h] [rbp-B0h] BYREF
  char v67; // [rsp+58h] [rbp-A8h]
  struct DXGCONTEXT *v68; // [rsp+68h] [rbp-98h]
  char v69[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  DXGADAPTER *v71; // [rsp+98h] [rbp-68h]
  char v72; // [rsp+A0h] [rbp-60h]
  char v73[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v75; // [rsp+B8h] [rbp-48h]
  char v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C8h] [rbp-38h]
  char v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+E0h] [rbp-20h] BYREF
  int v80; // [rsp+F0h] [rbp-10h]
  _QWORD v81[2]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v82[24]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v83[144]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v84; // [rsp+1C8h] [rbp+C8h] BYREF
  int v85; // [rsp+1D0h] [rbp+D0h]
  __int64 v86; // [rsp+1D8h] [rbp+D8h] BYREF

  v84 = a2;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  v10 = ProcessDxgProcess + 184;
  if ( ProcessDxgProcess != -184 && *(struct _KTHREAD **)(ProcessDxgProcess + 192) == KeGetCurrentThread() )
  {
    v45 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v45 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v45);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *(_DWORD *)(v10 + 16);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v11, &EventBlockThread, v12, v46);
    }
    ExAcquirePushLockSharedEx(v10, 0LL);
  }
  v13 = (a3 >> 6) & 0xFFFFFF;
  if ( v13 >= *(_DWORD *)(v9 + 224) )
    goto LABEL_79;
  v14 = *(_QWORD *)(v9 + 208);
  v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
  if ( ((a3 >> 26) & 0x30) != (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30)
    || (v15 & 0x1000) != 0
    || (v15 & 0xF) == 0
    || (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) != 7 )
  {
    goto LABEL_79;
  }
  v16 = *(struct DXGCONTEXT **)(v14 + 16LL * v13);
  v68 = v16;
  if ( !v16 )
    goto LABEL_14;
  _m_prefetchw((char *)v16 + 32);
  v17 = *((_QWORD *)v16 + 4);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 4, v17 + 1, v17);
      if ( v18 == v17 )
        break;
      if ( !v17 )
        goto LABEL_79;
    }
    v16 = v68;
  }
  else
  {
LABEL_79:
    v16 = 0LL;
    v68 = 0LL;
  }
LABEL_14:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v41 = -1073741811;
    v47[3] = v9;
    v47[4] = 0LL;
    v47[5] = -1073741811LL;
    WdLogEvent5_WdError(v47);
    return (unsigned int)v41;
  }
  v20 = *((_QWORD *)v16 + 2);
  v80 = 0;
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 16);
    if ( *(_DWORD *)(v20 + 304) == 2 )
    {
      v22 = (struct _KEVENT *)(v21 + 80);
      if ( KeReadStateEvent(v22) )
        goto LABEL_18;
    }
    else
    {
      v22 = (struct _KEVENT *)(v21 + 56);
      if ( KeReadStateEvent(v22) )
      {
LABEL_18:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 80), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
          v48 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v49, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 80), 1u);
          if ( v48 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v80 = 1;
        goto LABEL_20;
      }
    }
    KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
    goto LABEL_18;
  }
LABEL_20:
  v23 = *((_QWORD *)v16 + 2);
  v24 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v71 = (DXGADAPTER *)v24;
  v72 = 0;
  if ( v24 )
  {
    _InterlockedIncrement64(v24 + 3);
    v70 = -1LL;
  }
  v25 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v75 = (struct DXGADAPTER *)v25;
  v76 = 0;
  if ( v25 )
  {
    _InterlockedIncrement64(v25 + 3);
    v74 = -1LL;
  }
  v77 = v23;
  v78 = 0;
  COREACCESS::AcquireShared((COREACCESS *)v69);
  if ( *(_DWORD *)(v77 + 376) == 1 )
  {
    if ( !v78 || (COREACCESS::AcquireShared((COREACCESS *)v73), *((_DWORD *)v75 + 44) == 1) )
    {
      v26 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v50 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v50 + 24) = 982LL;
        WdLogEvent5_WdAssertion(v50);
        v26 = DXGGLOBAL::m_pGlobal;
      }
      v66 = (PERESOURCE *)v26;
      v67 = 0;
      if ( !v26 )
      {
        v51 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v51 + 24) = 1264LL;
        WdLogEvent5_WdAssertion(v51);
        v26 = (DXGGLOBAL *)v66;
      }
      if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v26 + 39)) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v52 + 24) = 1269LL;
        WdLogEvent5_WdAssertion(v52);
      }
      if ( v67 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
        v53[5] = &v66;
        v53[3] = 275LL;
        v53[4] = 4LL;
        v53[6] = 0LL;
        v53[7] = 0LL;
        WdLogEvent5_WdCriticalError(v53);
      }
      v30 = v66;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v30[39], 1u);
      v67 = 1;
      v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v33 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v33 + 144)) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v54 + 24) = 907LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v34 = *a1;
      if ( *(_DWORD *)(*a1 + 128) != 3 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v55 + 24) = 915LL;
        WdLogEvent5_WdAssertion(v55);
      }
      v65 = 0;
      v64 = (DXGFASTMUTEX *)(v34 + 32);
      if ( v34 == -32 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v56 + 24) = 428LL;
        WdLogEvent5_WdAssertion(v56);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v64 + 1) == CurrentThread )
      {
        v57 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v57 + 24) = 435LL;
        WdLogEvent5_WdAssertion(v57);
      }
      if ( v65 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v31, v32);
        v58[5] = &v64;
        v58[3] = 275LL;
        v58[4] = 4LL;
        v58[6] = 0LL;
        v58[7] = 0LL;
        WdLogEvent5_WdCriticalError(v58);
      }
      DXGFASTMUTEX::Acquire(v64);
      v65 = 1;
      v36 = *((_QWORD *)v68 + 27);
      v79 = v36;
      if ( (*(_DWORD *)(v34 + 132) & 4) != 0 )
        DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                 (DXGSYNCOBJECTCA *)v34,
                                 *(struct ADAPTER_RENDER **)(*((_QWORD *)v16 + 2) + 16LL));
      else
        DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v34 + 216);
      if ( DxgAdapterSyncObject )
      {
        if ( (*(_DWORD *)(v34 + 132) & 4) != 0 )
          v38 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v34,
                              *(struct ADAPTER_RENDER **)(*((_QWORD *)v16 + 2) + 16LL))
                + 4);
        else
          v38 = *(_QWORD *)(v34 + 248);
        v86 = v38;
        if ( v38 )
        {
          v39 = *((_QWORD *)v16 + 2);
          v85 = 0;
          v41 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 376LL) + 8LL) + 544LL))(
                  1LL,
                  &v79,
                  1LL,
                  &v86,
                  0,
                  &v84);
          if ( v41 < 0 )
          {
            v61 = WdLogNewEntry5_WdAssertion(v40);
            *(_QWORD *)(v61 + 24) = 963LL;
            WdLogEvent5_WdAssertion(v61);
          }
        }
        else
        {
          v60 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v60 + 24) = v34;
          WdLogEvent5_WdError(v60);
          v41 = -1073741811;
        }
      }
      else
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v41 = -1073741811;
        v59[3] = v9;
        v59[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
        v59[5] = -1073741811LL;
        WdLogEvent5_WdError(v59);
      }
      if ( v65 )
      {
        v65 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v64);
      }
      if ( v67 )
      {
        v67 = 0;
        ExReleaseResourceLite(v66[39]);
        KeLeaveCriticalRegion();
      }
      goto LABEL_57;
    }
    COREACCESS::Release((COREACCESS *)v73);
  }
  COREACCESS::Release((COREACCESS *)v69);
  v41 = -1073741130;
LABEL_57:
  v42 = v75;
  if ( v75 )
  {
    if ( v76 )
    {
      COREACCESS::Release((COREACCESS *)v73);
      v42 = v75;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v42 + 2), v42);
  }
  v43 = v71;
  if ( v71 )
  {
    if ( v72 )
    {
      v72 = 0;
      v43 = v71;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v71 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v71);
        v43 = v71;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
  }
  if ( v20 && v80 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v20 + 80));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v62 = *((_QWORD *)v16 + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v81,
      (struct DXGDEVICE *)v62);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v82,
      *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v62, 2, v63, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v83);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v62, v68, (struct COREDEVICEACCESS *)v83);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
    if ( v82[16] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
    if ( v81[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v62 + 16), (struct DXGDEVICE *)v62);
  }
  return (unsigned int)v41;
}
