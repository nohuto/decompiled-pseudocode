/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C00CBDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D934 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000DA08 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v12; // rax
  ULONG_PTR Count; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r15
  void *v23; // rcx
  __int64 v24; // r9
  unsigned __int8 v25; // bl
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r8
  bool v37; // r10
  int v38; // ebx
  _QWORD *v39; // r8
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int Timeout; // [rsp+20h] [rbp-168h]
  _BYTE v44[8]; // [rsp+40h] [rbp-148h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+48h] [rbp-140h] BYREF
  struct DXGPAGINGQUEUE *v46; // [rsp+50h] [rbp-138h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+58h] [rbp-130h] BYREF
  __int64 v48; // [rsp+60h] [rbp-128h] BYREF
  int v49; // [rsp+68h] [rbp-120h]
  struct _KTHREAD **v50; // [rsp+70h] [rbp-118h]
  _BYTE v51[8]; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v52[16]; // [rsp+88h] [rbp-100h] BYREF
  DXGADAPTER *v53; // [rsp+98h] [rbp-F0h]
  char v54; // [rsp+A0h] [rbp-E8h]
  _BYTE v55[16]; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-D0h]
  __int64 v57; // [rsp+C8h] [rbp-C0h]
  char v58; // [rsp+D0h] [rbp-B8h]
  unsigned int v59[4]; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-98h]
  __int128 v61; // [rsp+100h] [rbp-88h]
  __int128 v62; // [rsp+110h] [rbp-78h]
  __int128 v63; // [rsp+120h] [rbp-68h]
  __int128 v64; // [rsp+130h] [rbp-58h]
  __int64 v65; // [rsp+140h] [rbp-48h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2100);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  v50 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2100);
    return 3221225485LL;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)v59 = *(_OWORD *)v12;
  v60 = *(_OWORD *)(v12 + 16);
  v61 = *(_OWORD *)(v12 + 32);
  v62 = *(_OWORD *)(v12 + 48);
  v63 = *(_OWORD *)(v12 + 64);
  v64 = *(_OWORD *)(v12 + 80);
  v65 = *(_QWORD *)(v12 + 96);
  Count = 0LL;
  v46 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v44, v59[0], ProcessDxgProcess, &v46);
  if ( !v46 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = v59[0];
    *(_QWORD *)(v18 + 32) = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdWarning(v18);
LABEL_15:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v44);
    goto LABEL_6;
  }
  if ( (BYTE8(v62) & 0x10) != 0 || (*((_QWORD *)&v62 + 1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    goto LABEL_14;
  }
  v19 = *((_QWORD *)v46 + 2);
  v48 = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 1792) >= 0x2000 || *(_BYTE *)(v20 + 2076) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20) + 191);
  else
    v21 = 0;
  v49 = v21;
  v22 = *(_QWORD *)(v19 + 16);
  if ( *(_DWORD *)(v19 + 304) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v22 + 80)) )
      goto LABEL_28;
    v23 = (void *)(v22 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v22 + 56)) )
      goto LABEL_28;
    v23 = (void *)(v22 + 56);
  }
  KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
LABEL_28:
  KeEnterCriticalRegion();
  if ( v21 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 88, 0LL) )
      goto LABEL_39;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
    v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 0) )
      goto LABEL_39;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
    v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v26, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 1u);
  }
  if ( v25 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_39:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, v19, 0, v24, 0);
  if ( v54 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[5] = v52;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v53 + 2) )
      KeWaitForSingleObject((char *)v53 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v53);
  }
  v54 = 1;
  if ( *(_DWORD *)(v57 + 376) != 1 )
    goto LABEL_49;
  if ( v58 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v55);
    if ( *(_DWORD *)(v56 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v55);
LABEL_49:
      COREACCESS::Release((COREACCESS *)v52);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v48);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v44);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v31, &EventProfilerExit, v32, 2100);
      return 3221226166LL;
    }
  }
  v45 = 0LL;
  if ( (BYTE8(v62) & 4) == 0 && (BYTE8(v62) & 8) == 0 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)ProcessDxgProcess, (DXGALLOCATIONREFERENCE *)&v47, v61);
    DXGALLOCATIONREFERENCE::MoveAssign(&v45, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
    if ( !v45 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v35[3] = -1073741811LL;
      v35[4] = (unsigned int)v61;
      v35[5] = ProcessDxgProcess;
      WdLogEvent5_WdError(v35);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v48);
      goto LABEL_15;
    }
    Count = v45[3].Count;
  }
  v36 = *(_QWORD *)(v19 + 16);
  v47 = (struct _EX_RUNDOWN_REF *)v36;
  v37 = *(_BYTE *)(v19 + 2874)
     || *(_DWORD *)(v19 + 304) == 2 && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v36 + 16)) >= 2000;
  LOBYTE(Timeout) = v37;
  v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, unsigned int *, int, int))(*(_QWORD *)(*(_QWORD *)(v36 + 400) + 8LL)
                                                                                       + 792LL))(
          *(_QWORD *)(v36 + 408),
          *((_QWORD *)v46 + 4),
          Count,
          v59,
          Timeout,
          -2);
  if ( v38 >= 0 )
  {
    v39 = (_QWORD *)(a1 + 88);
    if ( a1 + 88 >= MmUserProbeAddress )
      v39 = (_QWORD *)MmUserProbeAddress;
    *v39 = *((_QWORD *)&v64 + 1);
    v40 = (_QWORD *)(a1 + 96);
    if ( a1 + 96 >= MmUserProbeAddress )
      v40 = (_QWORD *)MmUserProbeAddress;
    *v40 = v65;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  if ( v49 )
    ExReleasePushLockSharedEx(v19 + 88, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 80));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v44);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v41, &EventProfilerExit, v42, 2100);
  return (unsigned int)v38;
}
