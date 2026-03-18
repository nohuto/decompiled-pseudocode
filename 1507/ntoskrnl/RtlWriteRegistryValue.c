/*
 * XREFs of RtlWriteRegistryValue @ 0x1404AA384
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x140248310 (RtlSetPortableOperatingSystem.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14056950C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A63CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405A65F0 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406CC07C (RtlpSetTimeZoneInformationWorker.c)
 *     WheapCommitPolicy @ 0x1406FCD10 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
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
