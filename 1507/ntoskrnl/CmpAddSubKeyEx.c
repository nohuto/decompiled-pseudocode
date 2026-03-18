/*
 * XREFs of CmpAddSubKeyEx @ 0x1405335D0
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpCommitAddKeyUoW @ 0x1404F2A54 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 *     CmpSelectLeaf @ 0x140533CC8 (CmpSelectLeaf.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int16 v10; // r15
  _WORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // edx
  int v17; // eax
  __int16 v18; // r12
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  _DWORD *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  int v32; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-44h]
  int v34; // [rsp+38h] [rbp-40h] BYREF
  __int16 *v35; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v36; // [rsp+48h] [rbp-30h] BYREF
  __int64 v37; // [rsp+50h] [rbp-28h]
  unsigned __int16 v38; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int16 v39; // [rsp+5Ah] [rbp-1Eh]
  _WORD *v40; // [rsp+60h] [rbp-18h]
  char v41; // [rsp+C0h] [rbp+48h]

  v35 = 0LL;
  v34 = -1;
  v32 = -1;
  v36 = 0LL;
  v5 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v34);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_WORD *)(v8 + 72);
  if ( (*(_BYTE *)(v8 + 2) & 0x20) != 0 )
  {
    v10 *= 2;
    v41 = 1;
    v38 = v10;
    v39 = v10;
    v11 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(v10, 0LL, 540560707LL);
    v40 = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
      return 0;
    }
    CmpCopyCompressedName(v11, v10, (unsigned __int8 *)(v9 + 76), *(unsigned __int16 *)(v9 + 72));
  }
  else
  {
    v41 = 0;
    v40 = (_WORD *)(v8 + 76);
    v38 = v10;
    v39 = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v34);
  if ( !v14 )
  {
LABEL_38:
    if ( v41 )
      (*(void (__fastcall **)(_WORD *, _QWORD))(BugCheckParameter2 + 32))(v40, v10);
    v26 = v6 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        if ( v5 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
        v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                *(unsigned int *)(v14 + 4LL * (unsigned int)v7 + 28),
                &v32);
        if ( v27 )
        {
          v28 = *(_DWORD *)(v27 + 4);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
          HvFreeCell(BugCheckParameter2, *(unsigned int *)(v14 + 4LL * (unsigned int)v7 + 28), v29, v30);
          *(_DWORD *)(v14 + 4LL * (unsigned int)v7 + 28) = v28;
        }
LABEL_53:
        if ( v14 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
        return 0;
      }
    }
    else
    {
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v14 + 4LL * (unsigned int)v7 + 28), v12, v13);
      *(_DWORD *)(v14 + 4LL * (unsigned int)v7 + 28) = -1;
    }
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
    goto LABEL_53;
  }
  v7 = a3 >> 31;
  v15 = (unsigned int)v7;
  v33 = a3 >> 31;
  v37 = (unsigned int)v7;
  if ( !*(_DWORD *)(v14 + 4 * v7 + 20) )
  {
    v16 = 12;
    if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    {
      v18 = 26220;
    }
    else
    {
      if ( a4 )
      {
        v17 = 1012;
        if ( a4 < 0x3F4 )
          v17 = a4;
        v16 = 8 * v17 + 4;
      }
      v18 = 26732;
    }
    v19 = HvAllocateCell(BugCheckParameter2, v16, v33, (__int64)&v35, &v32);
    if ( v19 != -1 )
    {
      v5 = (__int64)v35;
      *v35 = v18;
      v6 = 1;
      *(_WORD *)(v5 + 2) = 0;
      *(_DWORD *)(v14 + 4 * v15 + 28) = v19;
LABEL_18:
      LODWORD(v7) = v33;
      goto LABEL_19;
    }
    LODWORD(v7) = v33;
LABEL_37:
    v5 = (__int64)v35;
    goto LABEL_38;
  }
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(v14 + 4 * v7 + 28),
         &v32);
  if ( !v5 )
    goto LABEL_38;
  if ( *(_WORD *)v5 == 26220 && *(_WORD *)(v5 + 2) >= 0x1FBu )
  {
    if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v14 + 4 * v7 + 28), 0, 0LL) )
      goto LABEL_38;
    v23 = 0;
    if ( *(_WORD *)(v5 + 2) )
    {
      do
      {
        v24 = v23++;
        *(_DWORD *)(v5 + 4 * v24 + 4) = *(_DWORD *)(v5 + 8 * v24 + 4);
      }
      while ( v23 < *(unsigned __int16 *)(v5 + 2) );
      v15 = v37;
    }
    *(_WORD *)v5 = 26988;
  }
  if ( ((*(_WORD *)v5 - 26732) & 0xFEFF) != 0 || *(_WORD *)(v5 + 2) < 0x3F5u )
    goto LABEL_18;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
  LODWORD(v7) = v33;
  v35 = 0LL;
  v25 = HvAllocateCell(BugCheckParameter2, 12, v33, (__int64)&v35, &v32);
  if ( v25 == -1 )
    goto LABEL_37;
  v5 = (__int64)v35;
  v6 = 2;
  *(_DWORD *)v35 = 92530;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)(v14 + 4 * v15 + 28);
  *(_DWORD *)(v14 + 4 * v15 + 28) = v25;
LABEL_19:
  v20 = *(_DWORD *)(v14 + 4 * v15 + 28);
  if ( *(_WORD *)v5 == 26994 )
  {
    v20 = CmpSelectLeaf(BugCheckParameter2, v14, (unsigned int)&v38, v7, (__int64)&v36);
    if ( v20 == -1 )
      goto LABEL_38;
  }
  v21 = CmpAddToLeaf(BugCheckParameter2, v20);
  if ( v21 == -1 )
    goto LABEL_38;
  v22 = v36;
  ++*(_DWORD *)(v14 + 4 * v15 + 20);
  if ( v22 )
    *v22 = v21;
  else
    *(_DWORD *)(v14 + 4 * v15 + 28) = v21;
  if ( v41 )
    (*(void (__fastcall **)(_WORD *, _QWORD))(BugCheckParameter2 + 32))(v40, v10);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
  return 1;
}
