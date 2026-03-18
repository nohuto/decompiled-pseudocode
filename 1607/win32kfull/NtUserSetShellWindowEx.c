/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00ED2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A5B80 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetShellWindow @ 0x1C00ED41C (xxxSetShellWindow.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct tagWND *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v20; // [rsp+70h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v18;
      v18[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( ValidateHWNDND(a2, &v20) )
      {
        if ( PsGetCurrentProcessWin32Process(v10, v9)
          && ((unsigned int)*(_QWORD *)(PsGetCurrentProcessWin32Process(v12, v11) + 824) >= 0x2000 || !gbEnforceUIPI)
          && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL) == PsGetCurrentProcessWin32Process(gbEnforceUIPI, v13) )
        {
          v14 = v20;
          v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v19;
          v19[1] = v14;
          ++*((_DWORD *)v14 + 2);
          v7 = xxxSetShellWindow((struct tagWND *)v8);
          ThreadUnlock1(v16, v15);
        }
        else
        {
          UserSetLastError(5LL);
        }
      }
      ThreadUnlock1(v10, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
