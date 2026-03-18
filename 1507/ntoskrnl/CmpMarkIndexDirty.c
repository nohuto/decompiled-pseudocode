/*
 * XREFs of CmpMarkIndexDirty @ 0x1405451A8
 * Callers:
 *     CmpMarkKeyDirty @ 0x14042C620 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x140585EAC (CmpMarkKeyParentDirty.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404CA7D0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1404CAD00 (CmpFindSubKeyInRoot.c)
 */

char __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // r15
  _WORD *PoolWithTag; // rax
  void *v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // r12d
  _WORD *v13; // rdi
  unsigned int v15; // edi
  unsigned int v16; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+34h] [rbp-1Ch] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-18h] BYREF
  int v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+A8h] [rbp+58h] BYREF

  v19 = -1;
  v20 = -1;
  v5 = 0;
  v16 = -1;
  memset(v18, 0, 16);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v19);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v8 = 1;
    LOWORD(v18[0]) = 2 * *(_WORD *)(v6 + 72);
    WORD1(v18[0]) = v18[0];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(v18[0]), 0x20204D43u);
    v18[1] = PoolWithTag;
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpCopyCompressedName(PoolWithTag, LOWORD(v18[0]), (unsigned __int8 *)(v7 + 76), *(unsigned __int16 *)(v7 + 72));
      v5 = 0;
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
    return 0;
  }
  v10 = (void *)(v6 + 76);
  LOWORD(v18[0]) = *(_WORD *)(v6 + 72);
  v8 = 0;
  WORD1(v18[0]) = v18[0];
  v18[1] = v6 + 76;
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v19);
  if ( !v11 )
    goto LABEL_27;
  if ( !*(_DWORD *)(BugCheckParameter2 + 192) )
  {
LABEL_26:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
LABEL_27:
    if ( v8 )
      ExFreePoolWithTag(v10, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v11 + 4LL * v5 + 20) )
      goto LABEL_15;
    v12 = *(_DWORD *)(v11 + 4LL * v5 + 28);
    v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v12,
                     &v20);
    if ( !v13 )
      goto LABEL_26;
    if ( *v13 != 26994 )
      break;
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, (__int64)v13, (__int64)v18, 0, &v16) < 0 )
    {
LABEL_25:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
      goto LABEL_26;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
    v15 = v16;
    if ( v16 != -1 )
    {
      if ( !HvpMarkCellDirty(BugCheckParameter2, v12, 0, 0LL) )
        goto LABEL_26;
      v12 = v15;
      v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v15,
                       &v20);
      if ( !v13 )
        goto LABEL_26;
      break;
    }
LABEL_15:
    if ( ++v5 >= *(_DWORD *)(BugCheckParameter2 + 192) )
      goto LABEL_26;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)v13, (int)v18, 0, &v16, (unsigned int *)&v17);
  if ( v17 < 0 )
    goto LABEL_25;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  if ( v16 == -1 )
    goto LABEL_15;
  if ( v8 )
    ExFreePoolWithTag(v10, 0);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  return HvpMarkCellDirty(BugCheckParameter2, v12, 0, 0LL);
}
