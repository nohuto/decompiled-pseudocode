/*
 * XREFs of HvpGetHCell @ 0x1404F85D0
 * Callers:
 *     HvpDelistFreeCell @ 0x140400838 (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 *     HvpFindFreeCellInBin @ 0x140401050 (HvpFindFreeCellInBin.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetHCell(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (**)(void))(a1 + 8))();
  if ( result )
    result -= 4LL;
  return result;
}
