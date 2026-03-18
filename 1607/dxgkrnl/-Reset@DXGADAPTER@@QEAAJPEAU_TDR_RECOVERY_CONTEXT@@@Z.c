/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01463D8
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0167350 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CC84 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CCA8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00913E4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0145B0C (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0148460 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0148DCC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014943C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0166A50 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, ULONG_PTR BugCheckParameter1)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  ADAPTER_RENDER *v12; // rcx
  struct _TDR_RECOVERY_CONTEXT *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  ADAPTER_DISPLAY *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v20; // [rsp+50h] [rbp+8h] BYREF
  char v21; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER v23; // [rsp+60h] [rbp+18h] BYREF

  if ( !BugCheckParameter1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 6485LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentThread = KeGetCurrentThread();
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)((char *)this + 2104), 0, 0);
  if ( !*((_QWORD *)this + 267) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 6501LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v21 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v20);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 267), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v11 + 24) = 6620LL;
      WdLogEvent5_WdAssertion(v11);
    }
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 267), 4, 0xFFFFFFFF, 0);
      v23.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v23);
    }
    *((_DWORD *)this + 38) = 2;
    goto LABEL_22;
  }
  *((_QWORD *)this + 268) = CurrentThread;
  if ( CurrentThread == *(struct _KTHREAD **)(BugCheckParameter1 + 2896) )
    goto LABEL_14;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 120, 0LL);
  *((_QWORD *)this + 16) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 44) != 1 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_31;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 6536LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 1u);
  *((_DWORD *)this + 38) = 2;
  if ( !*(_QWORD *)(BugCheckParameter1 + 2896) )
  {
LABEL_14:
    KeSetEvent((PRKEVENT)((char *)this + 2104), 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL) + 8LL) + 504LL))(
      *(_QWORD *)(*((_QWORD *)this + 267) + 384LL),
      *((_QWORD *)this + 268));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 267), 4, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 267));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 400LL) + 8LL) + 1120LL))(*(_QWORD *)(*((_QWORD *)this + 267) + 408LL));
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 267), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 267), 4, 0xFFFFFFFF, 0);
LABEL_22:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 267), 4, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 267);
    *((_BYTE *)this + 2091) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v12, BugCheckParameter1) < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v15 + 24) = 6659LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 266);
    if ( v16 && (int)ADAPTER_DISPLAY::Reset(v16, v13) < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 6667LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *((_QWORD *)this + 268) = 0LL;
    KeResetEvent((PRKEVENT)((char *)this + 2104));
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || *(struct _KTHREAD **)(BugCheckParameter1 + 2896) != CurrentThread )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*((PERESOURCE *)this + 18));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_31:
  if ( v21 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v20);
  return 0LL;
}
