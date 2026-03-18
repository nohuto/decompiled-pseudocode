/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00A63C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  __int64 v4; // r14
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  unsigned int v23; // edx
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // rdi
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // rcx
  unsigned int v30; // esi
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  struct _KEVENT *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int8 v39; // si
  __int64 v40; // r8
  __int64 v41; // r14
  volatile signed __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // r9d
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  DXGADAPTER *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v77; // [rsp+48h] [rbp-C0h]
  _BYTE v78[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v79; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v80; // [rsp+68h] [rbp-A0h]
  char v81; // [rsp+70h] [rbp-98h]
  __int64 v82; // [rsp+78h] [rbp-90h] BYREF
  __int64 v83; // [rsp+80h] [rbp-88h]
  char v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h]
  char v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A8h] [rbp-60h] BYREF
  char v88; // [rsp+B0h] [rbp-58h]
  _QWORD v89[2]; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v90[9]; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v91; // [rsp+168h] [rbp+60h] BYREF

  v4 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3036);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v74 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v74 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v74);
    goto LABEL_95;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_95:
    v30 = -1073741811;
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v31[3] = -1073741811LL;
    v33 = PsGetCurrentProcess(v75);
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
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v19);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v22 = *(_DWORD *)(v11 + 208);
      if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v20, &EventBlockThread, v21, v22);
    }
    ExAcquirePushLockSharedEx(v11 + 192, 0LL);
  }
  v23 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v23 >= *(_DWORD *)(v11 + 232) )
    goto LABEL_30;
  v24 = *(_QWORD *)(v11 + 216);
  v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
  if ( (((unsigned int)v4 >> 26) & 0x30) != (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x30)
    || (v25 & 0x1000) != 0
    || (v25 & 0xF) == 0
    || (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0xF) != 7 )
  {
    goto LABEL_30;
  }
  v26 = *(_QWORD *)(v24 + 16LL * v23);
  v77 = v26;
  if ( !v26 )
    goto LABEL_31;
  _m_prefetchw((const void *)(v26 + 32));
  v27 = *(_QWORD *)(v26 + 32);
  if ( v27 )
  {
    while ( 1 )
    {
      v28 = v27;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 32), v27 + 1, v27);
      if ( v28 == v27 )
        break;
      if ( !v27 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v26 = 0LL;
    v77 = 0LL;
  }
LABEL_31:
  ExReleasePushLockSharedEx(v11 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v26 )
  {
    v30 = -1073741811;
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v31[3] = -1073741811LL;
    v33 = PsGetCurrentProcess(v32);
    v31[5] = v4;
LABEL_96:
    v31[4] = v33;
    WdLogEvent5_WdError(v31);
    goto LABEL_97;
  }
  v34 = *(_QWORD *)(v26 + 16);
  v35 = (struct _KEVENT *)(*(_QWORD *)(v34 + 16) + 80LL);
  if ( !KeReadStateEvent(v35) )
    KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v34 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 80LL));
    v39 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v40, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v34 + 80), 1u);
    if ( v39 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 80LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v41 = *(_QWORD *)(v26 + 16);
  v42 = *(volatile signed __int64 **)(*(_QWORD *)(v41 + 16) + 16LL);
  v80 = (DXGADAPTER *)v42;
  v81 = 0;
  if ( v42 && _InterlockedAdd64(v42 + 3, 1uLL) <= 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v42, v36, v37, v38);
    *(_QWORD *)(v43 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v43);
  }
  v44 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
  v83 = v44;
  v84 = 0;
  if ( v44 && _InterlockedAdd64((volatile signed __int64 *)(v44 + 24), 1uLL) <= 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v44, v36, v37, v38);
    *(_QWORD *)(v45 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v45);
  }
  v85 = v41;
  v86 = 0;
  if ( v81 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v36, v37);
    v46[5] = &v79;
    v46[3] = 275LL;
    v46[4] = 4LL;
    v46[6] = 0LL;
    v46[7] = 0LL;
    WdLogEvent5_WdCriticalError(v46);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v80 + 32)) )
      KeWaitForSingleObject((char *)v80 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v80);
  }
  v81 = 1;
  v47 = *(unsigned int *)(v85 + 352);
  if ( (_DWORD)v47 == 1 )
  {
    if ( !v86 || (COREACCESS::AcquireShared((COREACCESS *)&v82), v47 = *(unsigned int *)(v83 + 160), (_DWORD)v47 == 1) )
    {
      v56 = v77 + 360;
      if ( v77 != -360 && *(struct _KTHREAD **)(v77 + 368) == KeGetCurrentThread() )
      {
        v57 = WdLogNewEntry5_WdAssertion(v47, v36, v37, v38);
        *(_QWORD *)(v57 + 24) = 1135LL;
        WdLogEvent5_WdAssertion(v57);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v56, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v60 = *(_DWORD *)(v77 + 376);
          if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v58, &EventBlockThread, v59, v60);
        }
        ExAcquirePushLockExclusiveEx(v56, 0LL);
      }
      *(_QWORD *)(v77 + 368) = KeGetCurrentThread();
      v91.QuadPart = -100000LL;
      v61 = DXGCONTEXT::SubmitPresentHistoryToken(
              (DXGCONTEXT *)v77,
              a2,
              (struct COREDEVICEACCESS *)v78,
              0LL,
              0,
              &v91,
              0LL,
              0LL);
      *(_QWORD *)(v77 + 368) = 0LL;
      v30 = v61;
      ExReleasePushLockExclusiveEx(v56, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_70;
    }
    COREACCESS::Release((COREACCESS *)&v82);
  }
  COREACCESS::Release((COREACCESS *)&v79);
  v52 = (_QWORD *)WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
  v52[4] = v77;
  v52[3] = -1073741130LL;
  v52[5] = v11;
  WdLogEvent5_WdEvent(v52);
  v30 = -1073741130;
LABEL_70:
  v62 = v83;
  if ( v83 )
  {
    if ( v84 )
    {
      COREACCESS::Release((COREACCESS *)&v82);
      v62 = v83;
    }
    v63 = _InterlockedDecrement64((volatile signed __int64 *)(v62 + 24));
    if ( v63 )
    {
      if ( v63 < 0 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v62, v53, v54, v55);
        *(_QWORD *)(v64 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v64);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v62 + 16), (struct DXGADAPTER *)v62);
    }
  }
  v65 = v80;
  if ( v80 )
  {
    if ( v81 )
    {
      v81 = 0;
      v65 = v80;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 18) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v80);
        v65 = v80;
      }
    }
    v66 = _InterlockedDecrement64((volatile signed __int64 *)v65 + 3);
    if ( v66 )
    {
      if ( v66 < 0 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v65, v53, v54, v55);
        *(_QWORD *)(v67 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v67);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v65 + 2), v65);
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v34 + 80));
  KeLeaveCriticalRegion();
  v69 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v69 == 1 )
  {
    v70 = *(_QWORD *)(v26 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v89,
      (struct DXGDEVICE *)v70);
    v71 = *(_QWORD *)(v26 + 16);
    v88 = 0;
    v87 = *(_QWORD *)(*(_QWORD *)(v71 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v90, v70, 2, v72, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v90);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 16) + 16LL) + 160LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v70, (struct DXGCONTEXT *)v77, v90, v73);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v90);
    if ( v88 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v87);
    if ( v89[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v89);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v70 + 16), (struct DXGDEVICE *)v70);
  }
LABEL_97:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v69, &EventProfilerExit, v68, 3036);
  return v30;
}
