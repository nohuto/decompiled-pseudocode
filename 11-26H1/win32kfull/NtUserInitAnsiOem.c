/*
 * XREFs of NtUserInitAnsiOem @ 0x1402B65C0
 * Callers:
 *     <none>
 * Callees:
 *     InitAnsiOem @ 0x1402A2A04 (InitAnsiOem.c)
 */

__int64 __fastcall NtUserInitAnsiOem(volatile void *a1, volatile void *a2)
{
  __int64 inited; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  inited = (int)InitAnsiOem(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return inited;
}
