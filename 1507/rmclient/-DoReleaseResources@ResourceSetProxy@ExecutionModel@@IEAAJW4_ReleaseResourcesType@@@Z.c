/*
 * XREFs of ?DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z @ 0x18000B38C
 * Callers:
 *     ?ForceReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x18000FF70 (-ForceReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_ReleaseResourcesType@@@Z012@Z @ 0x180004380 (--$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_Relea.c)
 *     ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x1800043D0 (-RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::DoReleaseResources(__int64 a1, int a2)
{
  char v2; // bl
  __int64 v6; // rcx
  int Pointer; // esi

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 48) + 144LL));
  Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ReleaseResourcesType),void *,unsigned __int64,enum _ReleaseResourcesType>(
                            v6,
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            a2).Pointer;
  if ( Pointer >= 0 || !*(_DWORD *)(a1 + 8) )
  {
    ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
      *(ExecutionModel::ResourcePolicyEngineProxy **)(a1 + 48),
      *(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
    v2 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 48) + 144LL));
  if ( v2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    if ( *(_QWORD *)(a1 + 40) )
      ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 40), 0LL);
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  }
  return (unsigned int)Pointer;
}
