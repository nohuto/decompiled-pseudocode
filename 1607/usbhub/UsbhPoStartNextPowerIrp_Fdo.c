/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001F30
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C00014D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0001710 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00018B0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0001A60 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x1C0001BB0 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0001C98 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0001D90 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C0001E24 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0001E98 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoPower_SetPower @ 0x1C0001FE0 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C000232C (UsbhFdoDevicePowerState.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0002700 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
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
