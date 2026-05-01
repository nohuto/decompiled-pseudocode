/*
 * XREFs of RmpActivityHostQueryIsAoW @ 0x1800181A0
 * Callers:
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018050 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryIsAoW(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 48) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL)
                                                                                         + 216LL))(
             a1 + 520,
             *(unsigned int *)(a1 + 588),
             a1 + 56,
             *(unsigned int *)(a1 + 592),
             *(_QWORD *)(a1 + 24),
             a2);
  *a2 = 0;
  return 0LL;
}
