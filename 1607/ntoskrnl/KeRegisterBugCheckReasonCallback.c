/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x14012E220
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1401C07CC (HvlpInitializeHvCrashdump.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x14012E2FC (KiCheckForDuplicateBugCheckCallback.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rsi
  BOOLEAN v8; // di
  unsigned __int8 CurrentIrql; // r15
  __int64 *v10; // rcx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( CallbackRecord->State )
    goto LABEL_9;
  if ( (_DWORD)v5 == 4 || (v10 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_9:
    v8 = 0;
  }
  else
  {
    CallbackRecord->CallbackRoutine = CallbackRoutine;
    CallbackRecord->Reason = v5;
    CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
    CallbackRecord->Component = Component;
    CallbackRecord->State = 1;
    Flink = v11->Flink;
    if ( v11->Flink->Blink != v11 )
      __fastfail(3u);
    CallbackRecord->Entry.Flink = Flink;
    CallbackRecord->Entry.Blink = v11;
    Flink->Blink = &CallbackRecord->Entry;
    v11->Flink = &CallbackRecord->Entry;
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  __writecr8(CurrentIrql);
  return v8;
}
