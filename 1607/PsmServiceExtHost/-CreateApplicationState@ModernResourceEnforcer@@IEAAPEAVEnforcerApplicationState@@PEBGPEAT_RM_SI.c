/*
 * XREFs of ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C69C
 * Callers:
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C140 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x18000CB20 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 *     ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000D090 (-SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTIN.c)
 * Callees:
 *     ??$?RU_RM_PSM_HOST_INFO@@AEAU0@@?$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INFO@@AEAU2@@Z @ 0x1800063DC (--$-RU_RM_PSM_HOST_INFO@@AEAU0@@-$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INF.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x180006E6C (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180018C9C (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::CreateApplicationState(
        ModernResourceEnforcer *this,
        wchar_t *a2,
        union _RM_SID *a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r10
  char v11; // al
  __int64 *Block; // rdi
  struct EnforcerApplicationState *result; // rax
  int v14[2]; // [rsp+48h] [rbp-260h] BYREF
  wchar_t Destination[280]; // [rsp+60h] [rbp-248h] BYREF

  RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, a3, a5, a6);
  v7 = (char *)operator new(0x248uLL, (const struct std::nothrow_t *)&unk_18003CF1A);
  v10 = (__int64 *)v7;
  if ( v7
    && (v11 = utl::construct<_RM_PSM_HOST_INFO>::operator()<_RM_PSM_HOST_INFO,_RM_PSM_HOST_INFO &>(
                v8,
                v7 + 24,
                Destination),
        *((_BYTE *)v10 + 576) = 0,
        *((_WORD *)v10 + 289) = -1,
        v11) )
  {
    Block = v10;
  }
  else
  {
    Block = v10;
    if ( v10 )
    {
      Block = 0LL;
      operator delete(v10);
    }
  }
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EmplaceImpl(
    (__int64)this + 248,
    (__int64)v14,
    v9,
    0LL,
    Block);
  result = (struct EnforcerApplicationState *)(*(_QWORD *)v14 + 576LL);
  if ( *(_QWORD *)v14 == -576LL )
    __fastfail(0x80004003);
  return result;
}
