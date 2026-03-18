/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00B4080
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rdi
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rcx
  __int64 v23; // r15
  struct _KEVENT *v24; // rbx
  __int64 v25; // rdx
  volatile signed __int64 *v26; // rcx
  volatile signed __int64 *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // r14d
  struct DXGADAPTER *v34; // rcx
  DXGADAPTER *v35; // rcx
  struct DXGADAPTER *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int8 v40; // bl
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rcx
  int v44; // r9d
  __int64 v45; // rax
  int v46; // r9d
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // r9d
  __int64 v54; // rbx
  __int64 v55; // r9
  __int64 v56; // [rsp+58h] [rbp-B0h]
  __int64 v57; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGADAPTER *v58; // [rsp+70h] [rbp-98h]
  char v59; // [rsp+78h] [rbp-90h]
  _BYTE v60[8]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v61[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-70h]
  DXGADAPTER *v63; // [rsp+A0h] [rbp-68h]
  char v64; // [rsp+A8h] [rbp-60h]
  _BYTE v65[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-50h]
  struct DXGADAPTER *v67; // [rsp+C0h] [rbp-48h]
  char v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  char v70; // [rsp+D8h] [rbp-30h]
  _QWORD v71[2]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v72[24]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v73; // [rsp+110h] [rbp+8h]
  _BYTE v74[88]; // [rsp+128h] [rbp+20h] BYREF
  union _LARGE_INTEGER v75; // [rsp+1D8h] [rbp+D0h] BYREF

  v4 = (unsigned int)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3036);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v33 = -1073741811;
    v42 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    *(_QWORD *)(v42 + 32) = PsGetCurrentProcess(v43);
    WdLogEvent5_WdError(v42);
    goto LABEL_46;
  }
  v10 = ProcessDxgProcess + 184;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v44 = *(_DWORD *)(v10 + 16);
      if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v11, &EventBlockThread, v12, v44);
    }
    ExAcquirePushLockSharedEx(v10, 0LL);
  }
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 && *(struct _KTHREAD **)(v10 + 8) == KeGetCurrentThread() )
  {
    v45 = WdLogNewEntry5_WdAssertion(v13);
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
        Template_q(v14, &EventBlockThread, v15, v46);
    }
    ExAcquirePushLockSharedEx(v10, 0LL);
  }
  v16 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v16 >= *(_DWORD *)(v9 + 224) )
    goto LABEL_66;
  v17 = *(_QWORD *)(v9 + 208);
  v18 = *(_DWORD *)(v17 + 16LL * v16 + 8);
  if ( (((unsigned int)v4 >> 26) & 0x30) != (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30)
    || (v18 & 0x1000) != 0
    || (v18 & 0xF) == 0
    || (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) != 7 )
  {
    goto LABEL_66;
  }
  v19 = *(_QWORD *)(v17 + 16LL * v16);
  v56 = v19;
  if ( !v19 )
    goto LABEL_16;
  _m_prefetchw((const void *)(v19 + 32));
  v20 = *(_QWORD *)(v19 + 32);
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 32), v20 + 1, v20);
      if ( v21 == v20 )
        break;
      if ( !v20 )
        goto LABEL_66;
    }
  }
  else
  {
LABEL_66:
    v19 = 0LL;
    v56 = 0LL;
  }
LABEL_16:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v33 = -1073741811;
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v47[3] = -1073741811LL;
    v49 = PsGetCurrentProcess(v48);
    v47[5] = v4;
    v47[4] = v49;
    WdLogEvent5_WdError(v47);
    goto LABEL_46;
  }
  v23 = *(_QWORD *)(v19 + 16);
  v73 = v23;
  v24 = (struct _KEVENT *)(*(_QWORD *)(v23 + 16) + 80LL);
  if ( !KeReadStateEvent(v24) )
    KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 80), 1u);
    if ( v40 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v58 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v58 + 3);
  v57 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v58 + 120, 0LL);
  v25 = *(_QWORD *)(v19 + 16);
  v59 = 1;
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(v25 + 16) + 16LL);
  v63 = (DXGADAPTER *)v26;
  v64 = 0;
  if ( v26 )
  {
    _InterlockedIncrement64(v26 + 3);
    v62 = -1LL;
  }
  v27 = *(volatile signed __int64 **)(*(_QWORD *)(v25 + 16) + 16LL);
  v67 = (struct DXGADAPTER *)v27;
  v68 = 0;
  if ( v27 )
  {
    _InterlockedIncrement64(v27 + 3);
    v66 = -1LL;
  }
  v69 = v25;
  v70 = 0;
  COREACCESS::AcquireShared((COREACCESS *)v61);
  v28 = *(unsigned int *)(v69 + 376);
  if ( (_DWORD)v28 == 1 )
  {
    if ( !v70 || (COREACCESS::AcquireShared((COREACCESS *)v65), v28 = *((unsigned int *)v67 + 44), (_DWORD)v28 == 1) )
    {
      v29 = v56 + 360;
      if ( v56 != -360 && *(struct _KTHREAD **)(v56 + 368) == KeGetCurrentThread() )
      {
        v52 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v52 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v52);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v53 = *(_DWORD *)(v56 + 376);
          if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v30, &EventBlockThread, v31, v53);
        }
        ExAcquirePushLockExclusiveEx(v29, 0LL);
      }
      *(_QWORD *)(v56 + 368) = KeGetCurrentThread();
      v75.QuadPart = -100000LL;
      v32 = DXGCONTEXT::SubmitPresentHistoryToken(
              (struct _EX_RUNDOWN_REF *)v56,
              a2,
              (struct COREDEVICEACCESS *)v60,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v57,
              0LL,
              0,
              &v75,
              0LL,
              0LL);
      *(_QWORD *)(v56 + 368) = 0LL;
      v33 = v32;
      ExReleasePushLockExclusiveEx(v29, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_31;
    }
    COREACCESS::Release((COREACCESS *)v65);
  }
  COREACCESS::Release((COREACCESS *)v61);
  v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v50);
  v51[4] = v56;
  v51[3] = -1073741130LL;
  v51[5] = v9;
  WdLogEvent5_WdEvent(v51);
  v33 = -1073741130;
LABEL_31:
  v34 = v67;
  if ( v67 )
  {
    if ( v68 )
    {
      COREACCESS::Release((COREACCESS *)v65);
      v34 = v67;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v34 + 2), v34);
  }
  v35 = v63;
  if ( v63 )
  {
    if ( v64 )
    {
      v64 = 0;
      v35 = v63;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v63 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v63);
        v35 = v63;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v35 + 2), v35);
  }
  if ( v59 )
  {
    v36 = v58;
    ExReleasePushLockSharedEx((char *)v58 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v23 + 80));
  KeLeaveCriticalRegion();
  v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v38 == 1 )
  {
    v54 = *(_QWORD *)(v19 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v71,
      (struct DXGDEVICE *)v54);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v72,
      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v54, 2, v55, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v74);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v54, (struct DXGCONTEXT *)v56, (struct COREDEVICEACCESS *)v74);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
    if ( v72[16] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v72);
    if ( v71[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v54 + 16), (struct DXGDEVICE *)v54);
  }
LABEL_46:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v38, &EventProfilerExit, v37, 3036);
  return v33;
}
