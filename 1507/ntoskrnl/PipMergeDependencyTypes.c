/*
 * XREFs of PipMergeDependencyTypes @ 0x1401FA6F0
 * Callers:
 *     PipAddRequestToEdge @ 0x14067B938 (PipAddRequestToEdge.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PiDependencyEdgeWriteLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PiDependencyEdgeWriteLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PiDependencyEdgeWriteLock);
  }
  *(_DWORD *)(a1 + 48) |= a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PiDependencyEdgeWriteLock, retaddr);
  else
    _InterlockedAnd64(&PiDependencyEdgeWriteLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
