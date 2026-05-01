/*
 * XREFs of ?Handle_RS_SetAutoRelease@ResourceManagerServerProxy@@QEAAJKH@Z @ 0x1800331FC
 * Callers:
 *     RmtSrv_RS_SetAutoRelease @ 0x180031720 (RmtSrv_RS_SetAutoRelease.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_SetAutoRelease(
        ResourceManagerServerProxy *this,
        int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  ResourceManagerServerProxy *v4; // rdi
  unsigned int v6; // r14d
  int v7; // edx
  __int64 v8; // rdx
  char v10[56]; // [rsp+30h] [rbp-38h] BYREF
  ResourceManagerServerProxy *v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = this;
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v11 = 0LL;
  v4 = (ResourceManagerServerProxy *)((char *)v4 + 72);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)v4,
    v7,
    (unsigned int)&v12,
    (unsigned int)&v11,
    (__int64)v10,
    (__int64)&v13);
  if ( v11 == v4 )
  {
    v6 = -2147023728;
  }
  else
  {
    LOBYTE(v8) = a3 != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v11 + 4) + 8LL) + 128LL))(
      *(_QWORD *)(*((_QWORD *)v11 + 4) + 8LL),
      v8);
  }
  LeaveCriticalSection(v3);
  return v6;
}
