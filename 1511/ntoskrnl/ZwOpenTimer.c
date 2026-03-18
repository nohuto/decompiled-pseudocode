/*
 * XREFs of ZwOpenTimer @ 0x1401529C0
 * Callers:
 *     VfZwOpenTimer @ 0x1406D2EB8 (VfZwOpenTimer.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
