/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1C00A22C8
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C008BE50 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C008CDB4 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A24E8 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00A7AF8 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C008B8E0 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(int a1)
{
  char v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = IrqArbpLookupIsaOverrideByGsiv(a1, &v5);
  v3 = v5;
  if ( !v1 )
    return v2;
  return v3;
}
