/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x1C0051DEC
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 CheckInitialSessions(void)
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-29h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+Fh]
  int v8; // [rsp+B0h] [rbp+17h]
  __int64 v9; // [rsp+B8h] [rbp+1Fh]
  __int64 v10; // [rsp+C0h] [rbp+27h]
  int v11; // [rsp+C8h] [rbp+2Fh]
  __int64 v12; // [rsp+D0h] [rbp+37h]
  int v13; // [rsp+D8h] [rbp+3Fh]
  int v14; // [rsp+100h] [rbp+67h] BYREF
  void *EventHandle; // [rsp+108h] [rbp+6Fh] BYREF
  void *v16; // [rsp+110h] [rbp+77h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\UniqueSessionIdEvent");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  v1 = v0;
  if ( v0 >= 0 )
  {
    gbRemoteSession = 0;
  }
  else
  {
    if ( v0 != -1073741771 )
      return v1;
    gbRemoteSession = 1;
  }
  if ( gSessionId != gServiceSessionId )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"NumberOfInitialSessions";
    QueryTable.Flags = 292;
    QueryTable.EntryContext = &v14;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v7 = 0LL;
    v8 = 0;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v13 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v14 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v2 = ZwCreateEvent(&v16, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v1 = v2;
      if ( v2 >= 0 )
      {
        gbFirstInteractiveSession = 1;
      }
      else if ( v2 == -1073741771 )
      {
        gbFirstInteractiveSession = 0;
      }
    }
  }
  return v1;
}
