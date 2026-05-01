/*
 * XREFs of ?Handle_RS_Apply@ResourceManagerServerProxy@@QEAAJKK@Z @ 0x180039B50
 * Callers:
 *     RmtSrv_RS_Apply @ 0x180038770 (RmtSrv_RS_Apply.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_Apply(
        ResourceManagerServerProxy *this,
        int a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v9[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = (__int64 *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10 = 0LL;
  v4 += 9;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v4,
    v6,
    (unsigned __int16 *)&v11,
    &v10,
    v9,
    &v12);
  if ( v10 == v4 )
    v7 = -2147023728;
  else
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10[4] + 8) + 32LL))(*(_QWORD *)(v10[4] + 8), a3);
  LeaveCriticalSection(v3);
  return v7;
}
