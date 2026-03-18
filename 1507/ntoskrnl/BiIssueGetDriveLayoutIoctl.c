/*
 * XREFs of BiIssueGetDriveLayoutIoctl @ 0x140571020
 * Callers:
 *     BiGetDriveLayoutInformation @ 0x140570F6C (BiGetDriveLayoutInformation.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x14017F8F0 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x140181BB0 (ZwResetEvent.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiIssueGetDriveLayoutIoctl(HANDLE FileHandle, _QWORD *a2)
{
  unsigned int *v2; // rsi
  _DWORD *OutputBuffer; // rdi
  NTSTATUS Status; // ebx
  ULONG OutputBufferLength; // r14d
  ULONG v9; // r14d
  SIZE_T i; // rdx
  unsigned int *PoolWithTag; // rax
  unsigned int v12; // r14d
  _DWORD *v13; // rax
  _QWORD *v14; // rdx
  _DWORD *v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE EventHandle; // [rsp+D0h] [rbp+77h] BYREF

  EventHandle = 0LL;
  v2 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  OutputBuffer = 0LL;
  Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( Status >= 0 )
  {
    OutputBufferLength = 18480;
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, 0x4830uLL, 0x4B444342u);
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
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B444342u);
        if ( !OutputBuffer )
        {
LABEL_18:
          Status = -1073741670;
LABEL_7:
          if ( v2 )
            ExFreePoolWithTag(v2, 0);
          goto LABEL_9;
        }
      }
      if ( Status >= 0 )
      {
LABEL_6:
        *a2 = OutputBuffer;
        goto LABEL_7;
      }
      v9 = 2056;
      for ( i = 2056LL; ; i = v9 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, i, 0x4B444342u);
        v2 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        Status = ZwDeviceIoControlFile(
                   FileHandle,
                   EventHandle,
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x7400Cu,
                   0LL,
                   0,
                   PoolWithTag,
                   v9);
        if ( Status == 259 )
        {
          Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
          if ( Status >= 0 )
            Status = IoStatusBlock.Status;
        }
        ZwResetEvent(EventHandle, 0LL);
        if ( Status != -1073741789 )
        {
          if ( Status < 0 )
            goto LABEL_7;
          ExFreePoolWithTag(OutputBuffer, 0);
          v12 = 144 * *v2 + 48;
          v13 = ExAllocatePoolWithTag(PagedPool, v12, 0x4B444342u);
          OutputBuffer = v13;
          if ( v13 )
          {
            memset(v13, 0, v12);
            *OutputBuffer = 0;
            v14 = v2 + 2;
            v15 = OutputBuffer + 12;
            OutputBuffer[1] = *v2;
            v16 = 0;
            for ( OutputBuffer[2] = v2[1]; v16 < *v2; *(v15 - 27) = *((_DWORD *)v14 - 4) )
            {
              *v15 = 0;
              ++v16;
              v17 = *v14;
              v14 += 4;
              *((_QWORD *)v15 + 1) = v17;
              v15 += 36;
              *((_QWORD *)v15 - 16) = *(v14 - 3);
              *(v15 - 30) = *((_DWORD *)v14 - 3);
              *((_BYTE *)v15 - 116) = *((_BYTE *)v14 - 5);
              *((_BYTE *)v15 - 112) = *((_BYTE *)v14 - 8);
              *((_BYTE *)v15 - 111) = *((_BYTE *)v14 - 7);
              *((_BYTE *)v15 - 110) = *((_BYTE *)v14 - 6);
            }
            goto LABEL_6;
          }
          goto LABEL_18;
        }
        ExFreePoolWithTag(v2, 0);
        v9 += 2048;
      }
    }
    Status = -1073741670;
  }
LABEL_9:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( Status < 0 && OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0);
  return (unsigned int)Status;
}
