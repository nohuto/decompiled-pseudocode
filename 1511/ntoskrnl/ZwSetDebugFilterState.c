/*
 * XREFs of ZwSetDebugFilterState @ 0x140153480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ComponentId);
}
