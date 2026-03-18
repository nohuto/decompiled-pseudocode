/*
 * XREFs of NtUserPrintWindow @ 0x1C0218650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      if ( (a3 & 3) == a3 )
        v9 = xxxPrintWindow((struct tagWND *)v6, a2, a3);
      else
        UserSetLastError(87LL);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
