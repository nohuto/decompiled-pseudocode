/*
 * XREFs of RmtSrv_RM_IsKillable @ 0x180031340
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmtSrv_RM_IsKillable(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)g_pProxy + 7) + 104LL))(
             *((_QWORD *)g_pProxy + 7),
             a2,
             (unsigned __int64)&v5 & -(__int64)(a3 != 0LL));
  if ( a3 )
    *a3 = v5;
  return result;
}
