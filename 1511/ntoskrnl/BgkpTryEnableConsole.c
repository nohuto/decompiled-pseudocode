/*
 * XREFs of BgkpTryEnableConsole @ 0x14011BC10
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140787C58 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140305D88 )
  {
    if ( byte_140305D99 )
      return _InterlockedExchange64((volatile __int64 *)&stru_1402CFD78, 0LL);
  }
  return result;
}
