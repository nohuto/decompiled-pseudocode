/*
 * XREFs of CmpCommitRecreateKeyUoW @ 0x140664354
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitRecreateKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 72);
  v7 = *(_QWORD *)(v2 + 32);
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(v6 + 40), &v11);
  if ( v8 )
  {
    if ( HvpMarkCellDirty(v7, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 0, 0LL) )
    {
      v9 = *a2;
      *(_QWORD *)(v8 + 4) = *a2;
      *(_QWORD *)(v6 + 168) = v9;
      CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 0LL, 1);
    }
    else
    {
      v5 = -1073741443;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
