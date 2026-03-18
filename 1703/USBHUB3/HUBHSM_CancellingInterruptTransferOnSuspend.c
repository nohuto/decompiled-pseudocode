/*
 * XREFs of HUBHSM_CancellingInterruptTransferOnSuspend @ 0x1C0007230
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CancelInterruptTransfer @ 0x1C00034A8 (HUBHTX_CancelInterruptTransfer.c)
 */

__int64 __fastcall HUBHSM_CancellingInterruptTransferOnSuspend(__int64 a1)
{
  HUBHTX_CancelInterruptTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
