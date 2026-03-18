/*
 * XREFs of ?StartTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0069A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StartTransfer(FxDmaScatterGatherTransaction *this)
{
  return ((__int64 (__fastcall *)(FxDmaScatterGatherTransaction *))this->StageTransfer)(this);
}
