/*
 * XREFs of CmpRemoveSubKey @ 0x14044A21C
 * Callers:
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvpGetCellContextMove @ 0x140195B7C (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFindSubKeyInRoot @ 0x1404CAD00 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeaf @ 0x14065B170 (CmpFindSubKeyInLeaf.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  _WORD *v6; // r14
  __int64 v7; // rax
  char v8; // si
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  _WORD *v12; // rdi
  int SubKeyInRoot; // r15d
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // r9
  _QWORD *v19; // r8
  int SubKeyInLeaf; // eax
  bool v21; // zf
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // ax
  size_t v24; // r8
  _WORD *v25; // rdx
  _WORD *v26; // rcx
  unsigned int v27; // eax
  unsigned int v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-28h]
  int BugCheckParameter3_4; // [rsp+3Ch] [rbp-24h] BYREF
  ULONG_PTR v33; // [rsp+40h] [rbp-20h]
  _QWORD v34[3]; // [rsp+48h] [rbp-18h] BYREF
  bool v35; // [rsp+A0h] [rbp+40h]
  int v36; // [rsp+B8h] [rbp+58h] BYREF

  v30 = -1;
  v36 = -1;
  LODWORD(v33) = -1;
  BugCheckParameter3_4 = -1;
  memset(v34, 0, 16);
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v30);
  if ( v7 )
  {
    v8 = 1;
    v35 = (*(_BYTE *)(v7 + 2) & 0x20) != 0;
    LOWORD(v34[0]) = *(_WORD *)(v7 + 72);
    WORD1(v34[0]) = v34[0];
    v34[1] = v7 + 76;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v30);
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v30);
    v10 = v9;
    if ( !v9 )
    {
      v8 = 0;
LABEL_35:
      LOBYTE(v7) = v8;
      return v7;
    }
    v11 = a3 >> 31;
    BugCheckParameter3 = *(_DWORD *)(v9 + 4 * v11 + 28);
    v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     BugCheckParameter3,
                     &v36);
    if ( !v12 )
    {
      v8 = 0;
LABEL_34:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v30);
      goto LABEL_35;
    }
    SubKeyInRoot = 0x80000000;
    if ( *v12 == 26994 )
    {
      if ( v35 )
      {
        v14 = v34;
        LODWORD(v15) = 0;
      }
      else
      {
        LODWORD(v14) = 0;
        v15 = v34;
      }
      SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter2, (_DWORD)v12, (_DWORD)v15, (_DWORD)v14, (__int64)&v29);
      if ( SubKeyInRoot < 0 )
      {
        v8 = 0;
LABEL_32:
        if ( v12 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
        goto LABEL_34;
      }
      LODWORD(v33) = BugCheckParameter3;
      v6 = v12;
      HvpGetCellContextMove(&BugCheckParameter3_4, &v36);
      BugCheckParameter3 = v29;
      v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v29,
                       &v36);
      if ( !v12 )
        goto LABEL_13;
    }
    if ( v35 )
    {
      v18 = v34;
      LODWORD(v19) = 0;
    }
    else
    {
      LODWORD(v18) = 0;
      v19 = v34;
    }
    SubKeyInLeaf = CmpFindSubKeyInLeaf(BugCheckParameter2, (_DWORD)v12, (_DWORD)v19, (_DWORD)v18, (__int64)&v29);
    v17 = (unsigned int)SubKeyInLeaf;
    if ( SubKeyInLeaf < 0 )
    {
LABEL_13:
      v8 = 0;
      goto LABEL_30;
    }
    --*(_DWORD *)(v10 + 4 * v11 + 20);
    v21 = v12[1]-- == 1;
    v22 = v12[1];
    if ( v21 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *, __int64, __int64))(BugCheckParameter2 + 16))(
        BugCheckParameter2,
        &v36,
        v16,
        v17);
      v12 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3);
      if ( !v6 )
      {
LABEL_22:
        *(_DWORD *)(v10 + 4 * v11 + 28) = -1;
        goto LABEL_30;
      }
      v21 = v6[1]-- == 1;
      v23 = v6[1];
      if ( v21 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &BugCheckParameter3_4);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter2, (unsigned int)v33);
        goto LABEL_22;
      }
      if ( SubKeyInRoot >= (unsigned int)v23 )
      {
LABEL_30:
        if ( v6 )
          (*(void (__fastcall **)(ULONG_PTR, int *, __int64, __int64))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            &BugCheckParameter3_4,
            v16,
            v17);
        goto LABEL_32;
      }
      v24 = 4LL * ((unsigned int)v23 - SubKeyInRoot);
      v25 = &v6[2 * (SubKeyInRoot + 1) + 2];
      v26 = &v6[2 * SubKeyInRoot + 2];
    }
    else
    {
      if ( (unsigned int)v17 >= v22 )
        goto LABEL_30;
      v27 = v22 - (_DWORD)v17;
      if ( *v12 == 26988 )
      {
        v24 = 4LL * v27;
        v25 = &v12[2 * (unsigned int)(v17 + 1) + 2];
        v26 = &v12[2 * (unsigned int)v17 + 2];
      }
      else
      {
        v24 = 8LL * v27;
        v25 = &v12[4 * (unsigned int)(v17 + 1) + 2];
        v26 = &v12[4 * (unsigned int)v17 + 2];
      }
    }
    memmove(v26, v25, v24);
    goto LABEL_30;
  }
  return v7;
}
