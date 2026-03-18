/*
 * XREFs of PopDispatchCallback @ 0x140549748
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
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
