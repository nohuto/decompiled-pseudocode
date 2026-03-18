/*
 * XREFs of ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C005D124
 * Callers:
 *     ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C00A3110 (-_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z.c)
 * Callees:
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0026B48 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009E6D0 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxEventQueue::EventQueueWorker(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxPkgPnp *v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // r9
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  _IRP *m_FireAndForgetIrp; // rax
  FxPostProcessInfo info; // [rsp+20h] [rbp-20h] BYREF
  _IRP *v10; // [rsp+50h] [rbp+10h] BYREF

  info.m_Event = 0LL;
  info.m_FireAndForgetIrp = 0LL;
  m_PkgPnp = this->m_PkgPnp;
  *(_WORD *)&info.m_DeleteObject = 0;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  v4 = this->m_PkgPnp;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags &= ~1u;
  ++this->m_WorkItemRunningCount;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
  this->m_EventWorker(this->m_PkgPnp, &info, this->m_EventWorkerContext);
  KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  --this->m_WorkItemRunningCount;
  FxEventQueue::GetFinishedState(this, &info);
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v6);
  if ( info.m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)v4->m_DeviceRemoveProcessed;
LABEL_10:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  m_FireAndForgetIrp = info.m_FireAndForgetIrp;
  if ( info.m_FireAndForgetIrp )
  {
    info.m_FireAndForgetIrp = 0LL;
    v10 = m_FireAndForgetIrp;
    v4->FireAndForgetIrp(v4, (FxIrp *)&v10);
  }
  if ( info.m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(v4);
  m_DeviceRemoveProcessed = info.m_Event;
  if ( info.m_Event )
    goto LABEL_10;
}
