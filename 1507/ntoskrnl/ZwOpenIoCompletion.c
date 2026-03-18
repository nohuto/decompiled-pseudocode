/*
 * XREFs of ZwOpenIoCompletion @ 0x140181130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenIoCompletion(
        PHANDLE CompetionPort,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(CompetionPort, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
