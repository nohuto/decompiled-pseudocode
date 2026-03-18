/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ED94
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144640 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C598 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C5BC (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C006A7C8 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012D3D0 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012E8EC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012EA44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0143D70 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *BugCheckParameter1)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 IsDxgmms2; // al
  struct _ERESOURCE *v12; // rcx
  ADAPTER_RENDER *v13; // rcx
  struct _TDR_RECOVERY_CONTEXT *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGADAPTER **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  char v21; // [rsp+50h] [rbp+8h] BYREF
  char v22; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER v24; // [rsp+60h] [rbp+18h] BYREF

  if ( !BugCheckParameter1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 19747LL;
    WdLogEvent5_WdAssertion(v4);
  }
  KeSetEvent((PRKEVENT)((char *)this + 1960), 0, 0);
  if ( !*((_QWORD *)this + 249) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 19758LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v22 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v21);
  if ( DXGADAPTER::IsDxgmms2(this) )
  {
    *((_QWORD *)this + 250) = KeGetCurrentThread();
    DXGADAPTER::PrepareToReset(v7, BugCheckParameter1);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 249), 4, 0xFFFFFFFF, 0);
    v8 = (char *)this + 104;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 104, 0LL);
    *((_QWORD *)this + 14) = KeGetCurrentThread();
    if ( *((_DWORD *)this + 40) != 1 )
    {
      *((_QWORD *)this + 14) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_26;
    }
  }
  else
  {
    v8 = (char *)this + 104;
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 249), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 14) = KeGetCurrentThread();
  }
  if ( !KeResetEvent((PRKEVENT)((char *)this + 32)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 19815LL;
    WdLogEvent5_WdAssertion(v10);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(this);
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 16);
  if ( IsDxgmms2 )
  {
    ExAcquireResourceExclusiveLite(v12, 1u);
  }
  else
  {
    while ( !ExAcquireResourceExclusiveLite(v12, 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 249), 4, 0xFFFFFFFF, 0);
      v24.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v24);
      v12 = (struct _ERESOURCE *)*((_QWORD *)this + 16);
    }
  }
  *((_DWORD *)this + 34) = 2;
  if ( DXGADAPTER::IsDxgmms2(this) )
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 249), 0, 0);
  ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 249), 4, 0xFFFFFFFF, 0);
  TdrCollectDbgInfoStage2(BugCheckParameter1);
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 249);
  *((_BYTE *)this + 1951) = 0;
  if ( (int)ADAPTER_RENDER::Reset(v13, (ULONG_PTR)BugCheckParameter1) < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 19870LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = (struct DXGADAPTER **)*((_QWORD *)this + 248);
  if ( v17 && (int)ADAPTER_DISPLAY::Reset(v17, v14) < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 19878LL;
    WdLogEvent5_WdAssertion(v19);
  }
  *((_QWORD *)this + 250) = 0LL;
  KeResetEvent((PRKEVENT)((char *)this + 1960));
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*((PERESOURCE *)this + 16));
  KeSetEvent((PRKEVENT)((char *)this + 32), 0, 0);
LABEL_26:
  if ( v22 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v21);
  return 0LL;
}
