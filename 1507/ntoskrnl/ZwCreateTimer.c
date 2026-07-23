/*
 * XREFs of ZwCreateTimer @ 0x140180670
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14066AD98 (DbgkpWerInitializeDeferredLiveDump.c)
 *     VfZwCreateTimer @ 0x140755A38 (VfZwCreateTimer.c)
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
