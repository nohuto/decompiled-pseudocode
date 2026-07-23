/*
 * XREFs of NtCreateEvent @ 0x14041DCA0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1404EB4C8 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1404ED700 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140570080 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x1407B6A08 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rbx
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v10; // [rsp+20h] [rbp-48h]
  PRKEVENT Event; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExEventObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v10,
               24,
               0,
               0,
               &Event,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    inserted = ObInsertObjectEx(Event, 0LL, 0, 0LL, (__int64)&v12);
    LODWORD(Event) = inserted;
    if ( inserted >= 0 )
      *v6 = (HANDLE)v12;
  }
  return inserted;
}
