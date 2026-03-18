/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1401ED708
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1401ECFA8 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx((ULONG_PTR)&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
