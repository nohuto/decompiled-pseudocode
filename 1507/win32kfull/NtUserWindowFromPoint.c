/*
 * XREFs of NtUserWindowFromPoint @ 0x1C00E40F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C00E4128 (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(1LL);
  v1 = (__int64 *)xxxWindowFromPoint(a1);
  v4 = 0LL;
  if ( v1 )
    v4 = *v1;
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
