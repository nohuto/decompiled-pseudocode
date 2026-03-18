/*
 * XREFs of ZwVdmControl @ 0x140153CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwVdmControl(ULONG ControlCode, PVOID ControlData)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ControlCode, ControlData, v2);
}
