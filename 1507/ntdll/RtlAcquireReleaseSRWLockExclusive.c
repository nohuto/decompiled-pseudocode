/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x18006C900
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x18006C810 (RtlpHpSegLfhExtendContext.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
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
