/*
 * XREFs of UsbhEtwLogHubPowerEvent @ 0x1C0002320
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C00012D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001510 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00016B0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0001A40 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C000212C (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubPowerEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  if ( dword_1C0066650 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a3, a2);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(a1, 0LL, a3, a2);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v6, a3, a2);
    if ( a3 )
    {
      v8 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v8) < 0 )
    {
      v7 = 0LL;
LABEL_10:
      UsbhEtwWrite(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_10;
  }
}
