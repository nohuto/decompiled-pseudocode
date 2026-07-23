/*
 * XREFs of PopDispatchShutdownEvent @ 0x140672E90
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     PopEventCalloutDispatch @ 0x1401321D4 (PopEventCalloutDispatch.c)
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
