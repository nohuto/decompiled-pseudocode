/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400C5320
 * Callers:
 *     ExCancelTimer @ 0x1400C50FC (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x140125D40 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
