/*
 * XREFs of NtUserCreateInputContext @ 0x1C0211460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CreateInputContext @ 0x1C010AC80 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *InputContext; // rax

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v6 = 0LL;
    if ( a1 )
    {
      InputContext = (__int64 *)CreateInputContext(a1, gpsi, v2, v3);
      if ( InputContext )
        v6 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(120LL);
    v6 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
