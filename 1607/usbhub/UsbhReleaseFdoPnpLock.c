/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C001E9FC
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x1C001E844 (UsbhEtwRundown.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0025940 (Usbh_FDO_WaitPnpStop_CB.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C004064C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0040714 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047FB4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C004AAC0 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C004B25C (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004C070 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004C110 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004C2A0 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004C400 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KSEMAPHORE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = (struct _KSEMAPHORE *)FdoExt(a1, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v6, v7, v8);
  *(_DWORD *)(a2 + 48) = 1734964085;
  v5[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v5 + 155, 16, 1, 0);
}
