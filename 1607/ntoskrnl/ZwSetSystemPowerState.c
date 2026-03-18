/*
 * XREFs of ZwSetSystemPowerState @ 0x14015CF80
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemAction, *(_QWORD *)&MinSystemState, *(_QWORD *)&Flags);
}
