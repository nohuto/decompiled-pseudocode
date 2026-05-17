/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x1800CCB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlMapGenericMask @ 0x180060FB0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7550 (ZwPrivilegeCheck.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(int a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+48h] [rbp-31h]
  int v12; // [rsp+4Ch] [rbp-2Dh]
  __int64 v13; // [rsp+50h] [rbp-29h]
  int v14; // [rsp+58h] [rbp-21h]

  LODWORD(v10) = a1;
  NtQueryInformationToken();
  RtlMapGenericMask(&v10, a5);
  v8 = v10;
  *a6 = v10;
  if ( (v8 & 0x1000000) != 0 )
  {
    v14 = 0;
    v10 = 8LL;
    v13 = 8LL;
    v11 = 1;
    v12 = 1;
    ZwPrivilegeCheck();
    return 3221225569LL;
  }
  else if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    return 0LL;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
}
