/*
 * XREFs of KiFlushTb @ 0x140007998
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFlushTb(int a1, unsigned int a2)
{
  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
      return KxFlushEntireTb(a2);
  }
  else if ( !a1 || a1 > 2 )
  {
    return KxFlushEntireTb(a2);
  }
  return KxFlushNonGlobalTb(a2);
}
