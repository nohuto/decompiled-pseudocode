/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C000942C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0040318 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00403E0 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C004A6C0 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004B9D0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BA70 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
