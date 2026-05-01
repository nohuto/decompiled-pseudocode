/*
 * XREFs of ?ResourceSetCallbackHandler@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x180002380
 * Callers:
 *     ?ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180002360 (-ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOUR.c)
 * Callees:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800026B0 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-.c)
 *     ?FireCallback@ResourceSetProxy@ExecutionModel@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x1800028C0 (-FireCallback@ResourceSetProxy@ExecutionModel@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_T.c)
 *     ?Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ @ 0x180004720 (-Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackHandler(
        ExecutionModel::ResourcePolicyEngineProxy *this,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  ExecutionModel::ResourcePolicyEngineProxy *v3; // rdi
  int v5; // edx
  volatile signed __int32 *v6; // rdi
  unsigned int (__fastcall *v7)(ExecutionModel::ResourceSetProxy *__hidden); // rbx
  volatile signed __int32 **v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v3 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v8 = 0LL;
  v3 = (ExecutionModel::ResourcePolicyEngineProxy *)((char *)v3 + 184);
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    (_DWORD)v3,
    v5,
    (_DWORD)a2,
    (unsigned int)&v8,
    (__int64)&v10,
    (__int64)&v9);
  if ( v8 == (volatile signed __int32 **)v3 )
    goto LABEL_7;
  v6 = v8[4];
  if ( _InterlockedIncrement(v6 + 2) == 1 )
  {
    _InterlockedDecrement(v6 + 2);
LABEL_7:
    LeaveCriticalSection(v2);
    return;
  }
  LeaveCriticalSection(v2);
  ExecutionModel::ResourceSetProxy::FireCallback(
    v6,
    *((_QWORD *)a2 + 1),
    *((unsigned int *)a2 + 5),
    *((unsigned int *)a2 + 4));
  v7 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetProxy *__hidden))(*(_QWORD *)v6 + 16LL);
  if ( v7 == ExecutionModel::ResourceSetProxy::Release )
    ExecutionModel::ResourceSetProxy::Release((ExecutionModel::ResourceSetProxy *)v6);
  else
    v7((ExecutionModel::ResourceSetProxy *)v6);
}
