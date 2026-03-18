/*
 * XREFs of ConfigurePointerDevice @ 0x1C01D48A0
 * Callers:
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3DC4 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 *     DeliverConfigRequest @ 0x1C01D49C4 (DeliverConfigRequest.c)
 *     FindConfigDeviceForInput @ 0x1C01D4DF4 (FindConfigDeviceForInput.c)
 *     SendPTPLatencyMgtDeviceRequest @ 0x1C01D56BC (SendPTPLatencyMgtDeviceRequest.c)
 */

__int64 __fastcall ConfigurePointerDevice(struct DEVICEINFO *a1, struct tagHIDDESC *a2)
{
  unsigned int v4; // ebx
  _WORD *v5; // rbp
  unsigned int v6; // esi
  __int64 result; // rax
  __int16 v8; // ax
  PVOID v9; // r8
  PDEVICE_OBJECT v10; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PDEVICE_OBJECT v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  Object = 0LL;
  if ( (unsigned int)FindConfigDeviceForInput(a2, a1) )
  {
    v5 = Object;
    v6 = 2;
    result = GetDeviceObjectPointer((struct _UNICODE_STRING *)((char *)Object + 200), 0, 2u, &Handle, &Object, &v13);
    if ( (int)result >= 0 )
    {
      if ( *((_WORD *)a2 + 20) == 4 )
      {
        v8 = 128;
      }
      else
      {
        v6 = 3;
        v8 = 256;
      }
      v9 = Object;
      v10 = v13;
      v5[32] = v8;
      if ( (int)DeliverConfigRequest(*((_QWORD *)v5 + 50), v10, v9, v6) >= 0 && v6 == 3 )
      {
        if ( (*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0 )
          v4 = 1;
        SendPTPLatencyMgtDeviceRequest(a1, a2, v4);
      }
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      result = *((_QWORD *)a1 + 52);
      *(_DWORD *)(result + 252) &= ~0x4000u;
    }
  }
  else
  {
    result = *((_QWORD *)a1 + 52);
    *(_DWORD *)(result + 252) |= 0x4000u;
  }
  return result;
}
