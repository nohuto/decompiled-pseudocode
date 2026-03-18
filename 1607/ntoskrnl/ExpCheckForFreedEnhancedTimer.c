/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400F9DA0
 * Callers:
 *     ExCancelTimer @ 0x1400F965C (ExCancelTimer.c)
 *     ExSetTimer @ 0x1400F9D24 (ExSetTimer.c)
 *     ExDeleteTimer @ 0x140130A78 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
