/*
 * XREFs of DxgkUnlock2 @ 0x1C007A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0123C10 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock2(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r15
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r14
  void *v16; // rcx
  __int64 v17; // r9
  unsigned __int8 v18; // bl
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGDEVICE *v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGALLOCATION *v38; // rcx
  struct DXGGLOBAL *v39; // rax
  __int64 v40; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v42; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v44; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  struct _KTHREAD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // ebx
  __int64 v53; // r8
  __int64 v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62[2]; // [rsp+30h] [rbp-98h]
  struct DXGDEVICE *v63; // [rsp+38h] [rbp-90h] BYREF
  int v64; // [rsp+40h] [rbp-88h]
  _BYTE v65[8]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v66[8]; // [rsp+58h] [rbp-70h] BYREF
  DXGADAPTER *v67; // [rsp+60h] [rbp-68h]
  char v68; // [rsp+68h] [rbp-60h]
  _BYTE v69[8]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v70; // [rsp+78h] [rbp-50h]
  __int64 v71; // [rsp+88h] [rbp-40h]
  char v72; // [rsp+90h] [rbp-38h]
  struct DXGALLOCATION *v73; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v74; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGDEVICE *v75; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2104);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v60 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v60 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v60);
    goto LABEL_93;
  }
  v7 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v7 )
  {
LABEL_93:
    v61 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v61 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v61);
    goto LABEL_94;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v62 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74, *v3, v7, &v75);
  v9 = v75;
  if ( !v75 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v62[0];
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74);
LABEL_94:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v12, 2104);
    return 3221225485LL;
  }
  v63 = v75;
  v13 = *(_QWORD *)(*((_QWORD *)v75 + 2) + 16LL);
  if ( *(int *)(v13 + 1656) >= 0x2000 || *(_BYTE *)(v13 + 1940) )
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 231);
  else
    v14 = 0;
  v64 = v14;
  v15 = *((_QWORD *)v9 + 2);
  if ( *((_DWORD *)v9 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v15 + 80)) )
      goto LABEL_20;
    v16 = (void *)(v15 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v15 + 56)) )
      goto LABEL_20;
    v16 = (void *)(v15 + 56);
  }
  KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
LABEL_20:
  KeEnterCriticalRegion();
  if ( v14 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v9 + 88, 0LL) )
      goto LABEL_31;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 80LL));
    v18 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v9 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v9 + 10), 0) )
      goto LABEL_31;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 80LL));
    v18 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v19, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v9 + 10), 1u);
  }
  if ( v18 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_31:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v9, 0, v17, 0);
  if ( v68 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = v66;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v67 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v67 + 32)) )
      KeWaitForSingleObject((char *)v67 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v67);
  }
  v68 = 1;
  if ( *(_DWORD *)(v71 + 352) != 1 )
    goto LABEL_41;
  if ( v72 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v69);
    if ( *(_DWORD *)(v70 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v69);
LABEL_41:
      COREACCESS::Release((COREACCESS *)v66);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v63);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v24, &EventProfilerExit, v25, 2104);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)v7, (DXGALLOCATIONREFERENCE *)&v73, v62[1]);
  if ( !v73 )
  {
    v30 = WdLogNewEntry5_WdWarning(v27, 0LL, v28, v29);
    *(_QWORD *)(v30 + 24) = v62[1];
LABEL_47:
    WdLogEvent5_WdWarning(v30);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v63);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74);
    goto LABEL_94;
  }
  if ( !*((_QWORD *)v73 + 3) )
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v73, v28, v29);
    *(_QWORD *)(v30 + 24) = v62[1];
    *(_QWORD *)(v30 + 32) = v73;
    goto LABEL_47;
  }
  v31 = v75;
  v32 = DXGDEVICE::Unlock2(v75, v73, 1);
  v34 = v32;
  if ( v32 >= 0 )
  {
    v38 = v73;
    if ( v73 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v73 + 11);
    v39 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v40 = WdLogNewEntry5_WdAssertion(v38);
      *(_QWORD *)(v40 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v40);
      v39 = DXGGLOBAL::m_pGlobal;
    }
    if ( *((_DWORD *)v39 + 231) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v42 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v42 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v42);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v44 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v44 = *ThreadWin32Thread;
        if ( v44 )
          v47 = *(_QWORD *)(v44 + 80);
        else
          v47 = 0LL;
        if ( v47 )
        {
          v48 = KeGetCurrentThread();
          if ( !v48 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v49 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v49);
          }
          v52 = PsGetCurrentProcessSessionId();
          if ( !v52 || (unsigned int)PsGetThreadSessionId(v48) != v52 )
            goto LABEL_78;
          v54 = 0LL;
          v55 = (__int64 *)PsGetThreadWin32Thread(v48);
          if ( v55 )
            v54 = *v55;
          if ( v54 )
            v56 = *(_QWORD *)(v54 + 80);
          else
LABEL_78:
            v56 = 0LL;
          if ( *(_DWORD *)(v56 + 136) )
          {
            v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v53);
            v57[3] = 275LL;
            v57[4] = 25LL;
            v57[5] = *(int *)(v56 + 136);
            v57[6] = 0LL;
            v57[7] = 0LL;
            WdLogEvent5_WdCriticalError(v57);
          }
        }
      }
      v31 = v75;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    if ( v64 )
      ExReleasePushLockSharedEx((char *)v31 + 88, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v31 + 10));
    KeLeaveCriticalRegion();
    if ( v74 )
    {
      v58 = _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v58 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
    }
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v58, &EventProfilerExit, v59, 2104);
    return 0LL;
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v35 + 24) = v73;
    *(_QWORD *)(v35 + 32) = v34;
    WdLogEvent5_WdError(v35);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v63);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v36, &EventProfilerExit, v37, 2104);
    return (unsigned int)v34;
  }
}
