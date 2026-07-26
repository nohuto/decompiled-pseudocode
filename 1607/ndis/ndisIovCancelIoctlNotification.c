/*
 * XREFs of ndisIovCancelIoctlNotification @ 0x1C0068220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisIovCancelIoctlNotification(__int64 a1, _IRP *a2)
{
  KIRQL CancelIrql; // cl

  CancelIrql = a2->CancelIrql;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IoReleaseCancelSpinLock(CancelIrql);
  IofCompleteRequest(a2, 0);
}
