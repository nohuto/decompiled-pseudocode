/*
 * XREFs of PopEventCalloutDispatch @ 0x140131C64
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopDispatchFullWake @ 0x140534800 (PopDispatchFullWake.c)
 *     PopPolicyTimeChange @ 0x1405349CC (PopPolicyTimeChange.c)
 *     PopDispatchCallout @ 0x1405817C8 (PopDispatchCallout.c)
 *     PopDispatchShutdownEvent @ 0x140672DAC (PopDispatchShutdownEvent.c)
 * Callees:
 *     KeAreApcsDisabled @ 0x140009B90 (KeAreApcsDisabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 */

void __fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  __int64 v2; // r8
  int *v3; // r9
  int v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v6 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v2 = 1LL;
    if ( a1 == 1 )
    {
      v4 = 0;
      v3 = &v4;
    }
    else
    {
      v3 = 0LL;
      if ( a1 == 10 )
        v2 = 0LL;
      else
        v2 = 2LL;
    }
    PsInvokeWin32Callout(3LL, &v5, v2, v3);
    if ( KeAreApcsDisabled() )
      __fastfail(0x20u);
  }
}
