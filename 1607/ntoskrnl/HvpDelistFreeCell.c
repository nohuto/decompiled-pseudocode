/*
 * XREFs of HvpDelistFreeCell @ 0x140400838
 * Callers:
 *     HvpIsFreeNeighbor @ 0x14040078C (HvpIsFreeNeighbor.c)
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     HvpGetHCell @ 0x1404F85D0 (HvpGetHCell.c)
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
