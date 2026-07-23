/*
 * XREFs of ZwAlpcDeleteSecurityContext @ 0x14017FFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
