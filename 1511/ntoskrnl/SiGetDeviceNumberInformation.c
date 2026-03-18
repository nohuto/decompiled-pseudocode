/*
 * XREFs of SiGetDeviceNumberInformation @ 0x1406917C0
 * Callers:
 *     SiDisambiguateSystemDevice @ 0x140691CA4 (SiDisambiguateSystemDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x140153240 (ZwResetEvent.c)
 */

__int64 __fastcall SiGetDeviceNumberInformation(PCWSTR SourceString, _DWORD *a2, _DWORD *a3)
{
  NTSTATUS Status; // ebx
  HANDLE EventHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-61h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v12; // [rsp+B0h] [rbp-9h] BYREF
  _DWORD OutputBuffer[4]; // [rsp+E0h] [rbp+27h] BYREF

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
    v12.RootDirectory = 0LL;
    v12.ObjectName = 0LL;
    v12.Length = 48;
    v12.Attributes = 512;
    *(_OWORD *)&v12.SecurityDescriptor = 0LL;
    Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &v12, NotificationEvent, 0);
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
                 0x2D1080u,
                 0LL,
                 0,
                 OutputBuffer,
                 0xCu);
      if ( Status == 259 )
      {
        Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
        if ( Status < 0 )
          goto LABEL_10;
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( OutputBuffer[0] == 7 )
        {
          *a2 = OutputBuffer[1];
          *a3 = OutputBuffer[2];
        }
        else
        {
          Status = -1073741637;
        }
      }
    }
  }
LABEL_10:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}
