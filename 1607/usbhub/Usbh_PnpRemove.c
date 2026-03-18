/*
 * XREFs of Usbh_PnpRemove @ 0x1C004C400
 * Callers:
 *     Usbh_FDO_WaitPnpStart @ 0x1C000BBF0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C000BE30 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0025940 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004C070 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004C110 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004C2A0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     GET_FDO_PNPSTATE @ 0x1C0002304 (GET_FDO_PNPSTATE.c)
 *     UsbhModuleDispatch @ 0x1C0004C80 (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1C000B850 (UsbhSetFdoPnpState.c)
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhReferenceListClose @ 0x1C004ACB4 (UsbhReferenceListClose.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v4, v5);
  UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 12LL, v6);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0, v7, *(_LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
