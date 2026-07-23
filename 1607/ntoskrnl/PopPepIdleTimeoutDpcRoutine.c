/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402060B4
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140205C1C (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
