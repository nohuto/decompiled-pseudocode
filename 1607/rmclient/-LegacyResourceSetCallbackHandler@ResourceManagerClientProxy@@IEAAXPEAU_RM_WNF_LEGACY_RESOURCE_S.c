/*
 * XREFs of ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000C184
 * Callers:
 *     ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAX0K@Z @ 0x18000C260 (-LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAX0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000ACF0 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000B9A8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x18000BF28 (-FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REV.c)
 */

void __fastcall ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(
        ResourceManagerClientProxy *this,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  ResourceManagerClientProxy *v3; // rsi
  struct IUnknown *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  struct IUnknown *v8; // rdx
  _QWORD v9[7]; // [rsp+30h] [rbp-38h] BYREF
  struct IUnknown **v10; // [rsp+70h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 22008);
  v3 = this;
  v4 = 0LL;
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
  v6 = *(_QWORD *)a2;
  v10 = 0LL;
  v12 = v6;
  v3 = (ResourceManagerClientProxy *)((char *)v3 + 22048);
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    (__int64)v3,
    v7,
    &v12,
    &v10,
    v9,
    &v13);
  if ( v10 == (struct IUnknown **)v3 )
  {
    LeaveCriticalSection(v2);
  }
  else
  {
    v8 = v10[4];
    if ( v8 )
    {
      ATL::AtlComPtrAssign(&v11, v8);
      v4 = v11;
    }
    LeaveCriticalSection(v2);
    ResourceSetClientProxy::FireCallback((__int64)v4, *((_DWORD *)a2 + 3), *((_DWORD *)a2 + 2));
    if ( v4 )
      ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  }
}
