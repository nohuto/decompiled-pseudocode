/*
 * XREFs of NtListenPort @ 0x14054B264
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __stdcall NtListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  NTSTATUS result; // eax

  do
    result = NtReplyWaitReceivePortEx(PortHandle, 0LL, 0LL, ConnectionRequest, 0LL);
  while ( !result && (ConnectionRequest->u2.s2.Type & 0x7FFF) != 0xA );
  return result;
}
