/*
 * XREFs of RmtSrv_RM_OnProcessTerminated @ 0x180038590
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmtSrv_RM_OnProcessTerminated(__int64 a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)g_pProxy + 7) + 200LL))(*((_QWORD *)g_pProxy + 7), a2);
  return 0LL;
}
