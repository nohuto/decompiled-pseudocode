/*
 * XREFs of ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C00A2FE0
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009CA20 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A1B9C (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxThreadedEventQueue::~FxThreadedEventQueue(FxThreadedEventQueue *this)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  m_WorkItem = this->m_WorkItem.m_WorkItem;
  if ( m_WorkItem )
  {
    IoFreeWorkItem(m_WorkItem);
    this->m_WorkItem.m_WorkItem = 0LL;
  }
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
}
