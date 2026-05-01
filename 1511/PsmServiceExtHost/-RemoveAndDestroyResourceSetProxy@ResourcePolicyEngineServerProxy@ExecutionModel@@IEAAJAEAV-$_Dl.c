/*
 * XREFs of ?RemoveAndDestroyResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180036490
 * Callers:
 *     ?Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z @ 0x180020910 (-Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?erase@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@2@0@Z @ 0x180036DAC (-erase@-$_HashTable@_KU-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResour.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::RemoveAndDestroyResourceSetProxy(
        __int64 a1,
        _QWORD **a2)
{
  __int64 v2; // rbp
  unsigned int v4; // ebx
  __int64 v5; // rdi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 56;
  if ( *a2 == (_QWORD *)(a1 + 56) )
  {
    return (unsigned int)-2147467259;
  }
  else
  {
    v5 = (*a2)[4];
    v4 = 0;
    if ( *(_QWORD *)(v5 + 32) )
      ATL::AtlComPtrAssign((struct IUnknown **)(v5 + 32), 0LL);
    *(_WORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 40) = 0LL;
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>,0>::erase(
      v2,
      &v7,
      *a2,
      **a2);
  }
  return v4;
}
