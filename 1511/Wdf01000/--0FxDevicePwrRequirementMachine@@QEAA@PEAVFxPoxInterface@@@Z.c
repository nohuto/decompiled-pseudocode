/*
 * XREFs of ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008E1B4
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008DF00 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C0056DE0 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine(
        FxDevicePwrRequirementMachine *this,
        FxPoxInterface *PoxInterface)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)PoxInterface);
  this->m_CurrentState = 1;
  memset(this->m_Queue, 0, sizeof(this->m_Queue));
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = this->m_CurrentState;
  this->m_PoxInterface = PoxInterface;
}
