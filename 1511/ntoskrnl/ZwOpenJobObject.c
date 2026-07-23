/*
 * XREFs of ZwOpenJobObject @ 0x1401527E0
 * Callers:
 *     VfZwOpenJobObject @ 0x1406D2AAC (VfZwOpenJobObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
