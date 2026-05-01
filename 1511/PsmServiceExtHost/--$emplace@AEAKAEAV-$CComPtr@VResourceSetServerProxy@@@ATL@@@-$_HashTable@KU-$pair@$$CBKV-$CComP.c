/*
 * XREFs of ??$emplace@AEAKAEAV?$CComPtr@VResourceSetServerProxy@@@ATL@@@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@utl@@_N@1@AEAKAEAV?$CComPtr@VResourceSetServerProxy@@@ATL@@@Z @ 0x1800389D0
 * Callers:
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180038B88 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180038A5C (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@@Z @ 0x18003A778 (-_EmplaceImpl@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 */

__int64 __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::emplace<unsigned long &,ATL::CComPtr<ResourceSetServerProxy> &>(
        int a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // r8d
  __int64 v10; // rbx

  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v8;
  if ( v8 )
  {
    v8[6] = *a3;
    ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(v8 + 8, a4);
  }
  else
  {
    v10 = 0LL;
  }
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EmplaceImpl(
    a1,
    a2,
    v9,
    0,
    v10);
  return a2;
}
