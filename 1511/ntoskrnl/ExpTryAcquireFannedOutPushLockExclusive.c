/*
 * XREFs of ExpTryAcquireFannedOutPushLockExclusive @ 0x1402139BC
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14012DB9C (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaDecodeHandleForIndex @ 0x14012CDD8 (ExSaDecodeHandleForIndex.c)
 */

char __fastcall ExpTryAcquireFannedOutPushLockExclusive(unsigned __int64 a1)
{
  char v2; // di
  ULONG MaximumProcessorCount; // esi
  unsigned int v4; // ebx
  volatile signed __int64 *v6; // rax

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( !MaximumProcessorCount )
    return 1;
  while ( !_interlockedbittestandset64((volatile signed __int32 *)ExSaDecodeHandleForIndex(a1, v4), 0LL) )
  {
    if ( ++v4 >= MaximumProcessorCount )
      return 1;
  }
  for ( ; v4; --v4 )
  {
    v6 = (volatile signed __int64 *)ExSaDecodeHandleForIndex(a1, v4 - 1);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
  }
  return v2;
}
