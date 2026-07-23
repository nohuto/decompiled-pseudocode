/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x180077500
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180077410 (RtlpHpSegLfhExtendContext.c)
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D4090 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __cdecl RtlAcquireReleaseSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  if ( (SRWLock->Value & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
    RtlReleaseSRWLockExclusive(SRWLock);
  }
}
