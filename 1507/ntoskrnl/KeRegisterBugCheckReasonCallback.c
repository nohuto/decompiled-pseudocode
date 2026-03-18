/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x140156464
 * Callers:
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140156558 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rsi
  BOOLEAN v8; // di
  unsigned __int8 CurrentIrql; // bp
  __int64 *v10; // rcx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Flink; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KeBugCheckCallbackLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KeBugCheckCallbackLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KeBugCheckCallbackLock);
  }
  if ( CallbackRecord->State )
    goto LABEL_13;
  if ( (_DWORD)v5 == 4 || (v10 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_13:
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
    CallbackRecord->Entry.Flink = v11->Flink;
    CallbackRecord->Entry.Blink = v11;
    if ( Flink->Blink != v11 )
      __fastfail(3u);
    Flink->Blink = &CallbackRecord->Entry;
    v11->Flink = &CallbackRecord->Entry;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KeBugCheckCallbackLock, retaddr);
  else
    _InterlockedAnd64(&KeBugCheckCallbackLock, 0LL);
  __writecr8(CurrentIrql);
  return v8;
}
