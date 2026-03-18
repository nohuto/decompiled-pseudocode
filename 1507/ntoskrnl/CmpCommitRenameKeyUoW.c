/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x140664408
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 *     CmpUpdateParentForEachSon @ 0x14065B4C4 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmpCommitRenameKeyUoW(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rax
  const void *v9; // r13
  unsigned int v10; // eax
  _DWORD *v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int16 v21; // dx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r9
  char v25; // r8
  void *v26; // [rsp+30h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-18h]
  int v29; // [rsp+A0h] [rbp+48h] BYREF
  __int64 *v30; // [rsp+A8h] [rbp+50h]
  int v31; // [rsp+B0h] [rbp+58h] BYREF
  int v32; // [rsp+B8h] [rbp+60h] BYREF

  v30 = a2;
  v2 = *(_DWORD *)(a1 + 72);
  v26 = 0LL;
  v31 = -1;
  v32 = -1;
  v29 = -1;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(v4 + 72) + 40LL),
         &v32);
  if ( !v6 )
    return (unsigned int)-1073741670;
  if ( !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1, 0LL)
    || !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1, 0LL)
    || !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 80) + 40LL), 1, 0LL)
    || !CmpMarkIndexDirty(
          v5,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 80) + 40LL)) )
  {
    v7 = -1073741443;
LABEL_21:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v32);
    return v7;
  }
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         &v29);
  v9 = (const void *)v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_21;
  }
  v10 = HvAllocateCell(v5, -4 - *(_DWORD *)(v8 - 4), v2, (__int64)&v26, &v31);
  v11 = v26;
  v12 = v10;
  if ( v10 == -1 )
  {
    v7 = -1073741443;
    goto LABEL_17;
  }
  memmove(v26, v9, -4 - *((_DWORD *)v9 - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v29);
  v9 = 0LL;
  if ( !CmpAddSubKeyEx(v5, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), v12, 0)
    || !CmpRemoveSubKey(
          v5,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 80) + 40LL)) )
  {
    v7 = -1073741670;
LABEL_19:
    if ( v11 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v31);
      CmpFreeKeyByCell(v5, v12, 0, v15);
    }
    goto LABEL_21;
  }
  if ( !CmpUpdateParentForEachSon(v5, v12) )
  {
    v7 = -1073741670;
    CmpRemoveSubKey(v5, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), v12);
    CmpAddSubKeyEx(
      v5,
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 80) + 40LL),
      0);
LABEL_17:
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v29);
    goto LABEL_19;
  }
  HvFreeCell(v5, *(unsigned int *)(*(_QWORD *)(a1 + 80) + 40LL), v13, v14);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 80), 0LL, 1);
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 40LL) = -1;
  v17 = *(_QWORD *)(a1 + 80);
  v18 = *(_QWORD *)(v17 + 32);
  *(_DWORD *)(v17 + 4) |= 0x20000u;
  CmpRemoveKeyHash(v18, (_DWORD *)(v17 + 16));
  *(_QWORD *)(v17 + 24) = -1LL;
  v19 = *(_QWORD *)(a1 + 48);
  v20 = *v30;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(v19 + 40);
  *(_DWORD *)(v19 + 40) = v12;
  v11[4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  *(_QWORD *)(v6 + 4) = v20;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v20;
  v21 = *((_WORD *)v11 + 36);
  if ( (*((_BYTE *)v11 + 2) & 0x20) != 0 )
    v21 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v6 + 52) < (unsigned int)v21 )
  {
    *(_WORD *)(v6 + 52) = v21;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v21;
  }
  v22 = *((unsigned __int16 *)v11 + 37);
  if ( *(_DWORD *)(v6 + 56) < v22 )
    *(_DWORD *)(v6 + 56) = v22;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v31);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v32);
  v23 = *(_QWORD *)(a1 + 80);
  v28 = *(_QWORD *)(a1 + 48);
  v27 = v23;
  CmpSearchKeyControlBlockTree(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v28 + 32),
    (__int64)&v27,
    v24);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 3, v25, 0LL);
  return 0LL;
}
