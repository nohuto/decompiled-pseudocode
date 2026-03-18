/*
 * XREFs of Usbh_HubRootHubInitNotification @ 0x1C0021FC8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhHubStart @ 0x1C0021B28 (UsbhHubStart.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004AB20 (UsbHubhInitTimeoutTimer.c)
 *     UsbhAsyncStop @ 0x1C004AC0C (UsbhAsyncStop.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubRootHubInitNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax

  v6 = FdoExt(a1, a2, a3, a4);
  if ( *((_QWORD *)v6 + 545) )
    return (*((__int64 (__fastcall **)(_QWORD, __int64, __int64))v6 + 545))(*((_QWORD *)v6 + 529), a2, a3);
  else
    return 3221225474LL;
}
