/*
 * XREFs of ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C005CF70
 * Callers:
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C00A319C (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C00A3EA0 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 * Callees:
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C005D254 (--0FxEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxThreadedEventQueue::FxThreadedEventQueue(FxThreadedEventQueue *this, unsigned __int8 QueueDepth)
{
  FxEventQueue::FxEventQueue(this, QueueDepth);
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_EventWorkQueueItem.List.Flink = 0LL;
  this->m_EventWorkQueueItem.WorkerRoutine = FxThreadedEventQueue::_WorkerThreadRoutine;
  this->m_EventWorkQueueItem.Parameter = this;
}
