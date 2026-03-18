/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C0216520
 * Callers:
 *     <none>
 * Callees:
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct tagWND *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v6;
  if ( v6 && (((*(_WORD *)(v6 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( PsGetCurrentProcessWin32Process(gptiCurrent, v7) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL) )
    {
      if ( !a2 || (v5 = (struct tagWND *)ValidateHwnd(a2)) != 0LL )
        v2 = xxxInheritWindowMonitor(v9, v5, 1, 1);
    }
    else
    {
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v2;
}
