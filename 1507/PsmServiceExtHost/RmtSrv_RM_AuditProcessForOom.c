/*
 * XREFs of RmtSrv_RM_AuditProcessForOom @ 0x180031230
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmtSrv_RM_AuditProcessForOom(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)g_pProxy + 7) + 232LL))(
           *((_QWORD *)g_pProxy + 7),
           a2,
           a3);
}
