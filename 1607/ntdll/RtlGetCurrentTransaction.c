/*
 * XREFs of RtlGetCurrentTransaction @ 0x1800770C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *RtlGetCurrentTransaction()
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
