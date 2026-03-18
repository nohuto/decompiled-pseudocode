/*
 * XREFs of KeWaitForMultipleObjects_0 @ 0x1C000FD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall KeWaitForMultipleObjects_0(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  return KeWaitForMultipleObjects(Count, Object, WaitType, WaitReason, WaitMode, Alertable, Timeout, WaitBlockArray);
}
