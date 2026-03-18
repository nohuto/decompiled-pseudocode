/*
 * XREFs of NtUserShowCaret @ 0x1C00AB950
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowCaret @ 0x1C00AB9A4 (zzzShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
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
    v2 = zzzShowCaret(v3);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
