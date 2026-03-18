/*
 * XREFs of CmpTouchFile @ 0x1405E4E8C
 * Callers:
 *     HvViewMapStart @ 0x1405EB210 (HvViewMapStart.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ZwReadFile @ 0x1401506E0 (ZwReadFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     CmpCreateEvent @ 0x1403DD924 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpTouchFile(HANDLE FileHandle)
{
  NTSTATUS Status; // ebx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-18h] BYREF
  char Buffer; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Event; // [rsp+A8h] [rbp+38h] BYREF

  Event = 0LL;
  Object = 0LL;
  ByteOffset.QuadPart = 0LL;
  Status = CmpCreateEvent(SynchronizationEvent, &Event, &Object);
  if ( Status >= 0 )
  {
    Status = ZwReadFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, &Buffer, 1u, &ByteOffset, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
      Status = 0;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Event )
    ZwClose(Event);
  return (unsigned int)Status;
}
