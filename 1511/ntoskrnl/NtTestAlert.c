/*
 * XREFs of NtTestAlert @ 0x1403EFC60
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x14002B04C (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
