/*
 * XREFs of HvpDelistFreeCell @ 0x1403D963C
 * Callers:
 *     HvpIsFreeNeighbor @ 0x1403D91AC (HvpIsFreeNeighbor.c)
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     HvpGetHCell @ 0x140479BEC (HvpGetHCell.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = -1;
  v2 = BugCheckParameter3;
  result = HvpGetHCell(BugCheckParameter2, BugCheckParameter3, &v5);
  if ( result )
  {
    HvpRemoveFreeCellHint(BugCheckParameter2, v2);
    return HvpReleaseHCell(BugCheckParameter2);
  }
  return result;
}
