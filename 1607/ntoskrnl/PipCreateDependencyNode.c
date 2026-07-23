/*
 * XREFs of PipCreateDependencyNode @ 0x140568418
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x14062B648 (PipSetDependency.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PipAddBindingId @ 0x1405682F8 (PipAddBindingId.c)
 *     PipDeleteDependencyNode @ 0x14062B2D0 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipCreateDependencyNode(__int64 a1)
{
  char *PoolWithTag; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x53706E50u);
  v3 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = PoolWithTag + 56;
    v4[1] = v4;
    *v4 = v4;
    *(_QWORD *)(v3 + 40) = v3 + 32;
    *(_QWORD *)(v3 + 32) = v3 + 32;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    *(_QWORD *)(v3 + 80) = v3 + 72;
    *(_QWORD *)(v3 + 72) = v3 + 72;
    *(_DWORD *)(v3 + 88) = 0;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(v3 + 92) = 0;
    v5 = (__int64 *)qword_140320428;
    if ( *(__int64 **)qword_140320428 != &PiDependencyNodeListHead )
      __fastfail(3u);
    *(_QWORD *)v3 = &PiDependencyNodeListHead;
    *(_QWORD *)(v3 + 8) = v5;
    *v5 = v3;
    qword_140320428 = v3;
    if ( *(_DWORD *)a1 == 1 )
    {
      if ( PipAddBindingId(v3, *(const UNICODE_STRING **)(a1 + 8)) < 0 )
      {
        PipDeleteDependencyNode(v3);
        return 0LL;
      }
    }
    else if ( !*(_DWORD *)a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(v3 + 88);
      *(_QWORD *)(v3 + 48) = v6;
      *(_QWORD *)(*(_QWORD *)(v6 + 312) + 80LL) = v3;
    }
    ++*(_DWORD *)(v3 + 88);
  }
  return v3;
}
