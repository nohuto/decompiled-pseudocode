/*
 * XREFs of CmpCommitDeleteKeyUoW @ 0x1404F3380
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpCommitDeleteKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  ULONG_PTR v5; // rsi
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r9
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_DWORD *)(v2 + 40);
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v6, &v17);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  v9 = v7[4];
  if ( v7[5] + v7[6] )
  {
    v11 = -1073741535;
  }
  else
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v17);
    v11 = CmpFreeKeyByCell(v5, v6, 1, v10);
    if ( v11 < 0 )
      return (unsigned int)v11;
    CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL));
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v9, &v17);
    v8 = (_DWORD *)v12;
    if ( v12 )
    {
      v13 = *a2;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = *(_WORD *)(v12 + 52);
      *(_QWORD *)(v12 + 4) = v13;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v13;
    }
    CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 0LL, 1);
    v14 = *(_QWORD *)(a1 + 48);
    v15 = *(_QWORD *)(v14 + 32);
    *(_DWORD *)(v14 + 4) |= 0x20000u;
    CmpRemoveKeyHash(v15, v14 + 16);
    *(_QWORD *)(v14 + 24) = -1LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = -1;
  }
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v17);
  return (unsigned int)v11;
}
