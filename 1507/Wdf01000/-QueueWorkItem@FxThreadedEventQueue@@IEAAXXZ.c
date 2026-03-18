/*
 * XREFs of ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C005CFA8
 * Callers:
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C005D02C (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxThreadedEventQueue::QueueWorkItem(FxThreadedEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // r8

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp->m_HasPowerThread )
    m_PkgPnp->m_PowerThreadInterface.PowerThreadEnqueue(
      m_PkgPnp->m_PowerThreadInterface.Interface.Context,
      &this->m_EventWorkQueueItem);
  else
    IoQueueWorkItem(
      this->m_WorkItem.m_WorkItem,
      (PIO_WORKITEM_ROUTINE)FxThreadedEventQueue::_WorkItemCallback,
      DelayedWorkQueue,
      this);
}
