/*
 * XREFs of PipCreateNewDependencyEdge @ 0x1401FA44C
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401FA3B4 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PipAddRequestToEdge @ 0x14067B938 (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x14067C0E0 (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x14067C154 (PipReferenceDependencyNode.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&PiDependencyEdgeWriteLock, retaddr);
      else
        _InterlockedAnd64(&PiDependencyEdgeWriteLock, 0LL);
      __writecr8(CurrentIrql);
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
