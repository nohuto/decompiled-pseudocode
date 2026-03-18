/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x14023F8B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rbx
  __int64 updated; // rbx
  __int64 v4; // rcx
  unsigned __int8 v6[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // [rsp+38h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  v6[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x20u, 0, &v7, v6);
  v2 = v7;
  EnterCrit(0LL, 0LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, v2);
  UserSessionSwitchLeaveCrit(v4);
  if ( v6[0] )
    DisplayScenarioContextDissociate(&v7);
  return updated;
}
