/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x1403A6C88
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x1404F8D10 (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     BapdRegisterEtwProvider @ 0x1401275E8 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403A6E44 (BapdpWriteEventDataToRegistry.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 */

void BapdRecordFirmwareBootStats()
{
  REGHANDLE RegHandle; // [rsp+38h] [rbp-51h] BYREF

  if ( BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0 )
    off_1402D29C8();
  if ( RegHandle )
    EtwUnregister(RegHandle);
}
