/*
 * XREFs of ZwCreateJobObject @ 0x140151A60
 * Callers:
 *     VfZwCreateJobObject @ 0x1406D1C38 (VfZwCreateJobObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
