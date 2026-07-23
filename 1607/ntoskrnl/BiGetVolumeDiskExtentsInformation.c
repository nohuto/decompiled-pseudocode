/*
 * XREFs of BiGetVolumeDiskExtentsInformation @ 0x1406D3270
 * Callers:
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14015A2D0 (ZwDeviceIoControlFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetVolumeDiskExtentsInformation(HANDLE FileHandle, _QWORD *a2)
{
  int v4; // ebp
  ULONG OutputBufferLength; // esi
  _DWORD *OutputBuffer; // rax
  _DWORD *v7; // rbx
  NTSTATUS v8; // eax
  int v9; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v4 = 0;
  OutputBufferLength = 32;
  while ( 1 )
  {
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B444342u);
    v7 = OutputBuffer;
    if ( !OutputBuffer )
      break;
    v8 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x560000u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    v9 = v8;
    if ( v8 == -1073741789 || v8 == -2147483643 )
    {
      OutputBufferLength += 24 * *v7;
      ExFreePoolWithTag(v7, 0x4B444342u);
      v7 = 0LL;
      if ( (unsigned int)++v4 < 2 )
        continue;
    }
    goto LABEL_8;
  }
  v9 = -1073741670;
LABEL_8:
  if ( v9 < 0 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)v9;
}
