/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x14017FF10
 * Callers:
 *     VfZwAlpcCreateResourceReserve @ 0x140755120 (VfZwAlpcCreateResourceReserve.c)
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
