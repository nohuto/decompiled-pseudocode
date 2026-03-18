/*
 * XREFs of DxgkOfferAllocations @ 0x1C00777F0
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
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C007CDD0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r8
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // r14
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  struct DXGDEVICE *v26; // rbx
  unsigned int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int8 v31; // bl
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  void *v37; // rcx
  unsigned __int8 v38; // bl
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  UINT *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGDEVICE *v50; // [rsp+30h] [rbp-A8h] BYREF
  int v51; // [rsp+38h] [rbp-A0h]
  _D3DKMT_OFFERALLOCATIONS v52; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v53[8]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v54[8]; // [rsp+78h] [rbp-60h] BYREF
  DXGADAPTER *v55; // [rsp+80h] [rbp-58h]
  char v56; // [rsp+88h] [rbp-50h]
  _BYTE v57[8]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v58; // [rsp+98h] [rbp-40h]
  __int64 v59; // [rsp+A8h] [rbp-30h]
  char v60; // [rsp+B0h] [rbp-28h]
  struct DXGDEVICE *v61; // [rsp+E8h] [rbp+10h] BYREF
  struct DXGDEVICE *v62; // [rsp+F0h] [rbp+18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2070);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v48 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v48 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v48);
    goto LABEL_63;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_63:
    v49 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v49 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v49);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_65:
    Template_q(v35, &EventProfilerExit, v36, 2070);
    return 3221225485LL;
  }
  memset(&v52, 0, sizeof(v52));
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v52.hDevice = *v11;
  *(_OWORD *)&v52.HandleList = v11[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61, v52.hDevice, v10, &v62);
  v16 = v62;
  if ( !v62 )
  {
    v33 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v33 + 24) = v52.hDevice;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
LABEL_36:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_65;
  }
  v50 = v62;
  v17 = *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL);
  if ( *(int *)(v17 + 1648) >= 0x2000 || (v13 = *(unsigned __int8 *)(v17 + 1932), (_BYTE)v13) )
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13, v12, v14, v15) + 195);
  else
    v18 = 0;
  v51 = v18;
  v19 = *((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v19 + 80)) )
      goto LABEL_12;
    v37 = (void *)(v19 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v19 + 56)) )
      goto LABEL_12;
    v37 = (void *)(v19 + 56);
  }
  KeWaitForSingleObject(v37, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !v18 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 10), 0) )
      goto LABEL_14;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 10), 1u);
    if ( !v31 )
      goto LABEL_32;
    goto LABEL_48;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 88, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL));
    v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 88));
    if ( !v38 )
    {
LABEL_32:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_14;
    }
LABEL_48:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    goto LABEL_32;
  }
LABEL_14:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v16, 0, v20, 0);
  if ( v56 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[5] = v54;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v55 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v55 + 32)) )
      KeWaitForSingleObject((char *)v55 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v55);
  }
  v56 = 1;
  if ( *(_DWORD *)(v59 + 352) != 1 )
    goto LABEL_51;
  if ( v60 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v57);
    if ( *(_DWORD *)(v58 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v57);
LABEL_51:
      COREACCESS::Release((COREACCESS *)v54);
      v44 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v44 + 24) = v62;
      *(_QWORD *)(v44 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v44);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v50);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v45, &EventProfilerExit, v46, 2070);
      return 3221226166LL;
    }
  }
  v25 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  if ( *(_DWORD *)(v25 + 1256) >= 0x5010u )
  {
    v47 = (UINT *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v47 = (UINT *)MmUserProbeAddress;
    v52.Flags.Value = *v47;
    if ( (v52.Flags.Value & 0xFFFFFFFE) != 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v25, v47, v23, v24);
      *(_QWORD *)(v34 + 24) = (unsigned __int64)v52.Flags.Value >> 1;
      WdLogEvent5_WdWarning(v34);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v50);
      goto LABEL_36;
    }
  }
  v26 = v62;
  v27 = DXGDEVICE::OfferAllocations(v62, &v52);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
  if ( v51 )
    ExReleasePushLockSharedEx((char *)v26 + 88, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v26 + 10));
  KeLeaveCriticalRegion();
  if ( v61 )
  {
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v28 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 2070);
  return v27;
}
