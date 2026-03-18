/*
 * XREFs of xxxClearWakeMask @ 0x1C00C4A00
 * Callers:
 *     <none>
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C0117490 (xxxHandleHealthyThread.c)
 */

__int64 xxxClearWakeMask()
{
  unsigned __int64 v0; // rsi
  __int64 result; // rax

  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 408LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(gptiCurrent + 1024LL) )
  {
    v0 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v0 )
      LODWORD(v0) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1024LL) = v0;
    if ( *(int *)(gptiCurrent + 448LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x80000000;
  }
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = 0;
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x400u;
  return result;
}
