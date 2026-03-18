/*
 * XREFs of ZwYieldExecution @ 0x14015A540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwYieldExecution(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(v1, v0, v2);
}
