/*
 * XREFs of AlpcUnregisterCompletionList @ 0x18008A2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcUnregisterCompletionList(HANDLE PortHandle)
{
  return NtAlpcSetInformation(PortHandle, AlpcUnregisterCompletionListInformation, 0LL, 0);
}
