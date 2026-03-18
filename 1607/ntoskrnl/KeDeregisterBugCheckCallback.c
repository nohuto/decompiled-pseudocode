/*
 * XREFs of KeDeregisterBugCheckCallback @ 0x1401264C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckCallback(PKBUGCHECK_CALLBACK_RECORD CallbackRecord)
{
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v3; // di
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v3 = 0;
  if ( CallbackRecord->State == 1 )
  {
    CallbackRecord->State = 0;
    Flink = CallbackRecord->Entry.Flink;
    Blink = CallbackRecord->Entry.Blink;
    if ( (PKBUGCHECK_CALLBACK_RECORD)CallbackRecord->Entry.Flink->Blink != CallbackRecord
      || (PKBUGCHECK_CALLBACK_RECORD)Blink->Flink != CallbackRecord )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v3 = 1;
    Flink->Blink = Blink;
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  __writecr8(CurrentIrql);
  return v3;
}
