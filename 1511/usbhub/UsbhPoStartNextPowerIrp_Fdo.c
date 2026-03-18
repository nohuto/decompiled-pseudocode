/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C00012D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001510 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00016B0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x1C0001860 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0001948 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0001A40 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0001B90 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C0001C24 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0001C98 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoPower_SetPower @ 0x1C0001DE0 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C000212C (UsbhFdoDevicePowerState.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0002500 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  int v5; // edi
  __int64 v6; // rax
  __int64 CurrentStackLocation; // rsi
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r11

  v5 = a1;
  v6 = FdoExt(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  v9 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v9 <= 1 )
  {
    Log(v5, 16, 1347374641, *(_QWORD *)(v8 + 8 * v9 + 840), (__int64)a2);
    Log(v5, 16, 1347374642, *(_QWORD *)(v11 + 8 * v10 + 856), CurrentStackLocation);
    *(_QWORD *)(v13 + 8 * v12 + 840) = 0LL;
    *(_QWORD *)(v13 + 8 * v12 + 856) = 0LL;
    *(_DWORD *)(v13 + 4 * v12 + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
