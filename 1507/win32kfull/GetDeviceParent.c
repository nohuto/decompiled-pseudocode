/*
 * XREFs of GetDeviceParent @ 0x1C01D35E4
 * Callers:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C003A0B8 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 *     ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D21F8 (-AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTIO.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C003A1C4 (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 */

__int64 __fastcall GetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rsi
  int PointerDevicePDO; // eax
  PVOID v6; // r12
  HANDLE v7; // r13
  unsigned int v8; // ebx
  struct _DEVICE_OBJECT *v10; // r15
  void *Data; // rax
  PVOID v12; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PDEVICE_OBJECT Pdo[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+A8h] [rbp+48h] BYREF
  ULONG Type; // [rsp+B0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  PointerDevicePDO = 0;
  Object = 0LL;
  v6 = 0LL;
  v12 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = 0;
  Pdo[0] = 0LL;
  RequiredSize = 0;
  if ( *(_QWORD *)(a2 + 328) )
  {
    return 1;
  }
  else
  {
    if ( a1 )
    {
      v10 = a1;
    }
    else
    {
      if ( (int)GetDeviceObjectPointer(
                  (struct _UNICODE_STRING *)(a2 + 208),
                  0,
                  3u,
                  &Handle,
                  &v12,
                  (PDEVICE_OBJECT *)&Object) < 0 )
        return 0LL;
      v4 = (struct _DEVICE_OBJECT *)Object;
      ObfReferenceObject(Object);
      PointerDevicePDO = GetPointerDevicePDO(v4, Pdo);
      v6 = v12;
      v7 = Handle;
      v10 = Pdo[0];
    }
    if ( PointerDevicePDO >= 0
      && IoGetDevicePropertyData(v10, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      Data = (void *)Win32AllocPool(RequiredSize, 1885893461LL);
      *(_QWORD *)(a2 + 328) = Data;
      if ( Data )
      {
        if ( IoGetDevicePropertyData(v10, &DEVPKEY_Device_Parent, 0, 0, RequiredSize, Data, &RequiredSize, &Type) >= 0 )
        {
          v8 = 1;
          *(_DWORD *)(a2 + 336) = RequiredSize;
        }
        else
        {
          Win32FreePool(*(_QWORD *)(a2 + 328));
          *(_QWORD *)(a2 + 328) = 0LL;
        }
      }
    }
    if ( !a1 )
    {
      ObfDereferenceObject(v10);
      ZwClose(v7);
      ObfDereferenceObject(v6);
      ObfDereferenceObject(v4);
    }
  }
  return v8;
}
