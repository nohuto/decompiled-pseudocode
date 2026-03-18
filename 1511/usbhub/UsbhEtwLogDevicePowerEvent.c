/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C000B6FC
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0004B10 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000D124 (UsbhEtwGetDeviceInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  int ActivityIdIrp; // eax
  const GUID *v7; // rdx
  _BYTE v8[16]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v9[48]; // [rsp+88h] [rbp-9h] BYREF

  if ( dword_1C0067650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1176));
    UsbhEtwGetDeviceInfo(a1, v9);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, v8);
    else
      ActivityIdIrp = -1073741823;
    v7 = (const GUID *)v8;
    if ( ActivityIdIrp < 0 )
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
