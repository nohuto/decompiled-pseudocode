/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800797A0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x1800795D4 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TpCallbackIndependent @ 0x180079650 (TpCallbackIndependent.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x180094190 (NtAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcAdjustCompletionListConcurrencyCount(HANDLE PortHandle, ULONG ConcurrencyCount)
{
  ULONG PortInformation; // [rsp+38h] [rbp+10h] BYREF

  PortInformation = ConcurrencyCount;
  return NtAlpcSetInformation(PortHandle, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
}
