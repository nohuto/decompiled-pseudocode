/*
 * XREFs of NtApphelpCacheControl @ 0x1404A50E4
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExGetPreviousMode @ 0x140092240 (ExGetPreviousMode.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 *     AhcCacheQueryHwId @ 0x1406E4D54 (AhcCacheQueryHwId.c)
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
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+20h] BYREF

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
  if ( !v4 )
    goto LABEL_16;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_16;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_16;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_19;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_19;
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_10:
    v10 = -1073741275;
    goto LABEL_11;
  }
  v14 = v9 - 1;
  if ( !v14 )
  {
LABEL_16:
    v10 = 0;
    goto LABEL_11;
  }
  if ( v14 != 1 )
    return -1073741811;
LABEL_19:
  v10 = -1073741823;
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
    goto LABEL_12;
  }
  return v10;
}
