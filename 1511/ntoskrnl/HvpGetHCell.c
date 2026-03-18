/*
 * XREFs of HvpGetHCell @ 0x140479BEC
 * Callers:
 *     HvpDelistFreeCell @ 0x1403D963C (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 *     HvpFindFreeCellInBin @ 0x140479C10 (HvpFindFreeCellInBin.c)
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
