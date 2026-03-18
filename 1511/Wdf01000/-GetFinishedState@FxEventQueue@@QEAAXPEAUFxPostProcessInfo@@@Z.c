/*
 * XREFs of ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0056ED8
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0056BD4 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C0056F14 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C008D7CC (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxEventQueue::GetFinishedState(FxEventQueue *this, FxPostProcessInfo *Info)
{
  unsigned __int8 m_QueueFlags; // r8

  m_QueueFlags = this->m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_WorkItemRunningCount && this->m_QueueHead == this->m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
    }
    if ( (this->m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_WorkItemFinished;
      this->m_WorkItemFinished = 0LL;
    }
  }
}
