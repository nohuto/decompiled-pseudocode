/*
 * XREFs of ?Handle_RS_Apply@ResourceManagerServerProxy@@QEAAJKK@Z @ 0x180032930
 * Callers:
 *     RmtSrv_RS_Apply @ 0x1800315C0 (RmtSrv_RS_Apply.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_Apply(
        ResourceManagerServerProxy *this,
        int a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  ResourceManagerServerProxy *v4; // rdi
  int v6; // edx
  unsigned int v7; // edi
  char v9[40]; // [rsp+30h] [rbp-28h] BYREF
  ResourceManagerServerProxy *v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10 = 0LL;
  v4 = (ResourceManagerServerProxy *)((char *)v4 + 72);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)v4,
    v6,
    (unsigned int)&v11,
    (unsigned int)&v10,
    (__int64)v9,
    (__int64)&v12);
  if ( v10 == v4 )
    v7 = -2147023728;
  else
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v10 + 4) + 8LL) + 32LL))(
           *(_QWORD *)(*((_QWORD *)v10 + 4) + 8LL),
           a3);
  LeaveCriticalSection(v3);
  return v7;
}
