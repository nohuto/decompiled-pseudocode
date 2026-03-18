/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C00B7890
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D158 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000D210 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rsi
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r14
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
  __int64 v34; // rcx
  ULONG_PTR Count; // r11
  _QWORD *v36; // rax
  __int64 v37; // r8
  bool v38; // r10
  _QWORD *v39; // rdx
  _QWORD *v40; // r8
  __int64 v41; // r9
  int v42; // r14d
  struct _EX_RUNDOWN_REF *v43; // rcx
  struct DXGGLOBAL *v44; // rax
  __int64 v45; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v47; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v49; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  struct _KTHREAD *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // ebx
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 *v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // rax
  __int64 v66; // r8
  DXGPAGINGQUEUE *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  int Timeout; // [rsp+20h] [rbp-158h]
  DXGPAGINGQUEUE *v71; // [rsp+40h] [rbp-138h] BYREF
  struct _EX_RUNDOWN_REF *v72; // [rsp+48h] [rbp-130h] BYREF
  struct DXGPAGINGQUEUE *v73; // [rsp+50h] [rbp-128h] BYREF
  __int64 v74; // [rsp+58h] [rbp-120h] BYREF
  int v75; // [rsp+60h] [rbp-118h]
  struct DXGPROCESS *v76; // [rsp+68h] [rbp-110h]
  __int64 v77; // [rsp+70h] [rbp-108h]
  _BYTE v78[8]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v79[8]; // [rsp+88h] [rbp-F0h] BYREF
  DXGADAPTER *v80; // [rsp+90h] [rbp-E8h]
  char v81; // [rsp+98h] [rbp-E0h]
  _BYTE v82[8]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-D0h]
  __int64 v84; // [rsp+B8h] [rbp-C0h]
  char v85; // [rsp+C0h] [rbp-B8h]
  unsigned int v86[4]; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v87; // [rsp+E0h] [rbp-98h]
  __int128 v88; // [rsp+F0h] [rbp-88h]
  __int128 v89; // [rsp+100h] [rbp-78h]
  __int128 v90; // [rsp+110h] [rbp-68h]
  __int128 v91; // [rsp+120h] [rbp-58h]
  __int64 v92; // [rsp+130h] [rbp-48h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2100);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v68 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v68 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v68);
    goto LABEL_101;
  }
  v10 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  v76 = v10;
  if ( !v10 )
  {
LABEL_101:
    v69 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v69 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v69);
    goto LABEL_102;
  }
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v86 = *(_OWORD *)v11;
  v87 = *(_OWORD *)(v11 + 16);
  v88 = *(_OWORD *)(v11 + 32);
  v89 = *(_OWORD *)(v11 + 48);
  v90 = *(_OWORD *)(v11 + 64);
  v91 = *(_OWORD *)(v11 + 80);
  v92 = *(_QWORD *)(v11 + 96);
  v73 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v71, v86[0], v10, &v73);
  if ( !v73 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = v86[0];
    *(_QWORD *)(v16 + 32) = -1073741811LL;
LABEL_10:
    WdLogEvent5_WdWarning(v16);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v71);
LABEL_102:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2100);
    return 3221225485LL;
  }
  if ( (BYTE8(v89) & 0x10) != 0 || (*((_QWORD *)&v89 + 1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    goto LABEL_10;
  }
  v19 = *((_QWORD *)v73 + 2);
  v74 = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 1656) >= 0x2000 || *(_BYTE *)(v20 + 1940) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20) + 231);
  else
    v21 = 0;
  v75 = v21;
  v22 = *(_QWORD *)(v19 + 16);
  if ( *(_DWORD *)(v19 + 280) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v22 + 80)) )
      goto LABEL_23;
    v23 = (void *)(v22 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v22 + 56)) )
      goto LABEL_23;
    v23 = (void *)(v22 + 56);
  }
  KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
