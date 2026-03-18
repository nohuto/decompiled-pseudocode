/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C0088910
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    xxxWindowEvent(a1, (__int64 *)v8, a3, a4, 1);
    v10 = 1;
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v9, v11);
  return v10;
}
