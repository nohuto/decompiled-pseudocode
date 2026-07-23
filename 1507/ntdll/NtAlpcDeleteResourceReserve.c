/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x1800940D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  NTSTATUS result; // eax

  result = 125;
  __asm { syscall; Low latency system call }
  return result;
}
