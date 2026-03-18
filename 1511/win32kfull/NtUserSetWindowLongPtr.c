/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C00578A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowLongPtr @ 0x1C0057954 (xxxSetWindowLongPtr.c)
 */

__int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwndEx(a1, 1LL, 1LL);
  v11 = 0LL;
  if ( v8 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v11 = xxxSetWindowLongPtr(v8, a2, a3, a4, 1);
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
