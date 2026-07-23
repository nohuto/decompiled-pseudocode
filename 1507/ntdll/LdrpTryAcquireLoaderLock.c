/*
 * XREFs of LdrpTryAcquireLoaderLock @ 0x180008804
 * Callers:
 *     LdrLockLoaderLock @ 0x1800086A0 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x180008880 (RtlTryEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

char LdrpTryAcquireLoaderLock()
{
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5248, -1, -1, -1, 0LL);
  if ( RtlTryEnterCriticalSection(&LdrpLoaderLock) )
  {
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      LdrpLogEtwEvent(5249, -1, -1, -1, 0LL);
    return 1;
  }
  else
  {
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      LdrpLogEtwEvent(5250, -1, -1, -1, 0LL);
    return 0;
  }
}
