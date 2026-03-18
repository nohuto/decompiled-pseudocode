/*
 * XREFs of PopEventCalloutDispatch @ 0x14014FBB8
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopDispatchFullWake @ 0x14056993C (PopDispatchFullWake.c)
 *     PopPolicyTimeChange @ 0x140569D14 (PopPolicyTimeChange.c)
 *     PopDispatchCallout @ 0x1405C727C (PopDispatchCallout.c)
 *     PopDispatchShutdownEvent @ 0x1406BAD10 (PopDispatchShutdownEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 */

struct _KTHREAD *__fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  __int64 v2; // r8
  struct _KTHREAD *result; // rax
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = a1;
  v5 = a2;
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
    PsInvokeWin32Callout(3LL, &v4, v2);
    result = KeGetCurrentThread();
    if ( result->WaitBlock[3].SpareLong )
      __fastfail(0x20u);
  }
  return result;
}
