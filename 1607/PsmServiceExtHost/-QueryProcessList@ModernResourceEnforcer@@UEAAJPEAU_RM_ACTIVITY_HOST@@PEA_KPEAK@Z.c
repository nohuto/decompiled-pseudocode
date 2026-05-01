/*
 * XREFs of ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x18000B3F0
 * Callers:
 *     RmpActivityHostGetPsmProcessList @ 0x1800079A4 (RmpActivityHostGetPsmProcessList.c)
 *     RmpActivityHostQueryProcessListForMetrics @ 0x1800194D4 (RmpActivityHostQueryProcessListForMetrics.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryProcessList(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3,
        unsigned int *a4)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *, unsigned int *))this
          + 20))(
           (char *)a2 + 520,
           *((unsigned int *)a2 + 147),
           (char *)a2 + 56,
           *((unsigned int *)a2 + 148),
           *((_QWORD *)a2 + 3),
           a3,
           a4);
}
