/*
 * XREFs of ?GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z @ 0x180082740
 * Callers:
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x1800825D0 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x1800828C0 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDwmWinSqm::GetTickCountDifference(CDwmWinSqm *this, unsigned int a2, unsigned int a3)
{
  if ( a2 < a3 )
    return a2 - a3 - 1;
  else
    return a2 - a3;
}
