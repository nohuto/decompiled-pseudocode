/*
 * XREFs of ACPIButtonCancelRequest @ 0x1C0047660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIButtonCancelRequest(__int64 a1, IRP *a2)
{
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // r9

  IoReleaseCancelSpinLock(a2->CancelIrql);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  Flink = a2->Tail.Overlay.ListEntry.Flink;
  Blink = a2->Tail.Overlay.ListEntry.Blink;
  if ( (void **)Flink->Blink != &a2->Tail.CompletionKey + 6 || (void **)Blink->Flink != &a2->Tail.CompletionKey + 6 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock(&AcpiButtonLock, v3);
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
