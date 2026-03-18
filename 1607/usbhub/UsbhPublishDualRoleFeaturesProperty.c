/*
 * XREFs of UsbhPublishDualRoleFeaturesProperty @ 0x1C00553D4
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001F660 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhPublishDualRoleFeaturesProperty(PDEVICE_OBJECT Pdo, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  NTSTATUS v6; // eax
  int Data; // [rsp+58h] [rbp+10h] BYREF

  v5 = PdoExt((__int64)Pdo, a2, a3, a4);
  Data = v5[754];
  v6 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbDualRoleFeatures, 0, 0, 7u, 4u, &Data);
  if ( v6 < 0 )
    Log(*((_QWORD *)v5 + 147), 256, 1685221425, v6, (__int64)Pdo);
}
