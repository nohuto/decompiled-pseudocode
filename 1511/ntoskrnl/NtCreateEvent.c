/*
 * XREFs of NtCreateEvent @ 0x14042E720
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1404D86B4 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1404DA590 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14052EEBC (SepAdtOpenEtwReadyEvent.c)
 *     MiCreateMemoryEvent @ 0x14074D1CC (MiCreateMemoryEvent.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x14076C1BC (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v7; // rbx
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-48h]
  PRKEVENT Event; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v7 = EventHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)EventHandle >= MmUserProbeAddress )
      EventHandle = (PHANDLE)MmUserProbeAddress;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExEventObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v11,
               24,
               0,
               0,
               &Event,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    inserted = ObInsertObjectEx(Event, 0LL, DesiredAccess, 0, 0, 0LL, &v13);
    LODWORD(Event) = inserted;
    if ( inserted >= 0 )
      *v7 = (HANDLE)v13;
  }
  return inserted;
}
