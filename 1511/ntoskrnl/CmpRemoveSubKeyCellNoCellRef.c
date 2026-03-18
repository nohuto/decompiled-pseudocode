/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x1405E4090
 * Callers:
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 * Callees:
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpFindCellInIndex @ 0x1405E3FA4 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x1405E3FF4 (CmpRemoveCellFromIndex.c)
 */

char __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  _WORD *v4; // r15
  unsigned int v5; // esi
  char v7; // di
  __int64 v8; // r14
  unsigned int v9; // r12d
  _WORD *v10; // rsi
  unsigned int v11; // r12d
  unsigned int *v12; // r13
  _WORD *v13; // rax
  bool v14; // r12
  unsigned int v15; // r13d
  unsigned __int16 v16; // ax
  ULONG_PTR v17; // rdx
  unsigned __int16 v18; // r13
  int v21; // [rsp+20h] [rbp-20h] BYREF
  unsigned int BugCheckParameter3a; // [rsp+24h] [rbp-1Ch]
  unsigned int BugCheckParameter3_4; // [rsp+28h] [rbp-18h]
  int v24; // [rsp+2Ch] [rbp-14h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-10h]
  unsigned __int16 CellInIndex; // [rsp+80h] [rbp+40h]
  int v28; // [rsp+98h] [rbp+58h] BYREF

  v24 = -1;
  v21 = -1;
  v4 = 0LL;
  v28 = -1;
  v5 = BugCheckParameter3;
  v7 = 1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v24);
  if ( v8 )
  {
    if ( !HvpMarkCellDirty(BugCheckParameter2, v5, 0) )
    {
      v7 = 0;
LABEL_34:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
      return v7;
    }
    BugCheckParameter3a = *(_DWORD *)(v8 + 28);
    v9 = BugCheckParameter3a;
    v10 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     BugCheckParameter3a,
                     &v21);
    if ( !v10 )
    {
      v7 = 0;
      goto LABEL_34;
    }
    if ( *v10 == 26994 )
    {
      v11 = 0;
      v25 = (unsigned __int16)v10[1];
      if ( v25 )
      {
        v12 = (unsigned int *)(v10 + 2);
        do
        {
          if ( v11 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
          BugCheckParameter3_4 = *v12;
          v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           BugCheckParameter3_4,
                           &v28);
          v4 = v13;
          if ( !v13 )
            goto LABEL_23;
          CellInIndex = CmpFindCellInIndex(v13, a3);
          if ( CellInIndex < v4[1] )
          {
            v14 = v4[1] == 1;
            if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3_4, 0)
              || (v15 = BugCheckParameter3a, v14) && !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0) )
            {
              v7 = 0;
              goto LABEL_30;
            }
            CmpRemoveCellFromIndex(v4, CellInIndex);
            if ( v14 )
            {
              v16 = CmpFindCellInIndex(v10, BugCheckParameter3_4);
              CmpRemoveCellFromIndex(v10, v16);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
              v4 = 0LL;
              HvFreeCell(BugCheckParameter2, BugCheckParameter3_4);
              if ( !v10[1] )
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
                v17 = v15;
                goto LABEL_27;
              }
            }
            break;
          }
          ++v11;
          ++v12;
        }
        while ( v11 < v25 );
      }
    }
    else
    {
      v18 = CmpFindCellInIndex(v10, a3);
      if ( !HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
      {
LABEL_23:
        v7 = 0;
LABEL_32:
        if ( v10 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
        goto LABEL_34;
      }
      CmpRemoveCellFromIndex(v10, v18);
      if ( !v10[1] )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
        v17 = v9;
LABEL_27:
        v10 = 0LL;
        HvFreeCell(BugCheckParameter2, v17);
      }
    }
    if ( (*(_DWORD *)(v8 + 20))-- == 1 )
    {
      *(_DWORD *)(v8 + 28) = -1;
      *(_WORD *)(v8 + 52) = 0;
      *(_DWORD *)(v8 + 56) = 0;
    }
LABEL_30:
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
    goto LABEL_32;
  }
  return 0;
}
