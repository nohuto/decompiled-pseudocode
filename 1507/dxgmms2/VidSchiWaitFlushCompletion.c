/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C0077804
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchFlushContext @ 0x1C002F270 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchRegisterCompletionEvent @ 0x1C0078B5C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)a1 + 236, (_QWORD *)a2, 0LL);
}
