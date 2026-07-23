/*
 * XREFs of NtImpersonateClientOfPort @ 0x14069E444
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcImpersonateClientOfPort @ 0x140479CB0 (NtAlpcImpersonateClientOfPort.c)
 */

NTSTATUS __stdcall NtImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  NTSTATUS result; // eax

  result = NtAlpcImpersonateClientOfPort(PortHandle, ClientMessage, 0LL);
  if ( result == -1073740030 )
    return -1073741281;
  return result;
}
