/*
 * XREFs of ?AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEAVResourceSetServerProxy@2@PEA_K@Z @ 0x180036508
 * Callers:
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x180015640 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006290 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??$emplace@AEA_KAEAV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@Z @ 0x180036D20 (--$emplace@AEA_KAEAV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::AddResourceSetProxy(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        struct ExecutionModel::IResourceSet *a2,
        struct IUnknown **a3,
        struct IUnknown ***a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // edx
  struct IUnknown **v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[48]; // [rsp+28h] [rbp-30h] BYREF
  struct IUnknown *v13; // [rsp+68h] [rbp+10h] BYREF
  ExecutionModel::ResourceSetServerProxy *v14; // [rsp+70h] [rbp+18h] BYREF

  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v14,
    (__int64)a3);
  v8 = 0;
  if ( a2 && a3 && a4 )
  {
    v11 = a3;
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v13,
      (__int64)a2);
    v9 = (unsigned int)v13;
    if ( a3[2] != v13 )
      ATL::AtlComPtrAssign(a3 + 2, v13);
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
      (ExecutionModel::ResourceSetImpl **)&v13,
      v9);
    if ( *(_BYTE *)(((__int64 (__fastcall *)(char *, _BYTE *, struct IUnknown ***, ExecutionModel::ResourceSetServerProxy **))utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>,0>::emplace<unsigned __int64 &,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy> &>)(
                      (char *)this + 56,
                      v12,
                      &v11,
                      &v14)
                  + 8) )
      *a4 = a3;
    else
      v8 = -2147024882;
  }
  else
  {
    v8 = -2147024809;
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(&v14);
  return v8;
}
