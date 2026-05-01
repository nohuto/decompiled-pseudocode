/*
 * XREFs of ?ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18000F9FC
 * Callers:
 *     ?ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18000F8F0 (-ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOUR.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000B530 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-.c)
 *     ?FireCallback@ResourceSetProxy@ExecutionModel@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x18000FEA4 (-FireCallback@ResourceSetProxy@ExecutionModel@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_T.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackHandler(
        ExecutionModel::ResourcePolicyEngineProxy *this,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  ExecutionModel::ResourcePolicyEngineProxy *v3; // rdi
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 **v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v3 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v7 = 0LL;
  v3 = (ExecutionModel::ResourcePolicyEngineProxy *)((char *)v3 + 184);
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    (__int64)v3,
    v5,
    a2,
    &v7,
    &v9,
    &v8);
  if ( v7 == (volatile signed __int32 **)v3 )
    goto LABEL_4;
  v6 = v7[4];
  if ( _InterlockedIncrement(v6 + 2) == 1 )
  {
    _InterlockedDecrement(v6 + 2);
LABEL_4:
    LeaveCriticalSection(v2);
    return;
  }
  LeaveCriticalSection(v2);
  ExecutionModel::ResourceSetProxy::FireCallback(
    v6,
    *((_QWORD *)a2 + 1),
    *((unsigned int *)a2 + 5),
    *((unsigned int *)a2 + 4));
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
}
