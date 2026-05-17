/*
 * XREFs of LdrForkMrdata @ 0x1800C143C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1, char *a2, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, a2, a3, a4);
  }
}
