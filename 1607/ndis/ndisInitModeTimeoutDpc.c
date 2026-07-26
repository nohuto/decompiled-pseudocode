/*
 * XREFs of ndisInitModeTimeoutDpc @ 0x1C0020690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisInitModeTimeoutDpc(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  ndisScheduleWorkItemInternal((__int64)FunctionContext + 2944);
}
