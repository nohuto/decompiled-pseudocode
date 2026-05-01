/*
 * XREFs of ??1HostResources@ExecutionModel@@QEAA@XZ @ 0x18004D3A4
 * Callers:
 *     ??_GHostResources@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D488 (--_GHostResources@ExecutionModel@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004648 (--1-$CComPtr@UIRMExecServicesProvider@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@1@@Z @ 0x1800062D4 (--$_DeleteNode@U-$_DlistNode@V-$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@.c)
 *     ??$_DeleteNode@U?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@utl@@IEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@@Z @ 0x18001DB84 (--$_DeleteNode@U-$_TreeNode@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::HostResources::~HostResources(ExecutionModel::HostResources *this)
{
  __int64 v2; // rsi
  char **v3; // rbx
  char *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void ***v7; // rbx
  void **v8; // rdx
  void **v9; // rcx
  _QWORD *v10; // rax
  __int64 **v11; // rbx
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rax

  *(_QWORD *)this = &ExecutionModel::HostResources::`vftable';
  ATL::CComPtr<ExecutionModel::IRMExecServicesProvider>::~CComPtr<ExecutionModel::IRMExecServicesProvider>((_QWORD *)this + 16);
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 15));
  v3 = (char **)((char *)this + 96);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (char *)v3 )
      break;
    v5 = (_QWORD *)*((_QWORD *)v4 + 1);
    v6 = *(_QWORD *)v4;
    *v5 = *(_QWORD *)v4;
    *(_QWORD *)(v6 + 8) = v5;
    utl::_ContainerBase<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>,utl::allocator<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>(
      (__int64)v5,
      v4);
  }
  *((_QWORD *)this + 14) = 0LL;
  v7 = (void ***)((char *)this + 56);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (void **)v7 )
      break;
    v9 = (void **)v8[1];
    v10 = *v8;
    *v9 = *v8;
    v10[1] = v9;
    utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
      (__int64)v9,
      v8);
  }
  *((_QWORD *)this + 10) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 56);
  v11 = (__int64 **)((char *)this + 16);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == (__int64 *)v11 )
      break;
    v13 = (__int64 *)v12[1];
    v14 = *v12;
    *v13 = *v12;
    *(_QWORD *)(v14 + 8) = v13;
    operator delete(v12);
  }
  *((_QWORD *)this + 5) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 16);
}
