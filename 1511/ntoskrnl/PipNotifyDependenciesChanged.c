/*
 * XREFs of PipNotifyDependenciesChanged @ 0x1406014D0
 * Callers:
 *     PipCreateNewDependencyEdge @ 0x1401BEBE4 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401BECFC (PipFreeDependencyEdge.c)
 *     PipNotifyDeviceDependencyList @ 0x1404EEF84 (PipNotifyDeviceDependencyList.c)
 *     PipMergeDependencyEdgeList @ 0x14060132C (PipMergeDependencyEdgeList.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipNotifyDependenciesChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 48);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 48);
        if ( v5 )
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 25);
      }
    }
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v8, 24);
      }
    }
  }
}
