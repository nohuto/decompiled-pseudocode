/*
 * XREFs of NtUserSetCapture @ 0x1C00F8E30
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetCapture @ 0x1C00F8EC0 (xxxSetCapture.c)
 */

__int64 __fastcall NtUserSetCapture(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rax
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
  v5 = (__int64 *)xxxSetCapture(v3);
  if ( v5 )
    v2 = *v5;
  ThreadUnlock1(v7, v6);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
