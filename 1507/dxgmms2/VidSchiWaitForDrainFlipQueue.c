/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C007791C
 * Callers:
 *     VidSchiSuspend @ 0x1C00777C0 (VidSchiSuspend.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C00052AC (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // r9
  char result; // al
  __int64 v4; // r9
  _DWORD v5[40]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[4] = 3;
  v5[5] = 1;
  *((_QWORD *)a1 + 223) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)((char *)a1 + 1744));
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending((__int64)a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent(a1);
    VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, v2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
