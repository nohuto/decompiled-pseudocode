/*
 * XREFs of DxgkOfferAllocations @ 0x1C00763E0
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
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C006FFD0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r8
  _OWORD *v8; // rcx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  UINT *v19; // rcx
  struct DXGDEVICE *v20; // rbx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  void *v29; // rcx
  unsigned __int8 v30; // bl
  __int64 v31; // r8
  unsigned __int8 v32; // bl
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
  struct DXGDEVICE *v43; // [rsp+30h] [rbp-A8h] BYREF
  int v44; // [rsp+38h] [rbp-A0h]
  _D3DKMT_OFFERALLOCATIONS v45; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v46[8]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v47[8]; // [rsp+78h] [rbp-60h] BYREF
  DXGADAPTER *v48; // [rsp+80h] [rbp-58h]
  char v49; // [rsp+88h] [rbp-50h]
  _BYTE v50[8]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v51; // [rsp+98h] [rbp-40h]
  __int64 v52; // [rsp+A8h] [rbp-30h]
  char v53; // [rsp+B0h] [rbp-28h]
  struct DXGDEVICE *v54; // [rsp+E8h] [rbp+10h] BYREF
  struct DXGDEVICE *v55; // [rsp+F0h] [rbp+18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2070);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v41 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v41 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v41);
    goto LABEL_64;
  }
  v7 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v7 )
  {
LABEL_64:
    v42 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_66:
    Template_q(v27, &EventProfilerExit, v28, 2070);
    return 3221225485LL;
  }
  memset(&v45, 0, sizeof(v45));
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v45.hDevice = *v8;
  *(_OWORD *)&v45.HandleList = v8[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v45.hDevice, v7, &v55);
  v10 = v55;
  if ( !v55 )
  {
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = v45.hDevice;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_36:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_66;
  }
  v43 = v55;
  v11 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL);
  if ( *(int *)(v11 + 1656) >= 0x2000 || *(_BYTE *)(v11 + 1940) )
    v12 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 231);
  else
    v12 = 0;
  v44 = v12;
  v13 = *((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v13 + 80)) )
      goto LABEL_11;
    v29 = (void *)(v13 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v13 + 56)) )
      goto LABEL_11;
    v29 = (void *)(v13 + 56);
  }
  KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
LABEL_11:
  KeEnterCriticalRegion();
  if ( v12 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 88, 0LL) )
      goto LABEL_13;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 80LL));
    v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 88));
    if ( !v32 )
      goto LABEL_53;
    goto LABEL_52;
  }
  if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 0) )
    goto LABEL_13;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 80LL));
  v30 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v31, 40);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 1u);
  if ( v30 )
LABEL_52:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
LABEL_53:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_13:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v10, 0, v14, 0);
  if ( v49 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v47;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v48 + 32)) )
      KeWaitForSingleObject((char *)v48 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v48);
  }
  v49 = 1;
  if ( *(_DWORD *)(v52 + 352) != 1 )
    goto LABEL_56;
  if ( v53 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v50);
    if ( *(_DWORD *)(v51 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v50);
LABEL_56:
      COREACCESS::Release((COREACCESS *)v47);
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v38 + 24) = v55;
      *(_QWORD *)(v38 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v38);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2070);
      return 3221226166LL;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 1264LL) >= 0x5010u )
  {
    v19 = (UINT *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v19 = (UINT *)MmUserProbeAddress;
    v45.Flags.Value = *v19;
    if ( (v45.Flags.Value & 0xFFFFFFFE) != 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v19, MmUserProbeAddress, v17, v18);
      *(_QWORD *)(v26 + 24) = (unsigned __int64)v45.Flags.Value >> 1;
      WdLogEvent5_WdWarning(v26);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
      goto LABEL_36;
    }
  }
  v20 = v55;
  v21 = DXGDEVICE::OfferAllocations(v55, &v45, v17, v18);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  if ( v44 )
    ExReleasePushLockSharedEx((char *)v20 + 88, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v20 + 10));
  KeLeaveCriticalRegion();
  if ( v54 )
  {
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v22 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 2070);
  return v21;
}
