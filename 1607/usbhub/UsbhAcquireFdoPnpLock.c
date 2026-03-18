/*
 * XREFs of UsbhAcquireFdoPnpLock @ 0x1C001EA4C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x1C001E844 (UsbhEtwRundown.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C004064C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0040714 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhAcquireApiLock @ 0x1C00477D4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047FB4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhAsyncStop @ 0x1C004B25C (UsbhAsyncStop.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireFdoPnpLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebp
  int v6; // esi
  _DWORD *v8; // rdi
  __int64 v9; // rcx

  v5 = a4;
  v6 = a3;
  v8 = FdoExt(a1, a2, a3, a4);
  KeWaitForSingleObject(v8 + 1240, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 56) = v8[340];
  *(_DWORD *)(a2 + 60) = v6;
  *(_DWORD *)(a2 + 48) = 827278406;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  *((_QWORD *)v8 + 166) = a2;
  if ( a5 )
  {
    v9 = ((unsigned __int8)v8[6] + 1) & 7;
    v8[6] = v9;
    v9 *= 32LL;
    *(_DWORD *)((char *)v8 + v9 + 28) = v6;
    *(_DWORD *)((char *)v8 + v9 + 32) = v8[340];
    *(_DWORD *)((char *)v8 + v9 + 36) = v8[340];
    *(_DWORD *)((char *)v8 + v9 + 40) = v5;
  }
  return (unsigned int)v8[340];
}
