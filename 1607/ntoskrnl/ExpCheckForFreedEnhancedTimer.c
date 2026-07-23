/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400F7B2C
 * Callers:
 *     ExCancelTimer @ 0x1400F749C (ExCancelTimer.c)
 *     ExSetTimer @ 0x1400F7AB0 (ExSetTimer.c)
 *     ExDeleteTimer @ 0x140130FE8 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
