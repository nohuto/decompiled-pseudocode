/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C0076720
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
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D158 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000D210 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C006F7B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r8
  _D3DKMT_RECLAIMALLOCATIONS2 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r14
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edi
  _QWORD *v22; // rdx
  __int64 v23; // r8
  DXGPAGINGQUEUE *v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  void *v29; // rcx
  unsigned __int8 v30; // di
  __int64 v31; // r8
  unsigned __int8 v32; // di
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+30h] [rbp-B8h] BYREF
  int v44; // [rsp+38h] [rbp-B0h]
  _BYTE v45[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v46[8]; // [rsp+48h] [rbp-A0h] BYREF
  DXGADAPTER *v47; // [rsp+50h] [rbp-98h]
  char v48; // [rsp+58h] [rbp-90h]
  _BYTE v49[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v50; // [rsp+68h] [rbp-80h]
  __int64 v51; // [rsp+78h] [rbp-70h]
  char v52; // [rsp+80h] [rbp-68h]
  _D3DKMT_RECLAIMALLOCATIONS2 v53; // [rsp+90h] [rbp-58h] BYREF
  struct DXGPAGINGQUEUE *v54; // [rsp+F8h] [rbp+10h] BYREF
  DXGPAGINGQUEUE *v55; // [rsp+100h] [rbp+18h] BYREF
  __int64 v56; // [rsp+108h] [rbp+20h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v41 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v41 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v41);
    goto LABEL_61;
  }
  v7 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v7 )
  {
LABEL_61:
    v42 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_63:
    Template_q(v27, &EventProfilerExit, v28, 2071);
    return 3221225485LL;
  }
  v8 = (_D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v53 = *v8;
  v54 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v55, v53.hPagingQueue, v7, &v54);
  if ( !v54 )
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v26 + 24) = v53.hPagingQueue;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v55);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_63;
  }
  v13 = *((_QWORD *)v54 + 2);
  v56 = v13;
  v43 = v13;
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( *(int *)(v14 + 1656) >= 0x2000 || *(_BYTE *)(v14 + 1940) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 231);
    v44 = v15;
  }
  else
  {
    v15 = 0;
    v44 = 0;
  }
  v16 = *(_QWORD *)(v13 + 16);
  if ( *(_DWORD *)(v13 + 280) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v16 + 80)) )
      goto LABEL_11;
    v29 = (void *)(v16 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v16 + 56)) )
      goto LABEL_11;
    v29 = (void *)(v16 + 56);
  }
  KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
LABEL_11:
  KeEnterCriticalRegion();
  if ( v15 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 88, 0LL) )
      goto LABEL_13;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 80LL));
    v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 88));
    if ( !v32 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 80), 0) )
    goto LABEL_13;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 80LL));
  v30 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v31, 40);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 80), 1u);
  if ( v30 )
LABEL_49:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
LABEL_50:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_13:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v13, 0, v17, 0);
  if ( v48 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v46;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v47 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v47 + 32)) )
      KeWaitForSingleObject((char *)v47 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v47);
  }
  v48 = 1;
  if ( *(_DWORD *)(v51 + 352) != 1 )
    goto LABEL_53;
  if ( v52 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v49);
    if ( *(_DWORD *)(v50 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v49);
LABEL_53:
      COREACCESS::Release((COREACCESS *)v46);
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v38 + 24) = v13;
      *(_QWORD *)(v38 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v38);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v55);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2071);
      return 3221226166LL;
    }
  }
  v21 = DXGDEVICE::ReclaimAllocations(v13, v54, &v53);
  if ( v21 >= 0 )
  {
    v22 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v22 = (_QWORD *)MmUserProbeAddress;
    *v22 = v53.PagingFenceValue;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  if ( v44 )
    ExReleasePushLockSharedEx(v13 + 88, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 80));
  KeLeaveCriticalRegion();
  v24 = v55;
  if ( v55 )
    DXGPAGINGQUEUE::RemoveReference(v55);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v24, &EventProfilerExit, v23, 2071);
  return (unsigned int)v21;
}
