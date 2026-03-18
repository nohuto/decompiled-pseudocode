/*
 * XREFs of HvpDelistFreeCell @ 0x140401978
 * Callers:
 *     HvpIsFreeNeighbor @ 0x1404018CC (HvpIsFreeNeighbor.c)
 *     HvpDoAllocateCell @ 0x140401D70 (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002D330 (HvpReleaseHCell.c)
 *     HvpRemoveFreeCellHint @ 0x140514670 (HvpRemoveFreeCellHint.c)
 *     HvpGetHCell @ 0x1405151E0 (HvpGetHCell.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+20h] BYREF
  int v6; // [rsp+4Ch] [rbp+24h]

  v5 = -1;
  v6 = 0;
  v2 = BugCheckParameter3;
  result = HvpGetHCell(BugCheckParameter2, BugCheckParameter3, &v5);
  if ( result )
  {
    HvpRemoveFreeCellHint(BugCheckParameter2, v2);
    return HvpReleaseHCell(BugCheckParameter2);
  }
  return result;
}
