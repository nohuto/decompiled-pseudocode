/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1401B63F8
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14053AF14 (CmpCleanupLightWeightUoWData.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060EA24 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400A9B6C (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401B647C (CmpKeySecurityDecrementReferenceCount.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
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
