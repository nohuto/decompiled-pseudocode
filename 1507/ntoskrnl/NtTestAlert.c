/*
 * XREFs of NtTestAlert @ 0x14045015C
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140020390 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
