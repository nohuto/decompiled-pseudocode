/*
 * XREFs of ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D130
 * Callers:
 *     ?Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ @ 0x1800145F0 (-Release@ResourcePolicyEngineServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x180024E34 (-InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPE.c)
 * Callees:
 *     ??1?$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004648 (--1-$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@1@@Z @ 0x180036E64 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@V.c)
 */

ExecutionModel::ResourcePolicyEngineServerProxy *__fastcall ExecutionModel::ResourcePolicyEngineServerProxy::`scalar deleting destructor'(
        ExecutionModel::ResourcePolicyEngineServerProxy *this)
{
  __int64 v1; // rsi
  ExecutionModel::ResourceSetServerProxy ***v3; // rbx
  ExecutionModel::ResourceSetServerProxy **v4; // rdx
  ExecutionModel::ResourceSetServerProxy **v5; // rcx
  ExecutionModel::ResourceSetServerProxy *v6; // rax

  v1 = *((_QWORD *)this + 13);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 13));
  ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>((_QWORD *)this + 12);
  v3 = (ExecutionModel::ResourceSetServerProxy ***)((char *)this + 56);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (ExecutionModel::ResourceSetServerProxy **)v3 )
      break;
    v5 = (ExecutionModel::ResourceSetServerProxy **)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *((_QWORD *)v6 + 1) = v5;
    utl::_ContainerBase<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>::_DeleteNode<utl::_HashNode<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>(
      (__int64)v5,
      v4);
  }
  *((_QWORD *)this + 10) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  operator delete(this);
  return this;
}
