/*
 * XREFs of ZwQueryPortInformationProcess @ 0x14015CA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwQueryPortInformationProcess(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
