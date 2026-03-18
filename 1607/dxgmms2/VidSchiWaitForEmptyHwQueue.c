/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C0068B54
 * Callers:
 *     VidSchiEmptyAllHwQueues @ 0x1C0068AE8 (VidSchiEmptyAllHwQueues.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C00A2734 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForEmptyHwQueue(__int64 a1)
{
  __int64 i; // rbx
  struct _KEVENT *v3; // rsi
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r9
  _DWORD v7[40]; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
  {
    v3 = *(struct _KEVENT **)(a1 + 8 * i + 408);
    memset(v7, 0, sizeof(v7));
    v7[4] = 0;
    v7[8] |= 0x10u;
    v7[5] = 1;
    v7[12] = i;
    v3[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v3 + 10);
    while ( 1 )
    {
      result = (unsigned int)v3[115].Header.Lock;
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v7, 0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
