/*
 * XREFs of HvpDelistFreeCell @ 0x14049FF74
 * Callers:
 *     HvpDoAllocateCell @ 0x14049ECFC (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpIsFreeNeighbor @ 0x14049FEB0 (HvpIsFreeNeighbor.c)
 * Callees:
 *     HvpReleaseHCell @ 0x1400CA7E0 (HvpReleaseHCell.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvpGetHCell @ 0x14049FC30 (HvpGetHCell.c)
 */

int *__fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  unsigned int v4; // edi
  int *result; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r8d

  v4 = BugCheckParameter3;
  result = (int *)HvpGetHCell(BugCheckParameter2);
  if ( result )
  {
    v7 = (*result >> 3) - 1;
    if ( v7 >= 0x10 )
    {
      v8 = v7 >> 4;
      if ( v8 > 0xFF )
      {
        v7 = 23;
      }
      else
      {
        _BitScanReverse(&v8, v8);
        v7 = v8 + 16;
      }
    }
    HvpRemoveFreeCellHint(BugCheckParameter2, v4, v7, a3);
    return (int *)HvpReleaseHCell(BugCheckParameter2);
  }
  return result;
}
