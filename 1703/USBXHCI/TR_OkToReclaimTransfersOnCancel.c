/*
 * XREFs of TR_OkToReclaimTransfersOnCancel @ 0x1C0025544
 * Callers:
 *     ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel @ 0x1C0037B40 (ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel.c)
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C0037D30 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_OkToReclaimTransfersOnCancel(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 56LL))();
}
