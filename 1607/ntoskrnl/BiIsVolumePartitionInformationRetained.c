/*
 * XREFs of BiIsVolumePartitionInformationRetained @ 0x14053EE50
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053E75C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x140159D60 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 */

bool __fastcall BiIsVolumePartitionInformationRetained(PCWSTR SourceString)
{
  bool v1; // bl
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = 0;
  if ( ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
  {
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    if ( ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x560028u, 0LL, 0, 0LL, 0) >= 0 )
      v1 = 1;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
