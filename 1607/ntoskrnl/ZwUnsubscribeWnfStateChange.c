/*
 * XREFs of ZwUnsubscribeWnfStateChange @ 0x14015D910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
