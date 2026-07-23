/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x14015D130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetDefaultHardErrorPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
