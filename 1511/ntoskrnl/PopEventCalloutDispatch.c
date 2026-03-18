/*
 * XREFs of PopEventCalloutDispatch @ 0x14011B894
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopDispatchFullWake @ 0x1404F5684 (PopDispatchFullWake.c)
 *     PopPolicyTimeChange @ 0x1404F57E4 (PopPolicyTimeChange.c)
 *     PopDispatchCallout @ 0x14054F4D0 (PopDispatchCallout.c)
 *     PopDispatchShutdownEvent @ 0x14063BA20 (PopDispatchShutdownEvent.c)
 * Callees:
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

void __fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v4 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v2 = 1LL;
    if ( a1 != 1 )
    {
      if ( a1 == 12 )
        v2 = 0LL;
      else
        v2 = 2LL;
    }
    PsInvokeWin32Callout(3LL, &v3, v2);
    if ( KeAreApcsDisabled() )
      __fastfail(0x20u);
  }
}
