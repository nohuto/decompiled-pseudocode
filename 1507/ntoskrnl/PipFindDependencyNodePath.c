/*
 * XREFs of PipFindDependencyNodePath @ 0x14014A848
 * Callers:
 *     IoTestDependency @ 0x14014A7F4 (IoTestDependency.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x14014A8F0 (PipDependencyGraphDepthFirstSearch.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PipFindDependencyNodePath(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  int v9; // ebx
  __int64 result; // rax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

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
  PipDependencyGraphDepthFirstSearch(a1, a2, v11, a4);
  v9 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PiDependencyEdgeWriteLock, retaddr);
  else
    _InterlockedAnd64(&PiDependencyEdgeWriteLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v11[0] )
  {
    LOBYTE(v9) = v11[0] != 1;
    ++v9;
  }
  *a3 = v9;
  return result;
}
