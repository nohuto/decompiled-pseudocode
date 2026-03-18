/*
 * XREFs of ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C009BF78
 * Callers:
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C009AEE0 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C002E6F8 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

void __fastcall FxWakeInterruptMachine::FxWakeInterruptMachine(FxWakeInterruptMachine *this, FxInterrupt *Interrupt)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)Interrupt);
  this->m_IsrEvent.m_DbgFlagIsInitialized = 0;
  this->m_CurrentState = 2;
  memset(this->m_Queue, 0, 0x28uLL);
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = this->m_CurrentState;
  this->m_Interrupt = Interrupt;
}
