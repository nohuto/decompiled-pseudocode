/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x14065B23C
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFindCellInIndex @ 0x14065B120 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x14065B198 (CmpRemoveCellFromIndex.c)
 */

char __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  _WORD *v4; // r15
  unsigned int v5; // esi
  char v7; // di
  __int64 v8; // r14
  unsigned int v9; // r13d
  _WORD *v10; // rsi
  unsigned int v11; // r12d
  unsigned int *v12; // rax
  _WORD *v13; // rax
  bool v14; // r12
  unsigned __int16 v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 v20; // r12
  unsigned __int16 CellInIndex; // [rsp+20h] [rbp-20h]
  int v24; // [rsp+24h] [rbp-1Ch] BYREF
  int v25; // [rsp+28h] [rbp-18h] BYREF
  unsigned int BugCheckParameter3a; // [rsp+2Ch] [rbp-14h]
  int BugCheckParameter3_4; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v28; // [rsp+38h] [rbp-8h]
  bool v29; // [rsp+80h] [rbp+40h]
  unsigned __int16 v31; // [rsp+98h] [rbp+58h]

  BugCheckParameter3_4 = -1;
  v25 = -1;
  v4 = 0LL;
  v24 = -1;
  v5 = BugCheckParameter3;
  v7 = 1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &BugCheckParameter3_4);
  if ( v8 )
  {
    if ( !HvpMarkCellDirty(BugCheckParameter2, v5, 0, 0LL) )
    {
      v7 = 0;
LABEL_38:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &BugCheckParameter3_4);
      return v7;
    }
    v9 = *(_DWORD *)(v8 + 28);
    v10 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v9,
                     &v25);
    if ( !v10 )
    {
      v7 = 0;
      goto LABEL_38;
    }
    if ( *v10 == 26994 )
    {
      v11 = 0;
      v31 = v10[1];
      if ( !v31 )
        goto LABEL_32;
      v12 = (unsigned int *)(v10 + 2);
      v28 = (unsigned int *)(v10 + 2);
      while ( 1 )
      {
        if ( v11 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
          v12 = v28;
        }
        BugCheckParameter3a = *v12;
        v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                         BugCheckParameter2,
                         BugCheckParameter3a,
                         &v24);
        v4 = v13;
        if ( !v13 )
          goto LABEL_26;
        CellInIndex = CmpFindCellInIndex(v13, a3);
        if ( CellInIndex < v4[1] )
          break;
        ++v11;
        v12 = ++v28;
        if ( v11 >= v31 )
          goto LABEL_32;
      }
      v14 = v4[1] == 1;
      v29 = v14;
      if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0, 0LL) )
      {
LABEL_17:
        v7 = 0;
        goto LABEL_34;
      }
      if ( v14 )
      {
        if ( !HvpMarkCellDirty(BugCheckParameter2, v9, 0, 0LL) )
          goto LABEL_17;
        v15 = CmpFindCellInIndex(v10, BugCheckParameter3a);
        if ( v15 >= v10[1] )
          goto LABEL_17;
      }
      else
      {
        v15 = v31;
      }
      CmpRemoveCellFromIndex(v4, CellInIndex);
      if ( !v29 )
        goto LABEL_32;
      CmpRemoveCellFromIndex(v10, v15);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3a, v16, v17);
      if ( v10[1] )
        goto LABEL_32;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
    }
    else
    {
      v20 = CmpFindCellInIndex(v10, a3);
      if ( v20 >= v10[1] || !HvpMarkCellDirty(BugCheckParameter2, v9, 0, 0LL) )
      {
LABEL_26:
        v7 = 0;
LABEL_36:
        if ( v10 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
        goto LABEL_38;
      }
      CmpRemoveCellFromIndex(v10, v20);
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
        if ( v4 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
        goto LABEL_36;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
    }
    v10 = 0LL;
    HvFreeCell(BugCheckParameter2, v9, v18, v19);
    goto LABEL_32;
  }
  return 0;
}
