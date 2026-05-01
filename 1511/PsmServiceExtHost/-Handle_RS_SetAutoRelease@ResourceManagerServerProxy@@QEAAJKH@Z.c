/*
 * XREFs of ?Handle_RS_SetAutoRelease@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x18003A424
 * Callers:
 *     RmtSrv_RS_SetAutoRelease @ 0x1800388D0 (RmtSrv_RS_SetAutoRelease.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_SetAutoRelease(
        ResourceManagerServerProxy *this,
        int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v4; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = (__int64 *)this;
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v11 = 0LL;
  v4 += 9;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v4,
    v7,
    (unsigned __int16 *)&v12,
    &v11,
    v10,
    &v13);
  if ( v11 == v4 )
  {
    v6 = -2147023728;
  }
  else
  {
    LOBYTE(v8) = a3 != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11[4] + 8) + 128LL))(*(_QWORD *)(v11[4] + 8), v8);
  }
  LeaveCriticalSection(v3);
  return v6;
}
