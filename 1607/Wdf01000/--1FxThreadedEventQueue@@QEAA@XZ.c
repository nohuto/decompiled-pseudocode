/*
 * XREFs of ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C009BC58
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C009AEBC (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C002F524 (-Free@MxWorkItem@@QEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::~FxThreadedEventQueue(FxThreadedEventQueue *this)
{
  MxWorkItem::Free(&this->m_WorkItem);
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
}
