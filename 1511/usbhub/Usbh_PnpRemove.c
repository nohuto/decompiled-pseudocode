/*
 * XREFs of Usbh_PnpRemove @ 0x1C004BD60
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0009B70 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C000A030 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004B9D0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BA70 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     GET_FDO_PNPSTATE @ 0x1C0002104 (GET_FDO_PNPSTATE.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     UsbhSetFdoPnpState @ 0x1C000A3F0 (UsbhSetFdoPnpState.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 *     UsbhModuleDispatch @ 0x1C0025134 (UsbhModuleDispatch.c)
 *     UsbhReferenceListClose @ 0x1C004A8B4 (UsbhReferenceListClose.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(_QWORD *)(a1 + 8), a1, 12LL, v4);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0, v5, *(_LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
