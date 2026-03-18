/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140131804
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
