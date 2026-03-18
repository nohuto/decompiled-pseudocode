/*
 * XREFs of ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C0056F14
 * Callers:
 *     ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C008D410 (-_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0024D38 (FX_TRACK_DRIVER.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C002C24C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0056ED8 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxEventQueue::EventQueueWorker(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgPnp *v3; // rdi
  KIRQL v4; // al
  KIRQL v5; // r9
  FxPostProcessInfo info; // [rsp+20h] [rbp-28h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  FX_TRACK_DRIVER(m_PkgPnp->m_Globals);
  v3 = this->m_PkgPnp;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags &= ~1u;
  ++this->m_WorkItemRunningCount;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v4);
  this->m_EventWorker(this->m_PkgPnp, &info, this->m_EventWorkerContext);
  KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  --this->m_WorkItemRunningCount;
  FxEventQueue::GetFinishedState(this, &info);
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
  FxPostProcessInfo::Evaluate(&info, v3);
}
