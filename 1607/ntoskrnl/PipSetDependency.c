/*
 * XREFs of PipSetDependency @ 0x14062B594
 * Callers:
 *     IoReserveDependency @ 0x14062AC1C (IoReserveDependency.c)
 *     IoSetDependency @ 0x14062AC94 (IoSetDependency.c)
 *     PipConvertResolutionsToReservations @ 0x14062AFD4 (PipConvertResolutionsToReservations.c)
 * Callees:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401CD0E4 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipQueryBindingResolution @ 0x140567E30 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140567ECC (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140567ED8 (PipCreateDependencyNode.c)
 */

__int64 __fastcall PipSetDependency(__int64 a1, __int64 a2)
{
  __int64 *BindingResolution; // rax
  __int64 DependencyNode; // rsi
  unsigned int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // rbx

  BindingResolution = PipQueryBindingResolution(a1);
  DependencyNode = (__int64)BindingResolution;
  if ( BindingResolution )
  {
    ++*((_DWORD *)BindingResolution + 22);
  }
  else
  {
    DependencyNode = PipCreateDependencyNode(a1);
    if ( !DependencyNode )
      return (unsigned int)-1073741670;
  }
  v7 = PipQueryBindingResolution(a2);
  v8 = (__int64)v7;
  if ( v7 )
  {
    ++*((_DWORD *)v7 + 22);
  }
  else
  {
    v8 = PipCreateDependencyNode(a2);
    if ( !v8 )
    {
      v6 = -1073741670;
      goto LABEL_10;
    }
  }
  v6 = PipAddDependencyEdgeBetweenNodes(DependencyNode, v8, a2);
LABEL_10:
  PipDereferenceDependencyNode(DependencyNode);
  if ( v8 )
    PipDereferenceDependencyNode(v8);
  return v6;
}
