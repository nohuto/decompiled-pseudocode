/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1401398B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1, 0xFFFFFFFFLL) )
    PopPepArmIdleTimer(1);
}
