/*
 * XREFs of RIMGetDeviceParent @ 0x1C00751F0
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C001A5C8 (RIMGetPointerDevicePDO.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 */

__int64 __fastcall RIMGetDeviceParent(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  void *v5; // rax
  NTSTATUS DevicePropertyData; // r15d
  PVOID Data; // [rsp+28h] [rbp-38h]
  PVOID Dataa; // [rsp+28h] [rbp-38h]
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  PVOID v12[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+84h] [rbp+24h]
  ULONG Type; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+98h] [rbp+38h] BYREF

  v14 = HIDWORD(a1);
  v2 = 0;
  Object = 0LL;
  v12[0] = 0LL;
  Handle = 0LL;
  Pdo = 0LL;
  RequiredSize = 0;
  v4 = RIMGetDeviceObjectPointer(a2 + 208, a2, 3LL, &Handle, v12, &Object);
  if ( v4 < 0 )
  {
    LODWORD(Data) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x31u,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
      Data);
    return 0LL;
  }
  else
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object, &Pdo) >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      v5 = (void *)Win32AllocPool();
      *(_QWORD *)(a2 + 328) = v5;
      if ( v5 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               v5,
                               &RequiredSize,
                               &Type);
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool();
          *(_QWORD *)(a2 + 328) = 0LL;
          LODWORD(Dataa) = DevicePropertyData;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x32u,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
            Dataa);
        }
        else
        {
          v2 = 1;
          *(_DWORD *)(a2 + 336) = RequiredSize;
        }
      }
    }
    ObfDereferenceObject(Pdo);
    ZwClose(Handle);
    ObfDereferenceObject(v12[0]);
    ObfDereferenceObject(Object);
    return v2;
  }
}
