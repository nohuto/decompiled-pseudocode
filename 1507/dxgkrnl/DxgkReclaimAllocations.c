/*
 * XREFs of DxgkReclaimAllocations @ 0x1C0077F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C007C5C0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
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
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGDEVICE *v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int8 v28; // bl
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  void *v33; // rcx
  unsigned __int8 v34; // bl
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  struct DXGDEVICE *v45; // [rsp+30h] [rbp-C8h] BYREF
  int v46; // [rsp+38h] [rbp-C0h]
  _BYTE v47[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v48[8]; // [rsp+48h] [rbp-B0h] BYREF
  DXGADAPTER *v49; // [rsp+50h] [rbp-A8h]
  char v50; // [rsp+58h] [rbp-A0h]
  _BYTE v51[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v52; // [rsp+68h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-80h]
  char v54; // [rsp+80h] [rbp-78h]
  unsigned int v55[4]; // [rsp+90h] [rbp-68h]
  __int128 v56; // [rsp+A0h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-48h]
  _D3DKMT_RECLAIMALLOCATIONS2 v58; // [rsp+B8h] [rbp-40h] BYREF
  struct DXGDEVICE *v59; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v60; // [rsp+110h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2071);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v43 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v43 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v43);
    goto LABEL_57;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_57:
    v44 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_59:
    Template_q(v31, &EventProfilerExit, v32, 2071);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v55 = *(_OWORD *)v3;
  v56 = *(_OWORD *)(v3 + 16);
  v57 = *(_QWORD *)(v3 + 32);
  v58.hPagingQueue = 0;
  v58.NumAllocations = v57;
  v58.pResources = *(D3DKMT_HANDLE **)&v55[2];
  *(_OWORD *)&v58.HandleList = v56;
  v58.PagingFenceValue = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v55[0], v10, &v60);
  v15 = v60;
  if ( !v60 )
  {
    v30 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v30 + 24) = v55[0];
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_59;
  }
  v45 = v60;
  v16 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 16LL);
  if ( *(int *)(v16 + 1648) >= 0x2000 || *(_BYTE *)(v16 + 1932) )
    v17 = *((_DWORD *)DXGGLOBAL::GetGlobal(v16, v11, v13, v14) + 195);
  else
    v17 = 0;
  v46 = v17;
  v18 = *((_QWORD *)v15 + 2);
  if ( *((_DWORD *)v15 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v18 + 80)) )
      goto LABEL_12;
    v33 = (void *)(v18 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v18 + 56)) )
      goto LABEL_12;
    v33 = (void *)(v18 + 56);
  }
  KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !v17 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 10), 0) )
      goto LABEL_14;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 80LL));
    v28 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v29, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 10), 1u);
    if ( !v28 )
      goto LABEL_31;
    goto LABEL_46;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v15 + 88, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 80LL));
    v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v15 + 88));
    if ( !v34 )
    {
LABEL_31:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_14;
    }
LABEL_46:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    goto LABEL_31;
  }
LABEL_14:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v15, 0, v19, 0);
  if ( v50 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v48;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v49 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v49 + 32)) )
      KeWaitForSingleObject((char *)v49 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v49);
  }
  v50 = 1;
  if ( *(_DWORD *)(v53 + 352) != 1 )
    goto LABEL_49;
  if ( v54 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v51);
    if ( *(_DWORD *)(v52 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v51);
LABEL_49:
      COREACCESS::Release((COREACCESS *)v48);
      v40 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      *(_QWORD *)(v40 + 24) = v60;
      *(_QWORD *)(v40 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v40);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v41, &EventProfilerExit, v42, 2071);
      return 3221226166LL;
    }
  }
  v23 = v60;
  v24 = DXGDEVICE::ReclaimAllocations(v60, 0LL, &v58);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  if ( v46 )
    ExReleasePushLockSharedEx((char *)v23 + 88, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v23 + 10));
  KeLeaveCriticalRegion();
  if ( v59 )
  {
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v25 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 2071);
  return v24;
}
