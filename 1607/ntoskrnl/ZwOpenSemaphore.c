/*
 * XREFs of ZwOpenSemaphore @ 0x14015C000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAcces,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle, *(_QWORD *)&DesiredAcces, ObjectAttributes);
}
