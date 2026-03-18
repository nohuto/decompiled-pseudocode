/*
 * XREFs of DbgSetDebugFilterState @ 0x140140B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
