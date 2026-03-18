/*
 * XREFs of UsbhFdoPower_SetPower @ 0x1C0001DE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C000212C (UsbhFdoDevicePowerState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rbp
  _IO_STACK_LOCATION *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  unsigned int Options; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1349739892, 0, (__int64)a2);
  FdoExt(a1);
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  if ( v6->Parameters.Create.Options <= 1 )
  {
    Log((_DWORD)a1, 16, 1347374643, (_DWORD)v6, (__int64)a2);
    *(_QWORD *)(v7 + 8 * v8 + 840) = a2;
    *(_QWORD *)(v7 + 8 * v8 + 856) = v9;
    *(_DWORD *)(v7 + 4 * v8 + 872) = 1743;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoSystemPowerState(a1, a2);
  if ( Options == 1 )
    return UsbhFdoDevicePowerState(a1, a2);
  UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 1753);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), a2);
}
