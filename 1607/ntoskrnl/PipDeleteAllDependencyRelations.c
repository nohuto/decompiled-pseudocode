/*
 * XREFs of PipDeleteAllDependencyRelations @ 0x14062B078
 * Callers:
 *     IoDeleteAllDependencyRelations @ 0x1403F2DD8 (IoDeleteAllDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CD0D8 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401CD294 (PipFreeDependencyEdge.c)
 *     PipDereferenceDependencyNode @ 0x140567ECC (PipDereferenceDependencyNode.c)
 *     PipAttemptDependentStart @ 0x14062AEC8 (PipAttemptDependentStart.c)
 *     PipConvertResolutionsToReservations @ 0x14062AFD4 (PipConvertResolutionsToReservations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14062B634 (PipUnlinkDeviceObjectAndDependencyNode.c)
 */

_UNKNOWN **__fastcall PipDeleteAllDependencyRelations(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  char *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a1 )
  {
    result = *(_UNKNOWN ***)(a1 + 312);
    v3 = (__int64)result[10];
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 88);
    PipConvertResolutionsToReservations(v3);
    v4 = *(_QWORD **)(v3 + 16);
    while ( v4 != (_QWORD *)(v3 + 16) )
    {
      v5 = (char *)PiListEntryToDependencyEdge((__int64)v4, 0);
      v4 = (_QWORD *)*v4;
      PipFreeDependencyEdge(v5, v6);
    }
    v7 = *(_QWORD **)(v3 + 32);
    while ( v7 != (_QWORD *)(v3 + 32) )
    {
      v8 = PiListEntryToDependencyEdge((__int64)v7, 1);
      v7 = (_QWORD *)*v7;
      v9 = *(_QWORD *)(v8 + 40);
      ++*(_DWORD *)(v9 + 88);
      PipFreeDependencyEdge((char *)v8, 0LL);
      v10 = *(_QWORD **)(v9 + 48);
      if ( v10 )
      {
        if ( *(_QWORD *)(v9 + 16) != v9 + 16 )
          PipAttemptDependentStart(v10);
      }
      PipDereferenceDependencyNode(v9);
    }
    PipUnlinkDeviceObjectAndDependencyNode(a1, v3);
    return (_UNKNOWN **)PipDereferenceDependencyNode(v3);
  }
  return result;
}
