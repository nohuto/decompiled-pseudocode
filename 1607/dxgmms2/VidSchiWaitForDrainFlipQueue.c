/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C0068A24
 * Callers:
 *     VidSchiSuspend @ 0x1C00689A8 (VidSchiSuspend.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C00129E8 (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(struct _KEVENT *a1)
{
  char result; // al
  __int64 v3; // r9
  __int64 v4; // r9
  _DWORD v5[42]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v5, 0, 0xA0uLL);
  v5[4] = 3;
  v5[5] = 1;
  a1[73].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeResetEvent(a1 + 72);
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending((__int64)a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, v3, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent((__int64)a1, (__int64)v5, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
