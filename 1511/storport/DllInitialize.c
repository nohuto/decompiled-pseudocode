/*
 * XREFs of DllInitialize @ 0x1C0013D00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C003C95C (RaidDecodeSmRegistryBlob.c)
 *     StorpRegisterShim @ 0x1C0054538 (StorpRegisterShim.c)
 *     SpVerifierInitialization @ 0x1C0058734 (SpVerifierInitialization.c)
 */

__int64 DllInitialize()
{
  int v1; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE OutputBuffer[4]; // [rsp+34h] [rbp-CCh] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD SystemInformation[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v9; // [rsp+C4h] [rbp-3Ch]
  UCHAR Buffer[260]; // [rsp+CCh] [rbp-34h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  OutputBuffer[0] = 0;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u) >= 0 && OutputBuffer[0] )
    IsSystemAoAC = 1;
  if ( _InterlockedIncrement(&NumDllInitialize) == 1 )
    StorpRegisterShim();
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogControlEnable");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 11
      && ResultLength >= 8 )
    {
      qword_1C0048010 = *(_QWORD *)Buffer;
      if ( !*(_QWORD *)Buffer )
        RaidLogListSize = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"LogSize");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 4
      && ResultLength >= 4 )
    {
      v1 = *(_DWORD *)Buffer;
      RaidLogListSize = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer <= 0x1000u )
      {
        if ( (unsigned int)(*(_DWORD *)Buffer - 1) <= 0x3E )
        {
          v1 = 64;
          RaidLogListSize = 64;
        }
        if ( !v1 )
          qword_1C0048010 = 0LL;
      }
      else
      {
        RaidLogListSize = 4096;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"DpcCompletionLimit");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 4
      && ResultLength >= 4 )
    {
      DpcCompletionLimit = *(_DWORD *)Buffer;
      if ( !*(_DWORD *)Buffer )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString(&DestinationString, L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob(Buffer);
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 4
      && ResultLength >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 4
      && ResultLength >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v9 == 4
      && ResultLength >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = *(_DWORD *)Buffer;
    }
    ZwClose(KeyHandle);
  }
  if ( SpVrfyLevel != -1 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"VerifyLevel");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength) >= 0
        && v9 == 4
        && ResultLength >= 4 )
      {
        SpVrfyLevel |= *(_DWORD *)Buffer;
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(KeyHandle);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)SystemInformation[5] << 12;
      PhysicalMemorySize = (unsigned __int64)SystemInformation[3] << 12;
    }
  }
  return 0LL;
}
