/*
 * XREFs of ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A32F0
 * Callers:
 *     DxgkDestroySynchronizationObject @ 0x1C00D23F0 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00D5480 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00016CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C008FE30 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectInternal(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int hSyncObject; // esi
  DXGDEVICESYNCOBJECT *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // edx
  DXGGLOBAL *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r12
  struct _KEVENT *v36; // r12
  __int64 v37; // r9
  __int64 v38; // r8
  unsigned __int8 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // [rsp+30h] [rbp-E8h] BYREF
  int v48; // [rsp+38h] [rbp-E0h]
  _BYTE v49[24]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v50[24]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v51[32]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v52[8]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v53[32]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v54[96]; // [rsp+B8h] [rbp-60h] BYREF
  D3DKMT_HANDLE v55; // [rsp+130h] [rbp+18h]
  __int64 v56; // [rsp+138h] [rbp+20h] BYREF

  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2042);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2042);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v55 = v4->hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v55 = v4->hSyncObject;
  }
  v14 = 0LL;
  v15 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)v49,
    (struct _KTHREAD **)ProcessDxgProcess);
  v19 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v17 = *(_QWORD *)(ProcessDxgProcess + 208),
        v16 = *(unsigned int *)(v17 + 16LL * v19 + 8),
        ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v19 + 8) & 0x30))
    && (v16 & 0x1000) == 0
    && (v16 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v19 + 8) & 0xF) == 0xB )
  {
    v20 = *(_QWORD *)(v17 + 16LL * v19);
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 68) & 2) == 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v20, v16, v17, v18);
      *(_QWORD *)(v21 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v21);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v22, &EventProfilerExit, v23, 2042);
      return 3221225506LL;
    }
    v15 = *(_QWORD *)(v20 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 64));
    hSyncObject = v55;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
  if ( v15 )
  {
    v56 = v15;
    v47 = v15;
    v35 = *(_QWORD *)(v15 + 16);
    if ( *(_DWORD *)(v15 + 304) == 2 )
      v36 = (struct _KEVENT *)(v35 + 80);
    else
      v36 = (struct _KEVENT *)(v35 + 56);
    if ( !KeReadStateEvent(v36) )
      KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 80), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL));
      v39 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v38, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 80), 1u);
      if ( v39 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v48 = 1;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v15, 2, v37, 0);
    COREACCESS::AcquireShared((COREACCESS *)v53);
    if ( v54[40] )
      COREACCESS::AcquireShared((COREACCESS *)v54);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v51,
      (struct DXGPROCESS *)ProcessDxgProcess);
    if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v42 = *(_QWORD *)(ProcessDxgProcess + 208);
      v40 = *(unsigned int *)(v42 + 16LL * v19 + 8);
      v41 = (hSyncObject >> 26) & 0x30;
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v42 + 16LL * v19 + 8) & 0x30)
        && (v40 & 0x1000) == 0
        && (v40 & 0xF) != 0 )
      {
        v41 = 2LL * v19;
        if ( (*(_BYTE *)(v42 + 16LL * v19 + 8) & 0xF) == 0xB )
          v14 = *(DXGDEVICESYNCOBJECT **)(v42 + 16LL * v19);
      }
    }
    if ( v14 && *((_QWORD *)v14 + 2) == v15 )
    {
      if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v44 = *(_QWORD *)(ProcessDxgProcess + 208);
        v45 = *(_DWORD *)(v44 + 16LL * v19 + 8);
        if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v44 + 16LL * v19 + 8) & 0x30)
          && (v45 & 0x1000) == 0
          && (v45 & 0xF) != 0 )
        {
          *(_DWORD *)(v44 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v14);
      ExFreePoolWithTag(v14, 0);
    }
    else
    {
      v46 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v46 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v46);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v47);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v56);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v50,
      (struct DXGPROCESS *)ProcessDxgProcess);
    if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v26 = *(_QWORD *)(ProcessDxgProcess + 208);
      v24 = *(unsigned int *)(v26 + 16LL * v19 + 8);
      v25 = (hSyncObject >> 26) & 0x30;
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * v19 + 8) & 0x30)
        && (v24 & 0x1000) == 0
        && (v24 & 0xF) != 0 )
      {
        v25 = 2LL * v19;
        if ( (*(_BYTE *)(v26 + 16LL * v19 + 8) & 0xF) == 8 )
          v14 = *(DXGDEVICESYNCOBJECT **)(v26 + 16LL * v19);
      }
    }
    if ( !v14 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v28 + 24) = hSyncObject;
      *(_QWORD *)(v28 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
      goto LABEL_6;
    }
    if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v29 = *(_QWORD *)(ProcessDxgProcess + 208);
      v30 = *(_DWORD *)(v29 + 16LL * v19 + 8);
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v19 + 8) & 0x30)
        && (v30 & 0x1000) == 0
        && (v30 & 0xF) != 0 )
      {
        *(_DWORD *)(v29 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    v31 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v32 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v32 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v32);
      v31 = DXGGLOBAL::m_pGlobal;
    }
    DXGGLOBAL::DestroySyncObject(v31, v14, hSyncObject, 0);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 2042);
  return 0LL;
}
