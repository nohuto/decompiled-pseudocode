/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0089140
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // edx
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 v26; // rcx
  unsigned int v27; // edi
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r14
  struct _KEVENT *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int8 v34; // di
  __int64 v35; // r8
  __int64 v36; // rsi
  volatile signed __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  DXGADAPTER *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // r14
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v66; // [rsp+48h] [rbp-C0h]
  _BYTE v67[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v69; // [rsp+68h] [rbp-A0h]
  char v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h] BYREF
  __int64 v72; // [rsp+80h] [rbp-88h]
  char v73; // [rsp+88h] [rbp-80h]
  __int64 v74; // [rsp+90h] [rbp-78h]
  char v75; // [rsp+98h] [rbp-70h]
  _QWORD v76[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v77[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-40h]
  _BYTE v79[72]; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v80; // [rsp+178h] [rbp+70h] BYREF

  v4 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3036);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v64 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v64 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v64);
    goto LABEL_95;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_95:
    v27 = -1073741811;
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v28[3] = -1073741811LL;
    v29 = PsGetCurrentProcess();
    goto LABEL_96;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *(_DWORD *)(v11 + 208);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v12, &EventBlockThread, v13, v14);
    }
    ExAcquirePushLockSharedEx(v11 + 192, 0LL);
  }
  ExReleasePushLockSharedEx(v11 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 != -192 && *(struct _KTHREAD **)(v11 + 200) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *(_DWORD *)(v11 + 208);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(v11 + 192, 0LL);
  }
  v20 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v20 >= *(_DWORD *)(v11 + 232) )
    goto LABEL_30;
  v21 = *(_QWORD *)(v11 + 216);
  v22 = *(_DWORD *)(v21 + 16LL * v20 + 8);
  if ( (((unsigned int)v4 >> 26) & 0x30) != (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x30)
    || (v22 & 0x1000) != 0
    || (v22 & 0xF) == 0
    || (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0xF) != 7 )
  {
    goto LABEL_30;
  }
  v23 = *(_QWORD *)(v21 + 16LL * v20);
  v66 = v23;
  if ( !v23 )
    goto LABEL_31;
  _m_prefetchw((const void *)(v23 + 32));
  v24 = *(_QWORD *)(v23 + 32);
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 32), v24 + 1, v24);
      if ( v25 == v24 )
        break;
      if ( !v24 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v23 = 0LL;
    v66 = 0LL;
  }
LABEL_31:
  ExReleasePushLockSharedEx(v11 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    v27 = -1073741811;
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v28[3] = -1073741811LL;
    v29 = PsGetCurrentProcess();
    v28[5] = v4;
LABEL_96:
    v28[4] = v29;
    WdLogEvent5_WdError(v28);
    goto LABEL_97;
  }
  v30 = *(_QWORD *)(v23 + 16);
  v78 = v30;
  v31 = (struct _KEVENT *)(*(_QWORD *)(v30 + 16) + 80LL);
  if ( !KeReadStateEvent(v31) )
    KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 80LL));
    v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v35, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 80), 1u);
    if ( v34 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 80LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v36 = *(_QWORD *)(v23 + 16);
  v37 = *(volatile signed __int64 **)(*(_QWORD *)(v36 + 16) + 16LL);
  v69 = (DXGADAPTER *)v37;
  v70 = 0;
  if ( v37 && _InterlockedAdd64(v37 + 3, 1uLL) <= 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37);
    *(_QWORD *)(v38 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v39 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL);
  v72 = v39;
  v73 = 0;
  if ( v39 && _InterlockedAdd64((volatile signed __int64 *)(v39 + 24), 1uLL) <= 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v39);
    *(_QWORD *)(v40 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v74 = v36;
  v75 = 0;
  if ( v70 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v32, v33);
    v41[5] = &v68;
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v69 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v69 + 32)) )
      KeWaitForSingleObject((char *)v69 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v69);
  }
  v70 = 1;
  v42 = *(unsigned int *)(v74 + 352);
  if ( (_DWORD)v42 == 1 )
  {
    if ( !v75 || (COREACCESS::AcquireShared((COREACCESS *)&v71), v42 = *(unsigned int *)(v72 + 160), (_DWORD)v42 == 1) )
    {
      v48 = v66 + 360;
      if ( v66 != -360 && *(struct _KTHREAD **)(v66 + 368) == KeGetCurrentThread() )
      {
        v49 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v49 + 24) = 1155LL;
        WdLogEvent5_WdAssertion(v49);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v48, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v52 = *(_DWORD *)(v66 + 376);
          if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v50, &EventBlockThread, v51, v52);
        }
        ExAcquirePushLockExclusiveEx(v48, 0LL);
      }
      *(_QWORD *)(v66 + 368) = KeGetCurrentThread();
      v80.QuadPart = -100000LL;
      v53 = DXGCONTEXT::SubmitPresentHistoryToken(
              (struct _EX_RUNDOWN_REF *)v66,
              a2,
              (struct COREDEVICEACCESS *)v67,
              0LL,
              0,
              &v80,
              0LL,
              0LL);
      *(_QWORD *)(v66 + 368) = 0LL;
      v27 = v53;
      ExReleasePushLockExclusiveEx(v48, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_70;
    }
    COREACCESS::Release((COREACCESS *)&v71);
  }
  COREACCESS::Release((COREACCESS *)&v68);
  v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v44, v43, v45, v46);
  v47[4] = v66;
  v47[3] = -1073741130LL;
  v47[5] = v11;
  WdLogEvent5_WdEvent(v47);
  v27 = -1073741130;
LABEL_70:
  v54 = v72;
  if ( v72 )
  {
    if ( v73 )
    {
      COREACCESS::Release((COREACCESS *)&v71);
      v54 = v72;
    }
    v55 = _InterlockedDecrement64((volatile signed __int64 *)(v54 + 24));
    if ( v55 )
    {
      if ( v55 < 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v54);
        *(_QWORD *)(v56 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v56);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v54 + 16), (struct DXGADAPTER *)v54);
    }
  }
  v57 = v69;
  if ( v69 )
  {
    if ( v70 )
    {
      v70 = 0;
      v57 = v69;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v69 + 18) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v69);
        v57 = v69;
      }
    }
    v58 = _InterlockedDecrement64((volatile signed __int64 *)v57 + 3);
    if ( v58 )
    {
      if ( v58 < 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v57);
        *(_QWORD *)(v59 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v59);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v30 + 80));
  KeLeaveCriticalRegion();
  v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v61 == 1 )
  {
    v62 = *(_QWORD *)(v23 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v76,
      (struct DXGDEVICE *)v62);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v77,
      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, v62, 2, v63, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v79);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL) + 160LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v62, (struct DXGCONTEXT *)v66, (struct COREDEVICEACCESS *)v79);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
    if ( v77[8] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    if ( v76[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v62 + 16), (struct DXGDEVICE *)v62);
  }
LABEL_97:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v61, &EventProfilerExit, v60, 3036);
  return v27;
}
