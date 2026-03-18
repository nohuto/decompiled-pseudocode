/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C00779E4
 * Callers:
 *     VidSchiEmptyAllHwQueues @ 0x1C0076880 (VidSchiEmptyAllHwQueues.c)
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C007AA48 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForEmptyHwQueue(struct _VIDSCH_GLOBAL *a1)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 result; // rax
  _DWORD v7[40]; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 14); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)a1 + i + 46);
    memset(v7, 0, sizeof(v7));
    v7[4] = 0;
    v7[8] |= 0x20u;
    v7[5] = 1;
    v7[12] = i;
    *(_QWORD *)(v3 + 208) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v3 + 168));
    while ( 1 )
    {
      result = *(unsigned int *)(v3 + 2848);
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1);
      VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, v5, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
