/*
 * XREFs of RawQueryFsSizeInfo @ 0x140484B94
 * Callers:
 *     RawQueryVolumeInformation @ 0x140484D40 (RawQueryVolumeInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     RawEndOperation @ 0x1400C33B8 (RawEndOperation.c)
 *     RawBeginOperation @ 0x1400FAF20 (RawBeginOperation.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _DEVICE_OBJECT *v8; // rdi
  IRP *v9; // rax
  NTSTATUS Status; // ebx
  IRP *v11; // rax
  NTSTATUS v12; // ecx
  LARGE_INTEGER v13; // rax
  bool v14; // cl
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  IRP *v18; // rax
  NTSTATUS v19; // eax
  bool v20; // sf
  struct _KEVENT Event; // [rsp+50h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-19h] BYREF
  int v25; // [rsp+8Ch] [rbp-Dh]
  int v26; // [rsp+90h] [rbp-9h]
  unsigned int v27; // [rsp+94h] [rbp-5h]
  LARGE_INTEGER v28; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v29; // [rsp+A0h] [rbp+7h]

  if ( *a4 < 0x18u )
    return 2147483653LL;
  if ( RawBeginOperation(a1, a2) )
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 184) + 16LL);
    v9 = IoBuildDeviceIoControlRequest(0x70000u, v8, 0LL, 0, &Timeout, 0x18u, 0, &Event, &IoStatusBlock);
    if ( v9 )
    {
      Status = IofCallDriver(v8, v9);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        *a4 = 0;
LABEL_16:
        RawEndOperation(a1, a2);
        return (unsigned int)Status;
      }
      if ( (v8->Characteristics & 4) != 0 )
      {
        v14 = 0;
        v13.QuadPart = 0LL;
        v29.QuadPart = 0LL;
        goto LABEL_13;
      }
      KeResetEvent(&Event);
      v11 = IoBuildDeviceIoControlRequest(0x7405Cu, v8, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
      if ( v11 )
      {
        v12 = IofCallDriver(v8, v11);
        if ( v12 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v12 = IoStatusBlock.Status;
        }
        v13 = OutputBuffer;
        v29 = OutputBuffer;
        if ( v12 >= 0 )
        {
          v14 = 1;
LABEL_13:
          v15 = v27;
          *(_DWORD *)(a3 + 20) = v27;
          *(_DWORD *)(a3 + 16) = 1;
          if ( v14 )
            v16 = v13.QuadPart / (unsigned __int64)v15;
          else
            v16 = Timeout.QuadPart * v25 * v26;
          *(_QWORD *)(a3 + 8) = v16;
          *(_QWORD *)a3 = v16;
          *a4 -= 24;
          Status = 0;
          goto LABEL_16;
        }
        KeResetEvent(&Event);
        v18 = IoBuildDeviceIoControlRequest(0x74004u, v8, 0LL, 0, &v28, 0x20u, 0, &Event, &IoStatusBlock);
        if ( v18 )
        {
          v19 = IofCallDriver(v8, v18);
          if ( v19 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v19 = IoStatusBlock.Status;
          }
          v20 = v19 < 0;
          v13 = v29;
          v14 = !v20;
          goto LABEL_13;
        }
      }
    }
    Status = -1073741670;
    goto LABEL_16;
  }
  return 3221226094LL;
}
