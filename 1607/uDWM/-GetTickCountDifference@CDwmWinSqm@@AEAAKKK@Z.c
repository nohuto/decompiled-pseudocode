/*
 * XREFs of ?GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z @ 0x180082F2C
 * Callers:
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x180082DBC (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x180083098 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
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
