/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1401B6514
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14053A9D4 (CmpCleanupLightWeightUoWData.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060E970 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F624 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400AB604 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401B6598 (CmpKeySecurityDecrementReferenceCount.c)
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // esi
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int16 v7; // [rsp+34h] [rbp+Ch]
  __int16 v8; // [rsp+36h] [rbp+Eh]

  v8 = 0;
  v2 = BugCheckParameter3;
  v6 = -1;
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v6);
  result = CmpKeySecurityDecrementReferenceCount(v4, BugCheckParameter2, v2);
  if ( (_BYTE)result )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
    v4 = 0LL;
    CmpRemoveSecurityCellList(BugCheckParameter2, v2);
    result = HvFreeCell(BugCheckParameter2, v2);
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
  return result;
}
