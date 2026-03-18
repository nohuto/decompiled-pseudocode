/*
 * XREFs of NtUserRegisterTasklist @ 0x1402BA710
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserRegisterTasklist(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 824);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v5 + 16) + 520LL), 0x40u);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
