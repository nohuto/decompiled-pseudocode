/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0167F30 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C0168634 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0018204 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C001E718 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C0093D10 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C00BD51C (-ReleaseLocksForStop@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z @ 0x1C00BD548 (-AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0128EB4 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v6; // rax
  BOOLEAN IsCoreResourceExclusiveOwner; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  PERESOURCE **v12; // rcx
  KSPIN_LOCK *Global; // rax
  PERESOURCE **v14; // rcx
  ADAPTER_RENDER *v15; // rcx
  BOOLEAN v16; // bl
  BOOLEAN v17; // al
  __int64 v18; // rax

  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdEvent(v6);
  IsCoreResourceExclusiveOwner = DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this);
  KeSetEvent((PRKEVENT)((char *)this + 1952), 0, 0);
  v11 = *((_QWORD *)this + 248);
  if ( v11 )
  {
    ADAPTER_RENDER::FlushScheduler(v11, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 248), 5, 0xFFFFFFFF, 0);
  }
  if ( !IsCoreResourceExclusiveOwner )
    DXGADAPTER::AcquireLocksForStop(this, 1);
  v12 = (PERESOURCE **)*((_QWORD *)this + 248);
  if ( v12 )
    ADAPTER_RENDER::ResumeVidMmWorkerThread(v12, 0);
  if ( *((_BYTE *)this + 167) )
  {
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal((__int64)v12, v8, v9, v10);
    DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
  }
  v14 = (PERESOURCE **)*((_QWORD *)this + 247);
  if ( v14 )
    ADAPTER_DISPLAY::Stop(v14, v4);
  v15 = (ADAPTER_RENDER *)*((_QWORD *)this + 248);
  if ( v15 )
    ADAPTER_RENDER::Stop(v15, v4);
  if ( *((_QWORD *)this + 311) )
  {
    *((_BYTE *)this + 2446) = 1;
    v16 = KeCancelTimer((PKTIMER)this + 40);
    v17 = KeCancelTimer((PKTIMER)((char *)this + 2968));
    if ( !v16 || !v17 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)this + 40) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 311));
    *((_QWORD *)this + 311) = 0LL;
  }
  if ( v4 )
  {
    *((_DWORD *)this + 40) = 4;
  }
  else
  {
    if ( *((_QWORD *)this + 252)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGADAPTER::Destroy(this, v8, v9, v10);
    *((_DWORD *)this + 40) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  if ( !IsCoreResourceExclusiveOwner )
  {
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
    DXGADAPTER::ReleaseReference(this);
    DXGADAPTER::ReleaseLocksForStop(this);
  }
  v18 = WdLogNewEntry5_WdEvent(v15, v8, v9, v10);
  *(_QWORD *)(v18 + 24) = this;
  WdLogEvent5_WdEvent(v18);
}
