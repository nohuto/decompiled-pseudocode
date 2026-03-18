/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C00A42A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D934 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000DA08 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0097EC0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
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
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  void *v30; // rcx
  unsigned __int8 v31; // di
  __int64 v32; // r8
  unsigned __int8 v33; // di
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // [rsp+30h] [rbp-C8h] BYREF
  int v43; // [rsp+38h] [rbp-C0h]
  _BYTE v44[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v45[16]; // [rsp+48h] [rbp-B0h] BYREF
  DXGADAPTER *v46; // [rsp+58h] [rbp-A0h]
  char v47; // [rsp+60h] [rbp-98h]
  _BYTE v48[16]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-70h]
  char v51; // [rsp+90h] [rbp-68h]
  _D3DKMT_RECLAIMALLOCATIONS2 v52; // [rsp+A0h] [rbp-58h] BYREF
  struct DXGPAGINGQUEUE *v53; // [rsp+108h] [rbp+10h] BYREF
  char v54; // [rsp+110h] [rbp+18h] BYREF
  __int64 v55; // [rsp+118h] [rbp+20h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2071);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v26 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_32;
  }
  v8 = (_D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v52 = *v8;
  v53 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)&v54,
    v52.hPagingQueue,
    ProcessDxgProcess,
    &v53);
  if ( !v53 )
  {
    v29 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v29 + 24) = v52.hPagingQueue;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54);
LABEL_32:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2071);
    return 3221225485LL;
  }
  v13 = *((_QWORD *)v53 + 2);
  v55 = v13;
  v42 = v13;
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( *(int *)(v14 + 1792) >= 0x2000 || *(_BYTE *)(v14 + 2076) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
    v43 = v15;
  }
  else
  {
    v15 = 0;
    v43 = 0;
  }
  v16 = *(_QWORD *)(v13 + 16);
  if ( *(_DWORD *)(v13 + 304) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v16 + 80)) )
      goto LABEL_10;
    v30 = (void *)(v16 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v16 + 56)) )
      goto LABEL_10;
    v30 = (void *)(v16 + 56);
  }
  KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
LABEL_10:
  KeEnterCriticalRegion();
  if ( !v15 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 80), 0) )
      goto LABEL_12;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 96LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 80), 1u);
    if ( v31 )
      goto LABEL_49;
    goto LABEL_50;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 88, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 96LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 88));
    if ( v33 )
LABEL_49:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
LABEL_50:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_12:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v13, 0, v17, 0);
  if ( v47 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = v45;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v46 + 2) )
      KeWaitForSingleObject((char *)v46 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v46);
  }
  v47 = 1;
  if ( *(_DWORD *)(v50 + 376) != 1 )
    goto LABEL_53;
  if ( v51 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v48);
    if ( *(_DWORD *)(v49 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v48);
LABEL_53:
      COREACCESS::Release((COREACCESS *)v45);
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = v13;
      *(_QWORD *)(v39 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v39);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v40, &EventProfilerExit, v41, 2071);
      return 3221226166LL;
    }
  }
  v21 = DXGDEVICE::ReclaimAllocations(v13, v53, &v52);
  if ( v21 >= 0 )
  {
    v22 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v22 = (_QWORD *)MmUserProbeAddress;
    *v22 = v52.PagingFenceValue;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
  if ( v43 )
    ExReleasePushLockSharedEx(v13 + 88, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 80));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 2071);
  return (unsigned int)v21;
}
