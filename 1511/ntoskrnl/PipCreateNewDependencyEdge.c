/*
 * XREFs of PipCreateNewDependencyEdge @ 0x1401BEBE4
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401BEB4C (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipAddRequestToEdge @ 0x140600D28 (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x1406014D0 (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x140601544 (PipReferenceDependencyNode.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  KIRQL v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x53706E50u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 12) = 0;
    PoolWithTag[5] = a1;
    PoolWithTag[4] = a2;
    PoolWithTag[8] = PoolWithTag + 7;
    PoolWithTag[7] = PoolWithTag + 7;
    *((_BYTE *)PoolWithTag + 72) = 0;
    if ( PipAddRequestToEdge(PoolWithTag, a3) )
    {
      PipReferenceDependencyNode(a1);
      PipReferenceDependencyNode(a2);
      v8 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v9 = *(_QWORD **)(a2 + 40);
      v10 = v7 + 2;
      v7[2] = a2 + 32;
      v7[3] = v9;
      if ( *v9 != a2 + 32 )
        __fastfail(3u);
      *v9 = v10;
      *(_QWORD *)(a2 + 40) = v10;
      v11 = *(_QWORD **)(a1 + 24);
      *v7 = a1 + 16;
      v7[1] = v11;
      if ( *v11 != a1 + 16 )
        __fastfail(3u);
      *v11 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v8);
      PipNotifyDependenciesChanged(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
