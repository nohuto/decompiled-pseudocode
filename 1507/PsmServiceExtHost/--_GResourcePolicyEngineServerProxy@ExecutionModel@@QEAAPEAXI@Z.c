/*
 * XREFs of ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x1800474D4
 * Callers:
 *     ?Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ @ 0x1800153B0 (-Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x1800205EC (-InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPE.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180019434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??1?$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800212E0 (--1-$CComPtrBase@UIResourcePolicyEngine@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@1@@Z @ 0x18002F6B0 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@V.c)
 */

ExecutionModel::ResourcePolicyEngineServerProxy *__fastcall ExecutionModel::ResourcePolicyEngineServerProxy::`scalar deleting destructor'(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  ExecutionModel::ResourceSetServerProxy ***v4; // rbx
  ExecutionModel::ResourceSetServerProxy **v5; // rdx
  ExecutionModel::ResourceSetServerProxy **v6; // rcx
  ExecutionModel::ResourceSetServerProxy *v7; // rax

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 13));
  ATL::CComPtrBase<ExecutionModel::IResourcePolicyEngine>::~CComPtrBase<ExecutionModel::IResourcePolicyEngine>(
    (ExecutionModel::ResourcePolicyEngine **)this + 12,
    a2);
  v4 = (ExecutionModel::ResourceSetServerProxy ***)((char *)this + 56);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (ExecutionModel::ResourceSetServerProxy **)v4 )
      break;
    v6 = (ExecutionModel::ResourceSetServerProxy **)v5[1];
    v7 = *v5;
    *v6 = *v5;
    *((_QWORD *)v7 + 1) = v6;
    utl::_ContainerBase<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>::_DeleteNode<utl::_HashNode<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>(
      (__int64)v6,
      v5);
  }
  *((_QWORD *)this + 10) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  operator delete(this);
  return this;
}
