/*
 * XREFs of NtCreateEvent @ 0x14041EDE0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x140508538 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x14050A770 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14056FB40 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x1407B6A08 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
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
