/*
 * XREFs of ?Handle_RS_IsApplied@ResourceManagerServerProxy@@QEAAJKPEAH@Z @ 0x180032E30
 * Callers:
 *     RmtSrv_RS_IsApplied @ 0x180031680 (RmtSrv_RS_IsApplied.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_IsApplied(ResourceManagerServerProxy *this, int a2, int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v6; // ebp
  int v7; // edx
  char *v8; // rdi
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a3 )
  {
    v10 = 0LL;
    v8 = (char *)this + 72;
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
      (_DWORD)v8,
      v7,
      (unsigned int)&v11,
      (unsigned int)&v10,
      (__int64)&v13,
      (__int64)&v12);
    if ( (char *)v10 == v8 )
      v6 = -2147023728;
    else
      *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 32) + 8LL) + 88LL))(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8LL));
  }
  else
  {
    v6 = -2147024809;
  }
  LeaveCriticalSection(v3);
  return v6;
}
