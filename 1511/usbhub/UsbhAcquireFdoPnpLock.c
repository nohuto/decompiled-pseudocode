/*
 * XREFs of UsbhAcquireFdoPnpLock @ 0x1C00091F4
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0040318 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00403E0 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhAcquireApiLock @ 0x1C00473E4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireFdoPnpLock(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx

  v8 = FdoExt(a1);
  KeWaitForSingleObject((PVOID)(v8 + 4960), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(v8 + 1360);
  *(_DWORD *)(a2 + 60) = a3;
  *(_DWORD *)(a2 + 48) = 827278406;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v8 + 1328) = a2;
  if ( a5 )
  {
    v9 = ((unsigned __int8)*(_DWORD *)(v8 + 24) + 1) & 7;
    *(_DWORD *)(v8 + 24) = v9;
    v9 *= 32LL;
    *(_DWORD *)(v9 + v8 + 28) = a3;
    *(_DWORD *)(v9 + v8 + 32) = *(_DWORD *)(v8 + 1360);
    *(_DWORD *)(v9 + v8 + 36) = *(_DWORD *)(v8 + 1360);
    *(_DWORD *)(v9 + v8 + 40) = a4;
  }
  return *(unsigned int *)(v8 + 1360);
}
