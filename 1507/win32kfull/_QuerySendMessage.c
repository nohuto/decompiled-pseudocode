/*
 * XREFs of _QuerySendMessage @ 0x1C01ECDA4
 * Callers:
 *     NtUserQuerySendMessage @ 0x1C021EE50 (NtUserQuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01E1054 (TranslateSentPointerMessageForClient.c)
 */

_BOOL8 __fastcall QuerySendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // r9d
  unsigned __int64 *v8; // r10
  unsigned __int64 *v9; // r11

  v2 = *(_QWORD *)(a1 + 472);
  if ( !v2 )
    return 0LL;
  v4 = *(_QWORD **)(v2 + 112);
  if ( v4 )
    v4 = (_QWORD *)*v4;
  *(_QWORD *)a2 = v4;
  v5 = *(unsigned int *)(v2 + 104);
  *(_DWORD *)(a2 + 8) = v5;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(v2 + 96);
  v6 = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 32) = v6;
  if ( !(unsigned int)IsPointerInputMessageWithState((unsigned int)v5, a2, v2, v5) && (v7 != 528 || *(_WORD *)v8 != 582) )
    return 1LL;
  return TranslateSentPointerMessageForClient(v7, v8, v9);
}
