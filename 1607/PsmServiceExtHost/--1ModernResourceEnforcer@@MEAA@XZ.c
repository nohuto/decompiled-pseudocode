/*
 * XREFs of ??1ModernResourceEnforcer@@MEAA@XZ @ 0x180029678
 * Callers:
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180029720 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x180006960 (-_FreeBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 **v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  if ( *((_QWORD *)this + 7) )
    TpReleaseWork();
  v2 = (__int64 **)((char *)this + 248);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    v4 = (__int64 *)v3[1];
    v5 = *v3;
    *v4 = *v3;
    *(_QWORD *)(v5 + 8) = v4;
    operator delete(v3);
  }
  *((_QWORD *)this + 34) = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_FreeBuckets((__int64)this + 248);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
