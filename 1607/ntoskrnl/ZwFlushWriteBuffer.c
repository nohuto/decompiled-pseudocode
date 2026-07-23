/*
 * XREFs of ZwFlushWriteBuffer @ 0x14015BDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwFlushWriteBuffer(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
