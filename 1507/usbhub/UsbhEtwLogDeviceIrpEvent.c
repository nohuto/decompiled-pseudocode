/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C0019B00
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0007A40 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0020B20 (UsbhCompletePdoWakeIrp.c)
 *     UsbhFdoResetPdoPort @ 0x1C003E8F4 (UsbhFdoResetPdoPort.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0046260 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055600 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055948 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001B81C (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
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

  if ( dword_1C0066650 )
  {
    v6 = *(_QWORD *)(a1 + 1176);
    if ( !v6 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a1, a4);
    v7 = *(_DWORD **)(v6 + 64);
    if ( !v7 )
      UsbhTrapFatal_Dbg(v6, 0LL, a1, a4);
    if ( *v7 != 541218120 )
      UsbhTrapFatal_Dbg(v6, *(_QWORD *)(v6 + 64), a1, a4);
    UsbhEtwGetDeviceInfo(a1, v12);
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
