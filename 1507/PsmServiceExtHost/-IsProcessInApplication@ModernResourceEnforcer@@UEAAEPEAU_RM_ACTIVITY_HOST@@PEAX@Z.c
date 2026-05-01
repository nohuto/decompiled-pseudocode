/*
 * XREFs of ?IsProcessInApplication@ModernResourceEnforcer@@UEAAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18000B130
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::IsProcessInApplication(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        void *a3)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))this + 19))(
           (char *)a2 + 512,
           *((unsigned int *)a2 + 145),
           (char *)a2 + 48,
           *((unsigned int *)a2 + 146),
           *((_QWORD *)a2 + 3),
           a3);
}
