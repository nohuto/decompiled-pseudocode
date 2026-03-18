/*
 * XREFs of VerifierKeInitializeTimer @ 0x140748350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeInitializeTimer(ULONG_PTR a1)
{
  return VerifierKeInitializeTimerEx(a1, NotificationTimer);
}
