/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C006B8DC
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C006B430 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C006B600 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006E858 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007A8C0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
