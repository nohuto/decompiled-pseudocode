/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x14060AB08
 * Callers:
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 * Callees:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpFindCellInIndex @ 0x140609F94 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x14060AA60 (CmpRemoveCellFromIndex.c)
 */

char __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  char v5; // di
  unsigned int v6; // esi
  _WORD *v7; // r12
  __int64 v8; // r14
  unsigned int v9; // r13d
  _WORD *v10; // rsi
  unsigned int v11; // r15d
  unsigned int *v12; // rax
  _WORD *v13; // rax
  bool v14; // r15
  unsigned __int16 v15; // r15
  unsigned __int16 v16; // r15
  unsigned __int16 CellInIndex; // [rsp+20h] [rbp-30h]
  unsigned int BugCheckParameter3a; // [rsp+24h] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3_4; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v22[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v23[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v24; // [rsp+40h] [rbp-10h]
  bool v25; // [rsp+90h] [rbp+40h]
  unsigned __int16 v27; // [rsp+A8h] [rbp+58h]

  v23[1] = 0;
  v23[0] = -1;
  v22[0] = -1;
  LODWORD(BugCheckParameter3_4) = -1;
  v5 = 1;
  v22[1] = 0;
  v6 = BugCheckParameter3;
  HIDWORD(BugCheckParameter3_4) = 0;
  v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         v23);
  if ( v8 )
  {
    if ( !HvpMarkCellDirty(BugCheckParameter2, v6, 0) )
    {
      v5 = 0;
LABEL_38:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
      return v5;
    }
    v9 = *(_DWORD *)(v8 + 28);
    v10 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v9,
                     v22);
    if ( !v10 )
    {
      v5 = 0;
      goto LABEL_38;
    }
    if ( *v10 == 26994 )
    {
      v11 = 0;
      v27 = v10[1];
      if ( !v27 )
        goto LABEL_32;
      v12 = (unsigned int *)(v10 + 2);
      v24 = (unsigned int *)(v10 + 2);
      while ( 1 )
      {
        if ( v11 )
        {
          (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            &BugCheckParameter3_4);
          v12 = v24;
        }
        BugCheckParameter3a = *v12;
        v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(BugCheckParameter2 + 8))(
                         BugCheckParameter2,
                         *v12,
                         &BugCheckParameter3_4);
        v7 = v13;
        if ( !v13 )
          goto LABEL_26;
        CellInIndex = CmpFindCellInIndex(v13, a3);
        if ( CellInIndex < v7[1] )
          break;
        ++v11;
        v12 = ++v24;
        if ( v11 >= v27 )
          goto LABEL_32;
      }
      v14 = v7[1] == 1;
      v25 = v14;
      if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0) )
      {
LABEL_17:
        v5 = 0;
        goto LABEL_34;
      }
      if ( v14 )
      {
        if ( !HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
          goto LABEL_17;
        v15 = CmpFindCellInIndex(v10, BugCheckParameter3a);
        if ( v15 >= v10[1] )
          goto LABEL_17;
      }
      else
      {
        v15 = v27;
      }
      CmpRemoveCellFromIndex(v7, CellInIndex);
      if ( !v25 )
        goto LABEL_32;
      CmpRemoveCellFromIndex(v10, v15);
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
        BugCheckParameter2,
        &BugCheckParameter3_4);
      v7 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3a);
      if ( v10[1] )
        goto LABEL_32;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
    }
    else
    {
      v16 = CmpFindCellInIndex(v10, a3);
      if ( v16 >= v10[1] || !HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
      {
LABEL_26:
        v5 = 0;
LABEL_36:
        if ( v10 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
        goto LABEL_38;
      }
      CmpRemoveCellFromIndex(v10, v16);
      if ( v10[1] )
      {
LABEL_32:
        if ( (*(_DWORD *)(v8 + 20))-- == 1 )
        {
          *(_DWORD *)(v8 + 28) = -1;
          *(_WORD *)(v8 + 52) = 0;
          *(_DWORD *)(v8 + 56) = 0;
        }
LABEL_34:
        if ( v7 )
          (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            &BugCheckParameter3_4);
        goto LABEL_36;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
    }
    v10 = 0LL;
    HvFreeCell(BugCheckParameter2, v9);
    goto LABEL_32;
  }
  return 0;
}
