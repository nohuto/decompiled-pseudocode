/*
 * XREFs of PipFindDependencyNodePath @ 0x140124840
 * Callers:
 *     IoTestDependency @ 0x1401247EC (IoTestDependency.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x1401248B8 (PipDependencyGraphDepthFirstSearch.c)
 */

__int64 __fastcall PipFindDependencyNodePath(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  KIRQL v8; // r10
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  PipDependencyGraphDepthFirstSearch(a1, a2, v10, a4);
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v8);
  result = 0LL;
  if ( v10[0] )
  {
    LOBYTE(result) = v10[0] != 1;
    result = (unsigned int)(result + 1);
  }
  *a3 = result;
  return result;
}
