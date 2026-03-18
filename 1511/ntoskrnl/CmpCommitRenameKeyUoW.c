/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x1405EBE70
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 *     CmpUpdateParentForEachSon @ 0x1405E457C (CmpUpdateParentForEachSon.c)
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
  unsigned int Cell; // eax
  _DWORD *v11; // r14
  unsigned int v12; // r12d
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int16 v18; // dx
  unsigned int v19; // eax
  __int64 v20; // rax
  char v21; // r8
  void *v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-18h]
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp+50h]
  int v27; // [rsp+B0h] [rbp+58h] BYREF
  int v28; // [rsp+B8h] [rbp+60h] BYREF

  v26 = a2;
  v2 = *(_DWORD *)(a1 + 72);
  v22 = 0LL;
  v27 = -1;
  v28 = -1;
  v25 = -1;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(v4 + 72) + 40LL),
         &v28);
  if ( !v6 )
    return (unsigned int)-1073741670;
  if ( !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1)
    || !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1)
    || !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 80) + 40LL), 1)
    || !CmpMarkIndexDirty(
          v5,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 80) + 40LL)) )
  {
    v7 = -1073741443;
LABEL_21:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v28);
    return v7;
  }
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         &v25);
  v9 = (const void *)v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_21;
  }
  Cell = HvAllocateCell(v5, -4 - *(_DWORD *)(v8 - 4), v2, (__int64)&v22, (__int64)&v27);
  v11 = v22;
  v12 = Cell;
  if ( Cell == -1 )
  {
    v7 = -1073741443;
    goto LABEL_17;
  }
  memmove(v22, v9, -4 - *((_DWORD *)v9 - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v25);
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
      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v27);
      CmpFreeKeyByCell(v5, v12, 0);
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
      (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v25);
    goto LABEL_19;
  }
  HvFreeCell(v5, *(unsigned int *)(*(_QWORD *)(a1 + 80) + 40LL));
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 80), 0LL, 1);
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 40LL) = -1;
  v14 = *(_QWORD *)(a1 + 80);
  v15 = *(_QWORD *)(v14 + 32);
  *(_DWORD *)(v14 + 4) |= 0x20000u;
  CmpRemoveKeyHash(v15, (_DWORD *)(v14 + 16));
  *(_QWORD *)(v14 + 24) = -1LL;
  v16 = *(_QWORD *)(a1 + 48);
  v17 = *v26;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(v16 + 40);
  *(_DWORD *)(v16 + 40) = v12;
  v11[4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  *(_QWORD *)(v6 + 4) = v17;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v17;
  v18 = *((_WORD *)v11 + 36);
  if ( (*((_BYTE *)v11 + 2) & 0x20) != 0 )
    v18 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v6 + 52) < (unsigned int)v18 )
  {
    *(_WORD *)(v6 + 52) = v18;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v18;
  }
  v19 = *((unsigned __int16 *)v11 + 37);
  if ( *(_DWORD *)(v6 + 56) < v19 )
    *(_DWORD *)(v6 + 56) = v19;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v27);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v28);
  v20 = *(_QWORD *)(a1 + 80);
  v24 = *(_QWORD *)(a1 + 48);
  v23 = v20;
  CmpSearchKeyControlBlockTree(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v24 + 32),
    (__int64)&v23);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 3, v21, 0LL);
  return 0LL;
}
