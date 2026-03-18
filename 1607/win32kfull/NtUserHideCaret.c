/*
 * XREFs of NtUserHideCaret @ 0x1C00AB8D0
 * Callers:
 *     <none>
 * Callees:
 *     zzzHideCaret @ 0x1C00AB924 (zzzHideCaret.c)
 */

__int64 __fastcall NtUserHideCaret(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = zzzHideCaret(v3);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
