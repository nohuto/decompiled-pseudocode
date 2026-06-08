/*
 * XREFs of WriteGenAddr @ 0x1C00035CC
 * Callers:
 *     MWaitIdleCheck @ 0x1C0003310 (MWaitIdleCheck.c)
 *     CpcReinitializeHandler @ 0x1C0003CA0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0003CE0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0003D30 (CpcSetAutonomousMode.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0003D50 (CpcSetEnergyPerfPreference.c)
 *     CpcSetTimeWindow @ 0x1C0003D70 (CpcSetTimeWindow.c)
 *     PerfControlCpc @ 0x1C0003DD0 (PerfControlCpc.c)
 *     C2Idle @ 0x1C00042E0 (C2Idle.c)
 *     C3Idle @ 0x1C00043B0 (C3Idle.c)
 *     C3IdleCheck @ 0x1C00044B0 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C0005030 (SetPerfStateIO.c)
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C001E5AC (InitCpcStatesInternal.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00034C0 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0003648 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  unsigned __int64 IoMemRaw; // rax
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
    IoMemRaw = ReadIoMemRaw((__int64)a1);
    v5 = a1[1];
    if ( v5 < 0x40u || a1[2] )
      a2 = IoMemRaw & ~(((1LL << v5) - 1) << a1[2]) | (((1LL << v5) - 1) << a1[2]) & (a2 << a1[2]);
    goto LABEL_10;
  }
}
