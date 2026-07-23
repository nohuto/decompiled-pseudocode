/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x140181E10
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
