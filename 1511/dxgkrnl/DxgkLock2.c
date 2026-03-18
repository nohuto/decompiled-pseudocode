/*
 * XREFs of DxgkLock2 @ 0x1C0076C50
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
 *     ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00110C4 (-VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0123C10 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r15
  ULONG64 v8; // rax
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r14
  void *v17; // rcx
  __int64 v18; // r9
  unsigned __int8 v19; // bl
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGALLOCATION *v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  struct DXGDEVICE *v39; // rbx
  int v40; // r14d
  _QWORD *v41; // r8
  struct DXGALLOCATION *v42; // rcx
  struct DXGGLOBAL *v43; // rax
  __int64 v44; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v46; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v48; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  struct _KTHREAD *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // r8
  __int64 v58; // rbx
  __int64 *v59; // rax
  __int64 v60; // rbx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  struct DXGDEVICE *v66; // [rsp+30h] [rbp-B8h] BYREF
  struct DXGDEVICE *v67; // [rsp+38h] [rbp-B0h] BYREF
  int v68; // [rsp+40h] [rbp-A8h]
  unsigned int v69[4]; // [rsp+48h] [rbp-A0h]
  void *v70; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v71[8]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v72[8]; // [rsp+68h] [rbp-80h] BYREF
  DXGADAPTER *v73; // [rsp+70h] [rbp-78h]
  char v74; // [rsp+78h] [rbp-70h]
  _BYTE v75[8]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v76; // [rsp+88h] [rbp-60h]
  __int64 v77; // [rsp+98h] [rbp-50h]
  char v78; // [rsp+A0h] [rbp-48h]
  struct DXGALLOCATION *v79; // [rsp+100h] [rbp+18h] BYREF
  struct DXGDEVICE *v80; // [rsp+108h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2103);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v64 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v64 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v64);
    goto LABEL_101;
  }
  v7 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v7 )
  {
LABEL_101:
    v65 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v65 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v65);
    goto LABEL_102;
  }
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)v69 = *(_OWORD *)v8;
  v70 = *(void **)(v8 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80, v69[0], v7, &v66);
  v10 = v66;
  if ( !v66 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v69[0];
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
LABEL_102:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2103);
    return 3221225485LL;
  }
  v67 = v66;
  v14 = *(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL);
  if ( *(int *)(v14 + 1656) >= 0x2000 || *(_BYTE *)(v14 + 1940) )
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal(v14) + 231);
  else
    v15 = 0;
  v68 = v15;
  v16 = *((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v16 + 80)) )
      goto LABEL_20;
    v17 = (void *)(v16 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v16 + 56)) )
      goto LABEL_20;
    v17 = (void *)(v16 + 56);
  }
  KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
LABEL_20:
  KeEnterCriticalRegion();
  if ( v15 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 88, 0LL) )
      goto LABEL_31;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 80LL));
    v19 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 0) )
      goto LABEL_31;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 80LL));
    v19 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v20, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 1u);
  }
  if ( v19 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_31:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v10, 0, v18, 0);
  if ( v74 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[5] = v72;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v73 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v73 + 32)) )
      KeWaitForSingleObject((char *)v73 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v73);
  }
  v74 = 1;
  if ( *(_DWORD *)(v77 + 352) != 1 )
    goto LABEL_41;
  if ( v78 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v75);
    if ( *(_DWORD *)(v76 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v75);
LABEL_41:
      COREACCESS::Release((COREACCESS *)v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v67);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v25, &EventProfilerExit, v26, 2103);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)v7, (DXGALLOCATIONREFERENCE *)&v79, v69[1]);
  v32 = v79;
  if ( !v79 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v33[3] = v69[1];
    v33[4] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v33);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v79);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v67);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
    goto LABEL_102;
  }
  if ( !*((_QWORD *)v79 + 3) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v33[3] = v69[1];
    v33[4] = v79;
    v33[5] = -1073741811LL;
    goto LABEL_47;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v79 + 6) + 4LL) & 2) == 0 )
  {
    v34 = *((_QWORD *)v79 + 5);
    if ( v34 )
    {
      v35 = *(_DWORD *)(v34 + 4);
      if ( (v35 & 1) != 0 && (v35 & 2) == 0 )
      {
        v36 = *((_QWORD *)v10 + 2);
        v37 = *(_QWORD *)(v36 + 16);
        if ( (*(_DWORD *)(v37 + 284) & 0x10) == 0 )
        {
          v38 = *(unsigned int *)(v37 + 1388);
          if ( (v38 & 0x80u) == 0LL )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v36, v30, v31);
            v33[3] = v66;
            v33[4] = v79;
            v33[5] = -1073741811LL;
            goto LABEL_47;
          }
        }
      }
    }
  }
  v39 = v66;
  if ( !*((_DWORD *)v66 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v66 + 10));
  v40 = VIDMM_EXPORT::VidMmLock(
          *(VIDMM_EXPORT **)(*((_QWORD *)v10 + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v10 + 2) + 432LL),
          *((struct _VIDMM_MULTI_ALLOC **)v32 + 3),
          v31,
          &v70);
  if ( v40 >= 0 )
  {
    v41 = (_QWORD *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v41 = (_QWORD *)MmUserProbeAddress;
    *v41 = v70;
  }
  v42 = v79;
  if ( v79 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v79 + 11);
  v43 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v44 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v44 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v44);
    v43 = DXGGLOBAL::m_pGlobal;
  }
  if ( *((_DWORD *)v43 + 231) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v46 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v46 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v46);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      v48 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v48 = *ThreadWin32Thread;
      if ( v48 )
        v51 = *(_QWORD *)(v48 + 80);
      else
        v51 = 0LL;
      if ( v51 )
      {
        v52 = KeGetCurrentThread();
        if ( !v52 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v50);
          *(_QWORD *)(v53 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v53);
        }
        v56 = PsGetCurrentProcessSessionId();
        if ( !v56 || (unsigned int)PsGetThreadSessionId(v52) != v56 )
          goto LABEL_86;
        v58 = 0LL;
        v59 = (__int64 *)PsGetThreadWin32Thread(v52);
        if ( v59 )
          v58 = *v59;
        if ( v58 )
          v60 = *(_QWORD *)(v58 + 80);
        else
LABEL_86:
          v60 = 0LL;
        if ( *(_DWORD *)(v60 + 136) )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54, v57);
          v61[3] = 275LL;
          v61[4] = 25LL;
          v61[5] = *(int *)(v60 + 136);
          v61[6] = 0LL;
          v61[7] = 0LL;
          WdLogEvent5_WdCriticalError(v61);
        }
      }
    }
    v39 = v66;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
  if ( v68 )
    ExReleasePushLockSharedEx((char *)v39 + 88, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v39 + 10));
  KeLeaveCriticalRegion();
  if ( v80 )
  {
    v62 = _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v62 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v80 + 2), v80);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v62, &EventProfilerExit, v63, 2103);
  return (unsigned int)v40;
}
