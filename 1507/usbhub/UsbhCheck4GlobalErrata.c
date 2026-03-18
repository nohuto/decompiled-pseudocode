/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C0005720
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0005674 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C0052280 (UsbhApplyDeviceFix.c)
 */

__int64 __fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C0066634 )
    result = UsbhApplyDeviceFix(a1, a2, 3LL);
  if ( dword_1C0066638 )
  {
    FdoExt(a1);
    result = PdoExt(a2);
    *(_DWORD *)(result + 1424) |= 0x2000u;
  }
  return result;
}
