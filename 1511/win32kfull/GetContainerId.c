/*
 * XREFs of GetContainerId @ 0x1C01CC714
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0111110 (IsLegacyTouchPadDevice.c)
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01CBFE0 (FindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C0095CBC (GetPointerDevicePDO.c)
 */

__int64 __fastcall GetContainerId(struct _DEVICE_OBJECT *a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  int PointerDevicePDO; // edi
  struct _DEVICE_OBJECT *v7; // rbp
  PVOID Data; // [rsp+28h] [rbp-30h]
  ULONG Type; // [rsp+40h] [rbp-18h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-14h] BYREF
  PDEVICE_OBJECT Pdo[2]; // [rsp+48h] [rbp-10h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  PointerDevicePDO = GetPointerDevicePDO(a1, Pdo);
  if ( PointerDevicePDO >= 0 )
  {
    v13 = 0;
    Type = 0;
    Data = a2;
    v7 = Pdo[0];
    RequiredSize = 0;
    PointerDevicePDO = IoGetDevicePropertyData(
                         Pdo[0],
                         &DEVPKEY_Device_ContainerId,
                         0,
                         0,
                         0x10u,
                         Data,
                         &RequiredSize,
                         &Type);
    if ( PointerDevicePDO >= 0 )
    {
      if ( a3 )
      {
        PointerDevicePDO = IoGetDevicePropertyData(
                             v7,
                             &DEVPKEY_Device_InLocalMachineContainer,
                             0,
                             0,
                             1u,
                             &v13,
                             &RequiredSize,
                             &Type);
        if ( PointerDevicePDO >= 0 )
        {
          LOBYTE(v5) = v13 != -1;
          *a3 = v5;
        }
      }
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)PointerDevicePDO;
}
