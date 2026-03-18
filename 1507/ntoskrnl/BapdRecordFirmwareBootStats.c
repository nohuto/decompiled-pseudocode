/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x1403F66C8
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x140566000 (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403F68B8 (BapdpWriteEventDataToRegistry.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     EtwSetInformation @ 0x14057E7C0 (EtwSetInformation.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 */

void BapdRecordFirmwareBootStats()
{
  NTSTATUS v0; // eax
  REGHANDLE v1; // rbx
  ULONGLONG RegHandle; // [rsp+58h] [rbp-31h] BYREF

  v0 = EtwRegister(&BOOTENV_ETW_PROVIDER, 0LL, 0LL, &RegHandle);
  if ( v0 < 0 )
  {
    v1 = 0LL;
  }
  else
  {
    v1 = RegHandle;
    EtwSetInformation(
      RegHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    v0 = 0;
  }
  if ( v0 >= 0 )
    off_140321B18();
  if ( v1 )
    EtwUnregister(v1);
}
