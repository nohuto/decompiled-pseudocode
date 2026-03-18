/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C005A000
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005A310 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r15
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  volatile signed __int64 *v25; // rcx
  volatile signed __int64 *v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // esi
  __int64 v29; // r8
  __int64 v30; // r9
  struct DXGADAPTER *v31; // rcx
  __int64 v32; // rax
  DXGADAPTER *v33; // rcx
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r9d
  _QWORD *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  _BYTE v49[8]; // [rsp+48h] [rbp-11h] BYREF
  DXGADAPTER *v50; // [rsp+50h] [rbp-9h]
  char v51; // [rsp+58h] [rbp-1h]
  _BYTE v52[8]; // [rsp+60h] [rbp+7h] BYREF
  struct DXGADAPTER *v53; // [rsp+68h] [rbp+Fh]
  char v54; // [rsp+70h] [rbp+17h]
  __int64 v55; // [rsp+78h] [rbp+1Fh]
  char v56; // [rsp+80h] [rbp+27h]

  v5 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v47 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v47 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v47);
    goto LABEL_67;
  }
  v13 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v13 )
  {
LABEL_67:
    v28 = -1073741811;
    v48 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    *(_QWORD *)(v48 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v48);
    return v28;
  }
  if ( v13 != -192 && *(struct _KTHREAD **)(v13 + 200) == KeGetCurrentThread() )
  {
    v37 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v37 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v37);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v38 = *(_DWORD *)(v13 + 208);
      if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v14, &EventBlockThread, v15, v38);
    }
    ExAcquirePushLockSharedEx(v13 + 192, 0LL);
  }
  v16 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v13 + 232)
    && (v17 = *(_QWORD *)(v13 + 216),
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
  ExReleasePushLockSharedEx(v13 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v28 = -1073741811;
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v39[3] = -1073741811LL;
    v40 = PsGetCurrentProcess();
    v39[5] = v5;
    v39[4] = v40;
    WdLogEvent5_WdError(v39);
    return v28;
  }
  v21 = *(_QWORD *)(v19 + 16);
  if ( *(_DWORD *)(v19 + 280) == 2 )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v21 + 80)) )
      goto LABEL_51;
  }
  else if ( !KeReadStateEvent((PRKEVENT)(v21 + 56)) )
  {
    goto LABEL_51;
  }
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 0) )
  {
    v25 = *(volatile signed __int64 **)(*(_QWORD *)(v19 + 16) + 16LL);
    v50 = (DXGADAPTER *)v25;
    v51 = 0;
    if ( v25 && _InterlockedAdd64(v25 + 3, 1uLL) <= 0 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v25, v22, v23, v24);
      *(_QWORD *)(v41 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v41);
    }
    v26 = *(volatile signed __int64 **)(*(_QWORD *)(v19 + 16) + 16LL);
    v53 = (struct DXGADAPTER *)v26;
    v54 = 0;
    if ( v26 && _InterlockedAdd64(v26 + 3, 1uLL) <= 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v26, v22, v23, v24);
      *(_QWORD *)(v42 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v42);
    }
    v55 = v19;
    v56 = 0;
    if ( v51 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v23);
      v43[5] = v49;
      v43[3] = 275LL;
      v43[4] = 4LL;
      v43[6] = 0LL;
      v43[7] = 0LL;
      WdLogEvent5_WdCriticalError(v43);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 18) )
    {
      if ( !KeReadStateEvent((PRKEVENT)((char *)v50 + 32)) )
        KeWaitForSingleObject((char *)v50 + 32, Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(v50);
    }
    v51 = 1;
    if ( *(_DWORD *)(v55 + 352) == 1 )
    {
      if ( !v56 || (COREACCESS::AcquireShared((COREACCESS *)v52), *((_DWORD *)v53 + 40) == 1) )
      {
        v28 = DXGDEVICE::IssueSyncObjectOpForAllContexts((DXGDEVICE *)v19, (struct DXGPROCESS *)v13, a2, a3, a4);
LABEL_33:
        v31 = v53;
        if ( v53 )
        {
          if ( v54 )
          {
            COREACCESS::Release((COREACCESS *)v52);
            v31 = v53;
          }
          v32 = _InterlockedDecrement64((volatile signed __int64 *)v31 + 3);
          if ( v32 )
          {
            if ( v32 < 0 )
            {
              v45 = WdLogNewEntry5_WdAssertion(v31, v27, v29, v30);
              *(_QWORD *)(v45 + 24) = 1067LL;
              WdLogEvent5_WdAssertion(v45);
            }
          }
          else
          {
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v31 + 2), v31);
          }
        }
        v33 = v50;
        if ( v50 )
        {
          if ( v51 )
          {
            v51 = 0;
            v33 = v50;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 18) )
            {
              DXGADAPTER::ReleaseCoreResource(v50);
              v33 = v50;
            }
          }
          v34 = _InterlockedDecrement64((volatile signed __int64 *)v33 + 3);
          if ( v34 )
          {
            if ( v34 < 0 )
            {
              v46 = WdLogNewEntry5_WdAssertion(v33, v27, v29, v30);
              *(_QWORD *)(v46 + 24) = 1067LL;
              WdLogEvent5_WdAssertion(v46);
            }
          }
          else
          {
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v33 + 2), v33);
          }
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v19 + 80));
        KeLeaveCriticalRegion();
        goto LABEL_47;
      }
      COREACCESS::Release((COREACCESS *)v52);
    }
    COREACCESS::Release((COREACCESS *)v49);
    v44 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v44 + 24) = -1073741130LL;
    *(_QWORD *)(v44 + 32) = v13;
    WdLogEvent5_WdEvent(v44);
    v28 = -1073741130;
    goto LABEL_33;
  }
  KeLeaveCriticalRegion();
LABEL_51:
  v36 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v36 + 24) = v19;
  WdLogEvent5_WdEvent(v36);
  v28 = -2147483631;
LABEL_47:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
  return v28;
}
