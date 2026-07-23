/*
 * XREFs of ZwOpenTimer @ 0x140181330
 * Callers:
 *     VfZwOpenTimer @ 0x140756A80 (VfZwOpenTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
