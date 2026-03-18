/*
 * XREFs of HvpGetHCell @ 0x1405151E0
 * Callers:
 *     HvpDelistFreeCell @ 0x140401978 (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x140401D70 (HvpDoAllocateCell.c)
 *     HvpFindFreeCellInBin @ 0x140402190 (HvpFindFreeCellInBin.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
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
