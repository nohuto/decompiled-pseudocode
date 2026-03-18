/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x1C0021180
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
 *     UsbhPdoSystemPowerState @ 0x1C00042E4 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0004C44 (UsbhPdoSetD0_Finish.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0013B10 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0020930 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0020FC0 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhPdoSetDx @ 0x1C002208C (UsbhPdoSetDx.c)
 *     UsbhFdoResetPdoPort @ 0x1C003E8F4 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B28 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00544B0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
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
