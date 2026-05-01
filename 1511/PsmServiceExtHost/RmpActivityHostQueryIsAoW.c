/*
 * XREFs of RmpActivityHostQueryIsAoW @ 0x1800067DC
 * Callers:
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DIGEST@@@Z @ 0x180006694 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DI.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostQueryIsAoW(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 40) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD *))(*((_QWORD *)RmSvcGlobals + 10)
                                                                                         + 200LL))(
             a1 + 512,
             *(unsigned int *)(a1 + 580),
             a1 + 48,
             *(unsigned int *)(a1 + 584),
             *(_QWORD *)(a1 + 24),
             a2);
  *a2 = 0;
  return 0LL;
}
