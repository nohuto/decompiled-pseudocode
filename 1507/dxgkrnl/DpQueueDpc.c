/*
 * XREFs of DpQueueDpc @ 0x1C0009180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1)
{
  _QWORD *v2; // rax

  if ( a1 )
  {
    a1 = *(_QWORD *)(a1 + 64);
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(a1 + 20) - 2) <= 1 )
        return KeInsertQueueDpc((PRKDPC)(a1 + 1160), 0LL, 0LL);
    }
  }
  v2 = (_QWORD *)WdLogNewEntry5_WdError(a1);
  v2[3] = DpQueueDpc;
  v2[4] = 0LL;
  v2[5] = -1073741811LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
