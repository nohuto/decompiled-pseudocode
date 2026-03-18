/*
 * XREFs of NtFlushWriteBuffer @ 0x14066150C
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