LABEL_23:
  KeEnterCriticalRegion();
  if ( v21 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 88, 0LL) )
      goto LABEL_34;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 80LL));
    v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 0) )
      goto LABEL_34;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 80LL));
    v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v26, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 1u);
  }
  if ( v25 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_34:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v19, 0, v24, 0);
  if ( v81 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[5] = v79;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v80 + 32)) )
      KeWaitForSingleObject((char *)v80 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v80);
  }
  v81 = 1;
  if ( *(_DWORD *)(v84 + 352) != 1 )
    goto LABEL_44;
  if ( v85 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v82);
    if ( *(_DWORD *)(v83 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v82);
LABEL_44:
      COREACCESS::Release((COREACCESS *)v79);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v74);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v71);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v31, &EventProfilerExit, v32, 2100);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)v10, (DXGALLOCATIONREFERENCE *)&v72, v88);
  Count = 0LL;
  if ( (BYTE8(v89) & 4) == 0 && (BYTE8(v89) & 8) == 0 )
  {
    if ( !v72 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v36[3] = -1073741811LL;
      v36[4] = (unsigned int)v88;
      v36[5] = v10;
      WdLogEvent5_WdError(v36);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v74);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v71);
      goto LABEL_102;
    }
    Count = v72[3].Count;
  }
  v37 = *(_QWORD *)(v19 + 16);
  v77 = v37;
  v38 = *(_BYTE *)(v19 + 2850)
     || *(_DWORD *)(v19 + 280) == 2 && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v37 + 16)) >= 2000;
  LOBYTE(Timeout) = v38;
  v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, unsigned int *, int, int))(*(_QWORD *)(*(_QWORD *)(v37 + 424) + 8LL)
                                                                                       + 776LL))(
          *(_QWORD *)(v37 + 432),
          *((_QWORD *)v73 + 4),
          Count,
          v86,
          Timeout,
          -2);
  if ( v42 >= 0 )
  {
    v40 = (_QWORD *)(a1 + 88);
    if ( a1 + 88 >= MmUserProbeAddress )
      v40 = (_QWORD *)MmUserProbeAddress;
    *v40 = *((_QWORD *)&v91 + 1);
    v39 = (_QWORD *)(a1 + 96);
    if ( a1 + 96 >= MmUserProbeAddress )
      v39 = (_QWORD *)MmUserProbeAddress;
    *v39 = v92;
  }
  v43 = v72;
  if ( v72 )
    ExReleaseRundownProtection(v72 + 11);
  v44 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v45 = WdLogNewEntry5_WdAssertion(v43);
    *(_QWORD *)(v45 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v45);
    v44 = DXGGLOBAL::m_pGlobal;
  }
  if ( *((_DWORD *)v44 + 231) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v47 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v47 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v47);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v43, v39, v40, v41);
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      v49 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v49 = *ThreadWin32Thread;
      if ( v49 )
        v55 = *(_QWORD *)(v49 + 80);
      else
        v55 = 0LL;
      if ( v55 )
      {
        v56 = KeGetCurrentThread();
        if ( !v56 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v52);
          *(_QWORD *)(v57 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v57);
        }
        v60 = PsGetCurrentProcessSessionId(v52, v51, v53, v54);
        if ( !v60 || (unsigned int)PsGetThreadSessionId(v56) != v60 )
          goto LABEL_87;
        v62 = 0LL;
        v63 = (__int64 *)PsGetThreadWin32Thread(v56);
        if ( v63 )
          v62 = *v63;
        if ( v62 )
          v64 = *(_QWORD *)(v62 + 80);
        else
LABEL_87:
          v64 = 0LL;
        if ( *(_DWORD *)(v64 + 136) )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, v58, v61);
          v65[3] = 275LL;
          v65[4] = 25LL;
          v65[5] = *(int *)(v64 + 136);
          v65[6] = 0LL;
          v65[7] = 0LL;
          WdLogEvent5_WdCriticalError(v65);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
  if ( v75 )
    ExReleasePushLockSharedEx(v19 + 88, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 80));
  KeLeaveCriticalRegion();
  v67 = v71;
  if ( v71 )
    DXGPAGINGQUEUE::RemoveReference(v71);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v67, &EventProfilerExit, v66, 2100);
  return (unsigned int)v42;
}
