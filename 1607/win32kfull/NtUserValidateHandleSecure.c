/*
 * XREFs of NtUserValidateHandleSecure @ 0x1C021BFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserValidateHandleSecure(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx

  EnterCrit(0LL, 1LL);
  v3 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v4 = ValidateHandleSecure(a1, 3LL);
  else
    v4 = 0;
  UserSessionSwitchLeaveCrit(v2, v3);
  return v4;
}
