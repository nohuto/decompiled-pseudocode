/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x14012B938
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 */

__int64 NtFlushProcessWriteBuffers()
{
  KeFlushProcessWriteBuffers(0);
  return 0LL;
}
