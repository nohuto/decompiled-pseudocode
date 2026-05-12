/*
 * XREFs of RaidAdapterCancelWaitCheckTimer @ 0x1C00268B8
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0026BEC (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterCancelWaitCheckTimer(__int64 a1)
{
  return KeCancelTimer((PKTIMER)(a1 + 5480));
}
