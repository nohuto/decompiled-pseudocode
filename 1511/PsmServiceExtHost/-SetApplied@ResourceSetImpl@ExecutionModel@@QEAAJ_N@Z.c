/*
 * XREFs of ?SetApplied@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x1800145B4
 * Callers:
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x1800137F0 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::SetApplied(ExecutionModel::ResourceSetImpl *this, char a2)
{
  int v2; // r8d

  v2 = *((_DWORD *)this + 7);
  if ( a2 == ((v2 & 8) != 0) )
    return 0LL;
  if ( !a2 || (v2 & 1) != 0 )
  {
    *((_DWORD *)this + 7) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(8 * a2)) & 8;
    return 0LL;
  }
  return 2147500037LL;
}
