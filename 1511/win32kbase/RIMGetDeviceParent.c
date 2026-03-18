/*
 * XREFs of RIMGetDeviceParent @ 0x1C0008CB4
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C0009978 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000F23C (RIMGetDeviceObjectPointer.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMGetDeviceParent(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // edx
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  char v8; // r15
  int v10; // edx
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PVOID v13[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+84h] [rbp+24h]
  ULONG Type; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+98h] [rbp+38h]

  v15 = HIDWORD(a1);
  v2 = 0;
  Object = 0LL;
  v13[0] = 0LL;
  Handle = 0LL;
  Pdo = 0LL;
  RequiredSize = 0;
  v4 = RIMGetDeviceObjectPointer(a2 + 200, a2, 3LL, &Handle, v13, &Object);
  if ( v4 < 0 )
  {
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      3,
      49,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
      v4);
    return 0LL;
  }
  else
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object) >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      Data = (void *)Win32AllocPool(RequiredSize, 1886417746LL);
      *(_QWORD *)(a2 + 320) = Data;
      if ( Data )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               Data,
                               &RequiredSize,
                               &Type);
        v8 = DevicePropertyData;
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 320));
          *(_QWORD *)(a2 + 320) = 0LL;
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            3,
            50,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
            v8);
        }
        else
        {
          v2 = 1;
          *(_DWORD *)(a2 + 328) = RequiredSize;
        }
      }
    }
    ObfDereferenceObject(Pdo);
    ZwClose(Handle);
    ObfDereferenceObject(v13[0]);
    ObfDereferenceObject(Object);
    return v2;
  }
}
