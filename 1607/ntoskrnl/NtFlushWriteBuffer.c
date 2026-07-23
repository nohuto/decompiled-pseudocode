/*
 * XREFs of NtFlushWriteBuffer @ 0x1406615F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtFlushWriteBuffer(void)
{
  KeFlushWriteBuffer();
  return 0;
}
