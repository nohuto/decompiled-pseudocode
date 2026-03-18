/*
 * XREFs of xHalDpGetInterruptReplayState @ 0x1403D9ECC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xHalDpGetInterruptReplayState(__int64 a1, _QWORD *a2)
{
  if ( a2 )
    *a2 = 0LL;
  return 3221225659LL;
}
