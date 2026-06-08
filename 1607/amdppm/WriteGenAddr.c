/*
 * XREFs of WriteGenAddr @ 0x1C0005EB0
 * Callers:
 *     PerfControlCpc @ 0x1C0002A30 (PerfControlCpc.c)
 *     CpcReinitializeHandler @ 0x1C00030A0 (CpcReinitializeHandler.c)
 *     CpcSetEnergyPerfPreference @ 0x1C00031C0 (CpcSetEnergyPerfPreference.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0003200 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0003260 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C00032A0 (CpcSetTimeWindow.c)
 *     C2Idle @ 0x1C00035E0 (C2Idle.c)
 *     C3IdleCheck @ 0x1C00036B0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0003730 (C3Idle.c)
 *     SetPerfStateIO @ 0x1C00045A0 (SetPerfStateIO.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0005FD0 (WriteGenAddrMaybeHidden.c)
 *     WriteGenAddrHidden @ 0x1C00060E0 (WriteGenAddrHidden.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0005C38 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0005D44 (WriteIoMemRaw.c)
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
