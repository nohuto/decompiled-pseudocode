/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0195330 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C001FA4C (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0025558 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00913E4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0091440 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0144FE0 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C014877C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  KSPIN_LOCK *Global; // rax
  ADAPTER_DISPLAY *v12; // rcx
  ADAPTER_RENDER *v13; // rcx
  BOOLEAN v14; // bl
  BOOLEAN v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdEvent(this);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdEvent(v6);
  KeSetEvent((PRKEVENT)((char *)this + 2104), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 6888LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGADAPTER::AcquireLocksForStop(this, &v18);
  v10 = *((_QWORD *)this + 267);
  if ( v10 )
  {
    if ( a2 )
      *(_BYTE *)(v10 + 634) = 1;
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 267), 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 267), 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 267), 0, 0);
  }
  if ( *((_BYTE *)this + 183) )
  {
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v9);
    DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
  }
  v12 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 266);
  if ( v12 )
    ADAPTER_DISPLAY::Stop(v12, a3);
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 267);
  if ( v13 )
    ADAPTER_RENDER::Stop(v13, a2, a3);
  if ( *((_QWORD *)this + 331) )
  {
    *((_BYTE *)this + 2606) = 1;
    v14 = KeCancelTimer((PKTIMER)((char *)this + 2720));
    v15 = KeCancelTimer((PKTIMER)((char *)this + 3544));
    if ( !v14 || !v15 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 2720)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 331));
    *((_QWORD *)this + 331) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 44) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 2609)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 2609) = 0;
    }
    DXGADAPTER::Destroy(this);
    *((_DWORD *)this + 44) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
  DXGADAPTER::ReleaseReference(this);
  if ( *((_QWORD *)this + 267) )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_QWORD *)this + 272) && *((_QWORD *)this + 372) )
  {
    *((_BYTE *)this + 2984) = 1;
    KeSetEvent((PRKEVENT)((char *)this + 2848), 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 372), 0, 0LL);
    ZwClose(*((HANDLE *)this + 372));
    *((_QWORD *)this + 372) = 0LL;
  }
  v17 = WdLogNewEntry5_WdEvent(v16);
  *(_QWORD *)(v17 + 24) = this;
  WdLogEvent5_WdEvent(v17);
}
