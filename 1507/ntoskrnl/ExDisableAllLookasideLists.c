/*
 * XREFs of ExDisableAllLookasideLists @ 0x140264960
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 ExDisableAllLookasideLists()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 *i; // rax
  unsigned __int8 v2; // bl
  __int64 *j; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ExMinimumLookasideDepth = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExNPagedLookasideLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExNPagedLookasideLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExNPagedLookasideLock);
  }
  for ( i = (__int64 *)ExNPagedLookasideListHead; i != &ExNPagedLookasideListHead; i = (__int64 *)*i )
    *((_DWORD *)i - 12) = -65536;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExNPagedLookasideLock, retaddr);
  else
    _InterlockedAnd64(&ExNPagedLookasideLock, 0LL);
  __writecr8(CurrentIrql);
  v2 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExPagedLookasideLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExPagedLookasideLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExPagedLookasideLock);
  }
  for ( j = (__int64 *)ExPagedLookasideListHead; j != &ExPagedLookasideListHead; j = (__int64 *)*j )
    *((_DWORD *)j - 12) = -65536;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExPagedLookasideLock, retaddr);
  else
    _InterlockedAnd64(&ExPagedLookasideLock, 0LL);
  result = v2;
  __writecr8(v2);
  return result;
}
