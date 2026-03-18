/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x14013A274
 * Callers:
 *     VerifierPoFxCompleteDevicePowerNotRequired @ 0x140742380 (VerifierPoFxCompleteDevicePowerNotRequired.c)
 * Callees:
 *     PopFxQueueWorkOrder @ 0x140029174 (PopFxQueueWorkOrder.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

void **__fastcall PoFxCompleteDevicePowerNotRequired(ULONG_PTR BugCheckParameter2)
{
  void **result; // rax
  int v3; // esi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 40));
  if ( !v3 )
  {
    v4 = (volatile signed __int32 *)(BugCheckParameter2 + 328);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(BugCheckParameter2 + 328);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 328));
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
      PopFxQueueWorkOrder((__int64)&PopFxSystemWorkQueue, BugCheckParameter2 + 272, BugCheckParameter2, 0);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    result = (void **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v3 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 0LL);
  return result;
}
