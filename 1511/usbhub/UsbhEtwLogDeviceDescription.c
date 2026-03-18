/*
 * XREFs of UsbhEtwLogDeviceDescription @ 0x1C000B4F0
 * Callers:
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000D124 (UsbhEtwGetDeviceInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceDescription(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  _BYTE v4[48]; // [rsp+60h] [rbp-48h] BYREF

  if ( dword_1C0067650 && *(_QWORD *)(a1 + 2232) )
  {
    if ( *(_DWORD *)(a1 + 2240) )
    {
      FdoExt(*(_QWORD *)(a1 + 1176));
      UsbhEtwGetDeviceInfo(a1, v4);
      UsbhEtwWrite(a2, 0LL);
    }
  }
}
