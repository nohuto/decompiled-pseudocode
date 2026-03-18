/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C000D190
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0004A80 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000A9A0 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPower_WaitWake @ 0x1C001ED50 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EB24 (UsbhFdoResetPdoPort.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055770 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055AB8 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000D124 (UsbhEtwGetDeviceInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r10
  int ActivityIdIrp; // eax
  const GUID *v10; // rdx
  _BYTE v11[16]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v12[48]; // [rsp+78h] [rbp+Fh] BYREF

  if ( dword_1C0067650 )
  {
    v6 = *(_QWORD *)(a1 + 1176);
    if ( !v6 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a1, a4);
    v7 = *(_DWORD **)(v6 + 64);
    if ( !v7 )
      UsbhTrapFatal_Dbg(v6, 0LL, a1, a4);
    if ( *v7 != 541218120 )
      UsbhTrapFatal_Dbg(v6, *(_QWORD *)(v6 + 64), a1, a4);
    UsbhEtwGetDeviceInfo(a1, (__int64)v12);
    if ( v8 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(v8, v11);
    else
      ActivityIdIrp = -1073741823;
    v10 = (const GUID *)v11;
    if ( ActivityIdIrp < 0 )
      v10 = 0LL;
    UsbhEtwWrite(a3, v10);
  }
}
