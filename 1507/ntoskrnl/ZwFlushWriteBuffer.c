/*
 * XREFs of ZwFlushWriteBuffer @ 0x140180B90
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
