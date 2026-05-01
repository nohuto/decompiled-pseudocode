/*
 * XREFs of ?Handle_RS_ReleaseResources@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x18003A354
 * Callers:
 *     RmtSrv_RS_ReleaseResources @ 0x1800388B0 (RmtSrv_RS_ReleaseResources.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ?erase@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@2@0@Z @ 0x18003A958 (-erase@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash@K@2@U-.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_ReleaseResources(
        ResourceManagerServerProxy *this,
        int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 *v8; // rbx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v12[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v13 = 0LL;
  v6 = (__int64 *)((char *)this + 72);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v6,
    v7,
    (unsigned __int16 *)&v14,
    &v13,
    v12,
    &v15);
  v8 = v13;
  if ( v13 == v6 )
  {
    v9 = -2147023728;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13[4] + 8) + 120LL))(*(_QWORD *)(v13[4] + 8));
    v9 = v10;
    if ( a3 || v10 >= 0 )
    {
      v9 = 0;
      utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::erase(
        v6,
        &v13,
        v8,
        *v8);
    }
  }
  LeaveCriticalSection(v3);
  return v9;
}
