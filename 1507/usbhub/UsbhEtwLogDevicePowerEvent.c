/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C001BF04
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0004B60 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001B81C (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

void UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, __int64 a4, ...)
{
  _DWORD *v7; // rax
  int ActivityIdIrp; // eax
  const GUID *v9; // rdx
  int v10; // [rsp+60h] [rbp-31h] BYREF
  int v11; // [rsp+68h] [rbp-29h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp-25h]
  __int16 v13; // [rsp+6Eh] [rbp-23h]
  __int16 v14; // [rsp+70h] [rbp-21h]
  __int16 v15; // [rsp+72h] [rbp-1Fh]
  _BYTE v16[16]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v17[48]; // [rsp+88h] [rbp-9h] BYREF
  va_list va; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v10 = a4;
  if ( dword_1C0066650 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1176), a2, (__int64)a3, a4);
    v11 = v7[1298];
    v12 = *((_WORD *)v7 + 2598);
    v13 = v7[1300];
    v14 = *((_WORD *)v7 + 2614);
    v15 = *((_WORD *)v7 + 2615);
    UsbhEtwGetDeviceInfo(a1, (__int64)v17);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, v16);
    else
      ActivityIdIrp = -1073741823;
    v9 = (const GUID *)v16;
    if ( ActivityIdIrp < 0 )
      v9 = 0LL;
    UsbhEtwWrite(a3, v9, (unsigned __int64)&v11, 12LL, v17, 44LL, &v10, 4LL, va, 4LL, 0LL);
  }
}
