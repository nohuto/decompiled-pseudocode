/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPower_WaitWake @ 0x1C00073F0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0021680 (UsbhCompletePdoWakeIrp.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0046610 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055DA0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00560E8 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  const GUID *v8; // rdx
  _BYTE v9[16]; // [rsp+98h] [rbp-20h] BYREF

  if ( dword_1C0067650 )
  {
    v6 = *(_QWORD *)(a1 + 1176);
    if ( !v6 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a2, a4);
    v7 = *(_DWORD **)(v6 + 64);
    if ( !v7 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1176), 0LL, a2, a4);
    if ( *v7 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1176), v7, a2, a4);
    if ( a2 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(a2, v9) >= 0 )
      v8 = (const GUID *)v9;
    else
      v8 = 0LL;
    UsbhEtwWrite(a3, v8);
  }
}
