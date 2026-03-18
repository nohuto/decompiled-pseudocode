/*
 * XREFs of PipFreeDependencyEdge @ 0x1401FA5B0
 * Callers:
 *     IoClearDependency @ 0x14067B624 (IoClearDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14067BC3C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14067BF3C (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PipDereferenceDependencyNode @ 0x1405B1AE4 (PipDereferenceDependencyNode.c)
 *     PipFreeBindingRequestEntry @ 0x14067BEC4 (PipFreeBindingRequestEntry.c)
 *     PipNotifyDependenciesChanged @ 0x14067C0E0 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipFreeDependencyEdge(char *a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 v5; // rax
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rcx
  void **v8; // rax
  char **v9; // rdx
  void **v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (__int64 **)(a1 + 56);
  while ( *v3 != (__int64 *)v3 )
  {
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != *v3 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    PipFreeBindingRequestEntry();
  }
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
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= *((_DWORD *)a1 + 12);
  v7 = *(_QWORD **)a1;
  v8 = (void **)*((_QWORD *)a1 + 1);
  if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v8 != a1 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  v9 = (char **)*((_QWORD *)a1 + 2);
  v10 = (void **)*((_QWORD *)a1 + 3);
  if ( v9[1] != a1 + 16 || *v10 != a1 + 16 )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = (char *)v10;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PiDependencyEdgeWriteLock, retaddr);
  else
    _InterlockedAnd64(&PiDependencyEdgeWriteLock, 0LL);
  __writecr8(CurrentIrql);
  PipNotifyDependenciesChanged(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 4));
  PipDereferenceDependencyNode(*((_QWORD *)a1 + 4));
  PipDereferenceDependencyNode(*((_QWORD *)a1 + 5));
  ExFreePoolWithTag(a1, 0x53706E50u);
}
