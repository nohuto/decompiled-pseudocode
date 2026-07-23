/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1400C67B8
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 */

NTSTATUS NtFlushProcessWriteBuffers(void)
{
  KeFlushProcessWriteBuffers(0LL);
  return 0;
}
