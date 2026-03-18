/*
 * XREFs of BiGetPartitionInformation @ 0x1404FE044
 * Callers:
 *     BiCreatePartitionDevice @ 0x1404FDDA4 (BiCreatePartitionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x140153240 (ZwResetEvent.c)
 */

__int64 __fastcall BiGetPartitionInformation(HANDLE FileHandle, int a2, _OWORD *a3)
{
  NTSTATUS Status; // ebx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  HANDLE EventHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int128 OutputBuffer; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+B0h] [rbp-50h]
  __int128 v20; // [rsp+C0h] [rbp-40h]
  __int128 v21; // [rsp+D0h] [rbp-30h]
  __int128 v22; // [rsp+E0h] [rbp-20h]
  __int128 v23; // [rsp+F0h] [rbp-10h]
  __int128 v24; // [rsp+100h] [rbp+0h]
  __int128 v25; // [rsp+110h] [rbp+10h]
  __int128 v26; // [rsp+120h] [rbp+20h]
  _QWORD v27[2]; // [rsp+130h] [rbp+30h] BYREF
  int v28; // [rsp+140h] [rbp+40h]
  int v29; // [rsp+144h] [rbp+44h]
  __int16 v30; // [rsp+148h] [rbp+48h]
  char v31; // [rsp+14Ah] [rbp+4Ah]
  char v32; // [rsp+14Bh] [rbp+4Bh]

  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( Status < 0 )
    goto LABEL_5;
  Status = ZwDeviceIoControlFile(
             FileHandle,
             EventHandle,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70048u,
             0LL,
             0,
             &OutputBuffer,
             0x90u);
  if ( Status == 259 )
  {
    Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    if ( Status < 0 )
      goto LABEL_10;
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
LABEL_4:
    v7 = v19;
    *a3 = OutputBuffer;
    v8 = v20;
    a3[1] = v7;
    v9 = v21;
    a3[2] = v8;
    v10 = v22;
    a3[3] = v9;
    v11 = v23;
    a3[4] = v10;
    v12 = v24;
    a3[5] = v11;
    v13 = v26;
    a3[6] = v12;
    a3[7] = v25;
    a3[8] = v13;
    goto LABEL_5;
  }
LABEL_10:
  if ( a2 )
    goto LABEL_16;
  ZwResetEvent(EventHandle, 0LL);
  Status = ZwDeviceIoControlFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, 0x74004u, 0LL, 0, v27, 0x20u);
  if ( Status == 259 )
  {
    Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    if ( Status < 0 )
      goto LABEL_5;
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    LODWORD(OutputBuffer) = 0;
    *((_QWORD *)&OutputBuffer + 1) = v27[0];
    *(_QWORD *)&v19 = v27[1];
    DWORD2(v19) = v29;
    BYTE12(v19) = v32;
    LOWORD(v20) = v30;
    BYTE2(v20) = v31;
    DWORD1(v20) = v28;
LABEL_16:
    if ( Status >= 0 )
      goto LABEL_4;
  }
LABEL_5:
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)Status;
}
