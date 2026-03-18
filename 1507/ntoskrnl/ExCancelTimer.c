/*
 * XREFs of ExCancelTimer @ 0x140158CD4
 * Callers:
 *     <none>
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1400F4AB0 (ExpCheckForFreedEnhancedTimer.c)
 */

char __fastcall ExCancelTimer(ULONG_PTR a1)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1);
}
