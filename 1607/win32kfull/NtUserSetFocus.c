/*
 * XREFs of NtUserSetFocus @ 0x1C00A8F20
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0LL;
  }
  v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v10;
  v10[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v6 = (__int64 *)xxxSetFocus((struct tagWND *)v5, 0LL);
  if ( v6 )
    v2 = *v6;
  ThreadUnlock1(v8, v7);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
