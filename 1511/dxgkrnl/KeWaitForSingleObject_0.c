/*
 * XREFs of KeWaitForSingleObject_0 @ 0x1C00113F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall KeWaitForSingleObject_0(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  return KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
}
