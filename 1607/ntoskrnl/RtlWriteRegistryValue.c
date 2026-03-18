/*
 * XREFs of RtlWriteRegistryValue @ 0x1404E08E4
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1402135D4 (RtlSetPortableOperatingSystem.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     WmipSecurityMethod @ 0x1404E1DBC (WmipSecurityMethod.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140534094 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F130 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14055F354 (RtlSetActiveTimeBias.c)
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14056366C (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405637E0 (EtwpEnableAutoLoggerProviders.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406885BC (RtlpSetTimeZoneInformationWorker.c)
 *     WheapCommitPolicy @ 0x1406BAC2C (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  v7 = ValueName;
  LOBYTE(ValueName) = 1;
  result = RtlpGetRegistryHandle(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
