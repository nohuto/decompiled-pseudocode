/*
 * XREFs of HvpGetHCell @ 0x14049FC30
 * Callers:
 *     HvpDoAllocateCell @ 0x14049ECFC (HvpDoAllocateCell.c)
 *     HvpFindFreeCellInBin @ 0x14049FB90 (HvpFindFreeCellInBin.c)
 *     HvpDelistFreeCell @ 0x14049FF74 (HvpDelistFreeCell.c)
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
