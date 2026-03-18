/*
 * XREFs of RIMGetDeviceParent @ 0x1C0007BC8
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C000560C (RIMAllocateHidConfigDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C0008858 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMGetDeviceParent(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // edx
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  char v9; // r15
  int v11; // edx
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PVOID v14[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  ULONG Type; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+98h] [rbp+38h]

  v16 = HIDWORD(a1);
  v3 = 0;
  Object = 0LL;
  v14[0] = 0LL;
  Handle = 0LL;
  Pdo = 0LL;
  RequiredSize = 0;
  v5 = RIMGetDeviceObjectPointer((int)a2 + 208, a2, a3, (unsigned int)&Handle, (__int64)v14, (__int64)&Object);
  if ( v5 < 0 )
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      50,
      (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
      v5);
    return 0LL;
  }
  else
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object) >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      Data = (void *)Win32AllocPool(RequiredSize, 1886417746LL);
      *(_QWORD *)(a2 + 336) = Data;
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
        v9 = DevicePropertyData;
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 336));
          *(_QWORD *)(a2 + 336) = 0LL;
          LOBYTE(v11) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            3,
            51,
            (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
            v9);
        }
        else
        {
          v3 = 1;
          *(_DWORD *)(a2 + 344) = RequiredSize;
        }
      }
    }
    ObfDereferenceObject(Pdo);
    ZwClose(Handle);
    ObfDereferenceObject(v14[0]);
    ObfDereferenceObject(Object);
    return v3;
  }
}
