/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x140151540
 * Callers:
 *     VfZwAlpcCreateResourceReserve @ 0x1406D1558 (VfZwAlpcCreateResourceReserve.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
