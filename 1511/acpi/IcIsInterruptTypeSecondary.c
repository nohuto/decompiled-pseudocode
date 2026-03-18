/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C006940C
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0068F60 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0069130 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006C4D0 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007AA20 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
