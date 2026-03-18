/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C000BC9C
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0008908 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C00521E0 (UsbhApplyDeviceFix.c)
 */

__int64 __fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C0067634 )
    result = UsbhApplyDeviceFix(a1, a2, 3LL);
  if ( dword_1C0067638 )
  {
    FdoExt(a1);
    result = PdoExt(a2);
    *(_DWORD *)(result + 1424) |= 0x2000u;
  }
  return result;
}
