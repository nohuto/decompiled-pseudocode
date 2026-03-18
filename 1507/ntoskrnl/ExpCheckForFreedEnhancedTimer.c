/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400F4AB0
 * Callers:
 *     ExSetTimer @ 0x1400F4ACC (ExSetTimer.c)
 *     ExCancelTimer @ 0x140158CD4 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x140159520 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
