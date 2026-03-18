/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C0069D80
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C0068D0C (IrqArbpSetDeviceProperties.c)
 *     IrqTranslateResources @ 0x1C0069440 (IrqTranslateResources.c)
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0069C64 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C006B59C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006C4D0 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C006C928 (IrqArbpFindSuitableRangePci.c)
 *     IrqTransGetInterruptVector @ 0x1C00803C0 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C0080750 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C008092C (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 >= 0x10 )
    return (unsigned int)a1;
  else
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
}
