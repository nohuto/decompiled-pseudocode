/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x18006BD10
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x18006BAA0 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18006BC94 (TppFastAlpcAdjustConcurrencyCount.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A61D0 (NtAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcAdjustCompletionListConcurrencyCount(HANDLE PortHandle, ULONG ConcurrencyCount)
{
  ULONG PortInformation; // [rsp+38h] [rbp+10h] BYREF

  PortInformation = ConcurrencyCount;
  return NtAlpcSetInformation(PortHandle, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
}
