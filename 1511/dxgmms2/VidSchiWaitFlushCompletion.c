/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C003C6BC
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 *     VidSchFlushContext @ 0x1C003C430 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C003C560 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1840), (_QWORD *)a2, 0LL);
}
