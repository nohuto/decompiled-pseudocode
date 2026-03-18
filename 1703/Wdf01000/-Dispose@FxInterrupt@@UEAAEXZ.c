/*
 * XREFs of ?Dispose@FxInterrupt@@UEAAEXZ @ 0x1C009FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x1C009FBA8 (-FlushAndRundown@FxInterrupt@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::Dispose(FxInterrupt *this)
{
  FxInterrupt::FlushAndRundown(this);
  return 1;
}
