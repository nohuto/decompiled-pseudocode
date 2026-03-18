/*
 * XREFs of SiGetDiskPartitionInformation @ 0x14057FD78
 * Callers:
 *     SiValidateSystemPartition @ 0x1401587B0 (SiValidateSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x14017F8F0 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x140181BB0 (ZwResetEvent.c)
 */

__int64 __fastcall SiGetDiskPartitionInformation(PCWSTR SourceString, PVOID OutputBuffer)
{
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES v8; // [rsp+A0h] [rbp+27h] BYREF
  HANDLE EventHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock.Pointer = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock.Information = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( Status >= 0 )
  {
    v8.RootDirectory = 0LL;
    v8.ObjectName = 0LL;
    v8.Length = 48;
    v8.Attributes = 512;
    *(_OWORD *)&v8.SecurityDescriptor = 0LL;
    Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &v8, NotificationEvent, 0);
    if ( Status >= 0 )
    {
      ZwResetEvent(EventHandle, 0LL);
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      Status = ZwDeviceIoControlFile(
                 FileHandle,
                 EventHandle,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 0x70048u,
                 0LL,
                 0,
                 OutputBuffer,
                 0x90u);
      if ( Status == 259 )
      {
        Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
        if ( Status >= 0 )
          Status = IoStatusBlock.Status;
      }
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}
