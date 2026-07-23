/*
 * XREFs of RawQueryFsSizeInfo @ 0x140683168
 * Callers:
 *     RawQueryVolumeInformation @ 0x1403ED294 (RawQueryVolumeInformation.c)
 * Callees:
 *     RawBeginOperation @ 0x140006CCC (RawBeginOperation.c)
 *     RawEndOperation @ 0x1400073C0 (RawEndOperation.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _DEVICE_OBJECT *v9; // rdi
  IRP *v10; // rax
  NTSTATUS Status; // ebx
  bool v12; // cl
  LARGE_INTEGER v13; // rax
  IRP *v14; // rax
  NTSTATUS v15; // ecx
  IRP *v16; // rax
  NTSTATUS v17; // eax
  bool v18; // sf
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-39h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-19h] BYREF
  int v25; // [rsp+8Ch] [rbp-Dh]
  int v26; // [rsp+90h] [rbp-9h]
  unsigned int v27; // [rsp+94h] [rbp-5h]
  LARGE_INTEGER v28; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v29; // [rsp+A0h] [rbp+7h]

  if ( *a4 < 0x18u )
    return 2147483653LL;
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 184) + 16LL);
  v10 = IoBuildDeviceIoControlRequest(0x70000u, v9, 0LL, 0, &Timeout, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v10 )
    goto LABEL_13;
  Status = IofCallDriver(v9, v10);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( (v9->Characteristics & 4) != 0 )
    {
      v12 = 0;
      v13.QuadPart = 0LL;
      v29.QuadPart = 0LL;
LABEL_22:
      v19 = v27;
      *(_DWORD *)(a3 + 20) = v27;
      *(_DWORD *)(a3 + 16) = 1;
      if ( v12 )
        v20 = v13.QuadPart / (unsigned __int64)v19;
      else
        v20 = Timeout.QuadPart * v25 * v26;
      *(_QWORD *)(a3 + 8) = v20;
      *(_QWORD *)a3 = v20;
      *a4 -= 24;
      Status = 0;
      goto LABEL_26;
    }
    KeResetEvent(&Event);
    v14 = IoBuildDeviceIoControlRequest(0x7405Cu, v9, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
    if ( v14 )
    {
      v15 = IofCallDriver(v9, v14);
      if ( v15 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v15 = IoStatusBlock.Status;
      }
      v13 = OutputBuffer;
      v29 = OutputBuffer;
      if ( v15 >= 0 )
      {
        v12 = 1;
        goto LABEL_22;
      }
      KeResetEvent(&Event);
      v16 = IoBuildDeviceIoControlRequest(0x74004u, v9, 0LL, 0, &v28, 0x20u, 0, &Event, &IoStatusBlock);
      if ( v16 )
      {
        v17 = IofCallDriver(v9, v16);
        if ( v17 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v17 = IoStatusBlock.Status;
        }
        v18 = v17 < 0;
        v13 = v29;
        v12 = !v18;
        goto LABEL_22;
      }
    }
LABEL_13:
    Status = -1073741670;
    goto LABEL_26;
  }
  *a4 = 0;
LABEL_26:
  RawEndOperation(a1, a2);
  return (unsigned int)Status;
}
