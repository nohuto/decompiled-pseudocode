/*
 * XREFs of NtImpersonateClientOfPort @ 0x14061F65C
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcImpersonateClientOfPort @ 0x140425460 (NtAlpcImpersonateClientOfPort.c)
 */

NTSTATUS __stdcall NtImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  NTSTATUS result; // eax

  result = NtAlpcImpersonateClientOfPort(PortHandle, (__int64)ClientMessage, 0LL);
  if ( result == -1073740030 )
    return -1073741281;
  return result;
}
