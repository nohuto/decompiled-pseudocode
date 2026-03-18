/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x1C0021CE0
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00010E4 (UsbhPdoSetD0_Finish.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C00014D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001710 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00018B0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0001A60 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C000232C (UsbhFdoDevicePowerState.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0002890 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C00029A8 (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoSystemPowerState @ 0x1C00043FC (UsbhPdoSystemPowerState.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0021490 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0021770 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhPdoSetDx @ 0x1C0022EC0 (UsbhPdoSetDx.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045ED8 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048440 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r8
  KIRQL v7; // dl

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v5 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_DWORD **)(v5 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(v5, 0LL, 0LL, a4);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(v5, *(_QWORD *)(v5 + 64), v6, a4);
  *(_DWORD *)(a2 + 32) = 1734964085;
  v7 = *(_BYTE *)(v4 + 5064);
  *(_QWORD *)(v4 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 5056), v7);
}
