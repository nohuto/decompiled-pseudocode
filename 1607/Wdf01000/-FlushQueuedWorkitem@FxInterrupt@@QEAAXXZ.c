/*
 * XREFs of ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C0013910
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0013924 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C009C010 (-Dx@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
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
