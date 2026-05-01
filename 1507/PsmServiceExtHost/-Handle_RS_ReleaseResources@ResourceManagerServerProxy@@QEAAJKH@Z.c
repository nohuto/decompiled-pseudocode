/*
 * XREFs of ?Handle_RS_ReleaseResources@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x18003312C
 * Callers:
 *     RmtSrv_RS_ReleaseResources @ 0x180031700 (RmtSrv_RS_ReleaseResources.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?erase@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@0@Z @ 0x180033734 (-erase@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@ExecutionM.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_ReleaseResources(
        ResourceManagerServerProxy *this,
        int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  char *v6; // rbp
  int v7; // edx
  char *v8; // rbx
  unsigned int v9; // esi
  int v10; // eax
  char v12[56]; // [rsp+30h] [rbp-38h] BYREF
  char *v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v13 = 0LL;
  v6 = (char *)this + 72;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)v6,
    v7,
    (unsigned int)&v14,
    (unsigned int)&v13,
    (__int64)v12,
    (__int64)&v15);
  v8 = v13;
  if ( v13 == v6 )
  {
    v9 = -2147023728;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v13 + 4) + 8LL) + 120LL))(*(_QWORD *)(*((_QWORD *)v13 + 4) + 8LL));
    v9 = v10;
    if ( a3 || v10 >= 0 )
    {
      v9 = 0;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::erase(
        v6,
        &v13,
        v8,
        *(_QWORD *)v8);
    }
  }
  LeaveCriticalSection(v3);
  return v9;
}
