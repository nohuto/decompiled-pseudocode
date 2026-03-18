/*
 * XREFs of DpQueueDpc @ 0x1C000C430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1)
{
  __int64 v2; // rax

  if ( a1 )
  {
    a1 = *(_QWORD *)(a1 + 64);
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(a1 + 20) - 2) <= 1 )
        return KeInsertQueueDpc((PRKDPC)(a1 + 1248), 0LL, 0LL);
    }
  }
  v2 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v2 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
