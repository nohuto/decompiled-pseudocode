/*
 * XREFs of ?RmpActivityHostQueryIsAoW@@YAJPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x1800159E0
 * Callers:
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015898 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryIsAoW(struct _RM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  if ( !*((_DWORD *)a1 + 14) )
    return (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                                             + 208LL))(
             (char *)a1 + 528,
             *((unsigned int *)a1 + 149),
             (char *)a1 + 64,
             *((unsigned int *)a1 + 150),
             *((_QWORD *)a1 + 3),
             a2);
  *a2 = 0;
  return 0LL;
}
