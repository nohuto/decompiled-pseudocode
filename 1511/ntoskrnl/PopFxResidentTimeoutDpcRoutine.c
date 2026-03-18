/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1400F3F94
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL) )
    PopFxArmResidentTimer(1);
}
