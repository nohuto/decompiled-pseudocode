/*
 * XREFs of LdrpTryAcquireLoaderLock @ 0x18004E7A4
 * Callers:
 *     LdrLockLoaderLock @ 0x18004E640 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x18004E820 (RtlTryEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

char LdrpTryAcquireLoaderLock()
{
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5248, -1, -1, -1, 0LL, 0LL);
  if ( (unsigned int)RtlTryEnterCriticalSection(&LdrpLoaderLock) )
  {
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      LdrpLogEtwEvent(5249, -1, -1, -1, 0LL, 0LL);
    return 1;
  }
  else
  {
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      LdrpLogEtwEvent(5250, -1, -1, -1, 0LL, 0LL);
    return 0;
  }
}
