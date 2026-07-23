/*
 * XREFs of PopDispatchAcDcCallback @ 0x140672E58
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
 */

BOOLEAN PopDispatchAcDcCallback()
{
  BOOLEAN result; // al

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140303D4C == 0));
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
