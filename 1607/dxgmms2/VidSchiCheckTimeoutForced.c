/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000A310
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 368) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
