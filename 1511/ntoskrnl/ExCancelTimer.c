/*
 * XREFs of ExCancelTimer @ 0x1400C50FC
 * Callers:
 *     <none>
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1400C5320 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
