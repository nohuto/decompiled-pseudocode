/*
 * XREFs of ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180033F7C
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180037BB0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005394 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180019434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F21C (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@1@@Z @ 0x180031754 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@.c)
 */

void __fastcall ExecutionModel::ResourceManager::~ResourceManager(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rcx
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 **v7; // rbx
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  ExecutionModel::ResourceSet **v11; // rbx
  int i; // esi
  __int64 **v13; // r14
  __int64 *v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTest'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTestInternal'};
  *((_QWORD *)this + 2) = &ExecutionModel::ResourceManager::`vftable'{for `IResourceEnforcerCallback'};
  *((_QWORD *)this + 3) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_QWORD *)this + 4) = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL, 0LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 30));
  }
  v3 = (__int64 **)((char *)this + 272);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 37) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 272);
  v7 = (__int64 **)((char *)this + 200);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v9 = (__int64 *)v8[1];
    v10 = *v8;
    *v9 = *v8;
    *(_QWORD *)(v10 + 8) = v9;
    utl::_ContainerBase<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>>::_DeleteNode<utl::_HashNode<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>>(
      (__int64)v9,
      v8);
  }
  *((_QWORD *)this + 28) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 200);
  v11 = (ExecutionModel::ResourceSet **)((char *)this + 192);
  for ( i = 1; i >= 0; --i )
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(--v11);
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)this + 20);
  v13 = (__int64 **)((char *)this + 136);
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 == (__int64 *)v13 )
      break;
    v15 = (__int64 *)v14[1];
    v16 = *v14;
    *v15 = *v14;
    *(_QWORD *)(v16 + 8) = v15;
    v17 = v14[2];
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v14[2]);
    operator delete(v14);
  }
  *((_QWORD *)this + 19) = 0LL;
  v18 = *((_QWORD *)this + 16);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 16LL))(*((_QWORD *)this + 16));
  v19 = *((_QWORD *)this + 15);
  if ( v19 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(*((_QWORD *)this + 15));
  v20 = *((_QWORD *)this + 14);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
}
