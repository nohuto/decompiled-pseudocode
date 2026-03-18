/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1400A89D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1400A8A00 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopFxArmResidentTimer(v1);
  }
  return result;
}
