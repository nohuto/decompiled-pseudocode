/*
 * XREFs of BiIsVolumePartitionInformationRetained @ 0x1404FE510
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1404FDCF4 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 */

char __fastcall BiIsVolumePartitionInformationRetained(PCWSTR SourceString)
{
  NTSTATUS Status; // eax
  char v2; // bl
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES v7; // [rsp+A0h] [rbp+27h] BYREF
  HANDLE EventHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+77h] BYREF

  FileHandle = 0LL;
  EventHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock.Pointer = 0LL;
  ObjectAttributes.Length = 48;
  IoStatusBlock.Information = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0) < 0 )
    goto LABEL_11;
  v7.RootDirectory = 0LL;
  v7.ObjectName = 0LL;
  v7.Length = 48;
  v7.Attributes = 512;
  *(_OWORD *)&v7.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &v7, NotificationEvent, 0) < 0 )
    goto LABEL_11;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Status = ZwDeviceIoControlFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, 0x560028u, 0LL, 0, 0LL, 0);
  if ( Status == 259 )
  {
    if ( ZwWaitForSingleObject(EventHandle, 0, 0LL) < 0 )
      goto LABEL_11;
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v2 = 1;
    goto LABEL_6;
  }
LABEL_11:
  v2 = 0;
LABEL_6:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return v2;
}
