/*
 * XREFs of ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x18000C010
 * Callers:
 *     RmpActivityHostGetPsmProcessList @ 0x1800072C0 (RmpActivityHostGetPsmProcessList.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryProcessList(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3,
        unsigned int *a4)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *, unsigned int *))this
          + 18))(
           (char *)a2 + 512,
           *((unsigned int *)a2 + 145),
           (char *)a2 + 48,
           *((unsigned int *)a2 + 146),
           *((_QWORD *)a2 + 3),
           a3,
           a4);
}
