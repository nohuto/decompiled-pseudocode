/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C016C620 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0019C84 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C001E7D8 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C006A77C (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C006A7C8 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C0125154 (-AcquireLocksForStop@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C012F518 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  KSPIN_LOCK *Global; // rax
  PERESOURCE **v14; // rcx
  union _LARGE_INTEGER *v15; // rcx
  BOOLEAN v16; // bl
  BOOLEAN v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdEvent(v6);
  KeSetEvent((PRKEVENT)((char *)this + 1960), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 20435LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGADAPTER::AcquireLocksForStop(this);
  v12 = *((_QWORD *)this + 249);
  if ( v12 )
  {
    ADAPTER_RENDER::FlushScheduler(v12, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 249), 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 249), 0);
  }
  if ( *((_BYTE *)this + 167) )
  {
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v12);
    DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
  }
  v14 = (PERESOURCE **)*((_QWORD *)this + 248);
  if ( v14 )
    ADAPTER_DISPLAY::Stop(v14, v4);
  v15 = (union _LARGE_INTEGER *)*((_QWORD *)this + 249);
  if ( v15 )
    ADAPTER_RENDER::Stop(v15, v4);
  if ( *((_QWORD *)this + 313) )
  {
    *((_BYTE *)this + 2462) = 1;
    v16 = KeCancelTimer((PKTIMER)((char *)this + 2576));
    v17 = KeCancelTimer((PKTIMER)((char *)this + 2984));
    if ( !v16 || !v17 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 2576)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 313));
    *((_QWORD *)this + 313) = 0LL;
  }
  if ( v4 )
  {
    *((_DWORD *)this + 40) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 2465)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 2465) = 0;
    }
    DXGADAPTER::Destroy(this, v9, v10, v11);
    *((_DWORD *)this + 40) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
  DXGADAPTER::ReleaseReference(this);
  if ( *((_QWORD *)this + 249) )
  {
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  v22 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
  *(_QWORD *)(v22 + 24) = this;
  WdLogEvent5_WdEvent(v22);
}
