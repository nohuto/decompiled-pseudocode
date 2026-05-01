/*
 * XREFs of ?Handle_RS_SetExternalResourcePriorities@ResourceManagerServerProxy@@QEAAJKKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800332AC
 * Callers:
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x180031740 (RmtSrv_RS_SetExternalResourcePriorities.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_SetExternalResourcePriorities(
        ResourceManagerServerProxy *this,
        int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  ResourceManagerServerProxy *v5; // rdi
  int v8; // edx
  unsigned int v9; // edi
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  char v12[32]; // [rsp+38h] [rbp-20h] BYREF
  ResourceManagerServerProxy *v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v5 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v13 = 0LL;
  v5 = (ResourceManagerServerProxy *)((char *)v5 + 72);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)v5,
    v8,
    (unsigned int)&v14,
    (unsigned int)&v13,
    (__int64)v12,
    (__int64)v11);
  if ( v13 == v5 )
    v9 = -2147023728;
  else
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ExecutionModel::_ResourceInfo *))(**(_QWORD **)(*((_QWORD *)v13 + 4) + 8LL)
                                                                                           + 112LL))(
           *(_QWORD *)(*((_QWORD *)v13 + 4) + 8LL),
           a3,
           a4);
  LeaveCriticalSection(v4);
  return v9;
}
