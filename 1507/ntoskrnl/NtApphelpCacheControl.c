/*
 * XREFs of NtApphelpCacheControl @ 0x14040D608
 * Callers:
 *     <none>
 * Callees:
 *     ExGetPreviousMode @ 0x140006ED0 (ExGetPreviousMode.c)
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 *     AhcCacheQueryHwId @ 0x14071E6BC (AhcCacheQueryHwId.c)
 */

NTSTATUS __stdcall NtApphelpCacheControl(APPHELPCACHESERVICECLASS Service, PAPPHELP_CACHE_SERVICE_LOOKUP ServiceData)
{
  ULONG v3; // edi
  __int32 v4; // ecx
  __int32 v5; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  int v8; // ecx
  int v9; // ecx
  NTSTATUS v10; // ebx
  PIRP v11; // rbx
  int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+27h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C0h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( Service >= 10 )
    return -1073741811;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v3 = (4 * Service) | 0x220003;
  if ( Service == 9 )
    return AhcCacheQueryHwId(ServiceData);
  if ( Service == ApphelpCacheServiceLookup )
    goto LABEL_10;
  v4 = Service - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
          goto LABEL_18;
        v8 = v7 - 1;
        if ( !v8 )
          goto LABEL_18;
        v9 = v8 - 1;
        if ( !v9 )
        {
LABEL_10:
          v10 = -1073741275;
          goto LABEL_11;
        }
        v14 = v9 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
LABEL_18:
            v10 = -1073741823;
            goto LABEL_11;
          }
          return -1073741811;
        }
      }
    }
  }
  v10 = 0;
LABEL_11:
  if ( g_AhcDeviceObject )
  {
LABEL_12:
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(v3, g_AhcDeviceObject, ServiceData, 0x160u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( !v11 )
      return -1073741823;
    v11->RequestorMode = ExGetPreviousMode();
    return IofCallDriver(g_AhcDeviceObject, v11);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"\\Device\\ahcache") >= 0
    && IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&g_AhcDeviceObject, (signed __int64)DeviceObject, 0LL) )
      ObfDereferenceObject(FileObject);
    else
      g_AhcFileObject = (__int64)FileObject;
    goto LABEL_12;
  }
  return v10;
}
