/*
 * XREFs of AcpiUpdateInterruptProperties @ 0x1C007A8C0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C0019680 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0019694 (IrqLibAcquireArbiterLock.c)
 *     IcIsInterruptTypeSecondary @ 0x1C006B8DC (IcIsInterruptTypeSecondary.c)
 *     ProcessorUpdateInterruptProperties @ 0x1C00802E8 (ProcessorUpdateInterruptProperties.c)
 *     IcUpdateInterruptProperties @ 0x1C0080520 (IcUpdateInterruptProperties.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C008074C (IrqArbUpdateInterruptProperties.c)
 */

__int64 __fastcall AcpiUpdateInterruptProperties(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int updated; // ebx

  IrqLibAcquireArbiterLock(1);
  if ( IcIsInterruptTypeSecondary(a1) && a1 < 0xFFF00000 )
  {
    updated = ProcessorUpdateInterruptProperties(a1, a2);
    if ( updated >= 0 )
    {
      updated = IcUpdateInterruptProperties(a1, a2, a3);
      if ( updated >= 0 )
        updated = IrqArbUpdateInterruptProperties(a1);
    }
  }
  else
  {
    updated = -1073741811;
  }
  IrqLibReleaseArbiterLock();
  return (unsigned int)updated;
}
