/*
 * XREFs of RtlWriteRegistryValue @ 0x1404C8708
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1401F92A8 (RtlSetPortableOperatingSystem.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1404F5104 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14053BBF4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14053BE18 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140648FF8 (RtlpSetTimeZoneInformationWorker.c)
 *     WheapCommitPolicy @ 0x1406784F4 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
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
