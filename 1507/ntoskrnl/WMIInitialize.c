/*
 * XREFs of WMIInitialize @ 0x1407C07E4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x1407BA2F8 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x1407E7FE0 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x1407E8814 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x1407E8C34 (WmipGetSMBiosFromLoaderBlock.c)
 */

char __fastcall WMIInitialize(int a1, __int64 a2)
{
  char v2; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    WmipInitializeRegistration(a1);
    WmipRegisterFirmwareProviders();
    return 1;
  }
  WmipInitializeAllocs();
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( (int)IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    return 1;
  }
  return v2;
}
