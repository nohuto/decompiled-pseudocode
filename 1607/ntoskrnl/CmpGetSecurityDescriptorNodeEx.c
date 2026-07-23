/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x14060277C
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B64B8 (CmpKeySecurityIncrementReferenceCount.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140210CB0 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403FC348 (CmpFindMatchingDescriptorCell.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpInsertSecurityCellList @ 0x1404C84F8 (CmpInsertSecurityCellList.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
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
  unsigned int v9; // r14d
  int v12; // eax
  unsigned int Cell; // edi
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-10h] BYREF

  v19[0] = -1;
  v19[1] = 0;
  v9 = a2;
  if ( !HvpMarkCellDirty(BugCheckParameter2, a2, 0) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v9);
  if ( CmpFindMatchingDescriptorCell(BugCheckParameter2, Src, a4, &BugCheckParameter3, 0LL) )
  {
    Cell = BugCheckParameter3;
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
      return 3221225853LL;
    v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            Cell,
            v19);
    if ( !v16 )
      return 3221225626LL;
    v17 = CmpKeySecurityIncrementReferenceCount(v16, BugCheckParameter2, Cell, 0);
    if ( v17 < 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
      return (unsigned int)v17;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
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
    Cell = HvAllocateCell(BugCheckParameter2, v12 + 20, a4, (__int64)&v20, (__int64)v19);
    if ( Cell == -1 )
      return 3221225626LL;
    v14 = RtlLengthSecurityDescriptorStrict();
    v15 = v20;
    *v20 = 27507;
    v15[3] = 1;
    v15[4] = v14;
    memmove(v15 + 5, Src, v14);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    if ( !CmpInsertSecurityCellList(BugCheckParameter2, v9, Cell, a6) )
    {
      HvFreeCell(BugCheckParameter2, Cell);
      return 3221225853LL;
    }
  }
  *a7 = Cell;
  return 0LL;
}
