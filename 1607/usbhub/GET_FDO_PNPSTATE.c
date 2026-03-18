/*
 * XREFs of GET_FDO_PNPSTATE @ 0x1C0002304
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004C070 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_PnpRemove @ 0x1C004C400 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_PNPSTATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return *(unsigned int *)(FdoExt(*(_QWORD *)(a1 + 8)) + 1360);
}
