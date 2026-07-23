/*
 * XREFs of ZwDeleteWnfStateData @ 0x14015BB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
