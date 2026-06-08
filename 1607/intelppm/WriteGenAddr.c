/*
 * XREFs of WriteGenAddr @ 0x1C0001380
 * Callers:
 *     SetPerfStateIO @ 0x1C0002430 (SetPerfStateIO.c)
 *     MWaitIdleCheck @ 0x1C0004110 (MWaitIdleCheck.c)
 *     WriteGenAddrHidden @ 0x1C0004670 (WriteGenAddrHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0004714 (WriteGenAddrMaybeHidden.c)
 *     PerfControlCpc @ 0x1C0004A70 (PerfControlCpc.c)
 *     C2Idle @ 0x1C0005160 (C2Idle.c)
 *     C3Idle @ 0x1C0005230 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0005330 (C3IdleCheck.c)
 * Callees:
 *     WriteIoMemRaw @ 0x1C00013FC (WriteIoMemRaw.c)
 *     ReadIoMemRaw @ 0x1C0001480 (ReadIoMemRaw.c)
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
        if ( a1[1] != 64 )
          goto LABEL_5;
      }
      else if ( a1[1] != a1[3] )
      {
        goto LABEL_5;
      }
LABEL_8:
      WriteIoMemRaw(a1, a2);
      return;
    }
LABEL_5:
    IoMemRaw = ReadIoMemRaw();
    v5 = a1[1];
    if ( v5 < 0x40u || a1[2] )
      a2 = IoMemRaw & ~(((1LL << v5) - 1) << a1[2]) | (((1LL << v5) - 1) << a1[2]) & (a2 << a1[2]);
    goto LABEL_8;
  }
}
