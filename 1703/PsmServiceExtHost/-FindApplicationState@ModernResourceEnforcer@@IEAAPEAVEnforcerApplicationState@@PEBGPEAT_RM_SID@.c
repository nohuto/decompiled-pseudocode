/*
 * XREFs of ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000ACD8
 * Callers:
 *     ?FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000AB64 (-FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT.c)
 * Callees:
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180015680 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180015CE0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::FindApplicationState(
        ModernResourceEnforcer *this,
        wchar_t *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v7; // rdi
  int v8; // edx
  ModernResourceEnforcer *v10; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-260h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-258h] BYREF
  wchar_t Destination[280]; // [rsp+50h] [rbp-248h] BYREF

  RmpPsmAppInstanceIdInitialize(Destination, a2, a3, a4, a5, a6);
  this = (ModernResourceEnforcer *)((char *)this + 240);
  v7 = 0LL;
  v10 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (_DWORD)this,
    v8,
    (unsigned int)Destination,
    (unsigned int)&v10,
    (__int64)v12,
    (__int64)v11);
  if ( v10 != this )
    return (ModernResourceEnforcer *)((char *)v10 + 576);
  return (struct EnforcerApplicationState *)v7;
}
