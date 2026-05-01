/*
 * XREFs of ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800360C0
 * Callers:
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180035EFC (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001ACD0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     ?RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x18001B284 (-RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_I.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

const wchar_t *__fastcall ModernResourceEnforcer::FindApplicationState(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  const wchar_t *v10; // [rsp+30h] [rbp-268h] BYREF
  __int64 v11; // [rsp+38h] [rbp-260h] BYREF
  __int64 v12; // [rsp+40h] [rbp-258h] BYREF
  wchar_t Buffer[280]; // [rsp+50h] [rbp-248h] BYREF

  RmpInitializeEnforcerApplicationStateMapKey(a2, a3, a4, a5, a6, Buffer);
  v7 = 0LL;
  v10 = 0LL;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (__int64)this + 208,
    v8,
    Buffer,
    &v10,
    &v12,
    &v11);
  if ( v10 != (const wchar_t *)((char *)this + 208) )
    return v10 + 288;
  return (const wchar_t *)v7;
}
