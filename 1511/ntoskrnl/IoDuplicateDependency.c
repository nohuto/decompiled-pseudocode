/*
 * XREFs of IoDuplicateDependency @ 0x140600ACC
 * Callers:
 *     <none>
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401BEB40 (PiListEntryToDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404583AC (PnpReleaseDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x14049F368 (PiGetDependentList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140534D14 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipQueryBindingResolution @ 0x140534DB8 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140534E54 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140534E60 (PipCreateDependencyNode.c)
 *     PipDependencyCopyEdge @ 0x140601234 (PipDependencyCopyEdge.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *BindingResolution; // rax
  __int64 DependencyNode; // rdi
  __int64 *DependentList; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = 0;
  if ( a1 && a2 )
  {
    PnpAcquireDependencyRelationsLock(1);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) )
    {
LABEL_4:
      PnpReleaseDependencyRelationsLock();
      return v2;
    }
    v13 = 0;
    v14 = a2;
    BindingResolution = PipQueryBindingResolution((__int64)&v13);
    DependencyNode = (__int64)BindingResolution;
    if ( BindingResolution )
    {
      ++*((_DWORD *)BindingResolution + 22);
    }
    else
    {
      DependencyNode = PipCreateDependencyNode((__int64)&v13);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = PiGetDependentList(a1);
    v8 = (__int64 *)*DependentList;
    if ( (__int64 *)*DependentList != DependentList )
    {
      while ( 1 )
      {
        v9 = PiListEntryToDependencyEdge((__int64)v8, 1);
        v8 = (__int64 *)*v8;
        v10 = PipDependencyCopyEdge(v9, DependencyNode);
        if ( v10 < 0 )
          break;
        if ( v8 == DependentList )
          goto LABEL_14;
      }
      v2 = v10;
    }
LABEL_14:
    PipDereferenceDependencyNode(DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    PnpReleaseDependencyRelationsLock();
    PipProcessRebuildPowerRelationsQueue(v11);
    return v2;
  }
  return 3221225485LL;
}
