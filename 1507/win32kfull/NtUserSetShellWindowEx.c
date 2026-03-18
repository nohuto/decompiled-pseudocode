/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C01497F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0085A44 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 *     CheckAccessForIntegrityLevel @ 0x1C01D1234 (CheckAccessForIntegrityLevel.c)
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
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  struct tagWND *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[6]; // [rsp+38h] [rbp-30h] BYREF
  struct tagWND *v20; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v18;
      v18[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( ValidateHWNDND(a2, &v20) )
      {
        if ( PsGetCurrentProcessWin32Process(v10)
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11),
              (unsigned int)CheckAccessForIntegrityLevel(
                              *(_QWORD *)(CurrentProcessWin32Process + 832),
                              0xFFFFFFFF00002000uLL))
          && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL) == PsGetCurrentProcessWin32Process(v13) )
        {
          v14 = v20;
          v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v19;
          v19[1] = v14;
          ++*((_DWORD *)v14 + 2);
          v7 = xxxSetShellWindow((struct tagWND *)v8);
          ThreadUnlock1(v16, v15);
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
