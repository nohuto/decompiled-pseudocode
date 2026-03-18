/*
 * XREFs of WMIInitialize @ 0x1407572D0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140753170 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140771934 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140771D78 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140772138 (WmipGetSMBiosFromLoaderBlock.c)
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
