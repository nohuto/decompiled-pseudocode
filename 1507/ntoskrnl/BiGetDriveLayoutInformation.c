/*
 * XREFs of BiGetDriveLayoutInformation @ 0x140570F6C
 * Callers:
 *     BiGetDriveLayoutBlock @ 0x14056EFF4 (BiGetDriveLayoutBlock.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 */

__int64 __fastcall BiGetDriveLayoutInformation(PCWSTR SourceString)
{
  NTSTATUS DriveLayoutIoctl; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock.Pointer = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock.Information = 0LL;
  DriveLayoutIoctl = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( DriveLayoutIoctl >= 0 )
    DriveLayoutIoctl = BiIssueGetDriveLayoutIoctl(FileHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)DriveLayoutIoctl;
}
