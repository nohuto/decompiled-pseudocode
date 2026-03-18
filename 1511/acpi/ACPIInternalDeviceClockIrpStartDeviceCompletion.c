/*
 * XREFs of ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x1C0023C40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalWaitWakeLoop @ 0x1C001AF60 (ACPIInternalWaitWakeLoop.c)
 */

void __fastcall ACPIInternalDeviceClockIrpStartDeviceCompletion(int *a1, IRP *a2, int a3)
{
  int v4; // eax
  POWER_STATE v5; // r8d
  struct _DEVICE_OBJECT *v6; // rcx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+30h] [rbp-18h] BYREF

  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    v4 = *a1;
    a1[78] = 2;
    if ( (*(_QWORD *)&v4 & 0x10000LL) != 0 )
    {
      v5.SystemState = a1[120];
      v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 89);
      IoStatus.Status = 0;
      IoStatus.Information = 0LL;
      ACPIInternalWaitWakeLoop(v6, 0, v5, 0LL, &IoStatus);
    }
  }
  IofCompleteRequest(a2, 0);
}
