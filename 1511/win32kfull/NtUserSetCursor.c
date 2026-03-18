/*
 * XREFs of NtUserSetCursor @ 0x1C0073910
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     zzzSetCursor @ 0x1C0070694 (zzzSetCursor.c)
 */

__int64 __fastcall NtUserSetCursor(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = HMValidateHandle(a1, 3);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0LL;
  }
  v6 = (__int64 *)zzzSetCursor(v3);
  if ( v6 )
    v2 = *v6;
LABEL_5:
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
