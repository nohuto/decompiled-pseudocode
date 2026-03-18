/*
 * XREFs of UsbhFdoQueryDevicePowerState @ 0x1C0001C24
 * Callers:
 *     UsbhFdoPower_QueryPower @ 0x1C0001860 (UsbhFdoPower_QueryPower.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoQueryDevicePowerState(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi

  v4 = FdoExt(a1);
  Log(a1, 16, 1365536883, 0, (__int64)a2);
  UsbhPoStartNextPowerIrp_Fdo(a1, a2, 1386LL);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
