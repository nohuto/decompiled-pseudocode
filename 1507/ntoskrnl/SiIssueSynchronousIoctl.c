/*
 * XREFs of SiIssueSynchronousIoctl @ 0x140711660
 * Callers:
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140712080 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x14017F8F0 (ZwCreateEvent.c)
 */

__int64 __fastcall SiIssueSynchronousIoctl(PCWSTR SourceString, __int64 a2, void *a3, __int64 a4, PVOID OutputBuffer)
{
  NTSTATUS Status; // ebx
  HANDLE EventHandle; // [rsp+50h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+17h] BYREF

  EventHandle = 0LL;
  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
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
      Status = ZwDeviceIoControlFile(
                 FileHandle,
                 EventHandle,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 0x2D1400u,
                 a3,
                 0xCu,
                 OutputBuffer,
                 0x28u);
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
