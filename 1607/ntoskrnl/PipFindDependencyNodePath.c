/*
 * XREFs of PipFindDependencyNodePath @ 0x140124DB0
 * Callers:
 *     IoTestDependency @ 0x140124D5C (IoTestDependency.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x140124E28 (PipDependencyGraphDepthFirstSearch.c)
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
