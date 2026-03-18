/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x140659810
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401E0EEC (CmpKeySecurityIncrementReferenceCount.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140245898 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindMatchingDescriptorCell @ 0x140449B80 (CmpFindMatchingDescriptorCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpInsertSecurityCellList @ 0x1405554C0 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v9; // ebp
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // esi
  int v20; // [rsp+30h] [rbp-18h] BYREF
  _DWORD BugCheckParameter3[5]; // [rsp+34h] [rbp-14h] BYREF

  v20 = -1;
  v9 = a2;
  if ( !HvpMarkCellDirty(BugCheckParameter2, a2, 0, 0LL) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v9);
  if ( CmpFindMatchingDescriptorCell(BugCheckParameter2, Src, a4, BugCheckParameter3, 0LL) )
  {
    v13 = BugCheckParameter3[0];
    if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3[0], 0, 0LL) )
      return 3221225853LL;
    v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v13, &v20);
    if ( !v18 )
      return 3221225626LL;
    v19 = CmpKeySecurityIncrementReferenceCount(v18, BugCheckParameter2, v13, 0);
    if ( v19 < 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
      return (unsigned int)v19;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  }
  else
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0
      && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
    {
      return 3221225506LL;
    }
    v12 = RtlLengthSecurityDescriptorStrict();
    v13 = HvAllocateCell(BugCheckParameter2, v12 + 20, a4, (__int64)&BugCheckParameter3[1], &v20);
    if ( v13 == -1 )
      return 3221225626LL;
    v14 = RtlLengthSecurityDescriptorStrict();
    v15 = *(_DWORD **)&BugCheckParameter3[1];
    **(_WORD **)&BugCheckParameter3[1] = 27507;
    v15[3] = 1;
    v15[4] = v14;
    memmove(v15 + 5, Src, v14);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
    if ( !CmpInsertSecurityCellList(BugCheckParameter2, v9, v13, a6) )
    {
      HvFreeCell(BugCheckParameter2, v13, v16, v17);
      return 3221225853LL;
    }
  }
  *a7 = v13;
  return 0LL;
}
