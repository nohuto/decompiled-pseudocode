/*
 * XREFs of IoVolumeDeviceNameToGuidPath @ 0x14052D6D4
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x14052D58C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuid @ 0x140625210 (IoVolumeDeviceNameToGuid.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuidPath(const void **a1, unsigned __int16 *a2)
{
  _DWORD *v3; // rdi
  char v4; // r13
  ULONG v6; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // r15
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v10; // r12
  IRP *v11; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v13; // rax
  __int64 v14; // r14
  const wchar_t *v15; // r12
  unsigned __int16 v16; // ax
  PVOID v17; // rax
  char v19; // [rsp+51h] [rbp-58h]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-51h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-41h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  _DWORD OutputBuffer[8]; // [rsp+A0h] [rbp-9h] BYREF

  v3 = 0LL;
  v19 = 0;
  FileObject = 0LL;
  v4 = 0;
  if ( *(_WORD *)a1 > 0xF000u )
    return (unsigned int)-1073741811;
  v6 = *(unsigned __int16 *)a1 + 26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20473244u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v6);
  v8[4] = 24;
  *v8 = 0;
  *((_WORD *)v8 + 2) = 0;
  v8[2] = 0;
  *((_WORD *)v8 + 6) = 0;
  *((_WORD *)v8 + 10) = *(_WORD *)a1;
  memmove(v8 + 6, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    v4 = 1;
    v3 = OutputBuffer;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = DeviceObject;
    v11 = IoBuildDeviceIoControlRequest(0x6D0008u, DeviceObject, v8, v6, OutputBuffer, 0x20u, 0, &Event, &IoStatusBlock);
    if ( v11 )
    {
      DeviceObjectPointer = IofCallDriver(v10, v11);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( (int)(DeviceObjectPointer + 0x80000000) >= 0 && DeviceObjectPointer != -2147483643 )
        goto LABEL_20;
      OutputBufferLength = OutputBuffer[0] + 32;
      if ( (unsigned int)(OutputBuffer[0] + 32) > 0xFFFF )
      {
        DeviceObjectPointer = -1073741306;
        goto LABEL_20;
      }
      v3 = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x20473244u);
      if ( v3 )
      {
        v19 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v13 = IoBuildDeviceIoControlRequest(0x6D0008u, v10, v8, v6, v3, OutputBufferLength, 0, &Event, &IoStatusBlock);
        v14 = 0LL;
        if ( v13 )
        {
          DeviceObjectPointer = IofCallDriver(v10, v13);
          if ( DeviceObjectPointer == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            DeviceObjectPointer = IoStatusBlock.Status;
          }
          if ( DeviceObjectPointer >= 0 )
          {
            DeviceObjectPointer = -1073741275;
            if ( v3[1] )
            {
              while ( 1 )
              {
                v15 = (const wchar_t *)((char *)v3 + (unsigned int)v3[6 * v14 + 2]);
                if ( !wcsnicmp(L"\\??\\Volume", v15, 0xAuLL) )
                  break;
                v14 = (unsigned int)(v14 + 1);
                if ( (unsigned int)v14 >= v3[1] )
                  goto LABEL_19;
              }
              v16 = v3[6 * v14 + 3];
              *a2 = v16;
              v16 += 2;
              a2[1] = v16;
              v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x20473244u);
              DeviceObjectPointer = 0;
              *((_QWORD *)a2 + 1) = v17;
              if ( v17 )
              {
                memmove(v17, v15, *a2);
                *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
              }
              else
              {
                *(_DWORD *)a2 = 0;
                DeviceObjectPointer = -1073741670;
              }
LABEL_19:
              v4 = 1;
            }
          }
          goto LABEL_20;
        }
      }
    }
    DeviceObjectPointer = -1073741670;
  }
LABEL_20:
  ExFreePoolWithTag(v8, 0);
  if ( v19 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ObfDereferenceObject(FileObject);
  return (unsigned int)DeviceObjectPointer;
}
