/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C0061938
 * Callers:
 *     VidSchiSuspend @ 0x1C006186C (VidSchiSuspend.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C0014D68 (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(__int64 a1)
{
  __int64 v2; // r9
  char result; // al
  __int64 v4; // r9
  _DWORD v5[42]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v5, 0, 0xA0uLL);
  v5[4] = 3;
  v5[5] = 1;
  *(_QWORD *)(a1 + 1736) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(a1 + 1696));
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending(a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent(a1, (__int64)v5, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, a1, 0LL, v2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
