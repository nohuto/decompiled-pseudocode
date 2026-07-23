/*
 * XREFs of RtlGetCurrentTransaction @ 0x18006A3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE RtlGetCurrentTransaction(void)
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
