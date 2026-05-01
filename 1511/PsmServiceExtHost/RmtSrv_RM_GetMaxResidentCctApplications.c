/*
 * XREFs of RmtSrv_RM_GetMaxResidentCctApplications @ 0x180038480
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmtSrv_RM_GetMaxResidentCctApplications(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( a2 )
    *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pProxy + 7) + 144LL))(*((_QWORD *)g_pProxy + 7));
  else
    return (unsigned int)-2147024809;
  return v2;
}
