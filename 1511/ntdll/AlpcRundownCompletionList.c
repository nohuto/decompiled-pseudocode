/*
 * XREFs of AlpcRundownCompletionList @ 0x180086480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcRundownCompletionList(HANDLE PortHandle)
{
  return NtAlpcSetInformation(PortHandle, AlpcCompletionListRundownInformation, 0LL, 0);
}
