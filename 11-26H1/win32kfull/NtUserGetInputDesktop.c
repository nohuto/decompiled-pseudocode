/*
 * XREFs of NtUserGetInputDesktop @ 0x1402B3A00
 * Callers:
 *     <none>
 * Callees:
 *     _GetInputDesktop @ 0x1402A5218 (_GetInputDesktop.c)
 */

__int64 NtUserGetInputDesktop()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 InputDesktop; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  InputDesktop = GetInputDesktop(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return InputDesktop;
}
