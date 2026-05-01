/*
 * XREFs of ?QueryGpuInterferenceCount@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180029BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryGpuInterferenceCount(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *))this + 22))(
           (char *)a2 + 520,
           *((unsigned int *)a2 + 147),
           (char *)a2 + 56,
           *((unsigned int *)a2 + 148),
           *((_QWORD *)a2 + 3),
           a3);
}
