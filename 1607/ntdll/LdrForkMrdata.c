/*
 * XREFs of LdrForkMrdata @ 0x1800D2F3C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D4090 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  }
}
