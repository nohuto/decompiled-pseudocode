/*
 * XREFs of WriteGenAddr @ 0x1C0004AB4
 * Callers:
 *     C2Idle @ 0x1C0002630 (C2Idle.c)
 *     C3IdleCheck @ 0x1C00026E0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0002760 (C3Idle.c)
 *     PerfControlCpc @ 0x1C00028A0 (PerfControlCpc.c)
 *     CpcReinitializeHandler @ 0x1C0002C70 (CpcReinitializeHandler.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0002D60 (CpcSetEnergyPerfPreference.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0002D80 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0002DD0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0002DF0 (CpcSetTimeWindow.c)
 *     SetPerfStateIO @ 0x1C0004420 (SetPerfStateIO.c)
 *     InitAcpiCpc @ 0x1C001552C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C00178AC (InitCpcStatesInternal.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C000483C (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0004948 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, unsigned __int64 a2)
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
        WriteIoMemRaw((__int64)a1, a2);
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
