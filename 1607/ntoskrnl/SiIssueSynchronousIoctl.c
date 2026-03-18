/*
 * XREFs of SiIssueSynchronousIoctl @ 0x1406D62E8
 * Callers:
 *     SiGetEfiSystemDevice @ 0x1406D646C (SiGetEfiSystemDevice.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1406D6D00 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x140159D60 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 */

__int64 __fastcall SiIssueSynchronousIoctl(
        PCWSTR SourceString,
        __int64 a2,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS v7; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v7 >= 0 )
    v7 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D1400u,
           a3,
           0xCu,
           OutputBuffer,
           OutputBufferLength);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
