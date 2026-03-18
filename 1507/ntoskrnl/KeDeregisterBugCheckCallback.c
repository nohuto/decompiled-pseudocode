/*
 * XREFs of KeDeregisterBugCheckCallback @ 0x1402026DC
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckCallback(PKBUGCHECK_CALLBACK_RECORD CallbackRecord)
{
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v3; // di
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KeBugCheckCallbackLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KeBugCheckCallbackLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KeBugCheckCallbackLock);
  }
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KeBugCheckCallbackLock, retaddr);
  else
    _InterlockedAnd64(&KeBugCheckCallbackLock, 0LL);
  __writecr8(CurrentIrql);
  return v3;
}
