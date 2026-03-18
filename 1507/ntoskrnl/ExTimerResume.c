/*
 * XREFs of ExTimerResume @ 0x14012D148
 * Callers:
 *     PspSetJobFreezeCountCallback @ 0x14012CF70 (PspSetJobFreezeCountCallback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpTimerResume @ 0x14012D1AC (ExpTimerResume.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExTimerResume(__int64 a1)
{
  struct _KTIMER *v1; // rdi
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _KTIMER *)(a1 - 280);
  v2 = (volatile signed __int32 *)(a1 - 280 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 - 280 + 64);
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 - 280 + 64));
  }
  result = ExpTimerResume(v1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseSpinLockInstrumented(v2, retaddr);
  _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  return result;
}
