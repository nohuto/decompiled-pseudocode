/*
 * XREFs of NtCreateEvent @ 0x140488270
 * Callers:
 *     PfSnPrefetchMetadata @ 0x14042CB54 (PfSnPrefetchMetadata.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140592A78 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     MiCreateMemoryEvent @ 0x1407CAF9C (MiCreateMemoryEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x1407E13D0 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 */

NTSTATUS __stdcall NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v7; // rbx
  unsigned __int8 v8; // si
  NTSTATUS Object; // ecx
  struct _KEVENT *Event; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v7 = EventHandle;
  v8 = KeGetCurrentThread()->gap0[10];
  if ( v8 )
  {
    if ( (unsigned __int64)EventHandle >= MmUserProbeAddress )
      EventHandle = (PHANDLE)MmUserProbeAddress;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  Object = ObCreateObjectEx(v8, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, v8);
  if ( Object >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    Object = ObInsertObjectEx(Event, 0LL, DesiredAccess, 0LL, 0, 0LL, &v12);
    if ( Object >= 0 )
      *v7 = (HANDLE)v12;
  }
  return Object;
}
