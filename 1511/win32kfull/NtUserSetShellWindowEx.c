/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00D4C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C007576C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetShellWindow @ 0x1C00D49B4 (xxxSetShellWindow.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct tagWND *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v18; // [rsp+70h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( ValidateHWNDND(a2, &v18) )
      {
        if ( PsGetCurrentProcessWin32Process(v10)
          && ((unsigned int)*(_QWORD *)(PsGetCurrentProcessWin32Process(v11) + 832) >= 0x2000 || !gbEnforceUIPI)
          && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL) == PsGetCurrentProcessWin32Process(gbEnforceUIPI) )
        {
          v12 = v18;
          v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v17;
          v17[1] = v12;
          ++*((_DWORD *)v12 + 2);
          v7 = xxxSetShellWindow(v8, (__int64)v12);
          ThreadUnlock1(v14, v13);
        }
        else
        {
          UserSetLastError(5);
        }
      }
      ThreadUnlock1(v10, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
