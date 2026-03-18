/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C006E000
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C006E408 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r14
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  volatile signed __int64 *v22; // rcx
  volatile signed __int64 *v23; // rcx
  unsigned int v24; // esi
  struct DXGADAPTER *v25; // rcx
  DXGADAPTER *v26; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r9d
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v36; // [rsp+50h] [rbp-19h]
  DXGADAPTER *v37; // [rsp+58h] [rbp-11h]
  char v38; // [rsp+60h] [rbp-9h]
  _BYTE v39[8]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v40; // [rsp+70h] [rbp+7h]
  struct DXGADAPTER *v41; // [rsp+78h] [rbp+Fh]
  char v42; // [rsp+80h] [rbp+17h]
  __int64 v43; // [rsp+88h] [rbp+1Fh]
  char v44; // [rsp+90h] [rbp+27h]

  v5 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v24 = -1073741811;
    v28 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    *(_QWORD *)(v28 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v28);
    return v24;
  }
  v13 = ProcessDxgProcess + 184;
  if ( ProcessDxgProcess != -184 && *(struct _KTHREAD **)(ProcessDxgProcess + 192) == KeGetCurrentThread() )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v29 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v29);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v30 = *(_DWORD *)(v13 + 16);
      if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v14, &EventBlockThread, v15, v30);
    }
    ExAcquirePushLockSharedEx(v13, 0LL);
  }
  v16 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v12 + 224)
    && (v17 = *(_QWORD *)(v12 + 208),
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 3 )
  {
    v19 = *(_QWORD *)(v17 + 16LL * v16);
    if ( v19 )
      _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
  }
  else
  {
    v19 = 0LL;
  }
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v24 = -1073741811;
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v31[3] = -1073741811LL;
    v32 = PsGetCurrentProcess();
    v31[5] = v5;
    v31[4] = v32;
    WdLogEvent5_WdError(v31);
    return v24;
  }
  v21 = *(_QWORD *)(v19 + 16);
  if ( *(_DWORD *)(v19 + 304) == 2 )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v21 + 80)) )
      goto LABEL_52;
  }
  else if ( !KeReadStateEvent((PRKEVENT)(v21 + 56)) )
  {
    goto LABEL_52;
  }
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 0) )
  {
    v22 = *(volatile signed __int64 **)(*(_QWORD *)(v19 + 16) + 16LL);
    v37 = (DXGADAPTER *)v22;
    v38 = 0;
    if ( v22 )
    {
      _InterlockedIncrement64(v22 + 3);
      v36 = -1LL;
    }
    v23 = *(volatile signed __int64 **)(*(_QWORD *)(v19 + 16) + 16LL);
    v41 = (struct DXGADAPTER *)v23;
    v42 = 0;
    if ( v23 )
    {
      _InterlockedIncrement64(v23 + 3);
      v40 = -1LL;
    }
    v43 = v19;
    v44 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v37 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v37 + 2) )
        KeWaitForSingleObject((char *)v37 + 48, Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(v37);
    }
    v38 = 1;
    if ( *(_DWORD *)(v43 + 376) == 1 )
    {
      if ( !v44 || (COREACCESS::AcquireShared((COREACCESS *)v39), *((_DWORD *)v41 + 44) == 1) )
      {
        v24 = DXGDEVICE::IssueSyncObjectOpForAllContexts((DXGDEVICE *)v19, (struct DXGPROCESS *)v12, a2, a3, a4);
LABEL_28:
        v25 = v41;
        if ( v41 )
        {
          if ( v42 )
          {
            COREACCESS::Release((COREACCESS *)v39);
            v25 = v41;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v25 + 2), v25);
        }
        v26 = v37;
        if ( v37 )
        {
          if ( v38 )
          {
            v38 = 0;
            v26 = v37;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v37 + 20) )
            {
              DXGADAPTER::ReleaseCoreResource(v37);
              v26 = v37;
            }
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v26);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v19 + 80));
        KeLeaveCriticalRegion();
        goto LABEL_40;
      }
      COREACCESS::Release((COREACCESS *)v39);
    }
    COREACCESS::Release((COREACCESS *)v35);
    v34 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v34 + 24) = -1073741130LL;
    *(_QWORD *)(v34 + 32) = v12;
    WdLogEvent5_WdEvent(v34);
    v24 = -1073741130;
    goto LABEL_28;
  }
  KeLeaveCriticalRegion();
LABEL_52:
  v33 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v33 + 24) = v19;
  WdLogEvent5_WdEvent(v33);
  v24 = -2147483631;
LABEL_40:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
  return v24;
}
