/*
 * XREFs of DllInitialize @ 0x1C00178E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C0017FE4 (RaidpIsCurrentOsInstallationUpgrade.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidLoadATADeviceIdMappings @ 0x1C002C258 (RaidLoadATADeviceIdMappings.c)
 *     rbc_InitializeFeatureStaging @ 0x1C00393B4 (rbc_InitializeFeatureStaging.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C0043468 (RaidDecodeSmRegistryBlob.c)
 *     StorpRegisterShim @ 0x1C005BEC0 (StorpRegisterShim.c)
 *     SpVerifierInitialization @ 0x1C005FA90 (SpVerifierInitialization.c)
 */

__int64 DllInitialize()
{
  char v0; // al
  int v1; // ecx
  ULONG OutputBuffer; // [rsp+38h] [rbp-D0h] BYREF
  char OutputBuffer_4; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES v8; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD SystemInformation[16]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+118h] [rbp+10h] BYREF
  int v13; // [rsp+11Ch] [rbp+14h]
  UCHAR Buffer[260]; // [rsp+124h] [rbp+1Ch] BYREF

  OutputBuffer_4 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  rbc_InitializeFeatureStaging();
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer_4, 1u) >= 0 && OutputBuffer_4 )
    IsSystemAoAC = 1;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v0 = 0;
  }
  else
  {
    ZwClose(KeyHandle);
    v0 = 1;
  }
  g_InWinPE = v0;
  g_OSisUpgrade = RaidpIsCurrentOsInstallationUpgrade();
  if ( _InterlockedIncrement(&NumDllInitialize) == 1 )
  {
    StorpRegisterShim();
    WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    RaidLoadATADeviceIdMappings();
  }
  RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  v8.RootDirectory = 0LL;
  v8.ObjectName = &ValueName;
  v8.Length = 48;
  v8.Attributes = 576;
  *(_OWORD *)&v8.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &v8) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"LogControlEnable");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 11
      && OutputBuffer >= 8 )
    {
      qword_1C004F2A0 = *(_QWORD *)Buffer;
      if ( !*(_QWORD *)Buffer )
        RaidLogListSize = 0;
    }
    RtlInitUnicodeString(&ValueName, L"LogSize");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
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
          qword_1C004F2A0 = 0LL;
      }
      else
      {
        RaidLogListSize = 4096;
      }
    }
    RtlInitUnicodeString(&ValueName, L"DpcCompletionLimit");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
    {
      DpcCompletionLimit = *(_DWORD *)Buffer;
      if ( !*(_DWORD *)Buffer )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString(&ValueName, L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob(Buffer);
    }
    RtlInitUnicodeString(&ValueName, L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4 )
    {
      HmbAllocationPolicy = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4 )
    {
      MiniportBugActionPolicy = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer >= 3u )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"QoSFlags");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4 )
    {
      g_QosFlags = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&ValueName, L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
      && v13 == 4
      && OutputBuffer >= 4
      && *(_DWORD *)Buffer )
    {
      StorPreAllocatedMaxIoResourceCount = *(_DWORD *)Buffer;
    }
    ZwClose(Handle);
  }
  if ( SpVrfyLevel != -1 )
  {
    RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    v8.RootDirectory = 0LL;
    v8.ObjectName = &ValueName;
    v8.Length = 48;
    v8.Attributes = 576;
    *(_OWORD *)&v8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &v8) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"VerifyLevel");
      if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &OutputBuffer) >= 0
        && v13 == 4
        && OutputBuffer >= 4 )
      {
        SpVrfyLevel |= *(_DWORD *)Buffer;
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(Handle);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)SystemInformation[5] << 12;
      PhysicalMemorySize = (unsigned __int64)SystemInformation[3] << 12;
    }
  }
  return 0LL;
}
