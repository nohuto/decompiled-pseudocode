/*
 * XREFs of CmpMarkIndexDirty @ 0x1404B9C38
 * Callers:
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpMarkKeyParentDirty @ 0x140608E04 (CmpMarkKeyParentDirty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1404F5850 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404F5E50 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int16 v8; // r14
  char v9; // r15
  _WORD *PoolWithTag; // rax
  void *v11; // rsi
  __int64 v12; // r13
  unsigned int v13; // r12d
  _WORD *v14; // rdi
  unsigned int v16; // edi
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF

  v17[0] = -1;
  v5 = 0;
  v18[0] = -1;
  v20 = -1;
  v17[1] = 0;
  v18[1] = 0;
  memset(v19, 0, sizeof(v19));
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v17);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v9 = 1;
    LOWORD(v19[0]) = 2 * *(_WORD *)(v6 + 72);
    v8 = v19[0];
    WORD1(v19[0]) = v19[0];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(v19[0]), 0x20204D43u);
    v19[1] = PoolWithTag;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpCopyCompressedName(PoolWithTag, v8, (unsigned __int8 *)(v7 + 76), *(unsigned __int16 *)(v7 + 72));
      v5 = 0;
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    return 0;
  }
  v11 = (void *)(v6 + 76);
  LOWORD(v19[0]) = *(_WORD *)(v6 + 72);
  v9 = 0;
  WORD1(v19[0]) = v19[0];
  v19[1] = v6 + 76;
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v17);
  if ( !v12 )
    goto LABEL_27;
  if ( !*(_DWORD *)(BugCheckParameter2 + 192) )
  {
LABEL_26:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
LABEL_27:
    if ( v9 )
      ExFreePoolWithTag(v11, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 4LL * v5 + 20) )
      goto LABEL_15;
    v13 = *(_DWORD *)(v12 + 4LL * v5 + 28);
    v14 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v13,
                     v18);
    if ( !v14 )
      goto LABEL_26;
    if ( *v14 != 26994 )
      break;
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, (_DWORD)v14, (unsigned int)v19, 0, (__int64)&v20) < 0 )
    {
LABEL_25:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
      goto LABEL_26;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
    v16 = v20;
    if ( v20 != -1 )
    {
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v13) )
        goto LABEL_26;
      v13 = v16;
      v14 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v16,
                       v18);
      if ( !v14 )
        goto LABEL_26;
      break;
    }
LABEL_15:
    if ( ++v5 >= *(_DWORD *)(BugCheckParameter2 + 192) )
      goto LABEL_26;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v14, (unsigned int)v19, 0, (__int64)&v20, (__int64)&v21);
  if ( v21 < 0 )
    goto LABEL_25;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  if ( v20 == -1 )
    goto LABEL_15;
  if ( v9 )
    ExFreePoolWithTag(v11, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  return HvpMarkCellDirty(BugCheckParameter2, v13);
}
