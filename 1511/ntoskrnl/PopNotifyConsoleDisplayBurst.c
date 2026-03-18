/*
 * XREFs of PopNotifyConsoleDisplayBurst @ 0x14063C74C
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
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
      v2 = 12;
      v3 = 25LL;
      return PsInvokeWin32Callout((_KPROCESS *)3, (__int64)&v2, 1, (int)&v1);
    }
  }
  return result;
}
