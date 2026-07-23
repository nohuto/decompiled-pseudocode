/*
 * XREFs of ZwVdmControl @ 0x14015D950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwVdmControl(ULONG ControlCode, PVOID ControlData)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ControlCode);
}
