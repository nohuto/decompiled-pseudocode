/*
 * XREFs of ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C000F310
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000F324 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008D530 (-Dx@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::FlushQueuedWorkitem(FxInterrupt *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx

  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
    FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
}
