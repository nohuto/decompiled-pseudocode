/*
 * XREFs of ?Handle_RS_SetExternalResourcePriorities@ResourceManagerServerProxy@@QEAAJKKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18003A4D4
 * Callers:
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x1800388F0 (RmtSrv_RS_SetExternalResourcePriorities.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_SetExternalResourcePriorities(
        ResourceManagerServerProxy *this,
        int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 *v5; // rdi
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v5 = (__int64 *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v13 = 0LL;
  v5 += 9;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v5,
    v8,
    (unsigned __int16 *)&v14,
    &v13,
    v12,
    &v11);
  if ( v13 == v5 )
    v9 = -2147023728;
  else
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ExecutionModel::_ResourceInfo *))(**(_QWORD **)(v13[4] + 8)
                                                                                           + 112LL))(
           *(_QWORD *)(v13[4] + 8),
           a3,
           a4);
  LeaveCriticalSection(v4);
  return v9;
}
