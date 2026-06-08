/*
 * XREFs of WriteGenAddr @ 0x1C00013DC
 * Callers:
 *     SetPerfStateIO @ 0x1C0002360 (SetPerfStateIO.c)
 *     MWaitIdleCheck @ 0x1C0003D90 (MWaitIdleCheck.c)
 *     CpcReinitializeHandler @ 0x1C0004340 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0004380 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00043D0 (CpcSetAutonomousMode.c)
 *     CpcSetEnergyPerfPreference @ 0x1C00043F0 (CpcSetEnergyPerfPreference.c)
 *     CpcSetTimeWindow @ 0x1C0004410 (CpcSetTimeWindow.c)
 *     PerfControlCpc @ 0x1C0004470 (PerfControlCpc.c)
 *     C2Idle @ 0x1C0005B00 (C2Idle.c)
 *     C3Idle @ 0x1C0005B80 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0005C20 (C3IdleCheck.c)
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C001E6AC (InitCpcStatesInternal.c)
 * Callees:
 *     WriteIoMemRaw @ 0x1C0001458 (WriteIoMemRaw.c)
 *     ReadIoMemRaw @ 0x1C0001570 (ReadIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  if ( a1 )
  {
    if ( !a1[2] )
    {
      if ( *a1 == 10 )
      {
        if ( a1[1] == 64 )
          goto LABEL_10;
      }
      else if ( a1[1] == a1[3] )
      {
LABEL_10:
        WriteIoMemRaw(a1, a2);
        return;
      }
    }
    IoMemRaw = ReadIoMemRaw();
    v5 = a1[1];
    if ( v5 < 0x40u || a1[2] )
      a2 = IoMemRaw & ~(((1LL << v5) - 1) << a1[2]) | (((1LL << v5) - 1) << a1[2]) & (a2 << a1[2]);
    goto LABEL_10;
  }
}
