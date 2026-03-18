/*
 * XREFs of ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x1C002AD60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalWaitWakeLoop @ 0x1C000A980 (ACPIInternalWaitWakeLoop.c)
 */

void __fastcall ACPIInternalDeviceClockIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  int v4; // eax
  POWER_STATE v5; // r8d
  struct _DEVICE_OBJECT *v6; // rcx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+30h] [rbp-18h] BYREF

  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 320) = 2;
    if ( (*(_QWORD *)&v4 & 0x10000LL) != 0 )
    {
      v5.SystemState = *(_SYSTEM_POWER_STATE *)(a1 + 488);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 720);
      IoStatus.Status = 0;
      IoStatus.Information = 0LL;
      ACPIInternalWaitWakeLoop(v6, 0, v5, 0LL, &IoStatus);
    }
  }
  IofCompleteRequest(a2, 0);
}
