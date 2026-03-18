/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C006C23C
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C006B1D4 (IrqArbpSetDeviceProperties.c)
 *     IrqTranslateResources @ 0x1C006B910 (IrqTranslateResources.c)
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 *     IcCopyInputStateToDeviceState @ 0x1C006C134 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C006D93C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006E858 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C006ECA8 (IrqArbpFindSuitableRangePci.c)
 *     IrqTransGetInterruptVector @ 0x1C00801E0 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C0080570 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C008074C (IrqArbUpdateInterruptProperties.c)
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
