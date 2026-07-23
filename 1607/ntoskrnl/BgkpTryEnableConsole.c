/*
 * XREFs of BgkpTryEnableConsole @ 0x14012739C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1401273D8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140328D08 )
  {
    if ( byte_140328D13 )
      return _InterlockedExchange64((volatile __int64 *)&stru_1402F6F98, 0LL);
  }
  return result;
}
