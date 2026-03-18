/*
 * XREFs of SiGetDriveLayoutInformation @ 0x140691968
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140691D48 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x140692430 (SiGetBiosSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x140153240 (ZwResetEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS Status; // ebx
  ULONG OutputBufferLength; // esi
  PVOID OutputBuffer; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  HANDLE EventHandle; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( Status >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    EventHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( Status >= 0 )
    {
      OutputBufferLength = 18480;
      OutputBuffer = ExAllocatePoolWithTag(PagedPool, 0x4830uLL, 0x4B505953u);
      if ( OutputBuffer )
      {
        while ( 1 )
        {
          Status = ZwDeviceIoControlFile(
                     FileHandle,
                     EventHandle,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x70050u,
                     0LL,
                     0,
                     OutputBuffer,
                     OutputBufferLength);
          if ( Status == 259 )
          {
            Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            if ( Status >= 0 )
              Status = IoStatusBlock.Status;
          }
          ZwResetEvent(EventHandle, 0LL);
          if ( Status != -1073741789 )
            break;
          ExFreePoolWithTag(OutputBuffer, 0);
          OutputBufferLength += 9216;
          OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B505953u);
          if ( !OutputBuffer )
          {
            Status = -1073741670;
            goto LABEL_13;
          }
        }
        if ( Status < 0 )
          goto LABEL_14;
        *a2 = OutputBuffer;
LABEL_13:
        if ( Status >= 0 )
          goto LABEL_16;
LABEL_14:
        if ( OutputBuffer )
          ExFreePoolWithTag(OutputBuffer, 0);
      }
      else
      {
        Status = -1073741670;
      }
    }
  }
LABEL_16:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}
