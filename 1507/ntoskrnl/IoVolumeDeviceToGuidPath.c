/*
 * XREFs of IoVolumeDeviceToGuidPath @ 0x14056254C
 * Callers:
 *     IoVolumeDeviceToGuid @ 0x1405624CC (IoVolumeDeviceToGuid.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall IoVolumeDeviceToGuidPath(PDEVICE_OBJECT DeviceObject, unsigned __int16 *a2)
{
  unsigned __int64 DeviceType; // rax
  _DWORD *p_Timeout; // rdi
  char v6; // r13
  __int64 v7; // rcx
  IRP *v8; // rax
  NTSTATUS Status; // ebx
  ULONG v10; // r14d
  _WORD *PoolWithTag; // rax
  _WORD *v12; // r15
  struct _DEVICE_OBJECT *v13; // r12
  IRP *v14; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v16; // rax
  int v17; // r14d
  const wchar_t *v18; // r12
  unsigned __int16 v19; // ax
  PVOID v20; // rax
  char v22; // [rsp+51h] [rbp-AFh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 OutputBuffer; // [rsp+C0h] [rbp-40h] BYREF
  char Src[510]; // [rsp+C2h] [rbp-3Eh] BYREF

  DeviceType = DeviceObject->DeviceType;
  v22 = 0;
  FileObject = 0LL;
  p_Timeout = 0LL;
  v6 = 0;
  if ( (unsigned int)DeviceType > 0x24 )
    return (unsigned int)-1073741811;
  v7 = 0x1080000084LL;
  if ( !_bittest64(&v7, DeviceType) )
    return (unsigned int)-1073741811;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(0x4D0008u, DeviceObject, 0LL, 0, &OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
  if ( !v8 )
    return (unsigned int)-1073741670;
  Status = IofCallDriver(DeviceObject, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v10 = OutputBuffer + 26;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x20473244u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      *(_DWORD *)v12 = 0;
      v12[2] = 0;
      *((_DWORD *)v12 + 2) = 0;
      v12[6] = 0;
      *((_DWORD *)v12 + 4) = 24;
      v12[10] = OutputBuffer;
      memmove(v12 + 12, Src, OutputBuffer);
      RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
      Status = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObjecta);
      if ( Status >= 0 )
      {
        v6 = 1;
        p_Timeout = &Timeout;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v13 = DeviceObjecta;
        v14 = IoBuildDeviceIoControlRequest(
                0x6D0008u,
                DeviceObjecta,
                v12,
                v10,
                &Timeout,
                0x20u,
                0,
                &Event,
                &IoStatusBlock);
        if ( v14 )
        {
          Status = IofCallDriver(v13, v14);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( (int)(Status + 0x80000000) >= 0 && Status != -2147483643 )
            goto LABEL_25;
          OutputBufferLength = Timeout.LowPart + 32;
          if ( Timeout.LowPart + 32 > 0xFFFF )
          {
            Status = -1073741306;
            goto LABEL_25;
          }
          p_Timeout = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x20473244u);
          if ( p_Timeout )
          {
            v22 = 1;
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v16 = IoBuildDeviceIoControlRequest(
                    0x6D0008u,
                    v13,
                    v12,
                    v10,
                    p_Timeout,
                    OutputBufferLength,
                    0,
                    &Event,
                    &IoStatusBlock);
            if ( v16 )
            {
              Status = IofCallDriver(v13, v16);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              if ( Status >= 0 )
              {
                Status = -1073741275;
                v17 = 0;
                if ( p_Timeout[1] )
                {
                  while ( 1 )
                  {
                    v18 = (const wchar_t *)((char *)p_Timeout + (unsigned int)p_Timeout[6 * v17 + 2]);
                    if ( !wcsnicmp(L"\\??\\Volume", v18, 0xAuLL) )
                      break;
                    if ( (unsigned int)++v17 >= p_Timeout[1] )
                    {
                      v6 = 1;
                      goto LABEL_25;
                    }
                  }
                  v19 = p_Timeout[6 * v17 + 3];
                  *a2 = v19;
                  v19 += 2;
                  a2[1] = v19;
                  v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x20473244u);
                  *((_QWORD *)a2 + 1) = v20;
                  if ( v20 )
                  {
                    memmove(v20, v18, *a2);
                    Status = 0;
                    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
                  }
                  else
                  {
                    Status = -1073741670;
                    *(_DWORD *)a2 = 0;
                  }
                  v6 = 1;
                }
              }
              goto LABEL_25;
            }
          }
        }
        Status = -1073741670;
      }
LABEL_25:
      ExFreePoolWithTag(v12, 0);
      if ( v22 )
        ExFreePoolWithTag(p_Timeout, 0);
      if ( v6 )
        ObfDereferenceObject(FileObject);
      return (unsigned int)Status;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}
