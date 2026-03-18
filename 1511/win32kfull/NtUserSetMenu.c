/*
 * XREFs of NtUserSetMenu @ 0x1C01433E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetMenu @ 0x1C01434F4 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct tagWND *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
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
      if ( a2 )
      {
        v9 = ValidateHmenu(a2);
        v11 = v9;
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 40) & 1) == 0 )
          {
LABEL_6:
            v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v16;
            v16[1] = v11;
            if ( v11 )
              ++*(_DWORD *)(v11 + 8);
            v7 = xxxSetMenu(v8);
            ThreadUnlock1(v13, v12);
            goto LABEL_9;
          }
          UserSetLastError(87);
        }
LABEL_9:
        ThreadUnlock1(v10, v11);
        goto LABEL_10;
      }
      v11 = 0LL;
      goto LABEL_6;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
