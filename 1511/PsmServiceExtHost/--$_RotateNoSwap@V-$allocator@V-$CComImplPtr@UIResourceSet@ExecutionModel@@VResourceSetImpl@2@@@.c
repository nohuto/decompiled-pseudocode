/*
 * XREFs of ??$_RotateNoSwap@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@YA_NAEAV?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@0@PEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@11@Z @ 0x18004D770
 * Callers:
 *     ?_Rotate@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K0@Z @ 0x18004E1F8 (-_Rotate@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

char __fastcall utl::_RotateNoSwap<utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>,CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>(
        __int64 a1,
        __int64 *a2,
        struct IUnknown **a3,
        struct IUnknown **a4)
{
  struct IUnknown **v4; // rbx
  struct IUnknown **v7; // rsi
  struct IUnknown *v8; // rdx
  struct IUnknown *v9; // rdx
  struct IUnknown **v10; // rsi

  v4 = (struct IUnknown **)a2;
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(a4, *a2);
  v7 = a3;
  while ( 1 )
  {
    if ( *v4 != *v7 )
      ATL::AtlComPtrAssign(v4, *v7);
    v8 = *a4;
    if ( *v7 != *a4 )
      ATL::AtlComPtrAssign(v7, v8);
    ++v4;
    if ( ++v7 == a4 )
      break;
    v9 = *v4;
    if ( v4 == a3 )
      a3 = v7;
    if ( *a4 != v9 )
      ATL::AtlComPtrAssign(a4, v9);
  }
  v10 = a3;
  while ( v4 != v10 )
  {
    if ( *a4 != *v4 )
      ATL::AtlComPtrAssign(a4, *v4);
    if ( *v4 != *v10 )
      ATL::AtlComPtrAssign(v4, *v10);
    v8 = *a4;
    if ( *v10 != *a4 )
      ATL::AtlComPtrAssign(v10, v8);
    ++v4;
    if ( ++v10 == a4 )
    {
      v10 = a3;
    }
    else if ( v4 == a3 )
    {
      a3 = v10;
    }
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)a4,
    (unsigned int)v8);
  return 1;
}
