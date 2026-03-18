/*
 * XREFs of ACPIFanCancelRequest @ 0x1C003B110
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIFanCancelRequest(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  IoReleaseCancelSpinLock(a2->CancelIrql);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 176));
  Flink = a2->Tail.Overlay.ListEntry.Flink;
  Blink = a2->Tail.Overlay.ListEntry.Blink;
  if ( (void **)Flink->Blink != &a2->Tail.CompletionKey + 6 || (void **)Blink->Flink != &a2->Tail.CompletionKey + 6 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 176), v4);
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
