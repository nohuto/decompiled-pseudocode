/*
 * XREFs of IrqArbRetestAllocation @ 0x1C00808D0
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006B4C0 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbRetestAllocation @ 0x1C0081880 (ArbRetestAllocation.c)
 */

__int64 __fastcall IrqArbRetestAllocation(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbRetestAllocation(a1, a2);
  return result;
}
