/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x180094090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  NTSTATUS result; // eax

  result = 121;
  __asm { syscall; Low latency system call }
  return result;
}
