/*
 * XREFs of ZwWaitForMultipleObjects @ 0x140151180
 * Callers:
 *     VfZwWaitForMultipleObjects @ 0x1406D4928 (VfZwWaitForMultipleObjects.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE Object[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
