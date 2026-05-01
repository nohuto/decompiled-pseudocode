/*
 * XREFs of ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000BF50
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000B770 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ?RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x18000A4E0 (-RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_I.c)
 *     ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@Z @ 0x18000AC40 (--$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@-$_HashTable@U_RM_PSM_APP.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::CreateApplicationState(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct EnforcerApplicationState *result; // rax
  int v8; // [rsp+30h] [rbp-268h] BYREF
  int v9[6]; // [rsp+38h] [rbp-260h] BYREF
  wchar_t Buffer[280]; // [rsp+50h] [rbp-248h] BYREF

  LOBYTE(v8) = 0;
  HIWORD(v8) = -1;
  RmpInitializeEnforcerApplicationStateMapKey(a2, a3, a4, a5, a6, Buffer);
  result = (struct EnforcerApplicationState *)(*(_QWORD *)utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::emplace<_RM_PSM_APP_INSTANCE_ID &,EnforcerApplicationState &>(
                                                            (__int64)this + 208,
                                                            (__int64)v9,
                                                            (__int64)Buffer,
                                                            &v8)
                                             + 576LL);
  if ( !result )
    __fastfail(0x80004003);
  return result;
}
