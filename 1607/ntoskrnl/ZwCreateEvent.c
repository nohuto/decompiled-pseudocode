/*
 * XREFs of ZwCreateEvent @ 0x14015A580
 * Callers:
 *     CmpCreateEvent @ 0x1403F9948 (CmpCreateEvent.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14057E814 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x14057F010 (SmCreateEvent.c)
 *     IoCreateSynchronizationEvent @ 0x140623758 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     DbgkpCreateNotificationEvent @ 0x1407A1950 (DbgkpCreateNotificationEvent.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
