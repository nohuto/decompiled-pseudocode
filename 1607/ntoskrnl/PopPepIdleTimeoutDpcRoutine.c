/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140206288
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1400A8A00 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140205DF0 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
