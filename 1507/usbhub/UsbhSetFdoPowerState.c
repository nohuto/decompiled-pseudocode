/*
 * XREFs of UsbhSetFdoPowerState @ 0x1C002120C
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C00012D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001510 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00016B0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0001A40 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C000212C (UsbhFdoDevicePowerState.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0002690 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C00027A8 (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0020FC0 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B28 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhSetFdoPowerState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5, a3, a4);
  v6 = ((unsigned __int8)v5[207] + 1) & 7;
  v5[207] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)v5 + v6 + 284) = a4;
  result = (unsigned int)v5[1043];
  *(_DWORD *)((char *)v5 + v6 + 288) = result;
  *(_DWORD *)((char *)v5 + v6 + 292) = a3;
  *(_DWORD *)((char *)v5 + v6 + 296) = a2;
  v5[1043] = a3;
  return result;
}
