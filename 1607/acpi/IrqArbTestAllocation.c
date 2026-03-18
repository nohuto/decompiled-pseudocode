/*
 * XREFs of IrqArbTestAllocation @ 0x1C008B910
 * Callers:
 *     <none>
 * Callees:
 *     ArbTestAllocation @ 0x1C008B950 (ArbTestAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008BAC8 (IrqArbpPrepareForTestOrConflict.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, a2);
  return result;
}
