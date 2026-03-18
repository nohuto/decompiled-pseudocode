/*
 * XREFs of UsbhHubSSH_PnpStart @ 0x1C0009C70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshBusBusy @ 0x1C0009DA0 (UsbhSshBusBusy.c)
 *     UsbhSshEnableDisable @ 0x1C0009F68 (UsbhSshEnableDisable.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhHubSSH_PnpStart(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v8; // [rsp+44h] [rbp-34h] BYREF
  int v9; // [rsp+48h] [rbp-30h] BYREF

  Log(a1, 0x10000, 1936937844, 0, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  v4 = FdoExt(*(_QWORD *)(a2 + 8));
  *(_BYTE *)(v4 + 3409) = 1;
  if ( *(_DWORD *)(v4 + 3280) == 5 )
    UsbhSshEnableDisable(a1);
  v8 = 0;
  v9 = 0;
  v5 = FdoExt(a1);
  if ( *(_QWORD *)(v5 + 4312) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, unsigned int *))(v5 + 4312))(
           *(_QWORD *)(v5 + 4232),
           &v9,
           10LL,
           &v8);
    if ( v6 >= 0 )
    {
      if ( v8 < 0xA )
        v6 = -1073741811;
      if ( v6 >= 0 )
        UsbhSshEnableDisable(a1);
    }
  }
  UsbhSshBusBusy(a1, a2);
  *(_BYTE *)(v4 + 3408) = 1;
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), v4 + 3200, 2000, 0, a2, 2001228627);
  return 0LL;
}
