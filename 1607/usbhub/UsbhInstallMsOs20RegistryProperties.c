/*
 * XREFs of UsbhInstallMsOs20RegistryProperties @ 0x1C004064C
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C001BA10 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001EA4C (UsbhAcquireFdoPnpLock.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C004008C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x1C00408E0 (UsbhParseAndInstallRegistryValueDescriptors.c)
 */

LONG __fastcall UsbhInstallMsOs20RegistryProperties(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  LONG result; // eax
  char v10; // bl
  __int64 v11; // r8
  __int64 v12; // r9
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  v6 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11LL, 829387629LL, 1);
  if ( UsbhExtPropDescSemaphorePresent(a2) || IoOpenDeviceRegistryKey(a2, 1u, 0x1F0000u, &DeviceRegKey) < 0 )
    return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v7, v8);
  v10 = UsbhParseAndInstallRegistryValueDescriptors(DeviceRegKey);
  ZwClose(DeviceRegKey);
  result = UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v11, v12);
  if ( v10 == 1 )
    v6[353] |= 0x800u;
  return result;
}
