/*
 * XREFs of NtUserShowWindow @ 0x1C00819B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v11;
      v11[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( a2 > 0xB || *(char *)(v4 + 44) < 0 )
        UserSetLastError(87);
      else
        v7 = xxxShowWindow((struct tagWND *)v4);
      ThreadUnlock1(v9, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
