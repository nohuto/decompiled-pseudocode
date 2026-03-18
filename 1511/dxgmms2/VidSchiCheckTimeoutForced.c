/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000B870
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 336) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
