/*
 * XREFs of RmtSrv_RM_ApplyTerminalResourceSet @ 0x180038390
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmtSrv_RM_ApplyTerminalResourceSet(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)g_pProxy + 7) + 80LL))(*((_QWORD *)g_pProxy + 7), a2);
}
