/*
 * XREFs of NtUserCreateInputContext @ 0x1C02187B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00EB0D0 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *InputContext; // rax

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = 0LL;
    if ( a1 )
    {
      InputContext = (__int64 *)CreateInputContext(a1);
      if ( InputContext )
        v4 = *InputContext;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(120);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
