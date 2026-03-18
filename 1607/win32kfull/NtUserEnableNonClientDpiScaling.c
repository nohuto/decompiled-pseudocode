/*
 * XREFs of NtUserEnableNonClientDpiScaling @ 0x1C02121D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableNonClientDpiScaling @ 0x1C01DD334 (xxxEnableNonClientDpiScaling.c)
 */

__int64 __fastcall NtUserEnableNonClientDpiScaling(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v9;
    v9[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    v4 = xxxEnableNonClientDpiScaling((struct tagWND *)v2);
    ThreadUnlock1(v7, v6);
  }
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
