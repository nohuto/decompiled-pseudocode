/*
 * XREFs of RmtSrv_RM_RegisterRM_Listener @ 0x180038680
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmtSrv_RM_RegisterRM_Listener(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)g_pProxy + 7) + 280LL))(
           *((_QWORD *)g_pProxy + 7),
           a2);
}
