/*
 * XREFs of NtTestAlert @ 0x1404EEA78
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1400CAF2C (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
