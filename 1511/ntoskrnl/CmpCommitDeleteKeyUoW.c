/*
 * XREFs of CmpCommitDeleteKeyUoW @ 0x1403B4CF0
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpCommitDeleteKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  ULONG_PTR v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 32);
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(v2 + 40), &v16);
  v7 = v6;
  if ( !v6 )
    return (unsigned int)-1073741670;
  v8 = v6[4];
  if ( v6[5] + v6[6] )
  {
    v9 = -1073741535;
  }
  else
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v16);
    v9 = CmpFreeKeyByCell(v5);
    if ( v9 < 0 )
      return (unsigned int)v9;
    CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL));
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v8, &v16);
    v7 = (_DWORD *)v10;
    if ( v10 )
    {
      v12 = *a2;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = *(_WORD *)(v10 + 52);
      *(_QWORD *)(v10 + 4) = v12;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v12;
    }
    LOBYTE(v11) = 1;
    CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 0LL, v11);
    v13 = *(_QWORD *)(a1 + 48);
    v14 = *(_QWORD *)(v13 + 32);
    *(_DWORD *)(v13 + 4) |= 0x20000u;
    CmpRemoveKeyHash(v14, v13 + 16);
    *(_QWORD *)(v13 + 24) = -1LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = -1;
  }
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v16);
  return (unsigned int)v9;
}
