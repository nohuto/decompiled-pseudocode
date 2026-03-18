/*
 * XREFs of PopDispatchShutdownEvent @ 0x140672DAC
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009B90 (KeAreApcsDisabled.c)
 *     PopEventCalloutDispatch @ 0x140131C64 (PopEventCalloutDispatch.c)
 */

BOOLEAN PopDispatchShutdownEvent()
{
  unsigned __int32 v0; // eax
  BOOLEAN result; // al

  v0 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v0 )
    PopEventCalloutDispatch(1, v0);
  if ( PoPdcCallbacks )
    PoPdcCallbacks();
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
