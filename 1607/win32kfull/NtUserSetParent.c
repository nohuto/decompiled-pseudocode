/*
 * XREFs of NtUserSetParent @ 0x1C01203B0
 * Callers:
 *     <none>
 * Callees:
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 MessageWindow; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( a2 )
      {
        if ( a2 != -3 )
        {
          v9 = ValidateHwnd(a2);
          if ( !v9 )
          {
LABEL_11:
            ThreadUnlock1(v10, v9);
            goto LABEL_12;
          }
LABEL_6:
          v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v17;
          v17[1] = v9;
          if ( v9 )
            ++*(_DWORD *)(v9 + 8);
          v11 = (__int64 *)xxxSetParentWorker(v8, v9, 0LL);
          if ( v11 )
            v7 = *v11;
          ThreadUnlock1(v13, v12);
          goto LABEL_11;
        }
        MessageWindow = GetMessageWindow(v4);
      }
      else
      {
        MessageWindow = GetDesktopWindow(v4);
      }
      v9 = MessageWindow;
      goto LABEL_6;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
