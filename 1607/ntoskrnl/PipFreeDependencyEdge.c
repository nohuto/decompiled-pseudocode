/*
 * XREFs of PipFreeDependencyEdge @ 0x1401CD0E0
 * Callers:
 *     IoClearDependency @ 0x14062AB14 (IoClearDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B12C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14062B42C (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDereferenceDependencyNode @ 0x14056840C (PipDereferenceDependencyNode.c)
 *     PipFreeBindingRequestEntry @ 0x14062B3B4 (PipFreeBindingRequestEntry.c)
 *     PipNotifyDependenciesChanged @ 0x14062B5D0 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipFreeDependencyEdge(char *a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 v5; // rax
  KIRQL v6; // r9
  _QWORD *v7; // r8
  void **v8; // rdx
  char **v9; // r8
  void **v10; // rdx

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
  v6 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
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
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v6);
  PipNotifyDependenciesChanged(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 4));
  PipDereferenceDependencyNode(*((_QWORD *)a1 + 4));
  PipDereferenceDependencyNode(*((_QWORD *)a1 + 5));
  ExFreePoolWithTag(a1, 0x53706E50u);
}
