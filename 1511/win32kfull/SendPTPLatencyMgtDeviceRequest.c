/*
 * XREFs of SendPTPLatencyMgtDeviceRequest @ 0x1C01D56BC
 * Callers:
 *     RequestModeSwitchOnPowerUp @ 0x1C014F6D8 (RequestModeSwitchOnPowerUp.c)
 *     SendPTPLatencyMgtRequest @ 0x1C014F7C0 (SendPTPLatencyMgtRequest.c)
 *     ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3C48 (-AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTIO.c)
 *     ConfigurePointerDevice @ 0x1C01D48A0 (ConfigurePointerDevice.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall SendPTPLatencyMgtDeviceRequest(__int64 a1, __int64 a2, int a3)
{
  struct _KEVENT *KernelEvent; // rsi
  int DeviceObjectPointer; // ebx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  ULONG ReportLength; // r14d
  NTSTATUS SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v11; // r15
  CHAR *v12; // rax
  CHAR *v13; // rdi
  PIRP v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  USHORT UsageList[2]; // [rsp+50h] [rbp-69h] BYREF
  USHORT ButtonCapsLength; // [rsp+54h] [rbp-65h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-61h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-49h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+80h] [rbp-39h] BYREF

  *(_DWORD *)UsageList = a3;
  ButtonCapsLength = 1;
  KernelEvent = (struct _KEVENT *)CreateKernelEvent(0LL, 0LL);
  if ( !KernelEvent )
    return 3221225628LL;
  DeviceObjectPointer = GetDeviceObjectPointer(
                          (struct _UNICODE_STRING *)(a1 + 200),
                          0,
                          3u,
                          &Handle,
                          (PVOID *)UsageLength,
                          &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
    ReportLength = *(unsigned __int16 *)(a2 + 48);
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                           HidP_Feature,
                           0xDu,
                           0,
                           0x60u,
                           &ButtonCaps,
                           &ButtonCapsLength,
                           PreparsedData);
    v11 = *(struct _FILE_OBJECT **)UsageLength;
    DeviceObjectPointer = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v12 = (CHAR *)Win32AllocPoolNonPaged(ReportLength, 1768321877LL);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, ReportLength);
        *v13 = ButtonCaps.ReportID;
        if ( *(_DWORD *)UsageList )
        {
          UsageList[0] = 96;
          UsageLength[0] = 1;
          DeviceObjectPointer = HidP_SetUsages(
                                  HidP_Feature,
                                  0xDu,
                                  0,
                                  UsageList,
                                  UsageLength,
                                  PreparsedData,
                                  v13,
                                  ReportLength);
        }
        if ( DeviceObjectPointer >= 0 )
        {
          v14 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v13,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  KernelEvent,
                  &IoStatusBlock);
          if ( v14 )
          {
            v15 = DeviceObject;
            v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = v11;
            DeviceObjectPointer = IofCallDriver(v15, v14);
            if ( DeviceObjectPointer == 259 )
            {
              KeWaitForSingleObject(KernelEvent, Executive, 0, 0, 0LL);
              DeviceObjectPointer = IoStatusBlock.Status;
            }
          }
          else
          {
            DeviceObjectPointer = -1073741668;
          }
        }
        Win32FreePool(v13);
      }
      else
      {
        DeviceObjectPointer = -1073741670;
      }
    }
    ObfDereferenceObject(v11);
    ZwClose(Handle);
  }
  Win32FreePool(KernelEvent);
  return (unsigned int)DeviceObjectPointer;
}
