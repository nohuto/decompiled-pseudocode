/*
 * XREFs of ZwCreateEvent @ 0x14015AAF0
 * Callers:
 *     CmpCreateEvent @ 0x1403F8808 (CmpCreateEvent.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x140572DA0 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14057ECC0 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x14057F4BC (SmCreateEvent.c)
 *     IoCreateSynchronizationEvent @ 0x14062380C (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 *     DbgkpCreateNotificationEvent @ 0x1407A1950 (DbgkpCreateNotificationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
