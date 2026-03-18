/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C02189F0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterErrorReportingDialog @ 0x1C01EE5E8 (_RegisterErrorReportingDialog.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  if ( v2 )
    v5 = RegisterErrorReportingDialog(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
