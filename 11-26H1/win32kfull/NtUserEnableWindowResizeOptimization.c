/*
 * XREFs of NtUserEnableWindowResizeOptimization @ 0x140231CC0
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableWindowResizeOptimization @ 0x140231D1C (GreEnableWindowResizeOptimization.c)
 */

__int64 __fastcall NtUserEnableWindowResizeOptimization(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx

  EnterCrit(0LL, 0LL);
  v6 = (int)GreEnableWindowResizeOptimization(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
