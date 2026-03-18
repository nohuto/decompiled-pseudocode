/*
 * XREFs of NtUserSetActiveWindow @ 0x1C00FCDB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetActiveWindow @ 0x1C00FCE40 (xxxSetActiveWindow.c)
 */

__int64 __fastcall NtUserSetActiveWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *active; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_8;
  }
  else
  {
    v3 = 0LL;
  }
  v9[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v9;
  v9[1] = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  active = (__int64 *)xxxSetActiveWindow(v3);
  if ( active )
    v2 = *active;
  ThreadUnlock1(v7, v6);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
