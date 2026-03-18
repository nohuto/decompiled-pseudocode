/*
 * XREFs of DxgkLock @ 0x1C0077AF0
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
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r8
  struct _D3DKMT_LOCK *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r14
  BOOLEAN v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // of
  volatile signed __int64 *v25; // rcx
  __int64 v26; // rt0
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r14d
  _QWORD *v32; // rcx
  _DWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  char v42; // al
  unsigned __int8 v43; // bl
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  void *v48; // rcx
  unsigned __int8 v49; // bl
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  struct DXGADAPTER *v57; // [rsp+30h] [rbp-D8h] BYREF
  char v58; // [rsp+38h] [rbp-D0h]
  struct DXGDEVICE *v59; // [rsp+40h] [rbp-C8h] BYREF
  int v60; // [rsp+48h] [rbp-C0h]
  _BYTE v61[8]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v62[8]; // [rsp+68h] [rbp-A0h] BYREF
  DXGADAPTER *v63; // [rsp+70h] [rbp-98h]
  char v64; // [rsp+78h] [rbp-90h]
  _BYTE v65[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  char v68; // [rsp+A0h] [rbp-68h]
  struct _D3DKMT_LOCK v69; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGDEVICE *v70; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v71; // [rsp+128h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2011);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v55 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v55 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v55);
    goto LABEL_70;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_70:
    v56 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v56);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_72:
    Template_q(v46, &EventProfilerExit, v47, 2011);
    return 3221225485LL;
  }
  v11 = (struct _D3DKMT_LOCK *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
  v69 = *v11;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v71, v69.hDevice, v10, &v70);
  v16 = v70;
  if ( !v70 )
  {
    v45 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v45 + 24) = v69.hDevice;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v45);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v71);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_72;
  }
  v59 = v70;
  v17 = *(_QWORD *)(*((_QWORD *)v70 + 2) + 16LL);
  if ( *(int *)(v17 + 1648) >= 0x2000 || *(_BYTE *)(v17 + 1932) )
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v12, v14, v15) + 195);
  else
    v18 = 0;
  v60 = v18;
  v19 = *((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v19 + 80)) )
      goto LABEL_12;
    v48 = (void *)(v19 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v19 + 56)) )
      goto LABEL_12;
    v48 = (void *)(v19 + 56);
  }
  KeWaitForSingleObject(v48, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !v18 )
  {
    v20 = ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 10), 0);
    v24 = 0;
    if ( v20 )
      goto LABEL_14;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL));
    v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v44, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 10), 1u);
    if ( !v43 )
      goto LABEL_47;
    goto LABEL_60;
  }
  v42 = ExTryAcquirePushLockSharedEx((char *)v16 + 88, 0LL);
  v24 = 0;
  if ( v42 )
    goto LABEL_14;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL));
  v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 88));
  if ( v49 )
LABEL_60:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
LABEL_47:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_14:
  v25 = *(volatile signed __int64 **)(*((_QWORD *)v16 + 2) + 16LL);
  v57 = (struct DXGADAPTER *)v25;
  v26 = _InterlockedAdd64(v25 + 3, 1uLL);
  if ( (v26 < 0) ^ v24 | (v26 == 0) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v25, v21, v22, v23);
    *(_QWORD *)(v50 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v50);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v57 + 104, 0LL);
  v58 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v70, 0, v27, 0);
  if ( v64 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
    v51[3] = 275LL;
    v51[4] = 4LL;
    v51[5] = v62;
    v51[6] = 0LL;
    v51[7] = 0LL;
    WdLogEvent5_WdCriticalError(v51);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v63 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v63 + 32)) )
      KeWaitForSingleObject((char *)v63 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v63);
  }
  v64 = 1;
  if ( *(_DWORD *)(v67 + 352) != 1 )
    goto LABEL_63;
  if ( v68 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v65);
    if ( *(_DWORD *)(v66 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v65);
LABEL_63:
      COREACCESS::Release((COREACCESS *)v62);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v57);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v71);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v52, &EventProfilerExit, v53, 2011);
      return 3221226166LL;
    }
  }
  v69.hDevice = 0;
  v31 = DXGDEVICE::Lock(v70, &v69, (struct COREDEVICEACCESS *)v61);
  if ( v31 >= 0 )
  {
    v32 = (_QWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v32 = (_QWORD *)MmUserProbeAddress;
    *v32 = v69.pData;
    v33 = (_DWORD *)(a1 + 4);
    if ( (unsigned __int64)v33 >= MmUserProbeAddress )
      v33 = (_DWORD *)MmUserProbeAddress;
    *v33 = v69.hAllocation;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
  ExReleasePushLockSharedEx((char *)v57 + 104, 0LL);
  KeLeaveCriticalRegion();
  v38 = _InterlockedDecrement64((volatile signed __int64 *)v57 + 3);
  if ( !v38 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
  if ( v38 < 0 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
    *(_QWORD *)(v54 + 24) = 1067LL;
    WdLogEvent5_WdAssertion(v54);
  }
  if ( v60 )
    ExReleasePushLockSharedEx((char *)v70 + 88, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v70 + 10));
  KeLeaveCriticalRegion();
  if ( v71 && _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v39, &EventProfilerExit, v40, 2011);
  return (unsigned int)v31;
}
