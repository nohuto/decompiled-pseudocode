/*
 * XREFs of RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D0E34
 * Callers:
 *     RIMDoOnPowerNotification @ 0x1C006E438 (RIMDoOnPowerNotification.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C00817D0 (RIMConfigurePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00C373C (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendPTPLatencyMgtDeviceRequest(__int64 a1, struct _UNICODE_STRING *a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  int Status; // ebx
  struct _HIDP_PREPARSED_DATA *v9; // r12
  unsigned int v10; // esi
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v12; // r15
  char *v13; // rax
  char *v14; // rdi
  PIRP v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-B1h]
  unsigned __int16 v19[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v20; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  struct _HIDP_BUTTON_CAPS v26; // [rsp+A0h] [rbp-39h] BYREF

  v20 = 1;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xBu,
    (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids);
  Status = RIMGetDeviceObjectPointer(a2 + 13, v7, 3u, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v9 = *(struct _HIDP_PREPARSED_DATA **)(a3 + 16);
    v10 = *(unsigned __int16 *)(a3 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, 0x60u, &v26, &v20, v9);
    v12 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v13 = (char *)Win32AllocPoolNonPaged();
      v14 = v13;
      if ( v13 )
      {
        memset(v13, 0, v10);
        *v14 = v26.ReportID;
        if ( a4 )
        {
          v19[0] = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(HidP_Feature, 0xDu, 0, v19, (unsigned int *)&Object, v9, v14, v10);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v15 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v14, v10, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( v15 )
          {
            v16 = DeviceObject;
            v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
            Status = IofCallDriver(v16, v15);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0xCu,
              (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids);
            Status = -1073741668;
          }
        }
        Win32FreePool();
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v12);
    ZwClose(Handle);
  }
  OutputBufferLength[0] = Status;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xDu,
    (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids,
    *(_QWORD *)OutputBufferLength);
  return (unsigned int)Status;
}
