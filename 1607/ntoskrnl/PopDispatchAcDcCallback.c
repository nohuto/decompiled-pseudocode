/*
 * XREFs of PopDispatchAcDcCallback @ 0x140672D74
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009B90 (KeAreApcsDisabled.c)
 *     ExNotifyCallback @ 0x140009D58 (ExNotifyCallback.c)
 */

BOOLEAN PopDispatchAcDcCallback()
{
  BOOLEAN result; // al

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140303E0C == 0));
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
