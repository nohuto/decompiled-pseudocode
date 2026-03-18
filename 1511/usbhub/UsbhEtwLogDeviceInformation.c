/*
 * XREFs of UsbhEtwLogDeviceInformation @ 0x1C000B5F4
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000D124 (UsbhEtwGetDeviceInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceInformation(__int64 a1, const EVENT_DESCRIPTOR *a2, char a3)
{
  _BYTE v6[48]; // [rsp+78h] [rbp+Fh] BYREF

  if ( dword_1C0067650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1176));
    UsbhEtwGetDeviceInfo(a1, v6);
    if ( a3 )
      UsbhEtwWrite(a2, 0LL);
    else
      UsbhEtwWrite(a2, 0LL);
  }
}
