/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMSendLatencyMgtRequest @ 0x1C0086B00 (RIMSendLatencyMgtRequest.c)
 *     RIMDoOnPowerNotification @ 0x1C0086D18 (RIMDoOnPowerNotification.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0008A6C (rimHidP_GetSpecificButtonCaps.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00D2FA8 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct _UNICODE_STRING *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edx
  int Status; // ebx
  struct _HIDP_PREPARSED_DATA *v10; // r12
  size_t v11; // rsi
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v13; // r15
  UCHAR *v15; // rax
  UCHAR *v16; // rdi
  PIRP v17; // rax
  struct _DEVICE_OBJECT *v18; // rcx
  unsigned __int16 v19[2]; // [rsp+50h] [rbp-89h] BYREF
  __int16 v20; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  struct _HIDP_BUTTON_CAPS v26; // [rsp+A0h] [rbp-39h] BYREF

  v19[0] = 1;
  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    57,
    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
  Status = RIMGetDeviceObjectPointer(a1 + 13, v6, v7, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v10 = *(struct _HIDP_PREPARSED_DATA **)(v4 + 16);
    v11 = *(unsigned __int16 *)(v4 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, 0x60u, &v26, v19, v10);
    v13 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v15 = (UCHAR *)Win32AllocPoolNonPaged(v11, 1768321874LL);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, v11);
        *v16 = v26.ReportID;
        if ( a3 )
        {
          v20 = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v20, (__int64)&Object, (__int64)v10, (__int64)v16, v11);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v17 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v16, v11, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( v17 )
          {
            v18 = DeviceObject;
            v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
            Status = IofCallDriver(v18, v17);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              3,
              3,
              58,
              (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
            Status = -1073741668;
          }
        }
        Win32FreePool(v16);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v13);
    ZwClose(Handle);
  }
  LOBYTE(v8) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    4,
    59,
    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
    Status);
  return (unsigned int)Status;
}
