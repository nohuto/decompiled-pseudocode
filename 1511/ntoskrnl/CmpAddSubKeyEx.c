/*
 * XREFs of CmpAddSubKeyEx @ 0x1403D7E1C
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpCommitAddKeyUoW @ 0x1404B3A00 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1405E22EC (CmpDoBuildVirtualStack.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpSelectLeaf @ 0x1404C6074 (CmpSelectLeaf.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int16 v15; // r12
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  _DWORD *v19; // rcx
  int v21; // eax
  unsigned int i; // edx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rax
  int v28; // ebx
  int v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-34h]
  int v31; // [rsp+38h] [rbp-30h] BYREF
  __int16 *v32; // [rsp+40h] [rbp-28h] BYREF
  _DWORD *v33; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int16 v34; // [rsp+50h] [rbp-18h]
  unsigned __int16 v35; // [rsp+52h] [rbp-16h]
  __int64 v36; // [rsp+58h] [rbp-10h]
  char v37; // [rsp+B0h] [rbp+48h]

  v32 = 0LL;
  v31 = -1;
  v29 = -1;
  v33 = 0LL;
  v5 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v31);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_WORD *)(v8 + 72);
  if ( (*(_BYTE *)(v8 + 2) & 0x20) != 0 )
  {
    v10 *= 2;
    v37 = 1;
    v34 = v10;
    v35 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(v10, 0LL, 540560707LL);
    v36 = v11;
    if ( v11 )
    {
      CmpCopyCompressedName(v11, v10, v9 + 76, *(unsigned __int16 *)(v9 + 72));
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
    return 0;
  }
  v37 = 0;
  v36 = v8 + 76;
  v34 = v10;
  v35 = v10;
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v31);
  if ( !v12 )
    goto LABEL_44;
  v7 = a3 >> 31;
  v30 = a3 >> 31;
  v13 = v7;
  if ( !*(_DWORD *)(v12 + 4 * v7 + 20) )
  {
    v14 = 12LL;
    if ( *(_DWORD *)(BugCheckParameter2 + 196) >= 5u )
    {
      if ( a4 )
      {
        v21 = 1012;
        if ( a4 < 0x3F4 )
          v21 = a4;
        v14 = (unsigned int)(8 * v21 + 4);
      }
      v15 = 26732;
    }
    else
    {
      v15 = 26220;
    }
    v16 = HvAllocateCell(BugCheckParameter2, v14, v30, &v32, &v29);
    if ( v16 != -1 )
    {
      v5 = (__int64)v32;
      *v32 = v15;
      v6 = 1;
      *(_WORD *)(v5 + 2) = 0;
      *(_DWORD *)(v12 + 4 * v13 + 28) = v16;
LABEL_16:
      LODWORD(v7) = v30;
      goto LABEL_17;
    }
    LODWORD(v7) = v30;
LABEL_43:
    v5 = (__int64)v32;
    goto LABEL_44;
  }
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(v12 + 4 * v7 + 28),
         &v29);
  if ( !v5 )
    goto LABEL_44;
  if ( *(_WORD *)v5 != 26220 || *(_WORD *)(v5 + 2) < 0x1FBu )
  {
    if ( ((*(_WORD *)v5 - 26732) & 0xFEFF) != 0 || *(_WORD *)(v5 + 2) < 0x3F5u )
      goto LABEL_16;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    LODWORD(v7) = v30;
    v32 = 0LL;
    v25 = HvAllocateCell(BugCheckParameter2, 12LL, v30, &v32, &v29);
    if ( v25 != -1 )
    {
      v5 = (__int64)v32;
      v6 = 2;
      *(_DWORD *)v32 = 92530;
      *(_DWORD *)(v5 + 4) = *(_DWORD *)(v12 + 4 * v13 + 28);
      *(_DWORD *)(v12 + 4 * v13 + 28) = v25;
      goto LABEL_17;
    }
    goto LABEL_43;
  }
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 4 * v7 + 28)) )
    goto LABEL_44;
  for ( i = 0; i < *(unsigned __int16 *)(v5 + 2); *(_DWORD *)(v5 + 4 * v24 + 4) = *(_DWORD *)(v5 + 8 * v24 + 4) )
    v24 = i++;
  *(_WORD *)v5 = 26988;
LABEL_17:
  v17 = *(_DWORD *)(v12 + 4 * v13 + 28);
  if ( *(_WORD *)v5 == 26994 && (v17 = CmpSelectLeaf(BugCheckParameter2, (__int64)&v33), v17 == -1)
    || (v18 = CmpAddToLeaf(BugCheckParameter2, v17), v18 == -1) )
  {
LABEL_44:
    if ( v37 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v36, v10);
    v26 = v6 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        if ( v5 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
        v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                *(unsigned int *)(v12 + 4LL * (unsigned int)v7 + 28),
                &v29);
        if ( v27 )
        {
          v28 = *(_DWORD *)(v27 + 4);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
          HvFreeCell(BugCheckParameter2, *(unsigned int *)(v12 + 4LL * (unsigned int)v7 + 28));
          *(_DWORD *)(v12 + 4LL * (unsigned int)v7 + 28) = v28;
        }
LABEL_55:
        if ( v12 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
        return 0;
      }
    }
    else
    {
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v12 + 4LL * (unsigned int)v7 + 28));
      *(_DWORD *)(v12 + 4LL * (unsigned int)v7 + 28) = -1;
    }
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    goto LABEL_55;
  }
  v19 = v33;
  ++*(_DWORD *)(v12 + 4 * v13 + 20);
  if ( v19 )
    *v19 = v18;
  else
    *(_DWORD *)(v12 + 4 * v13 + 28) = v18;
  if ( v37 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v36, v10);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
  return 1;
}
