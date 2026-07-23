/*
 * XREFs of ZwRevertContainerImpersonation @ 0x14015CF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwRevertContainerImpersonation(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
