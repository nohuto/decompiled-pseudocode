/*
 * XREFs of NtTestAlert @ 0x14050BAE8
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1400CD08C (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
