/*
 * XREFs of ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0093D30
 * Callers:
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0092B80 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1C0093000 (DxgkDestroySynchronizationObject.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0089E60 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectInternal(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned int hSyncObject; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rsi
  struct DXGSYNCOBJECT *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // r9
  DXGGLOBAL *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r14
  void *v36; // rcx
  unsigned __int8 v37; // di
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  _BYTE v43[32]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v44[8]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v45[24]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v46[48]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+18h]

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2042);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v41 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v41 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v41);
    goto LABEL_71;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_71:
    v42 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    goto LABEL_72;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v47 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v47 = hSyncObject;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43, (struct DXGPROCESS *)v11);
  v16 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *(_DWORD *)(v11 + 232)
    && (v15 = *(_QWORD *)(v11 + 216),
        v14 = *(unsigned int *)(v15 + 16LL * (unsigned int)v16 + 8),
        v13 = (hSyncObject >> 26) & 0x30,
        ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * (unsigned int)v16 + 8) & 0x30))
    && (v14 & 0x1000) == 0
    && (v14 & 0xF) != 0 )
  {
    v17 = 0;
    if ( (*(_BYTE *)(v15 + 16LL * (unsigned int)v16 + 8) & 0xF) == 0xB )
    {
      v18 = *(_QWORD *)(v15 + 16LL * (unsigned int)v16);
      goto LABEL_19;
    }
  }
  else
  {
    v17 = 0;
  }
  v18 = 0LL;
LABEL_19:
  if ( !v18 )
  {
    if ( (unsigned int)v16 < *(_DWORD *)(v11 + 232)
      && (v15 = *(_QWORD *)(v11 + 216),
          v14 = *(unsigned int *)(v15 + 16LL * (unsigned int)v16 + 8),
          v13 = (hSyncObject >> 26) & 0x30,
          ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * (unsigned int)v16 + 8) & 0x30))
      && (v14 & 0x1000) == 0
      && (v14 & 0xF) != 0
      && (*(_BYTE *)(v15 + 16LL * (unsigned int)v16 + 8) & 0xF) == 8 )
    {
      v19 = *(struct DXGSYNCOBJECT **)(v15 + 16LL * (unsigned int)v16);
    }
    else
    {
      v19 = 0LL;
    }
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdWarning(v13, v16, v14, v15);
      *(_QWORD *)(v20 + 24) = hSyncObject;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
LABEL_72:
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v21, &EventProfilerExit, v22, 2042);
      return 3221225485LL;
    }
LABEL_35:
    if ( (unsigned int)v16 < *(_DWORD *)(v11 + 232) )
    {
      v27 = *(_QWORD *)(v11 + 216);
      v28 = *(_DWORD *)(v27 + 16LL * (unsigned int)v16 + 8);
      if ( ((hSyncObject >> 26) & 0x30) == (v28 & 0x30) && (v28 & 0x1000) == 0 && (v28 & 0xF) != 0 )
        *(_DWORD *)(v27 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    if ( !v18 )
    {
      v30 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v31 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v31 + 24) = 1016LL;
        WdLogEvent5_WdAssertion(v31);
        v30 = DXGGLOBAL::m_pGlobal;
      }
      DXGGLOBAL::DestroySyncObject(v30, v19, hSyncObject);
LABEL_66:
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v32, &EventProfilerExit, v33, 2042);
      return 0LL;
    }
    v34 = *(_QWORD *)(v18 + 16);
    if ( !v34 )
    {
LABEL_59:
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, *(_QWORD *)(v18 + 16), 2, v29, 0);
      COREACCESS::AcquireShared((COREACCESS *)v45);
      if ( v46[32] )
        COREACCESS::AcquireShared((COREACCESS *)v46);
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT((DXGDEVICESYNCOBJECT *)v18, v39, v40);
      ExFreePoolWithTag((PVOID)v18, 0);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v34 )
      {
        if ( v17 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v34 + 80));
          KeLeaveCriticalRegion();
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v34 + 16), (struct DXGDEVICE *)v34);
      }
      goto LABEL_66;
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( *(_DWORD *)(v34 + 280) == 2 )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v35 + 80)) )
      {
        v36 = (void *)(v35 + 80);
LABEL_50:
        KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
      }
    }
    else if ( !KeReadStateEvent((PRKEVENT)(v35 + 56)) )
    {
      v36 = (void *)(v35 + 56);
      goto LABEL_50;
    }
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v34 + 80), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 80LL));
      v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v38, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v34 + 80), 1u);
      if ( v37 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v17 = 1;
    goto LABEL_59;
  }
  if ( (*(_BYTE *)(v18 + 68) & 2) != 0 )
  {
    v19 = *(struct DXGSYNCOBJECT **)(v18 + 32);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v18 + 16) + 64LL));
    hSyncObject = v47;
    goto LABEL_35;
  }
  v23 = WdLogNewEntry5_WdWarning(v13, v16, v14, v15);
  *(_QWORD *)(v23 + 24) = hSyncObject;
  WdLogEvent5_WdWarning(v23);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 2042);
  return 3221225506LL;
}
