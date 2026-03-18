/*
 * XREFs of UsbhSshBusBusy @ 0x1C0009DA0
 * Callers:
 *     UsbhHubSSH_PnpStart @ 0x1C0009C70 (UsbhHubSSH_PnpStart.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusRun @ 0x1C0021B4C (Usbh_BS_BusRun.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0056290 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 */

__int64 __fastcall UsbhSshBusBusy(__int64 a1, int a2)
{
  __int64 v4; // rdi
  signed __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rdx
  __int64 v11; // r10

  v4 = FdoExt(a1);
  v5 = UsbhIncHubBusy(a1, a2, a1, 1430418291, 1);
  result = Log(a1, 2048, 1114863915, _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 3288), v5, 0LL), v5);
  if ( v7 )
  {
    Log(a1, v9, 1114845741, v7, v8);
    return UsbhDecHubBusy(a1, v10, v11);
  }
  return result;
}
