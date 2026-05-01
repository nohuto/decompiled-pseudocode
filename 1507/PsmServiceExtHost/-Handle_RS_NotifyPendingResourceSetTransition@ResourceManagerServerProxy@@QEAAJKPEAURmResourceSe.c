/*
 * XREFs of ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x180033040
 * Callers:
 *     RmtSrv_RS_NotifyPendingResourceSetTransition @ 0x1800316E0 (RmtSrv_RS_NotifyPendingResourceSetTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180042DF4 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_NotifyPendingResourceSetTransition(
        ResourceManagerServerProxy *this,
        int a2,
        struct RmResourceSetInfo *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  ResourceManagerServerProxy *v4; // rdi
  int v6; // edx
  struct ExecutionModel::_ResourceSetInfo *v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rsi
  int v11; // [rsp+30h] [rbp-1A8h] BYREF
  ResourceManagerServerProxy *v12; // [rsp+38h] [rbp-1A0h] BYREF
  char v13[8]; // [rsp+40h] [rbp-198h] BYREF
  char v14[8]; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v15[352]; // [rsp+50h] [rbp-188h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v11 = a2;
  v4 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v15);
  v12 = 0LL;
  v4 = (ResourceManagerServerProxy *)((char *)v4 + 72);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)v4,
    v6,
    (unsigned int)&v11,
    (unsigned int)&v12,
    (__int64)v14,
    (__int64)v13);
  if ( v12 == v4 )
  {
    v8 = -2147023728;
  }
  else
  {
    v9 = *(_QWORD *)(*((_QWORD *)v12 + 4) + 8LL);
    ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a3, (const struct RmResourceSetInfo *)v15, v7);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 144LL))(v9, v15);
  }
  LeaveCriticalSection(v3);
  return v8;
}
