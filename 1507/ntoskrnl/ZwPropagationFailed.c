/*
 * XREFs of ZwPropagationFailed @ 0x1401814B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPropagationFailed(HANDLE ResourceManagerHandle, ULONG RequestCookie, NTSTATUS PropStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
