/*
 * XREFs of CmpCommitAddKeyUoW @ 0x1404F2A54
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpCommitAddKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // r14
  int v6; // ebx
  ULONG_PTR v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r14
  ULONG_PTR v12; // rdx
  __int64 v13; // rdx
  unsigned __int16 v14; // dx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v20 = -1;
  v19 = -1;
  v5 = *(int *)(a1 + 72);
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 32);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(v2 + 72) + 32LL) + 8LL))(
         *(_QWORD *)(*(_QWORD *)(v2 + 72) + 32LL),
         *(unsigned int *)(*(_QWORD *)(v2 + 72) + 40LL),
         &v20);
  if ( !v8 )
    return 3221225626LL;
  if ( !HvpMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1, 0LL)
    || !HvpMarkCellDirty(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 32LL),
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          1,
          0LL)
    || !HvpMarkCellDirty(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 32LL),
          *(unsigned int *)(v8 + 4 * v5 + 28),
          1,
          0LL) )
  {
    return 3221225853LL;
  }
  v9 = CmpCopyKeyPartial(
         v7,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         v7,
         *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
         38);
  if ( v9 == -1 )
    return 3221225626LL;
  if ( (unsigned __int8)CmpAddSubKeyEx(v7) )
  {
    v10 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v10 + 40);
    *(_DWORD *)(v10 + 40) = v9;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v9, &v19);
    v12 = *(unsigned int *)(v11 + 44);
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
    CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), v12, 0LL, 0LL, 0);
    v13 = *a2;
    *(_QWORD *)(v8 + 4) = *a2;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v13;
    v14 = *(_WORD *)(v11 + 72);
    if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
      v14 *= 2;
    if ( (unsigned __int16)*(_DWORD *)(v8 + 52) < (unsigned int)v14 )
    {
      *(_WORD *)(v8 + 52) = v14;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v14;
    }
    v15 = *(unsigned __int16 *)(v11 + 74);
    if ( *(_DWORD *)(v8 + 56) < v15 )
      *(_DWORD *)(v8 + 56) = v15;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v19);
  }
  else
  {
    v6 = -1073741670;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 32LL);
  (*(void (__fastcall **)(__int64, int *))(v16 + 16))(v16, &v20);
  if ( v6 < 0 )
    CmpFreeKeyByCell(v7, v9, 0, v17);
  return (unsigned int)v6;
}
