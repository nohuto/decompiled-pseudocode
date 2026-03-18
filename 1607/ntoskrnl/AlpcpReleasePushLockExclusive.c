/*
 * XREFs of AlpcpReleasePushLockExclusive @ 0x140654768
 * Callers:
 *     AlpcAddHandleTableEntry @ 0x14040BE50 (AlpcAddHandleTableEntry.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
