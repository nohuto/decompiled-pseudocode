/*
 * XREFs of ?Handle_RS_Apply2@ResourceManagerServerProxy@@QEAAJK@Z @ 0x180039ABC
 * Callers:
 *     RmtSrv_RS_Apply2 @ 0x180038790 (RmtSrv_RS_Apply2.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_Apply2(ResourceManagerServerProxy *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 *v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v3 = (__int64 *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = 0LL;
  v3 += 9;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v3,
    v4,
    (unsigned __int16 *)&v8,
    &v7,
    &v10,
    &v9);
  if ( v7 == v3 )
    v5 = -2147023728;
  else
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7[4] + 8) + 24LL))(*(_QWORD *)(v7[4] + 8));
  LeaveCriticalSection(v2);
  return v5;
}
