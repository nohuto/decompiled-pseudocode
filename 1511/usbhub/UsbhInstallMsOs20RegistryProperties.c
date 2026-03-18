/*
 * XREFs of UsbhInstallMsOs20RegistryProperties @ 0x1C0040318
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C000BA10 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     UsbhAcquireFdoPnpLock @ 0x1C00091F4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003FD6C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x1C00405A8 (UsbhParseAndInstallRegistryValueDescriptors.c)
 */

LONG __fastcall UsbhInstallMsOs20RegistryProperties(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  LONG result; // eax
  char v8; // bl
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  v6 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
  if ( UsbhExtPropDescSemaphorePresent(a2) || IoOpenDeviceRegistryKey(a2, 1u, 0x1F0000u, &DeviceRegKey) < 0 )
    return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  v8 = UsbhParseAndInstallRegistryValueDescriptors(DeviceRegKey);
  ZwClose(DeviceRegKey);
  result = UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  if ( v8 == 1 )
    v6[353] |= 0x800u;
  return result;
}
