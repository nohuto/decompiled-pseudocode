/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800653E0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D450 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x180065180 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180065364 (TppFastAlpcAdjustConcurrencyCount.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A7530 (NtAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcAdjustCompletionListConcurrencyCount(HANDLE PortHandle, ULONG ConcurrencyCount)
{
  ULONG PortInformation; // [rsp+38h] [rbp+10h] BYREF

  PortInformation = ConcurrencyCount;
  return NtAlpcSetInformation(PortHandle, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
}
