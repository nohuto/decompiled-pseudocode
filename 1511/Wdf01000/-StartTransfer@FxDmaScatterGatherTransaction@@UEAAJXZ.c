/*
 * XREFs of ?StartTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C005C300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StartTransfer(FxDmaScatterGatherTransaction *this)
{
  return ((__int64 (__fastcall *)(FxDmaScatterGatherTransaction *))this->StageTransfer)(this);
}
