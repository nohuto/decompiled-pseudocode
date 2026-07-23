/*
 * XREFs of VF_MARK_FOR_DEFERRED_REMOVE @ 0x1406BA0F0
 * Callers:
 *     VfIoDeleteDevice @ 0x1406C17A8 (VfIoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall VF_MARK_FOR_DEFERRED_REMOVE(struct _LIST_ENTRY *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *i; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    if ( i[1].Blink == a1 )
      LOBYTE(i[2].Flink) = 1;
  }
  KeReleaseSpinLock(&Lock, v2);
}
