/*
 * XREFs of PopNotifyConsoleDisplayBurst @ 0x140674DF0
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406789B4 (TtmNotifySessionDisplayBurst.c)
 */

__int64 PopNotifyConsoleDisplayBurst()
{
  __int64 result; // rax
  int v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+28h] [rbp-20h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  if ( PsWin32CalloutsEstablished )
  {
    result = MEMORY[0xFFFFF780000002D8];
    v1 = MEMORY[0xFFFFF780000002D8];
    if ( MEMORY[0xFFFFF780000002D8] != -1 )
    {
      if ( TtmpEnabled == 1 )
      {
        return TtmNotifySessionDisplayBurst(MEMORY[0xFFFFF780000002D8], 25LL);
      }
      else
      {
        v2 = 10;
        v3 = 25LL;
        return PsInvokeWin32Callout(3, (__int64)&v2, 1, (__int64)&v1);
      }
    }
  }
  return result;
}
