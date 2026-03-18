/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140570DE8
 * Callers:
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
