/*
 * XREFs of ??0FxEventQueue@@QEAA@E@Z @ 0x1C0056FC4
 * Callers:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C0056DE0 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 * Callees:
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C0011208 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

void __fastcall FxEventQueue::FxEventQueue(FxEventQueue *this, unsigned __int8 QueueDepth)
{
  this->m_QueueLock.m_Lock = 0LL;
  this->m_QueueLock.m_DbgFlagIsInitialized = 1;
  FxWaitLockInternal::FxWaitLockInternal(&this->m_StateMachineLock);
  this->m_PkgPnp = 0LL;
  this->m_EventWorker = 0LL;
  this->m_WorkItemFinished = 0LL;
  *(_DWORD *)&this->m_QueueHead = 0x80000;
  *(_WORD *)&this->m_QueueFlags = 0;
}
