/*
 * XREFs of DxgkOfferAllocations @ 0x1C00A3F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00986D0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
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
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rcx
  unsigned __int8 v31; // bl
  __int64 v32; // r8
  unsigned __int8 v33; // bl
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGDEVICE *v42; // [rsp+30h] [rbp-B8h] BYREF
  int v43; // [rsp+38h] [rbp-B0h]
  _D3DKMT_OFFERALLOCATIONS v44; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v45[8]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v46[16]; // [rsp+78h] [rbp-70h] BYREF
  DXGADAPTER *v47; // [rsp+88h] [rbp-60h]
  char v48; // [rsp+90h] [rbp-58h]
  _BYTE v49[16]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-40h]
  __int64 v51; // [rsp+B8h] [rbp-30h]
  char v52; // [rsp+C0h] [rbp-28h]
  struct DXGDEVICE *v53; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v54; // [rsp+100h] [rbp+18h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2070);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v25 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_35;
  }
  memset(&v44, 0, sizeof(v44));
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v44.hDevice = *v8;
  *(_OWORD *)&v44.HandleList = v8[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v44.hDevice, ProcessDxgProcess, &v54);
  v10 = v54;
  if ( !v54 )
  {
    v29 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v29 + 24) = v44.hDevice;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
    goto LABEL_35;
  }
  v42 = v54;
  v11 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
  if ( *(int *)(v11 + 1792) >= 0x2000 || *(_BYTE *)(v11 + 2076) )
    v12 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
  else
    v12 = 0;
  v43 = v12;
  v13 = *((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 76) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v13 + 80)) )
      goto LABEL_10;
    v30 = (void *)(v13 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v13 + 56)) )
      goto LABEL_10;
    v30 = (void *)(v13 + 56);
  }
  KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
LABEL_10:
  KeEnterCriticalRegion();
  if ( !v12 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 0) )
      goto LABEL_12;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 10), 1u);
    if ( v31 )
      goto LABEL_53;
    goto LABEL_54;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 88, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 88));
    if ( v33 )
LABEL_53:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
LABEL_54:
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_12:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v10, 0, v14, 0);
  if ( v48 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = v46;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v47 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v47 + 2) )
      KeWaitForSingleObject((char *)v47 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v47);
  }
  v48 = 1;
  if ( *(_DWORD *)(v51 + 376) != 1 )
    goto LABEL_57;
  if ( v52 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v49);
    if ( *(_DWORD *)(v50 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v49);
LABEL_57:
      COREACCESS::Release((COREACCESS *)v46);
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = v54;
      *(_QWORD *)(v39 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v39);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v40, &EventProfilerExit, v41, 2070);
      return 3221226166LL;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 1352LL) < 0x5010u )
    goto LABEL_24;
  v19 = (UINT *)(a1 + 32);
  if ( a1 + 32 >= MmUserProbeAddress )
    v19 = (UINT *)MmUserProbeAddress;
  v44.Flags.Value = *v19;
  if ( (v44.Flags.Value & 0xFFFFFFFC) == 0 )
  {
LABEL_24:
    v20 = v54;
    v21 = DXGDEVICE::OfferAllocations(v54, &v44, v17, v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    if ( v43 )
      ExReleasePushLockSharedEx((char *)v20 + 88, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v20 + 10));
    KeLeaveCriticalRegion();
    if ( v53 )
    {
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v22 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    }
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v22, &EventProfilerExit, v23, 2070);
    return v21;
  }
  v28 = WdLogNewEntry5_WdWarning(v19, MmUserProbeAddress, v17, v18);
  *(_QWORD *)(v28 + 24) = (unsigned __int64)v44.Flags.Value >> 2;
  WdLogEvent5_WdWarning(v28);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
LABEL_35:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 2070);
  return 3221225485LL;
}
