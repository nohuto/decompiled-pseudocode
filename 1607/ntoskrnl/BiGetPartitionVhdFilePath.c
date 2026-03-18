/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x14053EB94
 * Callers:
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053E75C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053E80C (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053EBB4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
