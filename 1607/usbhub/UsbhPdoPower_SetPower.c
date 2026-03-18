/*
 * XREFs of UsbhPdoPower_SetPower @ 0x1C001B340
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoSystemPowerState @ 0x1C00043FC (UsbhPdoSystemPowerState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0025310 (UsbhPoStartNextPowerIrp_Pdo.c)
 */

__int64 __fastcall UsbhPdoPower_SetPower(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _DWORD *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int Options; // eax
  _DWORD *v22; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = PdoExt((__int64)a1, (__int64)a2, a3, a4);
  v8 = *((_QWORD *)v7 + 147);
  PdoExt((__int64)a1, v9, v10, v11);
  v14 = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)(v14 + 16) <= 1u )
  {
    Log(v8, 16, 1346653747, v14, (__int64)a2);
    *(_QWORD *)(v15 + 8 * v16 + 800) = a2;
    *(_QWORD *)(v15 + 8 * v16 + 816) = v14;
    *(_DWORD *)(v15 + 4 * v16 + 832) = 752;
  }
  FdoExt(*((_QWORD *)v7 + 147), v12, v13, v14);
  Log(*((_QWORD *)v7 + 147), 16, 1885623120, (__int64)a1, (__int64)a2);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhPdoSystemPowerState(*((_QWORD *)v7 + 147), (__int64)a1, a2);
  if ( Options == 1 )
    return UsbhPdoDevicePowerState(*((_QWORD *)v7 + 147), a1, a2, v19);
  v22 = PdoExt((__int64)a1, v17, v18, v19);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v22 + 147), a1, a2, 767LL);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
