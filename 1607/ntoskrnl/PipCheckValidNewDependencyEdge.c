/*
 * XREFs of PipCheckValidNewDependencyEdge @ 0x14062B000
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401CCF30 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CCF24 (PiListEntryToDependencyEdge.c)
 */

char __fastcall PipCheckValidNewDependencyEdge(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // r8
  __int64 v11; // r10

  if ( a1 == a2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  if ( v4 && v6 )
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      if ( v6 == v4 )
        return 0;
    }
    while ( v6 != IopRootDeviceNode );
  }
  v7 = a2 + 16;
  v8 = *(_QWORD *)(a2 + 16);
  while ( v8 != v7 )
  {
    v9 = PiListEntryToDependencyEdge(v8, 0);
    v8 = *v10;
    if ( *(_QWORD *)(v9 + 32) == v11 )
      return 0;
  }
  return 1;
}
