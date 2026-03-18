/*
 * XREFs of PopDispatchCallback @ 0x14057DCF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009B90 (KeAreApcsDisabled.c)
 *     ExNotifyCallback @ 0x140009D58 (ExNotifyCallback.c)
 */

BOOLEAN __fastcall PopDispatchCallback(PVOID Argument1)
{
  BOOLEAN result; // al

  ExNotifyCallback(ExCbPowerState, (PVOID)(unsigned int)Argument1, 0LL);
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
