/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E1F0 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A330 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A354 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0093D5C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01283F4 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013D930 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  BOOLEAN v17; // al
  __int64 v18; // rcx
  struct _TDR_RECOVERY_CONTEXT *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  ADAPTER_DISPLAY *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  char v31; // [rsp+50h] [rbp+8h] BYREF
  char v32; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER v34; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 19333LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeSetEvent((PRKEVENT)((char *)this + 1952), 0, 0);
  if ( !*((_QWORD *)this + 248) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 19344LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v32 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v31);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
      break;
    KeLeaveCriticalRegion();
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 248), 4, 0xFFFFFFFF, 0);
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  *((_QWORD *)this + 14) = KeGetCurrentThread();
  if ( !KeResetEvent((PRKEVENT)((char *)this + 32)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 19369LL;
    WdLogEvent5_WdAssertion(v16);
  }
  while ( 1 )
  {
    v17 = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 16), 0);
    v18 = *((_QWORD *)this + 248);
    if ( v17 )
      break;
    ADAPTER_RENDER::FlushScheduler(v18, 4, 0xFFFFFFFF, 0);
    v34.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &v34);
  }
  *((_DWORD *)this + 34) = 2;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(v18, 0, 0);
  ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 248), 4, 0xFFFFFFFF, 0);
  TdrCollectDbgInfoStage2(a2);
  if ( (int)ADAPTER_RENDER::Reset(*((PERESOURCE ***)this + 248), (ULONG_PTR)a2) < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = 19408LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 247);
  if ( v24 && (int)ADAPTER_DISPLAY::Reset(v24, v19) < 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
    *(_QWORD *)(v29 + 24) = 19416LL;
    WdLogEvent5_WdAssertion(v29);
  }
  KeResetEvent((PRKEVENT)((char *)this + 1952));
  *((_QWORD *)this + 14) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*((PERESOURCE *)this + 16));
  KeSetEvent((PRKEVENT)((char *)this + 32), 0, 0);
  if ( v32 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v31);
  return 0LL;
}
