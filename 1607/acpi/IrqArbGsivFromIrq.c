/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C008A05C
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0087020 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0088E18 (IrqArbpSetDeviceProperties.c)
 *     IrqTranslateResources @ 0x1C0089600 (IrqTranslateResources.c)
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0089F40 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C008CB70 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C008CDB4 (IrqArbpFindSuitableRangePci.c)
 *     IrqTransGetInterruptVector @ 0x1C00A1F00 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A2190 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00A23AC (IrqArbUpdateInterruptProperties.c)
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
