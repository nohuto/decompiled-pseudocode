/*
 * XREFs of PopFxWorkOrderWatchdog @ 0x140204518
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

void __fastcall __noreturn PopFxWorkOrderWatchdog(__int64 a1, ULONG_PTR a2)
{
  PopFxBugCheck(0x618uLL, a2, 0LL, 0LL);
}
