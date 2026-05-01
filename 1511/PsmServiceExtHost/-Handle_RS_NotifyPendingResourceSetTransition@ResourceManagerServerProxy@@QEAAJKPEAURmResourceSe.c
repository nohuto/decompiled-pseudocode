/*
 * XREFs of ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x18003A268
 * Callers:
 *     RmtSrv_RS_NotifyPendingResourceSetTransition @ 0x180038890 (RmtSrv_RS_NotifyPendingResourceSetTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180047D64 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_NotifyPendingResourceSetTransition(
        ResourceManagerServerProxy *this,
        int a2,
        struct RmResourceSetInfo *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rdx
  struct ExecutionModel::_ResourceSetInfo *v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rsi
  unsigned __int16 v11[4]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE v15[368]; // [rsp+50h] [rbp-198h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  *(_DWORD *)v11 = a2;
  v4 = (__int64 *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v15);
  v12 = 0LL;
  v4 += 9;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v4,
    v6,
    v11,
    &v12,
    &v14,
    &v13);
  if ( v12 == v4 )
  {
    v8 = -2147023728;
  }
  else
  {
    v9 = *(_QWORD *)(v12[4] + 8);
    ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a3, (const struct RmResourceSetInfo *)v15, v7);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 144LL))(v9, v15);
  }
  LeaveCriticalSection(v3);
  return v8;
}
