/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x1401F1F5C
 * Callers:
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdx
  signed __int64 BugCheckParameter4; // rsi
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (volatile signed __int32 *)(BugCheckParameter1 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter1 + 184);
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter1 + 184));
  }
  v4 = *(_QWORD *)(BugCheckParameter1 + 176);
  BugCheckParameter4 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = BugCheckParameter4 - 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x82uLL, BugCheckParameter4);
  return result;
}
