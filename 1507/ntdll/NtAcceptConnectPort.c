/*
 * XREFs of NtAcceptConnectPort @ 0x180093920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  NTSTATUS result; // eax

  result = 2;
  __asm { syscall; Low latency system call }
  return result;
}
