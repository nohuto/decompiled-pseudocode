/*
 * XREFs of RawQueryFsSizeInfo @ 0x14040C604
 * Callers:
 *     RawQueryVolumeInformation @ 0x14040C044 (RawQueryVolumeInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // r14
  IRP *v10; // rax
  NTSTATUS Status; // esi
  IRP *v12; // rax
  NTSTATUS v13; // ecx
  LARGE_INTEGER v14; // rax
  bool v15; // cl
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  IRP *v23; // rax
  NTSTATUS v24; // eax
  bool v25; // sf
  struct _KEVENT Event; // [rsp+50h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-19h] BYREF
  int v30; // [rsp+8Ch] [rbp-Dh]
  int v31; // [rsp+90h] [rbp-9h]
  unsigned int v32; // [rsp+94h] [rbp-5h]
  LARGE_INTEGER v33; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v34; // [rsp+A0h] [rbp+7h]

  if ( *a4 < 0x18u )
    return 2147483653LL;
  v8 = *(_QWORD *)(a1 + 200);
  if ( (!v8 || a2 != v8) && !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u) )
    return 3221226094LL;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 184) + 16LL);
  v10 = IoBuildDeviceIoControlRequest(0x70000u, v9, 0LL, 0, &Timeout, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v10 )
  {
    v20 = *(_QWORD *)(a1 + 200);
    if ( v20 && a2 == v20 )
      return 3221225626LL;
    goto LABEL_27;
  }
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
      v15 = 0;
      v14.QuadPart = 0LL;
      v34.QuadPart = 0LL;
      goto LABEL_14;
    }
    KeResetEvent(&Event);
    v12 = IoBuildDeviceIoControlRequest(0x7405Cu, v9, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
    if ( v12 )
    {
      v13 = IofCallDriver(v9, v12);
      if ( v13 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v13 = IoStatusBlock.Status;
      }
      v14 = OutputBuffer;
      v34 = OutputBuffer;
      if ( v13 >= 0 )
      {
        v15 = 1;
LABEL_14:
        v16 = v32;
        *(_DWORD *)(a3 + 20) = v32;
        *(_DWORD *)(a3 + 16) = 1;
        if ( v15 )
          v17 = v14.QuadPart / (unsigned __int64)v16;
        else
          v17 = Timeout.QuadPart * v30 * v31;
        *(_QWORD *)(a3 + 8) = v17;
        *(_QWORD *)a3 = v17;
        *a4 -= 24;
        v18 = *(_QWORD *)(a1 + 200);
        if ( !v18 || a2 != v18 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
        return 0LL;
      }
      KeResetEvent(&Event);
      v23 = IoBuildDeviceIoControlRequest(0x74004u, v9, 0LL, 0, &v33, 0x20u, 0, &Event, &IoStatusBlock);
      if ( v23 )
      {
        v24 = IofCallDriver(v9, v23);
        if ( v24 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v24 = IoStatusBlock.Status;
        }
        v25 = v24 < 0;
        v14 = v34;
        v15 = !v25;
        goto LABEL_14;
      }
    }
    v22 = *(_QWORD *)(a1 + 200);
    if ( v22 && a2 == v22 )
      return 3221225626LL;
LABEL_27:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
    return 3221225626LL;
  }
  *a4 = 0;
  v21 = *(_QWORD *)(a1 + 200);
  if ( !v21 || a2 != v21 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return (unsigned int)Status;
}
