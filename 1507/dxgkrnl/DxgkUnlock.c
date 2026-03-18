/*
 * XREFs of DxgkUnlock @ 0x1C0077510
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_UNLOCK *v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // rbx
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int8 v27; // bl
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v32; // rcx
  unsigned __int8 v33; // bl
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGDEVICE *v39; // [rsp+30h] [rbp-48h] BYREF
  int v40; // [rsp+38h] [rbp-40h]
  struct _D3DKMT_UNLOCK v41; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v42[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGADAPTER *v43; // [rsp+58h] [rbp-20h]
  char v44; // [rsp+60h] [rbp-18h]
  struct DXGDEVICE *v45; // [rsp+88h] [rbp+10h] BYREF
  struct DXGDEVICE *v46; // [rsp+90h] [rbp+18h] BYREF

  v3 = (struct _D3DKMT_UNLOCK *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2012);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v37 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v37 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v37);
    goto LABEL_55;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_55:
    v38 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_57:
    Template_q(v30, &EventProfilerExit, v31, 2012);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
  v41 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v41.hDevice, v10, &v46);
  v15 = v46;
  if ( !v46 )
  {
    v29 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v29 + 24) = v41.hDevice;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_57;
  }
  v39 = v46;
  v16 = *(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL);
  if ( *(int *)(v16 + 1648) >= 0x2000 || *(_BYTE *)(v16 + 1932) )
    v17 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12, v11, v13, v14) + 195);
  else
    v17 = 0;
  v40 = v17;
  v18 = *((_QWORD *)v15 + 2);
  if ( *((_DWORD *)v15 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v18 + 80)) )
      goto LABEL_12;
    v32 = (void *)(v18 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v18 + 56)) )
      goto LABEL_12;
    v32 = (void *)(v18 + 56);
  }
  KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( v17 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v15 + 88, 0LL) )
      goto LABEL_14;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 80LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v15 + 88));
    if ( !v33 )
    {
LABEL_34:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_14;
    }
LABEL_47:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    goto LABEL_34;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 10), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 80LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v28, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 10), 1u);
    if ( !v27 )
      goto LABEL_34;
    goto LABEL_47;
  }
LABEL_14:
  COREACCESS::COREACCESS((COREACCESS *)v42, *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL));
  if ( v44 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = v42;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v43 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v43 + 32)) )
      KeWaitForSingleObject((char *)v43 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v43);
  }
  v44 = 1;
  if ( *((_DWORD *)v46 + 88) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v39);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v35, &EventProfilerExit, v36, 2012);
    return 0LL;
  }
  else
  {
    v41.hDevice = 0;
    v22 = v46;
    v23 = DXGDEVICE::Unlock(v46, &v41, 1u);
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    if ( v40 )
      ExReleasePushLockSharedEx((char *)v22 + 88, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v22 + 10));
    KeLeaveCriticalRegion();
    if ( v45 )
    {
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v24 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    }
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2012);
    return v23;
  }
}
