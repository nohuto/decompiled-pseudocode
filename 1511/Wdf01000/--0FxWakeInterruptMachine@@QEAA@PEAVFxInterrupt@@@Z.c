/*
 * XREFs of ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008D49C
 * Callers:
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008C47C (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C0056DE0 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxWakeInterruptMachine::FxWakeInterruptMachine(FxWakeInterruptMachine *this, FxInterrupt *Interrupt)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)Interrupt);
  this->m_IsrEvent.m_DbgFlagIsInitialized = 0;
  this->m_CurrentState = 2;
  memset(this->m_Queue, 0, sizeof(this->m_Queue));
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = this->m_CurrentState;
  this->m_Interrupt = Interrupt;
}
