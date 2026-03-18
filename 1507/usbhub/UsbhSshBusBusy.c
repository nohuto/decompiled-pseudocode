/*
 * XREFs of UsbhSshBusBusy @ 0x1C000B654
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C0018D34 (Usbh_BS_BusRun.c)
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001D890 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0056120 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhSshBusBusy(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // rdi
  signed __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  __int64 v8; // rdx
  __int64 v9; // r10

  v2 = FdoExt(a1);
  v3 = UsbhIncHubBusy(a1, 1);
  result = Log(
             (_DWORD)a1,
             2048,
             1114863915,
             _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 3288), v3, 0LL),
             v3);
  if ( v5 )
  {
    Log((_DWORD)a1, v7, 1114845741, v5, v6);
    return UsbhDecHubBusy(a1, v8, v9);
  }
  return result;
}
