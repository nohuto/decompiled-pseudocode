/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x1403D316C
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x14053185C (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     BapdRegisterEtwProvider @ 0x1401322E0 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403D3384 (BapdpWriteEventDataToRegistry.c)
 *     TraceLoggingRegisterEx @ 0x140546994 (TraceLoggingRegisterEx.c)
 *     EtwUnregister @ 0x1405488B0 (EtwUnregister.c)
 *     xHalSetSystemInformation @ 0x140581940 (xHalSetSystemInformation.c)
 */

void BapdRecordFirmwareBootStats()
{
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C0h] BYREF

  if ( BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0 )
    off_1402F37E8();
  if ( RegHandle )
    EtwUnregister(RegHandle);
}
