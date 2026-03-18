/*
 * XREFs of UsbhPoStartNextPowerIrp_Pdo @ 0x1C0025310
 * Callers:
 *     UsbhPdoSystemPowerState @ 0x1C00043FC (UsbhPdoSystemPowerState.c)
 *     UsbhPdoPower_QueryPower @ 0x1C0004520 (UsbhPdoPower_QueryPower.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_SetPower @ 0x1C001B340 (UsbhPdoPower_SetPower.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0024F9C (UsbhFdoScheduleDeferredPowerRequest.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Pdo(__int64 a1, __int64 a2, IRP *a3, __int64 a4)
{
  int v5; // ebp
  _DWORD *v7; // rax
  __int64 CurrentStackLocation; // rdi
  _DWORD *v9; // r11
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r11

  v5 = a4;
  v7 = PdoExt(a2, a2, (__int64)a3, a4);
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  v10 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v10 <= 1 )
  {
    Log(a1, 16, 1346653745, *(_QWORD *)&v9[2 * v10 + 200], (__int64)a3);
    Log(a1, 16, 1346653746, *(_QWORD *)(v12 + 8 * v11 + 816), CurrentStackLocation);
    *(_QWORD *)(v14 + 8 * v13 + 800) = 0LL;
    *(_QWORD *)(v14 + 8 * v13 + 816) = 0LL;
    *(_DWORD *)(v14 + 4 * v13 + 832) = v5;
    PoStartNextPowerIrp(a3);
  }
}
