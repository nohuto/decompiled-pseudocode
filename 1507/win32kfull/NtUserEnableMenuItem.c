/*
 * XREFs of NtUserEnableMenuItem @ 0x1C0107C70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C0108034 (xxxEnableMenuItem.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_6:
    v9 = -1;
    goto LABEL_5;
  }
  v6 = ValidateHmenu(a1);
  if ( !v6 || (*(_DWORD *)(v6 + 40) & 0x40) != 0 )
    goto LABEL_6;
  v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v13;
  v13[1] = v6;
  ++*(_DWORD *)(v6 + 8);
  v9 = xxxEnableMenuItem(v6, a2, a3);
  ThreadUnlock1(v11, v10);
LABEL_5:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
