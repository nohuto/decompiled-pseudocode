/*
 * XREFs of PopDispatchAcDcCallback @ 0x14063B9E8
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 */

BOOLEAN PopDispatchAcDcCallback()
{
  BOOLEAN result; // al

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_1402DE28C == 0));
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
