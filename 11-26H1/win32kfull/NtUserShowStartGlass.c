/*
 * XREFs of NtUserShowStartGlass @ 0x1402BFFE0
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowStartGlass @ 0x1402A76B8 (zzzShowStartGlass.c)
 */

__int64 __fastcall NtUserShowStartGlass(unsigned int a1)
{
  __int64 started; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  started = (int)zzzShowStartGlass(a1);
  UserSessionSwitchLeaveCrit(v3);
  return started;
}
