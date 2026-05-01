/*
 * XREFs of ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x1800142BC
 * Callers:
 *     ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@PEAX@Z @ 0x1800143A0 (-LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAU_RM_WNF_LEGACY_RESOURC.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180012274 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-.c)
 *     ?FireCallback@ResourceSetClientProxy@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180013B40 (-FireCallback@ResourceSetClientProxy@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_R.c)
 */

void __fastcall ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(
        ResourceManagerClientProxy *this,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v3; // rsi
  struct IUnknown *v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  struct IUnknown *v8; // rdx
  __int64 v9[7]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 21184);
  v3 = (__int64 *)this;
  v4 = 0LL;
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  v6 = *(_DWORD *)a2;
  v11 = 0LL;
  v10 = v6;
  v3 += 2653;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v3,
    v7,
    (unsigned __int16 *)&v10,
    &v11,
    v9,
    &v13);
  if ( v11 == v3 )
  {
    LeaveCriticalSection(v2);
  }
  else
  {
    v8 = (struct IUnknown *)v11[4];
    if ( v8 )
    {
      ATL::AtlComPtrAssign(&v12, v8);
      v4 = v12;
    }
    LeaveCriticalSection(v2);
    ResourceSetClientProxy::FireCallback((__int64)v4);
    if ( v4 )
      ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  }
}
