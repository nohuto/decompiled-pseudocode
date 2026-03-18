/*
 * XREFs of MiZeroPageFileFirstPage @ 0x1405B5120
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroPageFileFirstPage(struct _FILE_OBJECT *a1)
{
  NTSTATUS Status; // ebx
  LARGE_INTEGER v4; // [rsp+30h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK v5; // [rsp+38h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-1h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+60h] [rbp+17h] BYREF
  __int64 v8; // [rsp+90h] [rbp+47h]

  v4.QuadPart = 0LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.StartVa = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v8 = qword_14034F710;
  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.ByteCount = 4096;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  Status = IoSynchronousPageWriteEx(a1, &MemoryDescriptorList, &v4, &Event, 0, &v5);
  if ( Status >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    Status = v5.Status;
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)Status;
}
