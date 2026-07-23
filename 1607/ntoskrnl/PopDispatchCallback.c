/*
 * XREFs of PopDispatchCallback @ 0x14057E19C
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
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
