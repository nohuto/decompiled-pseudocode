/*
 * XREFs of UsbhPdoSystemPowerState @ 0x1C00043FC
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C001B340 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0025310 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D488 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhPdoSystemPowerState(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int LowPart; // ebp
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  __int64 v12; // rax

  v6 = PdoExt(a2);
  v7 = PdoExt(a2) + 944;
  Log(a1, 16, 1885622387, a2, (__int64)a3);
  LowPart = a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1937339216LL);
  v10 = *(_DWORD *)(PdoExt(a2) + 1128);
  if ( LowPart == 1 )
    UsbhSetPdoPowerState(v7, a2, v9, v10, 10);
  else
    UsbhSetPdoPowerState(v7, a2, v9, v10, 11);
  *(_DWORD *)(v6 + 792) = LowPart;
  UsbhReleaseFdoPwrLock(a1, v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      1,
      21,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *(_WORD *)(v6 + 1420),
      LowPart);
  v12 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v12 + 1176), a2, a3, 1757LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
