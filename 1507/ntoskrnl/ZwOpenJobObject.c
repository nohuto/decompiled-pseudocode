/*
 * XREFs of ZwOpenJobObject @ 0x140181150
 * Callers:
 *     VfZwOpenJobObject @ 0x140756674 (VfZwOpenJobObject.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
