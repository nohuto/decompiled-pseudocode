/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C0113690
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  unsigned int updated; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  updated = xxxUpdatePerUserSystemParameters(a1);
  UserSessionSwitchLeaveCrit(v4, v3);
  return updated;
}
