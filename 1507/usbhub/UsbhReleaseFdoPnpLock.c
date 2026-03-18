/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C001DFAC
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x1C001DE28 (UsbhEtwRundown.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0021690 (Usbh_FDO_WaitPnpStop_CB.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C00400FC (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00401C4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047B44 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C004A570 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C004AC0C (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004BA20 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BAC0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC50 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
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
