/*
 * XREFs of IcIsInputValid @ 0x1C008CD84
 * Callers:
 *     IrqArbpFindSuitableRangeIsa @ 0x1C008CB70 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C008CDB4 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A24E8 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     <none>
 */

char __fastcall IcIsInputValid(unsigned int a1)
{
  __int64 i; // rdx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
      return 1;
  }
  return 0;
}
