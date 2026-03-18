/*
 * XREFs of VerifierKeInitializeTimer @ 0x1406C6044
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeInitializeTimer(ULONG_PTR a1)
{
  return VerifierKeInitializeTimerEx(a1, NotificationTimer);
}
