/*
 * XREFs of PopDispatchShutdownEvent @ 0x14063BA20
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     PopEventCalloutDispatch @ 0x14011B894 (PopEventCalloutDispatch.c)
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
