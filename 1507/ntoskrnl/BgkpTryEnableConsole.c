/*
 * XREFs of BgkpTryEnableConsole @ 0x14014FE9C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1407FD810 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140353B00 )
  {
    if ( byte_140353B10 )
      return _InterlockedExchange64((volatile __int64 *)&stru_14031EF18, 0LL);
  }
  return result;
}
