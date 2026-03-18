/*
 * XREFs of NtUserMinMaximize @ 0x1C0217FF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v14[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      v10 = (__int64 *)xxxMinMaximizeEx((struct tagWND *)v6, a2, (a3 != 0) | gdwPUDFlags & 0x10000u, 0LL, 0LL);
      if ( v10 )
        v9 = *v10;
      ThreadUnlock1(v12, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
