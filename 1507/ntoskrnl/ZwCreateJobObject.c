/*
 * XREFs of ZwCreateJobObject @ 0x140180410
 * Callers:
 *     VfZwCreateJobObject @ 0x140755800 (VfZwCreateJobObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
