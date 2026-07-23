/*
 * XREFs of ZwCreateTimer @ 0x140151CC0
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1405F206C (DbgkpWerInitializeDeferredLiveDump.c)
 *     VfZwCreateTimer @ 0x1406D1E70 (VfZwCreateTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
