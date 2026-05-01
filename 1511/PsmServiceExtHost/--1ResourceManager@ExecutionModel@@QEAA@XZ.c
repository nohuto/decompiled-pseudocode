/*
 * XREFs of ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18003B0F8
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18003DBB0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@1@@Z @ 0x180002ED8 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800368D8 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ExecutionModel::ResourceManager::~ResourceManager(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rcx
  wchar_t *v3; // rcx
  __int64 **v4; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 **v8; // rbx
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  ExecutionModel::ResourceSet **v12; // rbx
  int i; // esi
  __int64 **v14; // r14
  __int64 *v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTest'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTestInternal'};
  *((_QWORD *)this + 2) = &ExecutionModel::ResourceManager::`vftable'{for `IResourceEnforcerCallback'};
  *((_QWORD *)this + 3) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL, 0LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 32));
    v3 = (wchar_t *)*((_QWORD *)this + 4);
    if ( v3 )
    {
      if ( v3 != L"System\\ResourceManager\\MemoryHistory" )
        RmpFreeHeap(v3);
    }
  }
  v4 = (__int64 **)((char *)this + 288);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    v6 = (__int64 *)v5[1];
    v7 = *v5;
    *v6 = *v5;
    *(_QWORD *)(v7 + 8) = v6;
    operator delete(v5);
  }
  *((_QWORD *)this + 39) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 288);
  v8 = (__int64 **)((char *)this + 216);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (__int64 *)v8 )
      break;
    v10 = (__int64 *)v9[1];
    v11 = *v9;
    *v10 = *v9;
    *(_QWORD *)(v11 + 8) = v10;
    utl::_ContainerBase<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>>::_DeleteNode<utl::_HashNode<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>>(
      (__int64)v10,
      v9);
  }
  *((_QWORD *)this + 30) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 216);
  v12 = (ExecutionModel::ResourceSet **)((char *)this + 192);
  for ( i = 1; i >= 0; --i )
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(--v12);
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)this + 20);
  v14 = (__int64 **)((char *)this + 136);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == (__int64 *)v14 )
      break;
    v16 = (__int64 *)v15[1];
    v17 = *v15;
    *v16 = *v15;
    *(_QWORD *)(v17 + 8) = v16;
    v18 = v15[2];
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v15[2]);
    operator delete(v15);
  }
  *((_QWORD *)this + 19) = 0LL;
  v19 = *((_QWORD *)this + 16);
  if ( v19 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(*((_QWORD *)this + 16));
  v20 = *((_QWORD *)this + 15);
  if ( v20 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 16LL))(*((_QWORD *)this + 15));
  v21 = *((_QWORD *)this + 14);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
}
