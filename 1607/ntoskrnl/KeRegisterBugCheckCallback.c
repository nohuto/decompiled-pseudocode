/*
 * XREFs of KeRegisterBugCheckCallback @ 0x14012E144
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x14012E2FC (KiCheckForDuplicateBugCheckCallback.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckCallback(
        PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Buffer,
        ULONG Length,
        PUCHAR Component)
{
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v10; // di
  struct _LIST_ENTRY *v11; // r8
  __int64 v12; // rax

  v5 = Length;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v10 = 0;
  if ( !CallbackRecord->State
    && !(unsigned __int8)KiCheckForDuplicateBugCheckCallback(&KeBugCheckCallbackListHead, CallbackRecord) )
  {
    CallbackRecord->CallbackRoutine = CallbackRoutine;
    CallbackRecord->Buffer = Buffer;
    CallbackRecord->Checksum = (ULONG_PTR)&Component[(unsigned __int64)CallbackRoutine + v5 + (_QWORD)Buffer];
    v10 = 1;
    CallbackRecord->Length = v5;
    CallbackRecord->Component = Component;
    CallbackRecord->State = 1;
    v12 = KeBugCheckCallbackListHead;
    if ( *(struct _LIST_ENTRY **)(KeBugCheckCallbackListHead + 8) != v11 )
      __fastfail(3u);
    CallbackRecord->Entry.Flink = (struct _LIST_ENTRY *)KeBugCheckCallbackListHead;
    CallbackRecord->Entry.Blink = v11;
    *(_QWORD *)(v12 + 8) = CallbackRecord;
    KeBugCheckCallbackListHead = (__int64)CallbackRecord;
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  __writecr8(CurrentIrql);
  return v10;
}
