/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C00413E0
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C00243B8 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiFlushPendingFlips @ 0x1C0040310 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C00424F0 (VidSchFlushContext.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent();
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1872), (_QWORD *)a2, 0LL);
}
