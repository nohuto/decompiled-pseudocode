/*
 * XREFs of SiGetDiskPartitionInformation @ 0x1405421E8
 * Callers:
 *     SiValidateSystemPartition @ 0x14012EDA8 (SiValidateSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x140159D60 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 */

__int64 __fastcall SiGetDiskPartitionInformation(PCWSTR SourceString, PVOID OutputBuffer)
{
  NTSTATUS v3; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+77h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v3 >= 0 )
  {
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    v3 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
