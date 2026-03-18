/*
 * XREFs of NtUserSetMenu @ 0x1C014B950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetMenu @ 0x1C014BA60 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v15;
      v15[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( !a2 )
      {
        v9 = 0LL;
LABEL_5:
        v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v16;
        v16[1] = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v7 = xxxSetMenu(v8);
        ThreadUnlock1(v11, v10);
        goto LABEL_8;
      }
      v14 = ValidateHmenu(a2);
      v9 = v14;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 40) & 1) == 0 )
          goto LABEL_5;
        UserSetLastError(87LL);
      }
LABEL_8:
      ThreadUnlock1(v12, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
