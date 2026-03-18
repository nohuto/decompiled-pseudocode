/*
 * XREFs of ?Dispose@FxInterrupt@@UEAAEXZ @ 0x1C009B150
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x1C009B160 (-FlushAndRundown@FxInterrupt@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::Dispose(FxInterrupt *this)
{
  FxInterrupt::FlushAndRundown(this);
  return 1;
}
