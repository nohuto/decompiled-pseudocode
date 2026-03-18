/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C0005278
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 328) && g_TdrForceTimeout )
    return TdrIsTimeoutForcedFlip();
  return v1;
}
