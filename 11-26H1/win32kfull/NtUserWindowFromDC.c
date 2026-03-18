/*
 * XREFs of NtUserWindowFromDC @ 0x14018A570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserWindowFromDC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *i; // rbx
  __int64 v13; // rcx

  EnterSharedCrit(0LL, 1LL);
  GreLockVisRgnShared(v3, v2, v4, v5);
  v6 = 0LL;
  v7 = 0LL;
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968);
  for ( i = *(__int64 **)(v10 + 24); ; i = (__int64 *)*i )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 56968) + 24LL;
    if ( i == (__int64 *)v11 )
      break;
    if ( i[2] == a1 )
    {
      if ( (i[6] & 0x80C01000) == 0x1000 )
        v7 = (__int64 *)i[10];
      break;
    }
  }
  GreUnlockVisRgn(v11);
  if ( v7 )
    v6 = *v7;
  UserSessionSwitchLeaveCrit(v13);
  return v6;
}
